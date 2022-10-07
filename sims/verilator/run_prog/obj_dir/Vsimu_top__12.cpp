// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimu_top.h for the primary calling header

#include "Vsimu_top.h"
#include "Vsimu_top__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vsimu_top::_sequent__TOP__27(Vsimu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top::_sequent__TOP__27\n"); );
    Vsimu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029 
        = ((0x3dffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029)) 
           | (0x200U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__SecSig) 
                          << 9U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02845__029) 
                                     << 3U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02845__029) 
                                               << 4U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02845__029) 
                            << 3U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02845__029) 
                                      << 4U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029 
        = ((0x3bffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029)) 
           | (0x400U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__SecSig) 
                          << 7U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__SecSig) 
                                     << 8U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__SecSig) 
                                               << 9U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__SecSig) 
                            << 8U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__SecSig) 
                                      << 9U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__ThiSig 
        = ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__ThiSig)) 
           | (1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__SecSig)) 
                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02845__029) 
                              >> 6U))) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02845__029) 
                                          >> 5U)) | 
                      (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__SecSig)) 
                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02845__029) 
                           >> 6U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02845__029) 
                                         >> 5U)))) 
                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__SecSig) 
                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02845__029) 
                               >> 6U))) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02845__029) 
                                              >> 5U)))) 
                    | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__SecSig) 
                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02845__029) 
                           >> 6U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02845__029) 
                                      >> 5U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__ThiSig 
        = ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__ThiSig)) 
           | (2U & ((((0xfffffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__SecSig) 
                                            >> 3U)) 
                                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__SecSig) 
                                              >> 2U))) 
                                       << 1U) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__SecSig))) 
                      | (0x7ffffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__SecSig) 
                                              >> 3U)) 
                                          << 1U) & 
                                         ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__SecSig) 
                                          >> 1U)) & 
                                        ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__SecSig) 
                                             >> 1U)) 
                                         << 1U)))) 
                     | (0x3ffffffeU & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__SecSig) 
                                         >> 2U) & (
                                                   (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__SecSig) 
                                                     >> 2U)) 
                                                   << 1U)) 
                                       & ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__SecSig) 
                                              >> 1U)) 
                                          << 1U)))) 
                    | (0x3ffffffeU & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__SecSig) 
                                        >> 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__SecSig) 
                                                  >> 1U)) 
                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__SecSig))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029 
        = ((0x2fffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029)) 
           | (0x1000U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__ThiSig) 
                           << 0xbU) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__ThiSig) 
                                        << 0xcU) | 
                                       (0xfffff000U 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02845__029) 
                                           << 2U)))) 
                         | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__ThiSig) 
                             << 0xcU) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02845__029) 
                                         << 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__ForSig 
        = ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__ForSig)) 
           | (2U & ((((0x7ffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__ThiSig) 
                                          >> 1U)) & 
                                      (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__ThiSig))) 
                                     << 1U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02845__029) 
                                               >> 9U))) 
                      | ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__ThiSig) 
                               >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__ThiSig)) 
                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02845__029) 
                                >> 0xaU))) << 1U)) 
                     | (0xfffffffeU & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__ThiSig) 
                                        & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__ThiSig)) 
                                           << 1U)) 
                                       & ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02845__029) 
                                              >> 0xaU)) 
                                          << 1U)))) 
                    | (0x7ffffeU & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__ThiSig) 
                                     & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__ThiSig) 
                                        << 1U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02845__029) 
                                                   >> 9U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__FifSig 
        = (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__ForSig) 
                         >> 1U)) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__ForSig))) 
                    & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02845__029) 
                       >> 0xbU)) | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__ForSig) 
                                         >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__ForSig)) 
                                    & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02845__029) 
                                          >> 0xbU)))) 
                  | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__ForSig) 
                       >> 1U) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__ForSig))) 
                     & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02845__029) 
                           >> 0xbU)))) | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__ForSig) 
                                            >> 1U) 
                                           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__ForSig)) 
                                          & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02845__029) 
                                             >> 0xbU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029 
        = ((0x1fffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029)) 
           | (0x2000U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__ForSig) 
                           << 0xcU) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__ForSig) 
                                        << 0xdU) | 
                                       (0xffffe000U 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02845__029) 
                                           << 2U)))) 
                         | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__ForSig) 
                             << 0xdU) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02845__029) 
                                         << 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut 
        = ((0xffffdfffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut) 
           | ((QData)((IData)((1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__FifSig)) 
                                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02845__029) 
                                               >> 0xdU))) 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02845__029) 
                                           >> 0xcU)) 
                                       | (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__FifSig)) 
                                           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02845__029) 
                                              >> 0xdU)) 
                                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02845__029) 
                                                >> 0xcU)))) 
                                      | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__FifSig) 
                                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02845__029) 
                                                >> 0xdU))) 
                                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02845__029) 
                                               >> 0xcU)))) 
                                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__FifSig) 
                                         & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02845__029) 
                                            >> 0xdU)) 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02845__029) 
                                           >> 0xcU)))))) 
              << 0x2dU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut 
        = ((0xffffdfffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__FifSig) 
                                      & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02845__029) 
                                          >> 0xdU) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02845__029) 
                                            >> 0xcU))) 
                                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02845__029) 
                                         >> 0xdU) & 
                                        ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02845__029) 
                                         >> 0xcU)))))) 
              << 0x2dU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029 
        = ((0x3fdfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029)) 
           | (0x20U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                         << 3U) & ((0xffffffe0U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                                                   << 4U)) 
                                   | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                                      << 5U))) | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                                                   << 4U) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                                                     << 5U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029 
        = ((0x3fbfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029)) 
           | (0x40U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__46__KET____DOT__bi__InData 
                         << 6U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                                    << 2U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                                              << 3U))) 
                       | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                           << 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                                     << 3U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029 
        = ((0x37ffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029)) 
           | (0x800U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                          << 2U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                                     << 3U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                                               << 4U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                            << 3U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                                      << 4U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__ForSig 
        = ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__ForSig)) 
           | (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                            >> 9U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                                          >> 8U))) 
                       & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                          >> 7U)) | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                                          >> 9U)) & 
                                      ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                                       >> 8U)) & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                                                   >> 7U)))) 
                     | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                          >> 9U) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                                       >> 8U))) & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                                                    >> 7U)))) 
                    | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                         >> 9U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                                   >> 8U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                                              >> 7U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__SecSig 
        = ((0xeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__SecSig)) 
           | (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                            >> 2U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                                          >> 1U))) 
                       & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029)) 
                      | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                              >> 2U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                                         >> 1U)) & 
                         (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029)))) 
                     | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                          >> 2U) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                                       >> 1U))) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029)))) 
                    | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                         >> 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                                   >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__SecSig 
        = ((0xdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__SecSig)) 
           | (2U & ((((0x3ffffffeU & ((((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__46__KET____DOT__bi__InData) 
                                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                                              >> 4U))) 
                                       << 1U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                                                 >> 2U))) 
                      | (0x1ffffffeU & ((((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__46__KET____DOT__bi__InData) 
                                          << 1U) & 
                                         ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                                          >> 3U)) & 
                                        ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                                             >> 3U)) 
                                         << 1U)))) 
                     | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__46__KET____DOT__bi__InData 
                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                                >> 4U))) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                                               >> 3U))) 
                        << 1U)) | (0x1ffffffeU & ((
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__46__KET____DOT__bi__InData 
                                                    << 1U) 
                                                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                                                      >> 3U)) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                                                     >> 2U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029 
        = ((0x3dffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029)) 
           | (0x200U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__SecSig) 
                          << 9U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                                     << 3U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                                               << 4U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                            << 3U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                                      << 4U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029 
        = ((0x3bffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029)) 
           | (0x400U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__SecSig) 
                          << 7U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__SecSig) 
                                     << 8U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__SecSig) 
                                               << 9U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__SecSig) 
                            << 8U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__SecSig) 
                                      << 9U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__ThiSig 
        = ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__ThiSig)) 
           | (1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__SecSig)) 
                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                              >> 6U))) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                                          >> 5U)) | 
                      (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__SecSig)) 
                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                           >> 6U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                                         >> 5U)))) 
                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__SecSig) 
                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                               >> 6U))) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                                              >> 5U)))) 
                    | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__SecSig) 
                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                           >> 6U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                                      >> 5U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__ThiSig 
        = ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__ThiSig)) 
           | (2U & ((((0xfffffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__SecSig) 
                                            >> 3U)) 
                                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__SecSig) 
                                              >> 2U))) 
                                       << 1U) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__SecSig))) 
                      | (0x7ffffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__SecSig) 
                                              >> 3U)) 
                                          << 1U) & 
                                         ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__SecSig) 
                                          >> 1U)) & 
                                        ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__SecSig) 
                                             >> 1U)) 
                                         << 1U)))) 
                     | (0x3ffffffeU & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__SecSig) 
                                         >> 2U) & (
                                                   (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__SecSig) 
                                                     >> 2U)) 
                                                   << 1U)) 
                                       & ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__SecSig) 
                                              >> 1U)) 
                                          << 1U)))) 
                    | (0x3ffffffeU & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__SecSig) 
                                        >> 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__SecSig) 
                                                  >> 1U)) 
                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__SecSig))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029 
        = ((0x2fffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029)) 
           | (0x1000U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__ThiSig) 
                           << 0xbU) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__ThiSig) 
                                        << 0xcU) | 
                                       (0xfffff000U 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                                           << 2U)))) 
                         | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__ThiSig) 
                             << 0xcU) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                                         << 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__ForSig 
        = ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__ForSig)) 
           | (2U & ((((0x7ffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__ThiSig) 
                                          >> 1U)) & 
                                      (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__ThiSig))) 
                                     << 1U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                                               >> 9U))) 
                      | ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__ThiSig) 
                               >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__ThiSig)) 
                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                                >> 0xaU))) << 1U)) 
                     | (0xfffffffeU & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__ThiSig) 
                                        & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__ThiSig)) 
                                           << 1U)) 
                                       & ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                                              >> 0xaU)) 
                                          << 1U)))) 
                    | (0x7ffffeU & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__ThiSig) 
                                     & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__ThiSig) 
                                        << 1U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                                                   >> 9U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__FifSig 
        = (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__ForSig) 
                         >> 1U)) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__ForSig))) 
                    & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                       >> 0xbU)) | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__ForSig) 
                                         >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__ForSig)) 
                                    & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                                          >> 0xbU)))) 
                  | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__ForSig) 
                       >> 1U) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__ForSig))) 
                     & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                           >> 0xbU)))) | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__ForSig) 
                                            >> 1U) 
                                           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__ForSig)) 
                                          & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                                             >> 0xbU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029 
        = ((0x1fffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029)) 
           | (0x2000U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__ForSig) 
                           << 0xcU) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__ForSig) 
                                        << 0xdU) | 
                                       (0xffffe000U 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                                           << 2U)))) 
                         | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__ForSig) 
                             << 0xdU) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                                         << 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut 
        = ((0xffffbfffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut) 
           | ((QData)((IData)((1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__FifSig)) 
                                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                                               >> 0xdU))) 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                                           >> 0xcU)) 
                                       | (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__FifSig)) 
                                           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                                              >> 0xdU)) 
                                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                                                >> 0xcU)))) 
                                      | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__FifSig) 
                                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                                                >> 0xdU))) 
                                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                                               >> 0xcU)))) 
                                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__FifSig) 
                                         & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                                            >> 0xdU)) 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                                           >> 0xcU)))))) 
              << 0x2eU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut 
        = ((0xffffbfffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__FifSig) 
                                      & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                                          >> 0xdU) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                                            >> 0xcU))) 
                                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                                         >> 0xdU) & 
                                        ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029) 
                                         >> 0xcU)))))) 
              << 0x2eU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029 
        = ((0x3fdfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029)) 
           | (0x20U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                         << 3U) & ((0xffffffe0U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                                                   << 4U)) 
                                   | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                                      << 5U))) | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                                                   << 4U) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                                                     << 5U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029 
        = ((0x3fbfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029)) 
           | (0x40U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__47__KET____DOT__bi__InData 
                         << 6U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                                    << 2U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                                              << 3U))) 
                       | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                           << 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                                     << 3U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029 
        = ((0x37ffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029)) 
           | (0x800U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                          << 2U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                                     << 3U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                                               << 4U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                            << 3U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                                      << 4U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__ForSig 
        = ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__ForSig)) 
           | (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                            >> 9U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                                          >> 8U))) 
                       & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                          >> 7U)) | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                                          >> 9U)) & 
                                      ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                                       >> 8U)) & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                                                   >> 7U)))) 
                     | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                          >> 9U) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                                       >> 8U))) & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                                                    >> 7U)))) 
                    | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                         >> 9U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                                   >> 8U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                                              >> 7U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__SecSig 
        = ((0xeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__SecSig)) 
           | (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                            >> 2U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                                          >> 1U))) 
                       & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029)) 
                      | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                              >> 2U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                                         >> 1U)) & 
                         (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029)))) 
                     | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                          >> 2U) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                                       >> 1U))) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029)))) 
                    | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                         >> 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                                   >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__SecSig 
        = ((0xdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__SecSig)) 
           | (2U & ((((0x3ffffffeU & ((((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__47__KET____DOT__bi__InData) 
                                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                                              >> 4U))) 
                                       << 1U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                                                 >> 2U))) 
                      | (0x1ffffffeU & ((((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__47__KET____DOT__bi__InData) 
                                          << 1U) & 
                                         ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                                          >> 3U)) & 
                                        ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                                             >> 3U)) 
                                         << 1U)))) 
                     | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__47__KET____DOT__bi__InData 
                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                                >> 4U))) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                                               >> 3U))) 
                        << 1U)) | (0x1ffffffeU & ((
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__47__KET____DOT__bi__InData 
                                                    << 1U) 
                                                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                                                      >> 3U)) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                                                     >> 2U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029 
        = ((0x3dffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029)) 
           | (0x200U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__SecSig) 
                          << 9U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                                     << 3U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                                               << 4U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                            << 3U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                                      << 4U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029 
        = ((0x3bffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029)) 
           | (0x400U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__SecSig) 
                          << 7U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__SecSig) 
                                     << 8U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__SecSig) 
                                               << 9U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__SecSig) 
                            << 8U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__SecSig) 
                                      << 9U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__ThiSig 
        = ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__ThiSig)) 
           | (1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__SecSig)) 
                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                              >> 6U))) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                                          >> 5U)) | 
                      (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__SecSig)) 
                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                           >> 6U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                                         >> 5U)))) 
                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__SecSig) 
                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                               >> 6U))) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                                              >> 5U)))) 
                    | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__SecSig) 
                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                           >> 6U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                                      >> 5U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__ThiSig 
        = ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__ThiSig)) 
           | (2U & ((((0xfffffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__SecSig) 
                                            >> 3U)) 
                                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__SecSig) 
                                              >> 2U))) 
                                       << 1U) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__SecSig))) 
                      | (0x7ffffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__SecSig) 
                                              >> 3U)) 
                                          << 1U) & 
                                         ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__SecSig) 
                                          >> 1U)) & 
                                        ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__SecSig) 
                                             >> 1U)) 
                                         << 1U)))) 
                     | (0x3ffffffeU & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__SecSig) 
                                         >> 2U) & (
                                                   (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__SecSig) 
                                                     >> 2U)) 
                                                   << 1U)) 
                                       & ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__SecSig) 
                                              >> 1U)) 
                                          << 1U)))) 
                    | (0x3ffffffeU & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__SecSig) 
                                        >> 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__SecSig) 
                                                  >> 1U)) 
                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__SecSig))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029 
        = ((0x2fffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029)) 
           | (0x1000U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__ThiSig) 
                           << 0xbU) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__ThiSig) 
                                        << 0xcU) | 
                                       (0xfffff000U 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                                           << 2U)))) 
                         | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__ThiSig) 
                             << 0xcU) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                                         << 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__ForSig 
        = ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__ForSig)) 
           | (2U & ((((0x7ffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__ThiSig) 
                                          >> 1U)) & 
                                      (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__ThiSig))) 
                                     << 1U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                                               >> 9U))) 
                      | ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__ThiSig) 
                               >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__ThiSig)) 
                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                                >> 0xaU))) << 1U)) 
                     | (0xfffffffeU & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__ThiSig) 
                                        & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__ThiSig)) 
                                           << 1U)) 
                                       & ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                                              >> 0xaU)) 
                                          << 1U)))) 
                    | (0x7ffffeU & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__ThiSig) 
                                     & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__ThiSig) 
                                        << 1U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                                                   >> 9U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__FifSig 
        = (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__ForSig) 
                         >> 1U)) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__ForSig))) 
                    & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                       >> 0xbU)) | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__ForSig) 
                                         >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__ForSig)) 
                                    & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                                          >> 0xbU)))) 
                  | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__ForSig) 
                       >> 1U) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__ForSig))) 
                     & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                           >> 0xbU)))) | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__ForSig) 
                                            >> 1U) 
                                           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__ForSig)) 
                                          & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                                             >> 0xbU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029 
        = ((0x1fffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029)) 
           | (0x2000U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__ForSig) 
                           << 0xcU) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__ForSig) 
                                        << 0xdU) | 
                                       (0xffffe000U 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                                           << 2U)))) 
                         | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__ForSig) 
                             << 0xdU) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                                         << 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut 
        = ((0xffff7fffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut) 
           | ((QData)((IData)((1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__FifSig)) 
                                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                                               >> 0xdU))) 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                                           >> 0xcU)) 
                                       | (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__FifSig)) 
                                           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                                              >> 0xdU)) 
                                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                                                >> 0xcU)))) 
                                      | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__FifSig) 
                                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                                                >> 0xdU))) 
                                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                                               >> 0xcU)))) 
                                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__FifSig) 
                                         & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                                            >> 0xdU)) 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                                           >> 0xcU)))))) 
              << 0x2fU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut 
        = ((0xffff7fffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__FifSig) 
                                      & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                                          >> 0xdU) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                                            >> 0xcU))) 
                                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                                         >> 0xdU) & 
                                        ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029) 
                                         >> 0xcU)))))) 
              << 0x2fU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029 
        = ((0x3fdfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029)) 
           | (0x20U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                         << 3U) & ((0xffffffe0U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                                                   << 4U)) 
                                   | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                                      << 5U))) | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                                                   << 4U) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                                                     << 5U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029 
        = ((0x3fbfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029)) 
           | (0x40U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__48__KET____DOT__bi__InData 
                         << 6U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                                    << 2U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                                              << 3U))) 
                       | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                           << 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                                     << 3U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029 
        = ((0x37ffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029)) 
           | (0x800U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                          << 2U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                                     << 3U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                                               << 4U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                            << 3U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                                      << 4U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__ForSig 
        = ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__ForSig)) 
           | (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                            >> 9U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                                          >> 8U))) 
                       & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                          >> 7U)) | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                                          >> 9U)) & 
                                      ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                                       >> 8U)) & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                                                   >> 7U)))) 
                     | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                          >> 9U) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                                       >> 8U))) & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                                                    >> 7U)))) 
                    | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                         >> 9U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                                   >> 8U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                                              >> 7U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__SecSig 
        = ((0xeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__SecSig)) 
           | (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                            >> 2U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                                          >> 1U))) 
                       & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029)) 
                      | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                              >> 2U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                                         >> 1U)) & 
                         (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029)))) 
                     | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                          >> 2U) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                                       >> 1U))) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029)))) 
                    | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                         >> 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                                   >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__SecSig 
        = ((0xdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__SecSig)) 
           | (2U & ((((0x3ffffffeU & ((((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__48__KET____DOT__bi__InData) 
                                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                                              >> 4U))) 
                                       << 1U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                                                 >> 2U))) 
                      | (0x1ffffffeU & ((((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__48__KET____DOT__bi__InData) 
                                          << 1U) & 
                                         ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                                          >> 3U)) & 
                                        ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                                             >> 3U)) 
                                         << 1U)))) 
                     | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__48__KET____DOT__bi__InData 
                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                                >> 4U))) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                                               >> 3U))) 
                        << 1U)) | (0x1ffffffeU & ((
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__48__KET____DOT__bi__InData 
                                                    << 1U) 
                                                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                                                      >> 3U)) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                                                     >> 2U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029 
        = ((0x3dffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029)) 
           | (0x200U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__SecSig) 
                          << 9U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                                     << 3U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                                               << 4U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                            << 3U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                                      << 4U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029 
        = ((0x3bffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029)) 
           | (0x400U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__SecSig) 
                          << 7U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__SecSig) 
                                     << 8U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__SecSig) 
                                               << 9U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__SecSig) 
                            << 8U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__SecSig) 
                                      << 9U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__ThiSig 
        = ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__ThiSig)) 
           | (1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__SecSig)) 
                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                              >> 6U))) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                                          >> 5U)) | 
                      (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__SecSig)) 
                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                           >> 6U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                                         >> 5U)))) 
                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__SecSig) 
                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                               >> 6U))) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                                              >> 5U)))) 
                    | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__SecSig) 
                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                           >> 6U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                                      >> 5U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__ThiSig 
        = ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__ThiSig)) 
           | (2U & ((((0xfffffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__SecSig) 
                                            >> 3U)) 
                                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__SecSig) 
                                              >> 2U))) 
                                       << 1U) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__SecSig))) 
                      | (0x7ffffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__SecSig) 
                                              >> 3U)) 
                                          << 1U) & 
                                         ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__SecSig) 
                                          >> 1U)) & 
                                        ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__SecSig) 
                                             >> 1U)) 
                                         << 1U)))) 
                     | (0x3ffffffeU & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__SecSig) 
                                         >> 2U) & (
                                                   (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__SecSig) 
                                                     >> 2U)) 
                                                   << 1U)) 
                                       & ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__SecSig) 
                                              >> 1U)) 
                                          << 1U)))) 
                    | (0x3ffffffeU & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__SecSig) 
                                        >> 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__SecSig) 
                                                  >> 1U)) 
                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__SecSig))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029 
        = ((0x2fffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029)) 
           | (0x1000U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__ThiSig) 
                           << 0xbU) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__ThiSig) 
                                        << 0xcU) | 
                                       (0xfffff000U 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                                           << 2U)))) 
                         | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__ThiSig) 
                             << 0xcU) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                                         << 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__ForSig 
        = ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__ForSig)) 
           | (2U & ((((0x7ffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__ThiSig) 
                                          >> 1U)) & 
                                      (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__ThiSig))) 
                                     << 1U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                                               >> 9U))) 
                      | ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__ThiSig) 
                               >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__ThiSig)) 
                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                                >> 0xaU))) << 1U)) 
                     | (0xfffffffeU & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__ThiSig) 
                                        & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__ThiSig)) 
                                           << 1U)) 
                                       & ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                                              >> 0xaU)) 
                                          << 1U)))) 
                    | (0x7ffffeU & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__ThiSig) 
                                     & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__ThiSig) 
                                        << 1U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                                                   >> 9U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__FifSig 
        = (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__ForSig) 
                         >> 1U)) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__ForSig))) 
                    & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                       >> 0xbU)) | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__ForSig) 
                                         >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__ForSig)) 
                                    & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                                          >> 0xbU)))) 
                  | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__ForSig) 
                       >> 1U) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__ForSig))) 
                     & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                           >> 0xbU)))) | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__ForSig) 
                                            >> 1U) 
                                           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__ForSig)) 
                                          & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                                             >> 0xbU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029 
        = ((0x1fffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029)) 
           | (0x2000U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__ForSig) 
                           << 0xcU) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__ForSig) 
                                        << 0xdU) | 
                                       (0xffffe000U 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                                           << 2U)))) 
                         | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__ForSig) 
                             << 0xdU) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                                         << 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut 
        = ((0xfffeffffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut) 
           | ((QData)((IData)((1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__FifSig)) 
                                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                                               >> 0xdU))) 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                                           >> 0xcU)) 
                                       | (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__FifSig)) 
                                           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                                              >> 0xdU)) 
                                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                                                >> 0xcU)))) 
                                      | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__FifSig) 
                                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                                                >> 0xdU))) 
                                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                                               >> 0xcU)))) 
                                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__FifSig) 
                                         & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                                            >> 0xdU)) 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                                           >> 0xcU)))))) 
              << 0x30U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut 
        = ((0xfffeffffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__FifSig) 
                                      & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                                          >> 0xdU) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                                            >> 0xcU))) 
                                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                                         >> 0xdU) & 
                                        ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029) 
                                         >> 0xcU)))))) 
              << 0x30U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029 
        = ((0x3fdfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029)) 
           | (0x20U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                         << 3U) & ((0xffffffe0U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                                                   << 4U)) 
                                   | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                                      << 5U))) | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                                                   << 4U) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                                                     << 5U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029 
        = ((0x3fbfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029)) 
           | (0x40U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__49__KET____DOT__bi__InData 
                         << 6U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                                    << 2U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                                              << 3U))) 
                       | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                           << 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                                     << 3U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029 
        = ((0x37ffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029)) 
           | (0x800U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                          << 2U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                                     << 3U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                                               << 4U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                            << 3U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                                      << 4U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__ForSig 
        = ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__ForSig)) 
           | (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                            >> 9U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                                          >> 8U))) 
                       & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                          >> 7U)) | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                                          >> 9U)) & 
                                      ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                                       >> 8U)) & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                                                   >> 7U)))) 
                     | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                          >> 9U) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                                       >> 8U))) & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                                                    >> 7U)))) 
                    | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                         >> 9U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                                   >> 8U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                                              >> 7U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__SecSig 
        = ((0xeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__SecSig)) 
           | (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                            >> 2U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                                          >> 1U))) 
                       & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029)) 
                      | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                              >> 2U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                                         >> 1U)) & 
                         (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029)))) 
                     | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                          >> 2U) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                                       >> 1U))) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029)))) 
                    | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                         >> 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                                   >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__SecSig 
        = ((0xdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__SecSig)) 
           | (2U & ((((0x3ffffffeU & ((((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__49__KET____DOT__bi__InData) 
                                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                                              >> 4U))) 
                                       << 1U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                                                 >> 2U))) 
                      | (0x1ffffffeU & ((((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__49__KET____DOT__bi__InData) 
                                          << 1U) & 
                                         ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                                          >> 3U)) & 
                                        ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                                             >> 3U)) 
                                         << 1U)))) 
                     | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__49__KET____DOT__bi__InData 
                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                                >> 4U))) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                                               >> 3U))) 
                        << 1U)) | (0x1ffffffeU & ((
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__49__KET____DOT__bi__InData 
                                                    << 1U) 
                                                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                                                      >> 3U)) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                                                     >> 2U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029 
        = ((0x3dffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029)) 
           | (0x200U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__SecSig) 
                          << 9U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                                     << 3U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                                               << 4U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                            << 3U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                                      << 4U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029 
        = ((0x3bffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029)) 
           | (0x400U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__SecSig) 
                          << 7U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__SecSig) 
                                     << 8U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__SecSig) 
                                               << 9U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__SecSig) 
                            << 8U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__SecSig) 
                                      << 9U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__ThiSig 
        = ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__ThiSig)) 
           | (1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__SecSig)) 
                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                              >> 6U))) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                                          >> 5U)) | 
                      (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__SecSig)) 
                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                           >> 6U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                                         >> 5U)))) 
                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__SecSig) 
                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                               >> 6U))) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                                              >> 5U)))) 
                    | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__SecSig) 
                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                           >> 6U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                                      >> 5U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__ThiSig 
        = ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__ThiSig)) 
           | (2U & ((((0xfffffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__SecSig) 
                                            >> 3U)) 
                                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__SecSig) 
                                              >> 2U))) 
                                       << 1U) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__SecSig))) 
                      | (0x7ffffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__SecSig) 
                                              >> 3U)) 
                                          << 1U) & 
                                         ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__SecSig) 
                                          >> 1U)) & 
                                        ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__SecSig) 
                                             >> 1U)) 
                                         << 1U)))) 
                     | (0x3ffffffeU & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__SecSig) 
                                         >> 2U) & (
                                                   (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__SecSig) 
                                                     >> 2U)) 
                                                   << 1U)) 
                                       & ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__SecSig) 
                                              >> 1U)) 
                                          << 1U)))) 
                    | (0x3ffffffeU & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__SecSig) 
                                        >> 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__SecSig) 
                                                  >> 1U)) 
                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__SecSig))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029 
        = ((0x2fffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029)) 
           | (0x1000U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__ThiSig) 
                           << 0xbU) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__ThiSig) 
                                        << 0xcU) | 
                                       (0xfffff000U 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                                           << 2U)))) 
                         | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__ThiSig) 
                             << 0xcU) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                                         << 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__ForSig 
        = ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__ForSig)) 
           | (2U & ((((0x7ffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__ThiSig) 
                                          >> 1U)) & 
                                      (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__ThiSig))) 
                                     << 1U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                                               >> 9U))) 
                      | ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__ThiSig) 
                               >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__ThiSig)) 
                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                                >> 0xaU))) << 1U)) 
                     | (0xfffffffeU & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__ThiSig) 
                                        & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__ThiSig)) 
                                           << 1U)) 
                                       & ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                                              >> 0xaU)) 
                                          << 1U)))) 
                    | (0x7ffffeU & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__ThiSig) 
                                     & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__ThiSig) 
                                        << 1U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                                                   >> 9U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__FifSig 
        = (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__ForSig) 
                         >> 1U)) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__ForSig))) 
                    & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                       >> 0xbU)) | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__ForSig) 
                                         >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__ForSig)) 
                                    & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                                          >> 0xbU)))) 
                  | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__ForSig) 
                       >> 1U) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__ForSig))) 
                     & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                           >> 0xbU)))) | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__ForSig) 
                                            >> 1U) 
                                           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__ForSig)) 
                                          & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                                             >> 0xbU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029 
        = ((0x1fffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029)) 
           | (0x2000U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__ForSig) 
                           << 0xcU) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__ForSig) 
                                        << 0xdU) | 
                                       (0xffffe000U 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                                           << 2U)))) 
                         | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__ForSig) 
                             << 0xdU) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                                         << 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut 
        = ((0xfffdffffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut) 
           | ((QData)((IData)((1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__FifSig)) 
                                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                                               >> 0xdU))) 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                                           >> 0xcU)) 
                                       | (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__FifSig)) 
                                           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                                              >> 0xdU)) 
                                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                                                >> 0xcU)))) 
                                      | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__FifSig) 
                                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                                                >> 0xdU))) 
                                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                                               >> 0xcU)))) 
                                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__FifSig) 
                                         & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                                            >> 0xdU)) 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                                           >> 0xcU)))))) 
              << 0x31U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut 
        = ((0xfffdffffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__FifSig) 
                                      & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                                          >> 0xdU) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                                            >> 0xcU))) 
                                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                                         >> 0xdU) & 
                                        ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029) 
                                         >> 0xcU)))))) 
              << 0x31U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029 
        = ((0x3fdfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029)) 
           | (0x20U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                         << 3U) & ((0xffffffe0U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                                                   << 4U)) 
                                   | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                                      << 5U))) | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                                                   << 4U) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                                                     << 5U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029 
        = ((0x3fbfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029)) 
           | (0x40U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__50__KET____DOT__bi__InData 
                         << 6U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                                    << 2U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                                              << 3U))) 
                       | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                           << 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                                     << 3U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029 
        = ((0x37ffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029)) 
           | (0x800U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                          << 2U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                                     << 3U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                                               << 4U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                            << 3U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                                      << 4U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__ForSig 
        = ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__ForSig)) 
           | (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                            >> 9U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                                          >> 8U))) 
                       & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                          >> 7U)) | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                                          >> 9U)) & 
                                      ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                                       >> 8U)) & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                                                   >> 7U)))) 
                     | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                          >> 9U) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                                       >> 8U))) & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                                                    >> 7U)))) 
                    | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                         >> 9U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                                   >> 8U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                                              >> 7U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__SecSig 
        = ((0xeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__SecSig)) 
           | (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                            >> 2U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                                          >> 1U))) 
                       & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029)) 
                      | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                              >> 2U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                                         >> 1U)) & 
                         (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029)))) 
                     | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                          >> 2U) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                                       >> 1U))) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029)))) 
                    | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                         >> 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                                   >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__SecSig 
        = ((0xdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__SecSig)) 
           | (2U & ((((0x3ffffffeU & ((((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__50__KET____DOT__bi__InData) 
                                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                                              >> 4U))) 
                                       << 1U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                                                 >> 2U))) 
                      | (0x1ffffffeU & ((((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__50__KET____DOT__bi__InData) 
                                          << 1U) & 
                                         ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                                          >> 3U)) & 
                                        ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                                             >> 3U)) 
                                         << 1U)))) 
                     | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__50__KET____DOT__bi__InData 
                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                                >> 4U))) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                                               >> 3U))) 
                        << 1U)) | (0x1ffffffeU & ((
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__50__KET____DOT__bi__InData 
                                                    << 1U) 
                                                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                                                      >> 3U)) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                                                     >> 2U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029 
        = ((0x3dffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029)) 
           | (0x200U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__SecSig) 
                          << 9U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                                     << 3U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                                               << 4U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                            << 3U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                                      << 4U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029 
        = ((0x3bffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029)) 
           | (0x400U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__SecSig) 
                          << 7U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__SecSig) 
                                     << 8U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__SecSig) 
                                               << 9U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__SecSig) 
                            << 8U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__SecSig) 
                                      << 9U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__ThiSig 
        = ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__ThiSig)) 
           | (1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__SecSig)) 
                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                              >> 6U))) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                                          >> 5U)) | 
                      (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__SecSig)) 
                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                           >> 6U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                                         >> 5U)))) 
                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__SecSig) 
                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                               >> 6U))) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                                              >> 5U)))) 
                    | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__SecSig) 
                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                           >> 6U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                                      >> 5U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__ThiSig 
        = ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__ThiSig)) 
           | (2U & ((((0xfffffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__SecSig) 
                                            >> 3U)) 
                                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__SecSig) 
                                              >> 2U))) 
                                       << 1U) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__SecSig))) 
                      | (0x7ffffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__SecSig) 
                                              >> 3U)) 
                                          << 1U) & 
                                         ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__SecSig) 
                                          >> 1U)) & 
                                        ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__SecSig) 
                                             >> 1U)) 
                                         << 1U)))) 
                     | (0x3ffffffeU & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__SecSig) 
                                         >> 2U) & (
                                                   (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__SecSig) 
                                                     >> 2U)) 
                                                   << 1U)) 
                                       & ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__SecSig) 
                                              >> 1U)) 
                                          << 1U)))) 
                    | (0x3ffffffeU & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__SecSig) 
                                        >> 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__SecSig) 
                                                  >> 1U)) 
                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__SecSig))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029 
        = ((0x2fffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029)) 
           | (0x1000U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__ThiSig) 
                           << 0xbU) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__ThiSig) 
                                        << 0xcU) | 
                                       (0xfffff000U 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                                           << 2U)))) 
                         | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__ThiSig) 
                             << 0xcU) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                                         << 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__ForSig 
        = ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__ForSig)) 
           | (2U & ((((0x7ffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__ThiSig) 
                                          >> 1U)) & 
                                      (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__ThiSig))) 
                                     << 1U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                                               >> 9U))) 
                      | ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__ThiSig) 
                               >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__ThiSig)) 
                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                                >> 0xaU))) << 1U)) 
                     | (0xfffffffeU & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__ThiSig) 
                                        & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__ThiSig)) 
                                           << 1U)) 
                                       & ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                                              >> 0xaU)) 
                                          << 1U)))) 
                    | (0x7ffffeU & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__ThiSig) 
                                     & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__ThiSig) 
                                        << 1U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                                                   >> 9U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__FifSig 
        = (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__ForSig) 
                         >> 1U)) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__ForSig))) 
                    & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                       >> 0xbU)) | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__ForSig) 
                                         >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__ForSig)) 
                                    & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                                          >> 0xbU)))) 
                  | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__ForSig) 
                       >> 1U) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__ForSig))) 
                     & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                           >> 0xbU)))) | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__ForSig) 
                                            >> 1U) 
                                           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__ForSig)) 
                                          & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                                             >> 0xbU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029 
        = ((0x1fffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029)) 
           | (0x2000U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__ForSig) 
                           << 0xcU) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__ForSig) 
                                        << 0xdU) | 
                                       (0xffffe000U 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                                           << 2U)))) 
                         | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__ForSig) 
                             << 0xdU) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                                         << 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut 
        = ((0xfffbffffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut) 
           | ((QData)((IData)((1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__FifSig)) 
                                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                                               >> 0xdU))) 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                                           >> 0xcU)) 
                                       | (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__FifSig)) 
                                           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                                              >> 0xdU)) 
                                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                                                >> 0xcU)))) 
                                      | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__FifSig) 
                                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                                                >> 0xdU))) 
                                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                                               >> 0xcU)))) 
                                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__FifSig) 
                                         & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                                            >> 0xdU)) 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                                           >> 0xcU)))))) 
              << 0x32U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut 
        = ((0xfffbffffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__FifSig) 
                                      & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                                          >> 0xdU) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                                            >> 0xcU))) 
                                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                                         >> 0xdU) & 
                                        ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029) 
                                         >> 0xcU)))))) 
              << 0x32U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029 
        = ((0x3fdfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029)) 
           | (0x20U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                         << 3U) & ((0xffffffe0U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                                                   << 4U)) 
                                   | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                                      << 5U))) | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                                                   << 4U) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                                                     << 5U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029 
        = ((0x3fbfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029)) 
           | (0x40U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__51__KET____DOT__bi__InData 
                         << 6U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                                    << 2U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                                              << 3U))) 
                       | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                           << 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                                     << 3U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029 
        = ((0x37ffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029)) 
           | (0x800U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                          << 2U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                                     << 3U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                                               << 4U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                            << 3U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                                      << 4U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__ForSig 
        = ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__ForSig)) 
           | (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                            >> 9U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                                          >> 8U))) 
                       & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                          >> 7U)) | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                                          >> 9U)) & 
                                      ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                                       >> 8U)) & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                                                   >> 7U)))) 
                     | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                          >> 9U) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                                       >> 8U))) & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                                                    >> 7U)))) 
                    | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                         >> 9U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                                   >> 8U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                                              >> 7U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__SecSig 
        = ((0xeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__SecSig)) 
           | (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                            >> 2U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                                          >> 1U))) 
                       & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029)) 
                      | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                              >> 2U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                                         >> 1U)) & 
                         (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029)))) 
                     | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                          >> 2U) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                                       >> 1U))) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029)))) 
                    | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                         >> 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                                   >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__SecSig 
        = ((0xdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__SecSig)) 
           | (2U & ((((0x3ffffffeU & ((((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__51__KET____DOT__bi__InData) 
                                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                                              >> 4U))) 
                                       << 1U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                                                 >> 2U))) 
                      | (0x1ffffffeU & ((((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__51__KET____DOT__bi__InData) 
                                          << 1U) & 
                                         ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                                          >> 3U)) & 
                                        ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                                             >> 3U)) 
                                         << 1U)))) 
                     | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__51__KET____DOT__bi__InData 
                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                                >> 4U))) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                                               >> 3U))) 
                        << 1U)) | (0x1ffffffeU & ((
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__51__KET____DOT__bi__InData 
                                                    << 1U) 
                                                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                                                      >> 3U)) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                                                     >> 2U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029 
        = ((0x3dffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029)) 
           | (0x200U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__SecSig) 
                          << 9U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                                     << 3U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                                               << 4U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                            << 3U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                                      << 4U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029 
        = ((0x3bffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029)) 
           | (0x400U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__SecSig) 
                          << 7U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__SecSig) 
                                     << 8U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__SecSig) 
                                               << 9U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__SecSig) 
                            << 8U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__SecSig) 
                                      << 9U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__ThiSig 
        = ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__ThiSig)) 
           | (1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__SecSig)) 
                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                              >> 6U))) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                                          >> 5U)) | 
                      (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__SecSig)) 
                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                           >> 6U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                                         >> 5U)))) 
                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__SecSig) 
                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                               >> 6U))) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                                              >> 5U)))) 
                    | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__SecSig) 
                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                           >> 6U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                                      >> 5U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__ThiSig 
        = ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__ThiSig)) 
           | (2U & ((((0xfffffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__SecSig) 
                                            >> 3U)) 
                                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__SecSig) 
                                              >> 2U))) 
                                       << 1U) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__SecSig))) 
                      | (0x7ffffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__SecSig) 
                                              >> 3U)) 
                                          << 1U) & 
                                         ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__SecSig) 
                                          >> 1U)) & 
                                        ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__SecSig) 
                                             >> 1U)) 
                                         << 1U)))) 
                     | (0x3ffffffeU & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__SecSig) 
                                         >> 2U) & (
                                                   (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__SecSig) 
                                                     >> 2U)) 
                                                   << 1U)) 
                                       & ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__SecSig) 
                                              >> 1U)) 
                                          << 1U)))) 
                    | (0x3ffffffeU & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__SecSig) 
                                        >> 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__SecSig) 
                                                  >> 1U)) 
                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__SecSig))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029 
        = ((0x2fffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029)) 
           | (0x1000U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__ThiSig) 
                           << 0xbU) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__ThiSig) 
                                        << 0xcU) | 
                                       (0xfffff000U 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                                           << 2U)))) 
                         | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__ThiSig) 
                             << 0xcU) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                                         << 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__ForSig 
        = ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__ForSig)) 
           | (2U & ((((0x7ffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__ThiSig) 
                                          >> 1U)) & 
                                      (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__ThiSig))) 
                                     << 1U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                                               >> 9U))) 
                      | ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__ThiSig) 
                               >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__ThiSig)) 
                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                                >> 0xaU))) << 1U)) 
                     | (0xfffffffeU & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__ThiSig) 
                                        & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__ThiSig)) 
                                           << 1U)) 
                                       & ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                                              >> 0xaU)) 
                                          << 1U)))) 
                    | (0x7ffffeU & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__ThiSig) 
                                     & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__ThiSig) 
                                        << 1U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                                                   >> 9U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__FifSig 
        = (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__ForSig) 
                         >> 1U)) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__ForSig))) 
                    & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                       >> 0xbU)) | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__ForSig) 
                                         >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__ForSig)) 
                                    & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                                          >> 0xbU)))) 
                  | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__ForSig) 
                       >> 1U) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__ForSig))) 
                     & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                           >> 0xbU)))) | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__ForSig) 
                                            >> 1U) 
                                           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__ForSig)) 
                                          & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                                             >> 0xbU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029 
        = ((0x1fffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029)) 
           | (0x2000U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__ForSig) 
                           << 0xcU) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__ForSig) 
                                        << 0xdU) | 
                                       (0xffffe000U 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                                           << 2U)))) 
                         | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__ForSig) 
                             << 0xdU) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                                         << 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut 
        = ((0xfff7ffffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut) 
           | ((QData)((IData)((1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__FifSig)) 
                                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                                               >> 0xdU))) 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                                           >> 0xcU)) 
                                       | (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__FifSig)) 
                                           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                                              >> 0xdU)) 
                                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                                                >> 0xcU)))) 
                                      | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__FifSig) 
                                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                                                >> 0xdU))) 
                                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                                               >> 0xcU)))) 
                                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__FifSig) 
                                         & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                                            >> 0xdU)) 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                                           >> 0xcU)))))) 
              << 0x33U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut 
        = ((0xfff7ffffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__FifSig) 
                                      & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                                          >> 0xdU) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                                            >> 0xcU))) 
                                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                                         >> 0xdU) & 
                                        ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029) 
                                         >> 0xcU)))))) 
              << 0x33U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029 
        = ((0x3fdfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029)) 
           | (0x20U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                         << 3U) & ((0xffffffe0U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                                                   << 4U)) 
                                   | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                                      << 5U))) | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                                                   << 4U) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                                                     << 5U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029 
        = ((0x3fbfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029)) 
           | (0x40U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__52__KET____DOT__bi__InData 
                         << 6U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                                    << 2U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                                              << 3U))) 
                       | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                           << 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                                     << 3U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029 
        = ((0x37ffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029)) 
           | (0x800U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                          << 2U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                                     << 3U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                                               << 4U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                            << 3U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                                      << 4U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__ForSig 
        = ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__ForSig)) 
           | (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                            >> 9U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                                          >> 8U))) 
                       & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                          >> 7U)) | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                                          >> 9U)) & 
                                      ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                                       >> 8U)) & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                                                   >> 7U)))) 
                     | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                          >> 9U) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                                       >> 8U))) & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                                                    >> 7U)))) 
                    | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                         >> 9U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                                   >> 8U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                                              >> 7U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__SecSig 
        = ((0xeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__SecSig)) 
           | (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                            >> 2U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                                          >> 1U))) 
                       & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029)) 
                      | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                              >> 2U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                                         >> 1U)) & 
                         (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029)))) 
                     | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                          >> 2U) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                                       >> 1U))) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029)))) 
                    | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                         >> 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                                   >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__SecSig 
        = ((0xdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__SecSig)) 
           | (2U & ((((0x3ffffffeU & ((((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__52__KET____DOT__bi__InData) 
                                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                                              >> 4U))) 
                                       << 1U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                                                 >> 2U))) 
                      | (0x1ffffffeU & ((((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__52__KET____DOT__bi__InData) 
                                          << 1U) & 
                                         ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                                          >> 3U)) & 
                                        ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                                             >> 3U)) 
                                         << 1U)))) 
                     | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__52__KET____DOT__bi__InData 
                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                                >> 4U))) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                                               >> 3U))) 
                        << 1U)) | (0x1ffffffeU & ((
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__52__KET____DOT__bi__InData 
                                                    << 1U) 
                                                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                                                      >> 3U)) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                                                     >> 2U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029 
        = ((0x3dffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029)) 
           | (0x200U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__SecSig) 
                          << 9U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                                     << 3U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                                               << 4U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                            << 3U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                                      << 4U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029 
        = ((0x3bffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029)) 
           | (0x400U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__SecSig) 
                          << 7U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__SecSig) 
                                     << 8U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__SecSig) 
                                               << 9U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__SecSig) 
                            << 8U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__SecSig) 
                                      << 9U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__ThiSig 
        = ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__ThiSig)) 
           | (1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__SecSig)) 
                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                              >> 6U))) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                                          >> 5U)) | 
                      (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__SecSig)) 
                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                           >> 6U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                                         >> 5U)))) 
                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__SecSig) 
                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                               >> 6U))) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                                              >> 5U)))) 
                    | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__SecSig) 
                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                           >> 6U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                                      >> 5U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__ThiSig 
        = ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__ThiSig)) 
           | (2U & ((((0xfffffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__SecSig) 
                                            >> 3U)) 
                                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__SecSig) 
                                              >> 2U))) 
                                       << 1U) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__SecSig))) 
                      | (0x7ffffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__SecSig) 
                                              >> 3U)) 
                                          << 1U) & 
                                         ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__SecSig) 
                                          >> 1U)) & 
                                        ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__SecSig) 
                                             >> 1U)) 
                                         << 1U)))) 
                     | (0x3ffffffeU & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__SecSig) 
                                         >> 2U) & (
                                                   (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__SecSig) 
                                                     >> 2U)) 
                                                   << 1U)) 
                                       & ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__SecSig) 
                                              >> 1U)) 
                                          << 1U)))) 
                    | (0x3ffffffeU & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__SecSig) 
                                        >> 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__SecSig) 
                                                  >> 1U)) 
                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__SecSig))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029 
        = ((0x2fffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029)) 
           | (0x1000U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__ThiSig) 
                           << 0xbU) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__ThiSig) 
                                        << 0xcU) | 
                                       (0xfffff000U 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                                           << 2U)))) 
                         | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__ThiSig) 
                             << 0xcU) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                                         << 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__ForSig 
        = ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__ForSig)) 
           | (2U & ((((0x7ffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__ThiSig) 
                                          >> 1U)) & 
                                      (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__ThiSig))) 
                                     << 1U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                                               >> 9U))) 
                      | ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__ThiSig) 
                               >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__ThiSig)) 
                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                                >> 0xaU))) << 1U)) 
                     | (0xfffffffeU & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__ThiSig) 
                                        & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__ThiSig)) 
                                           << 1U)) 
                                       & ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                                              >> 0xaU)) 
                                          << 1U)))) 
                    | (0x7ffffeU & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__ThiSig) 
                                     & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__ThiSig) 
                                        << 1U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                                                   >> 9U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__FifSig 
        = (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__ForSig) 
                         >> 1U)) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__ForSig))) 
                    & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                       >> 0xbU)) | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__ForSig) 
                                         >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__ForSig)) 
                                    & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                                          >> 0xbU)))) 
                  | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__ForSig) 
                       >> 1U) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__ForSig))) 
                     & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                           >> 0xbU)))) | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__ForSig) 
                                            >> 1U) 
                                           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__ForSig)) 
                                          & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                                             >> 0xbU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029 
        = ((0x1fffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029)) 
           | (0x2000U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__ForSig) 
                           << 0xcU) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__ForSig) 
                                        << 0xdU) | 
                                       (0xffffe000U 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                                           << 2U)))) 
                         | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__ForSig) 
                             << 0xdU) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                                         << 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut 
        = ((0xffefffffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut) 
           | ((QData)((IData)((1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__FifSig)) 
                                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                                               >> 0xdU))) 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                                           >> 0xcU)) 
                                       | (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__FifSig)) 
                                           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                                              >> 0xdU)) 
                                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                                                >> 0xcU)))) 
                                      | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__FifSig) 
                                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                                                >> 0xdU))) 
                                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                                               >> 0xcU)))) 
                                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__FifSig) 
                                         & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                                            >> 0xdU)) 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                                           >> 0xcU)))))) 
              << 0x34U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut 
        = ((0xffefffffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__FifSig) 
                                      & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                                          >> 0xdU) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                                            >> 0xcU))) 
                                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                                         >> 0xdU) & 
                                        ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029) 
                                         >> 0xcU)))))) 
              << 0x34U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029 
        = ((0x3fdfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029)) 
           | (0x20U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                         << 3U) & ((0xffffffe0U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                                                   << 4U)) 
                                   | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                                      << 5U))) | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                                                   << 4U) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                                                     << 5U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029 
        = ((0x3fbfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029)) 
           | (0x40U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__53__KET____DOT__bi__InData 
                         << 6U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                                    << 2U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                                              << 3U))) 
                       | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                           << 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                                     << 3U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029 
        = ((0x37ffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029)) 
           | (0x800U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                          << 2U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                                     << 3U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                                               << 4U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                            << 3U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                                      << 4U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__ForSig 
        = ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__ForSig)) 
           | (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                            >> 9U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                                          >> 8U))) 
                       & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                          >> 7U)) | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                                          >> 9U)) & 
                                      ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                                       >> 8U)) & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                                                   >> 7U)))) 
                     | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                          >> 9U) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                                       >> 8U))) & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                                                    >> 7U)))) 
                    | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                         >> 9U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                                   >> 8U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                                              >> 7U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__SecSig 
        = ((0xeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__SecSig)) 
           | (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                            >> 2U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                                          >> 1U))) 
                       & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029)) 
                      | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                              >> 2U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                                         >> 1U)) & 
                         (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029)))) 
                     | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                          >> 2U) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                                       >> 1U))) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029)))) 
                    | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                         >> 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                                   >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__SecSig 
        = ((0xdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__SecSig)) 
           | (2U & ((((0x3ffffffeU & ((((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__53__KET____DOT__bi__InData) 
                                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                                              >> 4U))) 
                                       << 1U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                                                 >> 2U))) 
                      | (0x1ffffffeU & ((((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__53__KET____DOT__bi__InData) 
                                          << 1U) & 
                                         ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                                          >> 3U)) & 
                                        ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                                             >> 3U)) 
                                         << 1U)))) 
                     | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__53__KET____DOT__bi__InData 
                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                                >> 4U))) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                                               >> 3U))) 
                        << 1U)) | (0x1ffffffeU & ((
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__53__KET____DOT__bi__InData 
                                                    << 1U) 
                                                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                                                      >> 3U)) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                                                     >> 2U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029 
        = ((0x3dffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029)) 
           | (0x200U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__SecSig) 
                          << 9U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                                     << 3U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                                               << 4U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                            << 3U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                                      << 4U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029 
        = ((0x3bffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029)) 
           | (0x400U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__SecSig) 
                          << 7U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__SecSig) 
                                     << 8U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__SecSig) 
                                               << 9U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__SecSig) 
                            << 8U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__SecSig) 
                                      << 9U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__ThiSig 
        = ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__ThiSig)) 
           | (1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__SecSig)) 
                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                              >> 6U))) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                                          >> 5U)) | 
                      (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__SecSig)) 
                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                           >> 6U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                                         >> 5U)))) 
                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__SecSig) 
                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                               >> 6U))) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                                              >> 5U)))) 
                    | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__SecSig) 
                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                           >> 6U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                                      >> 5U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__ThiSig 
        = ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__ThiSig)) 
           | (2U & ((((0xfffffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__SecSig) 
                                            >> 3U)) 
                                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__SecSig) 
                                              >> 2U))) 
                                       << 1U) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__SecSig))) 
                      | (0x7ffffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__SecSig) 
                                              >> 3U)) 
                                          << 1U) & 
                                         ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__SecSig) 
                                          >> 1U)) & 
                                        ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__SecSig) 
                                             >> 1U)) 
                                         << 1U)))) 
                     | (0x3ffffffeU & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__SecSig) 
                                         >> 2U) & (
                                                   (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__SecSig) 
                                                     >> 2U)) 
                                                   << 1U)) 
                                       & ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__SecSig) 
                                              >> 1U)) 
                                          << 1U)))) 
                    | (0x3ffffffeU & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__SecSig) 
                                        >> 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__SecSig) 
                                                  >> 1U)) 
                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__SecSig))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029 
        = ((0x2fffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029)) 
           | (0x1000U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__ThiSig) 
                           << 0xbU) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__ThiSig) 
                                        << 0xcU) | 
                                       (0xfffff000U 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                                           << 2U)))) 
                         | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__ThiSig) 
                             << 0xcU) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                                         << 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__ForSig 
        = ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__ForSig)) 
           | (2U & ((((0x7ffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__ThiSig) 
                                          >> 1U)) & 
                                      (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__ThiSig))) 
                                     << 1U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                                               >> 9U))) 
                      | ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__ThiSig) 
                               >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__ThiSig)) 
                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                                >> 0xaU))) << 1U)) 
                     | (0xfffffffeU & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__ThiSig) 
                                        & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__ThiSig)) 
                                           << 1U)) 
                                       & ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                                              >> 0xaU)) 
                                          << 1U)))) 
                    | (0x7ffffeU & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__ThiSig) 
                                     & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__ThiSig) 
                                        << 1U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                                                   >> 9U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__FifSig 
        = (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__ForSig) 
                         >> 1U)) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__ForSig))) 
                    & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                       >> 0xbU)) | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__ForSig) 
                                         >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__ForSig)) 
                                    & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                                          >> 0xbU)))) 
                  | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__ForSig) 
                       >> 1U) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__ForSig))) 
                     & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                           >> 0xbU)))) | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__ForSig) 
                                            >> 1U) 
                                           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__ForSig)) 
                                          & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                                             >> 0xbU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029 
        = ((0x1fffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029)) 
           | (0x2000U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__ForSig) 
                           << 0xcU) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__ForSig) 
                                        << 0xdU) | 
                                       (0xffffe000U 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                                           << 2U)))) 
                         | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__ForSig) 
                             << 0xdU) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                                         << 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut 
        = ((0xffdfffffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut) 
           | ((QData)((IData)((1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__FifSig)) 
                                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                                               >> 0xdU))) 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                                           >> 0xcU)) 
                                       | (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__FifSig)) 
                                           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                                              >> 0xdU)) 
                                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                                                >> 0xcU)))) 
                                      | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__FifSig) 
                                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                                                >> 0xdU))) 
                                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                                               >> 0xcU)))) 
                                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__FifSig) 
                                         & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                                            >> 0xdU)) 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                                           >> 0xcU)))))) 
              << 0x35U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut 
        = ((0xffdfffffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__FifSig) 
                                      & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                                          >> 0xdU) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                                            >> 0xcU))) 
                                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                                         >> 0xdU) & 
                                        ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029) 
                                         >> 0xcU)))))) 
              << 0x35U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029 
        = ((0x3fdfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029)) 
           | (0x20U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                         << 3U) & ((0xffffffe0U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                                                   << 4U)) 
                                   | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                                      << 5U))) | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                                                   << 4U) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                                                     << 5U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029 
        = ((0x3fbfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029)) 
           | (0x40U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__54__KET____DOT__bi__InData 
                         << 6U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                                    << 2U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                                              << 3U))) 
                       | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                           << 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                                     << 3U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029 
        = ((0x37ffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029)) 
           | (0x800U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                          << 2U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                                     << 3U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                                               << 4U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                            << 3U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                                      << 4U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__ForSig 
        = ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__ForSig)) 
           | (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                            >> 9U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                                          >> 8U))) 
                       & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                          >> 7U)) | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                                          >> 9U)) & 
                                      ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                                       >> 8U)) & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                                                   >> 7U)))) 
                     | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                          >> 9U) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                                       >> 8U))) & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                                                    >> 7U)))) 
                    | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                         >> 9U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                                   >> 8U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                                              >> 7U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__SecSig 
        = ((0xeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__SecSig)) 
           | (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                            >> 2U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                                          >> 1U))) 
                       & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029)) 
                      | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                              >> 2U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                                         >> 1U)) & 
                         (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029)))) 
                     | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                          >> 2U) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                                       >> 1U))) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029)))) 
                    | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                         >> 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                                   >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__SecSig 
        = ((0xdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__SecSig)) 
           | (2U & ((((0x3ffffffeU & ((((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__54__KET____DOT__bi__InData) 
                                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                                              >> 4U))) 
                                       << 1U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                                                 >> 2U))) 
                      | (0x1ffffffeU & ((((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__54__KET____DOT__bi__InData) 
                                          << 1U) & 
                                         ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                                          >> 3U)) & 
                                        ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                                             >> 3U)) 
                                         << 1U)))) 
                     | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__54__KET____DOT__bi__InData 
                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                                >> 4U))) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                                               >> 3U))) 
                        << 1U)) | (0x1ffffffeU & ((
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__54__KET____DOT__bi__InData 
                                                    << 1U) 
                                                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                                                      >> 3U)) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                                                     >> 2U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029 
        = ((0x3dffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029)) 
           | (0x200U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__SecSig) 
                          << 9U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                                     << 3U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                                               << 4U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                            << 3U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                                      << 4U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029 
        = ((0x3bffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029)) 
           | (0x400U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__SecSig) 
                          << 7U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__SecSig) 
                                     << 8U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__SecSig) 
                                               << 9U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__SecSig) 
                            << 8U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__SecSig) 
                                      << 9U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__ThiSig 
        = ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__ThiSig)) 
           | (1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__SecSig)) 
                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                              >> 6U))) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                                          >> 5U)) | 
                      (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__SecSig)) 
                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                           >> 6U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                                         >> 5U)))) 
                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__SecSig) 
                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                               >> 6U))) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                                              >> 5U)))) 
                    | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__SecSig) 
                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                           >> 6U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                                      >> 5U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__ThiSig 
        = ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__ThiSig)) 
           | (2U & ((((0xfffffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__SecSig) 
                                            >> 3U)) 
                                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__SecSig) 
                                              >> 2U))) 
                                       << 1U) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__SecSig))) 
                      | (0x7ffffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__SecSig) 
                                              >> 3U)) 
                                          << 1U) & 
                                         ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__SecSig) 
                                          >> 1U)) & 
                                        ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__SecSig) 
                                             >> 1U)) 
                                         << 1U)))) 
                     | (0x3ffffffeU & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__SecSig) 
                                         >> 2U) & (
                                                   (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__SecSig) 
                                                     >> 2U)) 
                                                   << 1U)) 
                                       & ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__SecSig) 
                                              >> 1U)) 
                                          << 1U)))) 
                    | (0x3ffffffeU & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__SecSig) 
                                        >> 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__SecSig) 
                                                  >> 1U)) 
                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__SecSig))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029 
        = ((0x2fffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029)) 
           | (0x1000U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__ThiSig) 
                           << 0xbU) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__ThiSig) 
                                        << 0xcU) | 
                                       (0xfffff000U 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                                           << 2U)))) 
                         | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__ThiSig) 
                             << 0xcU) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                                         << 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__ForSig 
        = ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__ForSig)) 
           | (2U & ((((0x7ffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__ThiSig) 
                                          >> 1U)) & 
                                      (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__ThiSig))) 
                                     << 1U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                                               >> 9U))) 
                      | ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__ThiSig) 
                               >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__ThiSig)) 
                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                                >> 0xaU))) << 1U)) 
                     | (0xfffffffeU & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__ThiSig) 
                                        & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__ThiSig)) 
                                           << 1U)) 
                                       & ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                                              >> 0xaU)) 
                                          << 1U)))) 
                    | (0x7ffffeU & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__ThiSig) 
                                     & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__ThiSig) 
                                        << 1U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                                                   >> 9U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__FifSig 
        = (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__ForSig) 
                         >> 1U)) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__ForSig))) 
                    & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                       >> 0xbU)) | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__ForSig) 
                                         >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__ForSig)) 
                                    & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                                          >> 0xbU)))) 
                  | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__ForSig) 
                       >> 1U) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__ForSig))) 
                     & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                           >> 0xbU)))) | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__ForSig) 
                                            >> 1U) 
                                           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__ForSig)) 
                                          & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                                             >> 0xbU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029 
        = ((0x1fffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029)) 
           | (0x2000U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__ForSig) 
                           << 0xcU) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__ForSig) 
                                        << 0xdU) | 
                                       (0xffffe000U 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                                           << 2U)))) 
                         | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__ForSig) 
                             << 0xdU) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                                         << 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut 
        = ((0xffbfffffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut) 
           | ((QData)((IData)((1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__FifSig)) 
                                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                                               >> 0xdU))) 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                                           >> 0xcU)) 
                                       | (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__FifSig)) 
                                           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                                              >> 0xdU)) 
                                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                                                >> 0xcU)))) 
                                      | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__FifSig) 
                                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                                                >> 0xdU))) 
                                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                                               >> 0xcU)))) 
                                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__FifSig) 
                                         & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                                            >> 0xdU)) 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                                           >> 0xcU)))))) 
              << 0x36U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut 
        = ((0xffbfffffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__FifSig) 
                                      & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                                          >> 0xdU) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                                            >> 0xcU))) 
                                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                                         >> 0xdU) & 
                                        ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029) 
                                         >> 0xcU)))))) 
              << 0x36U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029 
        = ((0x3fdfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029)) 
           | (0x20U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                         << 3U) & ((0xffffffe0U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                                                   << 4U)) 
                                   | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                                      << 5U))) | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                                                   << 4U) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                                                     << 5U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029 
        = ((0x3fbfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029)) 
           | (0x40U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__55__KET____DOT__bi__InData 
                         << 6U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                                    << 2U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                                              << 3U))) 
                       | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                           << 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                                     << 3U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029 
        = ((0x37ffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029)) 
           | (0x800U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                          << 2U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                                     << 3U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                                               << 4U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                            << 3U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                                      << 4U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__ForSig 
        = ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__ForSig)) 
           | (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                            >> 9U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                                          >> 8U))) 
                       & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                          >> 7U)) | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                                          >> 9U)) & 
                                      ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                                       >> 8U)) & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                                                   >> 7U)))) 
                     | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                          >> 9U) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                                       >> 8U))) & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                                                    >> 7U)))) 
                    | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                         >> 9U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                                   >> 8U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                                              >> 7U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__SecSig 
        = ((0xeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__SecSig)) 
           | (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                            >> 2U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                                          >> 1U))) 
                       & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029)) 
                      | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                              >> 2U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                                         >> 1U)) & 
                         (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029)))) 
                     | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                          >> 2U) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                                       >> 1U))) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029)))) 
                    | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                         >> 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                                   >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__SecSig 
        = ((0xdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__SecSig)) 
           | (2U & ((((0x3ffffffeU & ((((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__55__KET____DOT__bi__InData) 
                                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                                              >> 4U))) 
                                       << 1U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                                                 >> 2U))) 
                      | (0x1ffffffeU & ((((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__55__KET____DOT__bi__InData) 
                                          << 1U) & 
                                         ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                                          >> 3U)) & 
                                        ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                                             >> 3U)) 
                                         << 1U)))) 
                     | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__55__KET____DOT__bi__InData 
                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                                >> 4U))) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                                               >> 3U))) 
                        << 1U)) | (0x1ffffffeU & ((
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__55__KET____DOT__bi__InData 
                                                    << 1U) 
                                                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                                                      >> 3U)) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                                                     >> 2U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029 
        = ((0x3dffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029)) 
           | (0x200U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__SecSig) 
                          << 9U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                                     << 3U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                                               << 4U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                            << 3U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                                      << 4U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029 
        = ((0x3bffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029)) 
           | (0x400U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__SecSig) 
                          << 7U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__SecSig) 
                                     << 8U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__SecSig) 
                                               << 9U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__SecSig) 
                            << 8U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__SecSig) 
                                      << 9U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__ThiSig 
        = ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__ThiSig)) 
           | (1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__SecSig)) 
                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                              >> 6U))) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                                          >> 5U)) | 
                      (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__SecSig)) 
                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                           >> 6U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                                         >> 5U)))) 
                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__SecSig) 
                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                               >> 6U))) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                                              >> 5U)))) 
                    | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__SecSig) 
                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                           >> 6U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                                      >> 5U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__ThiSig 
        = ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__ThiSig)) 
           | (2U & ((((0xfffffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__SecSig) 
                                            >> 3U)) 
                                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__SecSig) 
                                              >> 2U))) 
                                       << 1U) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__SecSig))) 
                      | (0x7ffffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__SecSig) 
                                              >> 3U)) 
                                          << 1U) & 
                                         ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__SecSig) 
                                          >> 1U)) & 
                                        ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__SecSig) 
                                             >> 1U)) 
                                         << 1U)))) 
                     | (0x3ffffffeU & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__SecSig) 
                                         >> 2U) & (
                                                   (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__SecSig) 
                                                     >> 2U)) 
                                                   << 1U)) 
                                       & ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__SecSig) 
                                              >> 1U)) 
                                          << 1U)))) 
                    | (0x3ffffffeU & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__SecSig) 
                                        >> 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__SecSig) 
                                                  >> 1U)) 
                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__SecSig))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029 
        = ((0x2fffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029)) 
           | (0x1000U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__ThiSig) 
                           << 0xbU) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__ThiSig) 
                                        << 0xcU) | 
                                       (0xfffff000U 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                                           << 2U)))) 
                         | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__ThiSig) 
                             << 0xcU) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                                         << 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__ForSig 
        = ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__ForSig)) 
           | (2U & ((((0x7ffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__ThiSig) 
                                          >> 1U)) & 
                                      (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__ThiSig))) 
                                     << 1U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                                               >> 9U))) 
                      | ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__ThiSig) 
                               >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__ThiSig)) 
                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                                >> 0xaU))) << 1U)) 
                     | (0xfffffffeU & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__ThiSig) 
                                        & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__ThiSig)) 
                                           << 1U)) 
                                       & ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                                              >> 0xaU)) 
                                          << 1U)))) 
                    | (0x7ffffeU & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__ThiSig) 
                                     & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__ThiSig) 
                                        << 1U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                                                   >> 9U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__FifSig 
        = (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__ForSig) 
                         >> 1U)) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__ForSig))) 
                    & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                       >> 0xbU)) | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__ForSig) 
                                         >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__ForSig)) 
                                    & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                                          >> 0xbU)))) 
                  | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__ForSig) 
                       >> 1U) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__ForSig))) 
                     & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                           >> 0xbU)))) | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__ForSig) 
                                            >> 1U) 
                                           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__ForSig)) 
                                          & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                                             >> 0xbU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029 
        = ((0x1fffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029)) 
           | (0x2000U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__ForSig) 
                           << 0xcU) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__ForSig) 
                                        << 0xdU) | 
                                       (0xffffe000U 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                                           << 2U)))) 
                         | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__ForSig) 
                             << 0xdU) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                                         << 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut 
        = ((0xff7fffffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut) 
           | ((QData)((IData)((1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__FifSig)) 
                                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                                               >> 0xdU))) 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                                           >> 0xcU)) 
                                       | (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__FifSig)) 
                                           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                                              >> 0xdU)) 
                                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                                                >> 0xcU)))) 
                                      | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__FifSig) 
                                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                                                >> 0xdU))) 
                                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                                               >> 0xcU)))) 
                                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__FifSig) 
                                         & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                                            >> 0xdU)) 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                                           >> 0xcU)))))) 
              << 0x37U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut 
        = ((0xff7fffffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__FifSig) 
                                      & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                                          >> 0xdU) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                                            >> 0xcU))) 
                                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                                         >> 0xdU) & 
                                        ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029) 
                                         >> 0xcU)))))) 
              << 0x37U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029 
        = ((0x3fdfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029)) 
           | (0x20U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                         << 3U) & ((0xffffffe0U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                                   << 4U)) 
                                   | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                      << 5U))) | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                                   << 4U) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                                     << 5U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029 
        = ((0x3fbfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029)) 
           | (0x40U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__56__KET____DOT__bi__InData 
                         << 6U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                    << 2U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                              << 3U))) 
                       | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                           << 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                     << 3U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029 
        = ((0x37ffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029)) 
           | (0x800U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                          << 2U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                     << 3U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                               << 4U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                            << 3U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                      << 4U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__ForSig 
        = ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__ForSig)) 
           | (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                            >> 9U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                          >> 8U))) 
                       & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                          >> 7U)) | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                          >> 9U)) & 
                                      ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                       >> 8U)) & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                                   >> 7U)))) 
                     | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                          >> 9U) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                       >> 8U))) & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                                    >> 7U)))) 
                    | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                         >> 9U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                   >> 8U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                              >> 7U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__SecSig 
        = ((0xeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__SecSig)) 
           | (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                            >> 2U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                          >> 1U))) 
                       & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029)) 
                      | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                              >> 2U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                         >> 1U)) & 
                         (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029)))) 
                     | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                          >> 2U) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                       >> 1U))) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029)))) 
                    | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                         >> 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                   >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__SecSig 
        = ((0xdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__SecSig)) 
           | (2U & ((((0x3ffffffeU & ((((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__56__KET____DOT__bi__InData) 
                                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                              >> 4U))) 
                                       << 1U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                                 >> 2U))) 
                      | (0x1ffffffeU & ((((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__56__KET____DOT__bi__InData) 
                                          << 1U) & 
                                         ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                          >> 3U)) & 
                                        ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                             >> 3U)) 
                                         << 1U)))) 
                     | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__56__KET____DOT__bi__InData 
                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                >> 4U))) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                               >> 3U))) 
                        << 1U)) | (0x1ffffffeU & ((
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__56__KET____DOT__bi__InData 
                                                    << 1U) 
                                                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                                      >> 3U)) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                                     >> 2U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029 
        = ((0x3dffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029)) 
           | (0x200U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__SecSig) 
                          << 9U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                     << 3U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                               << 4U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                            << 3U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                      << 4U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029 
        = ((0x3bffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029)) 
           | (0x400U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__SecSig) 
                          << 7U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__SecSig) 
                                     << 8U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__SecSig) 
                                               << 9U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__SecSig) 
                            << 8U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__SecSig) 
                                      << 9U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__ThiSig 
        = ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__ThiSig)) 
           | (1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__SecSig)) 
                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                              >> 6U))) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                          >> 5U)) | 
                      (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__SecSig)) 
                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                           >> 6U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                         >> 5U)))) 
                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__SecSig) 
                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                               >> 6U))) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                              >> 5U)))) 
                    | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__SecSig) 
                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                           >> 6U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                      >> 5U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__ThiSig 
        = ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__ThiSig)) 
           | (2U & ((((0xfffffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__SecSig) 
                                            >> 3U)) 
                                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__SecSig) 
                                              >> 2U))) 
                                       << 1U) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__SecSig))) 
                      | (0x7ffffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__SecSig) 
                                              >> 3U)) 
                                          << 1U) & 
                                         ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__SecSig) 
                                          >> 1U)) & 
                                        ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__SecSig) 
                                             >> 1U)) 
                                         << 1U)))) 
                     | (0x3ffffffeU & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__SecSig) 
                                         >> 2U) & (
                                                   (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__SecSig) 
                                                     >> 2U)) 
                                                   << 1U)) 
                                       & ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__SecSig) 
                                              >> 1U)) 
                                          << 1U)))) 
                    | (0x3ffffffeU & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__SecSig) 
                                        >> 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__SecSig) 
                                                  >> 1U)) 
                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__SecSig))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029 
        = ((0x2fffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029)) 
           | (0x1000U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__ThiSig) 
                           << 0xbU) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__ThiSig) 
                                        << 0xcU) | 
                                       (0xfffff000U 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                           << 2U)))) 
                         | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__ThiSig) 
                             << 0xcU) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                         << 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__ForSig 
        = ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__ForSig)) 
           | (2U & ((((0x7ffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__ThiSig) 
                                          >> 1U)) & 
                                      (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__ThiSig))) 
                                     << 1U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                               >> 9U))) 
                      | ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__ThiSig) 
                               >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__ThiSig)) 
                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                >> 0xaU))) << 1U)) 
                     | (0xfffffffeU & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__ThiSig) 
                                        & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__ThiSig)) 
                                           << 1U)) 
                                       & ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                              >> 0xaU)) 
                                          << 1U)))) 
                    | (0x7ffffeU & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__ThiSig) 
                                     & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__ThiSig) 
                                        << 1U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                                   >> 9U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__FifSig 
        = (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__ForSig) 
                         >> 1U)) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__ForSig))) 
                    & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                       >> 0xbU)) | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__ForSig) 
                                         >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__ForSig)) 
                                    & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                          >> 0xbU)))) 
                  | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__ForSig) 
                       >> 1U) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__ForSig))) 
                     & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                           >> 0xbU)))) | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__ForSig) 
                                            >> 1U) 
                                           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__ForSig)) 
                                          & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                             >> 0xbU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029 
        = ((0x1fffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029)) 
           | (0x2000U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__ForSig) 
                           << 0xcU) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__ForSig) 
                                        << 0xdU) | 
                                       (0xffffe000U 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                           << 2U)))) 
                         | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__ForSig) 
                             << 0xdU) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                         << 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut 
        = ((0xfeffffffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut) 
           | ((QData)((IData)((1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__FifSig)) 
                                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                               >> 0xdU))) 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                           >> 0xcU)) 
                                       | (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__FifSig)) 
                                           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                              >> 0xdU)) 
                                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                                >> 0xcU)))) 
                                      | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__FifSig) 
                                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                                >> 0xdU))) 
                                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                               >> 0xcU)))) 
                                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__FifSig) 
                                         & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                            >> 0xdU)) 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                           >> 0xcU)))))) 
              << 0x38U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut 
        = ((0xfeffffffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__FifSig) 
                                      & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                          >> 0xdU) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                            >> 0xcU))) 
                                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                         >> 0xdU) & 
                                        ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                         >> 0xcU)))))) 
              << 0x38U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029 
        = ((0x3fdfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029)) 
           | (0x20U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                         << 3U) & ((0xffffffe0U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                   << 4U)) 
                                   | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                      << 5U))) | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                   << 4U) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                     << 5U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029 
        = ((0x3fbfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029)) 
           | (0x40U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                         << 6U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                    << 2U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                              << 3U))) 
                       | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                           << 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                     << 3U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029 
        = ((0x37ffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029)) 
           | (0x800U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                          << 2U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                     << 3U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                               << 4U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                            << 3U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                      << 4U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__ForSig 
        = ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__ForSig)) 
           | (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                            >> 9U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                          >> 8U))) 
                       & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                          >> 7U)) | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                          >> 9U)) & 
                                      ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                       >> 8U)) & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                   >> 7U)))) 
                     | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                          >> 9U) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                       >> 8U))) & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                    >> 7U)))) 
                    | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                         >> 9U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                   >> 8U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                              >> 7U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__SecSig 
        = ((0xeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__SecSig)) 
           | (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                            >> 2U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                          >> 1U))) 
                       & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029)) 
                      | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                              >> 2U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                         >> 1U)) & 
                         (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029)))) 
                     | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                          >> 2U) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                       >> 1U))) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029)))) 
                    | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                         >> 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                   >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__SecSig 
        = ((0xdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__SecSig)) 
           | (2U & ((((0x3ffffffeU & ((((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData) 
                                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                              >> 4U))) 
                                       << 1U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                 >> 2U))) 
                      | (0x1ffffffeU & ((((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData) 
                                          << 1U) & 
                                         ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                          >> 3U)) & 
                                        ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                             >> 3U)) 
                                         << 1U)))) 
                     | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                >> 4U))) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                               >> 3U))) 
                        << 1U)) | (0x1ffffffeU & ((
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                    << 1U) 
                                                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                      >> 3U)) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                     >> 2U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029 
        = ((0x3dffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029)) 
           | (0x200U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__SecSig) 
                          << 9U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                     << 3U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                               << 4U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                            << 3U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                      << 4U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029 
        = ((0x3bffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029)) 
           | (0x400U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__SecSig) 
                          << 7U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__SecSig) 
                                     << 8U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__SecSig) 
                                               << 9U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__SecSig) 
                            << 8U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__SecSig) 
                                      << 9U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__ThiSig 
        = ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__ThiSig)) 
           | (1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__SecSig)) 
                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                              >> 6U))) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                          >> 5U)) | 
                      (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__SecSig)) 
                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                           >> 6U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                         >> 5U)))) 
                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__SecSig) 
                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                               >> 6U))) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                              >> 5U)))) 
                    | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__SecSig) 
                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                           >> 6U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                      >> 5U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__ThiSig 
        = ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__ThiSig)) 
           | (2U & ((((0xfffffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__SecSig) 
                                            >> 3U)) 
                                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__SecSig) 
                                              >> 2U))) 
                                       << 1U) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__SecSig))) 
                      | (0x7ffffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__SecSig) 
                                              >> 3U)) 
                                          << 1U) & 
                                         ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__SecSig) 
                                          >> 1U)) & 
                                        ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__SecSig) 
                                             >> 1U)) 
                                         << 1U)))) 
                     | (0x3ffffffeU & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__SecSig) 
                                         >> 2U) & (
                                                   (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__SecSig) 
                                                     >> 2U)) 
                                                   << 1U)) 
                                       & ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__SecSig) 
                                              >> 1U)) 
                                          << 1U)))) 
                    | (0x3ffffffeU & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__SecSig) 
                                        >> 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__SecSig) 
                                                  >> 1U)) 
                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__SecSig))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029 
        = ((0x2fffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029)) 
           | (0x1000U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__ThiSig) 
                           << 0xbU) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__ThiSig) 
                                        << 0xcU) | 
                                       (0xfffff000U 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                           << 2U)))) 
                         | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__ThiSig) 
                             << 0xcU) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                         << 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__ForSig 
        = ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__ForSig)) 
           | (2U & ((((0x7ffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__ThiSig) 
                                          >> 1U)) & 
                                      (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__ThiSig))) 
                                     << 1U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                               >> 9U))) 
                      | ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__ThiSig) 
                               >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__ThiSig)) 
                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                >> 0xaU))) << 1U)) 
                     | (0xfffffffeU & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__ThiSig) 
                                        & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__ThiSig)) 
                                           << 1U)) 
                                       & ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                              >> 0xaU)) 
                                          << 1U)))) 
                    | (0x7ffffeU & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__ThiSig) 
                                     & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__ThiSig) 
                                        << 1U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                   >> 9U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FifSig 
        = (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__ForSig) 
                         >> 1U)) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__ForSig))) 
                    & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                       >> 0xbU)) | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__ForSig) 
                                         >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__ForSig)) 
                                    & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                          >> 0xbU)))) 
                  | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__ForSig) 
                       >> 1U) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__ForSig))) 
                     & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                           >> 0xbU)))) | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__ForSig) 
                                            >> 1U) 
                                           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__ForSig)) 
                                          & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                             >> 0xbU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029 
        = ((0x1fffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029)) 
           | (0x2000U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__ForSig) 
                           << 0xcU) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__ForSig) 
                                        << 0xdU) | 
                                       (0xffffe000U 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                           << 2U)))) 
                         | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__ForSig) 
                             << 0xdU) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                         << 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut 
        = ((0xfdffffffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut) 
           | ((QData)((IData)((1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FifSig)) 
                                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                               >> 0xdU))) 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                           >> 0xcU)) 
                                       | (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FifSig)) 
                                           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                              >> 0xdU)) 
                                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                >> 0xcU)))) 
                                      | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FifSig) 
                                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                >> 0xdU))) 
                                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                               >> 0xcU)))) 
                                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FifSig) 
                                         & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                            >> 0xdU)) 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                           >> 0xcU)))))) 
              << 0x39U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut 
        = ((0xfdffffffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FifSig) 
                                      & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                          >> 0xdU) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                            >> 0xcU))) 
                                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                         >> 0xdU) & 
                                        ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                         >> 0xcU)))))) 
              << 0x39U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029 
        = ((0x3fdfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029)) 
           | (0x20U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                         << 3U) & ((0xffffffe0U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                   << 4U)) 
                                   | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                      << 5U))) | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                   << 4U) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                     << 5U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029 
        = ((0x3fbfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029)) 
           | (0x40U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                         << 6U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                    << 2U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                              << 3U))) 
                       | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                           << 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                     << 3U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029 
        = ((0x37ffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029)) 
           | (0x800U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                          << 2U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                     << 3U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                               << 4U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                            << 3U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                      << 4U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__ForSig 
        = ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__ForSig)) 
           | (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                            >> 9U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                          >> 8U))) 
                       & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                          >> 7U)) | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                          >> 9U)) & 
                                      ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                       >> 8U)) & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                   >> 7U)))) 
                     | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                          >> 9U) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                       >> 8U))) & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                    >> 7U)))) 
                    | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                         >> 9U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                   >> 8U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                              >> 7U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__SecSig 
        = ((0xeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__SecSig)) 
           | (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                            >> 2U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                          >> 1U))) 
                       & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029)) 
                      | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                              >> 2U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                         >> 1U)) & 
                         (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029)))) 
                     | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                          >> 2U) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                       >> 1U))) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029)))) 
                    | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                         >> 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                   >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__SecSig 
        = ((0xdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__SecSig)) 
           | (2U & ((((0x3ffffffeU & ((((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData) 
                                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                              >> 4U))) 
                                       << 1U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                 >> 2U))) 
                      | (0x1ffffffeU & ((((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData) 
                                          << 1U) & 
                                         ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                          >> 3U)) & 
                                        ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                             >> 3U)) 
                                         << 1U)))) 
                     | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                >> 4U))) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                               >> 3U))) 
                        << 1U)) | (0x1ffffffeU & ((
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                    << 1U) 
                                                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                      >> 3U)) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                     >> 2U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029 
        = ((0x3dffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029)) 
           | (0x200U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__SecSig) 
                          << 9U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                     << 3U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                               << 4U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                            << 3U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                      << 4U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029 
        = ((0x3bffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029)) 
           | (0x400U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__SecSig) 
                          << 7U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__SecSig) 
                                     << 8U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__SecSig) 
                                               << 9U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__SecSig) 
                            << 8U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__SecSig) 
                                      << 9U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__ThiSig 
        = ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__ThiSig)) 
           | (1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__SecSig)) 
                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                              >> 6U))) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                          >> 5U)) | 
                      (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__SecSig)) 
                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                           >> 6U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                         >> 5U)))) 
                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__SecSig) 
                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                               >> 6U))) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                              >> 5U)))) 
                    | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__SecSig) 
                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                           >> 6U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                      >> 5U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__ThiSig 
        = ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__ThiSig)) 
           | (2U & ((((0xfffffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__SecSig) 
                                            >> 3U)) 
                                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__SecSig) 
                                              >> 2U))) 
                                       << 1U) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__SecSig))) 
                      | (0x7ffffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__SecSig) 
                                              >> 3U)) 
                                          << 1U) & 
                                         ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__SecSig) 
                                          >> 1U)) & 
                                        ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__SecSig) 
                                             >> 1U)) 
                                         << 1U)))) 
                     | (0x3ffffffeU & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__SecSig) 
                                         >> 2U) & (
                                                   (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__SecSig) 
                                                     >> 2U)) 
                                                   << 1U)) 
                                       & ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__SecSig) 
                                              >> 1U)) 
                                          << 1U)))) 
                    | (0x3ffffffeU & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__SecSig) 
                                        >> 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__SecSig) 
                                                  >> 1U)) 
                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__SecSig))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029 
        = ((0x2fffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029)) 
           | (0x1000U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__ThiSig) 
                           << 0xbU) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__ThiSig) 
                                        << 0xcU) | 
                                       (0xfffff000U 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                           << 2U)))) 
                         | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__ThiSig) 
                             << 0xcU) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                         << 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__ForSig 
        = ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__ForSig)) 
           | (2U & ((((0x7ffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__ThiSig) 
                                          >> 1U)) & 
                                      (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__ThiSig))) 
                                     << 1U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                               >> 9U))) 
                      | ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__ThiSig) 
                               >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__ThiSig)) 
                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                >> 0xaU))) << 1U)) 
                     | (0xfffffffeU & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__ThiSig) 
                                        & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__ThiSig)) 
                                           << 1U)) 
                                       & ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                              >> 0xaU)) 
                                          << 1U)))) 
                    | (0x7ffffeU & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__ThiSig) 
                                     & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__ThiSig) 
                                        << 1U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                   >> 9U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FifSig 
        = (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__ForSig) 
                         >> 1U)) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__ForSig))) 
                    & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                       >> 0xbU)) | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__ForSig) 
                                         >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__ForSig)) 
                                    & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                          >> 0xbU)))) 
                  | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__ForSig) 
                       >> 1U) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__ForSig))) 
                     & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                           >> 0xbU)))) | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__ForSig) 
                                            >> 1U) 
                                           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__ForSig)) 
                                          & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                             >> 0xbU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029 
        = ((0x1fffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029)) 
           | (0x2000U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__ForSig) 
                           << 0xcU) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__ForSig) 
                                        << 0xdU) | 
                                       (0xffffe000U 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                           << 2U)))) 
                         | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__ForSig) 
                             << 0xdU) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                         << 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut 
        = ((0xfbffffffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut) 
           | ((QData)((IData)((1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FifSig)) 
                                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                               >> 0xdU))) 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                           >> 0xcU)) 
                                       | (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FifSig)) 
                                           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                              >> 0xdU)) 
                                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                >> 0xcU)))) 
                                      | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FifSig) 
                                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                >> 0xdU))) 
                                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                               >> 0xcU)))) 
                                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FifSig) 
                                         & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                            >> 0xdU)) 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                           >> 0xcU)))))) 
              << 0x3aU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut 
        = ((0xfbffffffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FifSig) 
                                      & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                          >> 0xdU) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                            >> 0xcU))) 
                                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                         >> 0xdU) & 
                                        ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                         >> 0xcU)))))) 
              << 0x3aU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029 
        = ((0x3fdfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029)) 
           | (0x20U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                         << 3U) & ((0xffffffe0U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                   << 4U)) 
                                   | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                      << 5U))) | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                   << 4U) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                     << 5U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029 
        = ((0x3fbfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029)) 
           | (0x40U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                         << 6U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                    << 2U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                              << 3U))) 
                       | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                           << 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                     << 3U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029 
        = ((0x37ffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029)) 
           | (0x800U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                          << 2U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                     << 3U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                               << 4U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                            << 3U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                      << 4U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__ForSig 
        = ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__ForSig)) 
           | (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                            >> 9U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                          >> 8U))) 
                       & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                          >> 7U)) | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                          >> 9U)) & 
                                      ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                       >> 8U)) & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                   >> 7U)))) 
                     | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                          >> 9U) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                       >> 8U))) & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                    >> 7U)))) 
                    | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                         >> 9U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                   >> 8U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                              >> 7U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig 
        = ((0xeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig)) 
           | (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                            >> 2U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                          >> 1U))) 
                       & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029)) 
                      | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                              >> 2U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                         >> 1U)) & 
                         (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029)))) 
                     | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                          >> 2U) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                       >> 1U))) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029)))) 
                    | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                         >> 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                   >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig 
        = ((0xdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig)) 
           | (2U & ((((0x3ffffffeU & ((((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData) 
                                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                              >> 4U))) 
                                       << 1U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                 >> 2U))) 
                      | (0x1ffffffeU & ((((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData) 
                                          << 1U) & 
                                         ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                          >> 3U)) & 
                                        ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                             >> 3U)) 
                                         << 1U)))) 
                     | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                >> 4U))) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                               >> 3U))) 
                        << 1U)) | (0x1ffffffeU & ((
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                    << 1U) 
                                                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                      >> 3U)) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                     >> 2U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029 
        = ((0x3dffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029)) 
           | (0x200U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig) 
                          << 9U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                     << 3U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                               << 4U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                            << 3U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                      << 4U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029 
        = ((0x3bffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029)) 
           | (0x400U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig) 
                          << 7U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig) 
                                     << 8U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig) 
                                               << 9U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig) 
                            << 8U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig) 
                                      << 9U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__ThiSig 
        = ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__ThiSig)) 
           | (1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig)) 
                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                              >> 6U))) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                          >> 5U)) | 
                      (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig)) 
                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                           >> 6U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                         >> 5U)))) 
                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig) 
                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                               >> 6U))) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                              >> 5U)))) 
                    | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig) 
                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                           >> 6U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                      >> 5U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__ThiSig 
        = ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__ThiSig)) 
           | (2U & ((((0xfffffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig) 
                                            >> 3U)) 
                                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig) 
                                              >> 2U))) 
                                       << 1U) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig))) 
                      | (0x7ffffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig) 
                                              >> 3U)) 
                                          << 1U) & 
                                         ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig) 
                                          >> 1U)) & 
                                        ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig) 
                                             >> 1U)) 
                                         << 1U)))) 
                     | (0x3ffffffeU & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig) 
                                         >> 2U) & (
                                                   (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig) 
                                                     >> 2U)) 
                                                   << 1U)) 
                                       & ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig) 
                                              >> 1U)) 
                                          << 1U)))) 
                    | (0x3ffffffeU & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig) 
                                        >> 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig) 
                                                  >> 1U)) 
                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029 
        = ((0x2fffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029)) 
           | (0x1000U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__ThiSig) 
                           << 0xbU) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__ThiSig) 
                                        << 0xcU) | 
                                       (0xfffff000U 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                           << 2U)))) 
                         | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__ThiSig) 
                             << 0xcU) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                         << 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__ForSig 
        = ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__ForSig)) 
           | (2U & ((((0x7ffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__ThiSig) 
                                          >> 1U)) & 
                                      (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__ThiSig))) 
                                     << 1U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                               >> 9U))) 
                      | ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__ThiSig) 
                               >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__ThiSig)) 
                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                >> 0xaU))) << 1U)) 
                     | (0xfffffffeU & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__ThiSig) 
                                        & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__ThiSig)) 
                                           << 1U)) 
                                       & ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                              >> 0xaU)) 
                                          << 1U)))) 
                    | (0x7ffffeU & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__ThiSig) 
                                     & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__ThiSig) 
                                        << 1U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                   >> 9U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FifSig 
        = (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__ForSig) 
                         >> 1U)) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__ForSig))) 
                    & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                       >> 0xbU)) | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__ForSig) 
                                         >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__ForSig)) 
                                    & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                          >> 0xbU)))) 
                  | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__ForSig) 
                       >> 1U) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__ForSig))) 
                     & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                           >> 0xbU)))) | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__ForSig) 
                                            >> 1U) 
                                           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__ForSig)) 
                                          & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                             >> 0xbU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029 
        = ((0x1fffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029)) 
           | (0x2000U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__ForSig) 
                           << 0xcU) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__ForSig) 
                                        << 0xdU) | 
                                       (0xffffe000U 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                           << 2U)))) 
                         | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__ForSig) 
                             << 0xdU) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                         << 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut 
        = ((0xf7ffffffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut) 
           | ((QData)((IData)((1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FifSig)) 
                                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                               >> 0xdU))) 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                           >> 0xcU)) 
                                       | (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FifSig)) 
                                           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                              >> 0xdU)) 
                                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                >> 0xcU)))) 
                                      | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FifSig) 
                                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                >> 0xdU))) 
                                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                               >> 0xcU)))) 
                                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FifSig) 
                                         & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                            >> 0xdU)) 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                           >> 0xcU)))))) 
              << 0x3bU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut 
        = ((0xf7ffffffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FifSig) 
                                      & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                          >> 0xdU) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                            >> 0xcU))) 
                                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                         >> 0xdU) & 
                                        ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                         >> 0xcU)))))) 
              << 0x3bU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029 
        = ((0x3fdfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029)) 
           | (0x20U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                         << 3U) & ((0xffffffe0U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                   << 4U)) 
                                   | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                      << 5U))) | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                   << 4U) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                     << 5U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029 
        = ((0x37ffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029)) 
           | (0x800U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                          << 2U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                     << 3U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                               << 4U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                            << 3U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                      << 4U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029 
        = ((0x3fbfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029)) 
           | (0x40U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                         << 6U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                    << 2U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                              << 3U))) 
                       | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                           << 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                     << 3U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ForSig 
        = ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ForSig)) 
           | (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                            >> 9U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                          >> 8U))) 
                       & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                          >> 7U)) | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                          >> 9U)) & 
                                      ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                       >> 8U)) & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                   >> 7U)))) 
                     | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                          >> 9U) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                       >> 8U))) & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                    >> 7U)))) 
                    | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                         >> 9U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                   >> 8U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                              >> 7U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig 
        = ((0xeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig)) 
           | (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                            >> 2U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                          >> 1U))) 
                       & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029)) 
                      | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                              >> 2U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                         >> 1U)) & 
                         (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029)))) 
                     | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                          >> 2U) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                       >> 1U))) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029)))) 
                    | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                         >> 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                   >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig 
        = ((0xdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig)) 
           | (2U & ((((0x3ffffffeU & ((((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData) 
                                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                              >> 4U))) 
                                       << 1U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                 >> 2U))) 
                      | (0x1ffffffeU & ((((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData) 
                                          << 1U) & 
                                         ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                          >> 3U)) & 
                                        ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                             >> 3U)) 
                                         << 1U)))) 
                     | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                >> 4U))) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                               >> 3U))) 
                        << 1U)) | (0x1ffffffeU & ((
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                    << 1U) 
                                                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                      >> 3U)) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                     >> 2U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029 
        = ((0x3bffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029)) 
           | (0x400U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig) 
                          << 7U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig) 
                                     << 8U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig) 
                                               << 9U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig) 
                            << 8U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig) 
                                      << 9U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029 
        = ((0x3dffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029)) 
           | (0x200U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig) 
                          << 9U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                     << 3U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                               << 4U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                            << 3U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                      << 4U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ThiSig 
        = ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ThiSig)) 
           | (2U & ((((0xfffffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig) 
                                            >> 3U)) 
                                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig) 
                                              >> 2U))) 
                                       << 1U) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig))) 
                      | (0x7ffffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig) 
                                              >> 3U)) 
                                          << 1U) & 
                                         ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig) 
                                          >> 1U)) & 
                                        ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig) 
                                             >> 1U)) 
                                         << 1U)))) 
                     | (0x3ffffffeU & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig) 
                                         >> 2U) & (
                                                   (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig) 
                                                     >> 2U)) 
                                                   << 1U)) 
                                       & ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig) 
                                              >> 1U)) 
                                          << 1U)))) 
                    | (0x3ffffffeU & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig) 
                                        >> 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig) 
                                                  >> 1U)) 
                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ThiSig 
        = ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ThiSig)) 
           | (1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig)) 
                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                              >> 6U))) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                          >> 5U)) | 
                      (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig)) 
                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                           >> 6U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                         >> 5U)))) 
                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig) 
                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                               >> 6U))) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                              >> 5U)))) 
                    | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig) 
                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                           >> 6U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                      >> 5U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029 
        = ((0x2fffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029)) 
           | (0x1000U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ThiSig) 
                           << 0xbU) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ThiSig) 
                                        << 0xcU) | 
                                       (0xfffff000U 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                           << 2U)))) 
                         | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ThiSig) 
                             << 0xcU) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                         << 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ForSig 
        = ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ForSig)) 
           | (2U & ((((0x7ffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ThiSig) 
                                          >> 1U)) & 
                                      (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ThiSig))) 
                                     << 1U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                               >> 9U))) 
                      | ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ThiSig) 
                               >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ThiSig)) 
                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                >> 0xaU))) << 1U)) 
                     | (0xfffffffeU & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ThiSig) 
                                        & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ThiSig)) 
                                           << 1U)) 
                                       & ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                              >> 0xaU)) 
                                          << 1U)))) 
                    | (0x7ffffeU & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ThiSig) 
                                     & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ThiSig) 
                                        << 1U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                   >> 9U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FifSig 
        = (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ForSig) 
                         >> 1U)) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ForSig))) 
                    & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                       >> 0xbU)) | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ForSig) 
                                         >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ForSig)) 
                                    & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                          >> 0xbU)))) 
                  | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ForSig) 
                       >> 1U) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ForSig))) 
                     & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                           >> 0xbU)))) | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ForSig) 
                                            >> 1U) 
                                           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ForSig)) 
                                          & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                             >> 0xbU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029 
        = ((0x1fffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029)) 
           | (0x2000U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ForSig) 
                           << 0xcU) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ForSig) 
                                        << 0xdU) | 
                                       (0xffffe000U 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                           << 2U)))) 
                         | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ForSig) 
                             << 0xdU) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                         << 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut 
        = ((0xefffffffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut) 
           | ((QData)((IData)((1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FifSig)) 
                                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                               >> 0xdU))) 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                           >> 0xcU)) 
                                       | (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FifSig)) 
                                           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                              >> 0xdU)) 
                                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                >> 0xcU)))) 
                                      | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FifSig) 
                                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                >> 0xdU))) 
                                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                               >> 0xcU)))) 
                                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FifSig) 
                                         & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                            >> 0xdU)) 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                           >> 0xcU)))))) 
              << 0x3cU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut 
        = ((0xefffffffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FifSig) 
                                      & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                          >> 0xdU) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                            >> 0xcU))) 
                                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                         >> 0xdU) & 
                                        ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                         >> 0xcU)))))) 
              << 0x3cU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029 
        = ((0x3fdfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029)) 
           | (0x20U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                         << 3U) & ((0xffffffe0U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                   << 4U)) 
                                   | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                      << 5U))) | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                   << 4U) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                     << 5U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029 
        = ((0x37ffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029)) 
           | (0x800U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                          << 2U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                     << 3U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                               << 4U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                            << 3U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                      << 4U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029 
        = ((0x3fbfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029)) 
           | (0x40U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                         << 6U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                    << 2U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                              << 3U))) 
                       | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                           << 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                     << 3U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ForSig 
        = ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ForSig)) 
           | (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                            >> 9U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                          >> 8U))) 
                       & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                          >> 7U)) | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                          >> 9U)) & 
                                      ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                       >> 8U)) & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                   >> 7U)))) 
                     | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                          >> 9U) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                       >> 8U))) & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                    >> 7U)))) 
                    | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                         >> 9U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                   >> 8U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                              >> 7U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig 
        = ((0xeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig)) 
           | (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                            >> 2U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                          >> 1U))) 
                       & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029)) 
                      | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                              >> 2U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                         >> 1U)) & 
                         (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029)))) 
                     | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                          >> 2U) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                       >> 1U))) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029)))) 
                    | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                         >> 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                   >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig 
        = ((0xdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig)) 
           | (2U & ((((0x3ffffffeU & ((((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData) 
                                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                              >> 4U))) 
                                       << 1U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                 >> 2U))) 
                      | (0x1ffffffeU & ((((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData) 
                                          << 1U) & 
                                         ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                          >> 3U)) & 
                                        ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                             >> 3U)) 
                                         << 1U)))) 
                     | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                >> 4U))) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                               >> 3U))) 
                        << 1U)) | (0x1ffffffeU & ((
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                    << 1U) 
                                                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                      >> 3U)) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                     >> 2U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029 
        = ((0x3bffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029)) 
           | (0x400U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig) 
                          << 7U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig) 
                                     << 8U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig) 
                                               << 9U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig) 
                            << 8U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig) 
                                      << 9U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029 
        = ((0x3dffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029)) 
           | (0x200U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig) 
                          << 9U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                     << 3U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                               << 4U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                            << 3U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                      << 4U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ThiSig 
        = ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ThiSig)) 
           | (2U & ((((0xfffffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig) 
                                            >> 3U)) 
                                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig) 
                                              >> 2U))) 
                                       << 1U) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig))) 
                      | (0x7ffffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig) 
                                              >> 3U)) 
                                          << 1U) & 
                                         ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig) 
                                          >> 1U)) & 
                                        ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig) 
                                             >> 1U)) 
                                         << 1U)))) 
                     | (0x3ffffffeU & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig) 
                                         >> 2U) & (
                                                   (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig) 
                                                     >> 2U)) 
                                                   << 1U)) 
                                       & ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig) 
                                              >> 1U)) 
                                          << 1U)))) 
                    | (0x3ffffffeU & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig) 
                                        >> 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig) 
                                                  >> 1U)) 
                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ThiSig 
        = ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ThiSig)) 
           | (1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig)) 
                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                              >> 6U))) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                          >> 5U)) | 
                      (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig)) 
                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                           >> 6U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                         >> 5U)))) 
                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig) 
                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                               >> 6U))) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                              >> 5U)))) 
                    | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig) 
                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                           >> 6U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                      >> 5U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029 
        = ((0x2fffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029)) 
           | (0x1000U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ThiSig) 
                           << 0xbU) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ThiSig) 
                                        << 0xcU) | 
                                       (0xfffff000U 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                           << 2U)))) 
                         | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ThiSig) 
                             << 0xcU) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                         << 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ForSig 
        = ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ForSig)) 
           | (2U & ((((0x7ffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ThiSig) 
                                          >> 1U)) & 
                                      (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ThiSig))) 
                                     << 1U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                               >> 9U))) 
                      | ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ThiSig) 
                               >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ThiSig)) 
                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                >> 0xaU))) << 1U)) 
                     | (0xfffffffeU & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ThiSig) 
                                        & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ThiSig)) 
                                           << 1U)) 
                                       & ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                              >> 0xaU)) 
                                          << 1U)))) 
                    | (0x7ffffeU & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ThiSig) 
                                     & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ThiSig) 
                                        << 1U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                   >> 9U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FifSig 
        = (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ForSig) 
                         >> 1U)) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ForSig))) 
                    & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                       >> 0xbU)) | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ForSig) 
                                         >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ForSig)) 
                                    & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                          >> 0xbU)))) 
                  | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ForSig) 
                       >> 1U) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ForSig))) 
                     & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                           >> 0xbU)))) | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ForSig) 
                                            >> 1U) 
                                           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ForSig)) 
                                          & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                             >> 0xbU))));
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
}

VL_INLINE_OPT void Vsimu_top::_combo__TOP__28(Vsimu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top::_combo__TOP__28\n"); );
    Vsimu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*127:0*/ __Vtemp846[4];
    WData/*127:0*/ __Vtemp848[4];
    WData/*159:0*/ __Vtemp850[5];
    WData/*159:0*/ __Vtemp860[5];
    WData/*159:0*/ __Vtemp861[5];
    WData/*447:0*/ __Vtemp865[14];
    WData/*95:0*/ __Vtemp874[3];
    WData/*95:0*/ __Vtemp881[3];
    WData/*95:0*/ __Vtemp888[3];
    WData/*95:0*/ __Vtemp895[3];
    WData/*191:0*/ __Vtemp898[6];
    WData/*127:0*/ __Vtemp913[4];
    WData/*127:0*/ __Vtemp920[4];
    WData/*127:0*/ __Vtemp923[4];
    WData/*191:0*/ __Vtemp925[6];
    WData/*95:0*/ __Vtemp932[3];
    WData/*95:0*/ __Vtemp939[3];
    WData/*159:0*/ __Vtemp944[5];
    WData/*159:0*/ __Vtemp946[5];
    WData/*351:0*/ __Vtemp952[11];
    // Body
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[0U] 
        = vlTOPp->ram_rdata;
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NANDtag 
        = ((IData)(vlTOPp->aresetn) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_cmd_valid));
    vlTOPp->simu_top__DOT__soc__DOT__cpu_rvalid = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_rvalid) 
                                                   & ((vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                                       >> 3U) 
                                                      | (~ (IData)(vlTOPp->enable_delay))));
    vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__btn_key_tmp 
        = (((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
            & (0xeU == (IData)(vlTOPp->btn_key_row)))
            ? 1U : (((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                     & (0xdU == (IData)(vlTOPp->btn_key_row)))
                     ? 0x10U : (((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                 & (0xbU == (IData)(vlTOPp->btn_key_row)))
                                 ? 0x100U : (((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                              & (7U 
                                                 == (IData)(vlTOPp->btn_key_row)))
                                              ? 0x1000U
                                              : (((2U 
                                                   == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                  & (0xeU 
                                                     == (IData)(vlTOPp->btn_key_row)))
                                                  ? 2U
                                                  : 
                                                 (((2U 
                                                    == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                   & (0xdU 
                                                      == (IData)(vlTOPp->btn_key_row)))
                                                   ? 0x20U
                                                   : 
                                                  (((2U 
                                                     == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                    & (0xbU 
                                                       == (IData)(vlTOPp->btn_key_row)))
                                                    ? 0x200U
                                                    : 
                                                   (((2U 
                                                      == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                     & (7U 
                                                        == (IData)(vlTOPp->btn_key_row)))
                                                     ? 0x2000U
                                                     : 
                                                    (((3U 
                                                       == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                      & (0xeU 
                                                         == (IData)(vlTOPp->btn_key_row)))
                                                      ? 4U
                                                      : 
                                                     (((3U 
                                                        == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                       & (0xdU 
                                                          == (IData)(vlTOPp->btn_key_row)))
                                                       ? 0x40U
                                                       : 
                                                      (((3U 
                                                         == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                        & (0xbU 
                                                           == (IData)(vlTOPp->btn_key_row)))
                                                        ? 0x400U
                                                        : 
                                                       (((3U 
                                                          == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                         & (7U 
                                                            == (IData)(vlTOPp->btn_key_row)))
                                                         ? 0x4000U
                                                         : 
                                                        (((4U 
                                                           == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                          & (0xeU 
                                                             == (IData)(vlTOPp->btn_key_row)))
                                                          ? 8U
                                                          : 
                                                         (((4U 
                                                            == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                           & (0xdU 
                                                              == (IData)(vlTOPp->btn_key_row)))
                                                           ? 0x80U
                                                           : 
                                                          (((4U 
                                                             == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                            & (0xbU 
                                                               == (IData)(vlTOPp->btn_key_row)))
                                                            ? 0x800U
                                                            : 
                                                           (((4U 
                                                              == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                                             & (7U 
                                                                == (IData)(vlTOPp->btn_key_row)))
                                                             ? 0x8000U
                                                             : 0U))))))))))))))));
    vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__next_state 
        = ((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state))
            ? ((1U & ((vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__key_count 
                       >> 0x13U) & (~ (IData)((0xfU 
                                               == (IData)(vlTOPp->btn_key_row))))))
                ? 1U : 0U) : ((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state))
                               ? ((0xfU == (IData)(vlTOPp->btn_key_row))
                                   ? 2U : 7U) : ((2U 
                                                  == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state))
                                                  ? 
                                                 ((0xfU 
                                                   == (IData)(vlTOPp->btn_key_row))
                                                   ? 3U
                                                   : 7U)
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state))
                                                   ? 
                                                  ((0xfU 
                                                    == (IData)(vlTOPp->btn_key_row))
                                                    ? 4U
                                                    : 7U)
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state))
                                                    ? 
                                                   ((0xfU 
                                                     == (IData)(vlTOPp->btn_key_row))
                                                     ? 0U
                                                     : 7U)
                                                    : 
                                                   ((7U 
                                                     == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state))
                                                     ? 
                                                    (((vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__key_count 
                                                       >> 0x13U) 
                                                      & (0xfU 
                                                         == (IData)(vlTOPp->btn_key_row)))
                                                      ? 0U
                                                      : 7U)
                                                     : 0U))))));
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en 
        = (((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wvalid) 
            & (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_allow_out)) 
           & (IData)(vlTOPp->aresetn));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en 
        = (((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wvalid) 
            & (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_allow_out)) 
           & (IData)(vlTOPp->aresetn));
    vlTOPp->simu_top__DOT__soc__DOT__m0_arvalid = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu_arvalid) 
                                                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_ar) 
                                                      | (~ (IData)(vlTOPp->enable_delay))));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit 
        = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit)) 
           | (1U & (~ (IData)((0U != (0xfU & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit) 
                                              >> 1U)))))));
    vlTOPp->__Vtableidx2 = vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit;
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir 
        = vlTOPp->__Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir
        [vlTOPp->__Vtableidx2];
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int 
        = vlTOPp->__Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int
        [vlTOPp->__Vtableidx2];
    vlTOPp->simu_top__DOT__soc__DOT__m0_arready = 0U;
    if ((1U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
               & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit)))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_arready 
            = (1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready));
    }
    if ((1U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit) 
                  >> 1U)))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_arready 
            = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready) 
                     >> 1U));
    }
    if ((1U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit) 
                  >> 2U)))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_arready 
            = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready) 
                     >> 2U));
    }
    if ((1U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit) 
                  >> 3U)))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_arready 
            = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready) 
                     >> 3U));
    }
    if ((1U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit) 
                  >> 4U)))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_arready 
            = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready) 
                     >> 4U));
    }
    vlTOPp->simu_top__DOT__soc__DOT__cpu_bvalid = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_bvalid) 
                                                   & ((vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                                       >> 2U) 
                                                      | (~ (IData)(vlTOPp->enable_delay))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu_wready = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_wready) 
                                                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_w) 
                                                      | (~ (IData)(vlTOPp->enable_delay))));
    vlTOPp->simu_top__DOT__soc__DOT__m0_wvalid = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu_wvalid) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_w) 
                                                     | (~ (IData)(vlTOPp->enable_delay))));
    vlTOPp->simu_top__DOT__soc__DOT__m0_awvalid = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu_awvalid) 
                                                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_aw) 
                                                      | (~ (IData)(vlTOPp->enable_delay))));
    vlTOPp->simu_top__DOT__soc__DOT__m0_bready = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu_bready) 
                                                  & ((vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                                      >> 2U) 
                                                     | (~ (IData)(vlTOPp->enable_delay))));
    vlTOPp->simu_top__DOT__soc__DOT__m0_rready = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu_bready) 
                                                  & ((vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                                      >> 3U) 
                                                     | (~ (IData)(vlTOPp->enable_delay))));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit 
        = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit)) 
           | (1U & (~ (IData)((0U != (0xfU & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit) 
                                              >> 1U)))))));
    vlTOPp->__Vtableidx1 = vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit;
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir 
        = vlTOPp->__Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir
        [vlTOPp->__Vtableidx1];
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int 
        = vlTOPp->__Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int
        [vlTOPp->__Vtableidx1];
    vlTOPp->simu_top__DOT__soc__DOT__m0_awready = 0U;
    if ((1U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
               & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit)))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_awready 
            = (1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready));
    }
    if ((1U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit) 
                  >> 1U)))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_awready 
            = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready) 
                     >> 1U));
    }
    if ((1U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit) 
                  >> 2U)))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_awready 
            = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready) 
                     >> 2U));
    }
    if ((1U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit) 
                  >> 3U)))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_awready 
            = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready) 
                     >> 3U));
    }
    if ((1U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit) 
                  >> 4U)))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_awready 
            = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready) 
                     >> 4U));
    }
    vlTOPp->simu_top__DOT__soc__DOT__m0_rdata = 0U;
    if ((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_rdata = 
            vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata
            [0U];
    }
    if ((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_rdata = 
            vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata
            [1U];
    }
    if ((2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_rdata = 
            vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata
            [2U];
    }
    if ((3U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_rdata = 
            vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata
            [3U];
    }
    if ((4U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlTOPp->simu_top__DOT__soc__DOT__m0_rdata = 
            vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata
            [4U];
    }
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_valid 
        = ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_rid)) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu_rvalid));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_valid 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_rid) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu_rvalid));
    vlTOPp->ram_wen = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wstrb) 
                       & (- (IData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en))));
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wlast));
    vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wstrb) 
           & (- (IData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en))));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wlast));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound7 
        = (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
            & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit)) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_arvalid));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid 
        = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid)) 
           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound7));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound7 
        = (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
            & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit) 
               >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_arvalid));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid 
        = ((0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound7) 
              << 1U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound7 
        = (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
            & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit) 
               >> 2U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_arvalid));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid 
        = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound7) 
              << 2U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound7 
        = (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
            & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit) 
               >> 3U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_arvalid));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid 
        = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound7) 
              << 3U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound7 
        = (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
            & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit) 
               >> 4U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_arvalid));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid 
        = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound7) 
              << 4U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu_arready = 
        ((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_arready) 
         & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_ar) 
            | (~ (IData)(vlTOPp->enable_delay))));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_dir_ins 
        = (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
            & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_arvalid)) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_arready));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__rd_requst_can_receive 
        = (1U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__read_requst_state)) 
                 & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_wait_enable) 
                       & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu_bvalid) 
                             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu_bready)))))));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound6 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_wvalid) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid 
        = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid)) 
           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound6));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound6 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_wvalid) 
           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit) 
              >> 1U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid 
        = ((0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound6) 
              << 1U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound6 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_wvalid) 
           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit) 
              >> 2U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid 
        = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound6) 
              << 2U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound6 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_wvalid) 
           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit) 
              >> 3U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid 
        = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound6) 
              << 3U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound6 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_wvalid) 
           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit) 
              >> 4U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid 
        = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound6) 
              << 4U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound1 
        = (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
            & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit)) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_awvalid));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid 
        = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid)) 
           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound1));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound1 
        = (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
            & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit) 
               >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_awvalid));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid 
        = ((0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound1) 
              << 1U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound1 
        = (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
            & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit) 
               >> 2U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_awvalid));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid 
        = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound1) 
              << 2U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound1 
        = (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
            & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit) 
               >> 3U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_awvalid));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid 
        = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound1) 
              << 3U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound1 
        = (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
            & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit) 
               >> 4U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_awvalid));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid 
        = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid)) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound1) 
              << 4U));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
        = (0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready));
    if ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound4 
            = vlTOPp->simu_top__DOT__soc__DOT__m0_bready;
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
            = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready)) 
               | (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound4));
    }
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
        = (0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready));
    if ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound4 
            = vlTOPp->simu_top__DOT__soc__DOT__m0_bready;
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
            = ((0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready)) 
               | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound4) 
                  << 1U));
    }
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
        = (0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready));
    if ((4U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound4 
            = vlTOPp->simu_top__DOT__soc__DOT__m0_bready;
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
            = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready)) 
               | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound4) 
                  << 2U));
    }
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
        = (0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready));
    if ((8U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound4 
            = vlTOPp->simu_top__DOT__soc__DOT__m0_bready;
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
            = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready)) 
               | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound4) 
                  << 3U));
    }
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
        = (0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready));
    if ((0x10U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit))) {
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound4 
            = vlTOPp->simu_top__DOT__soc__DOT__m0_bready;
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready 
            = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready)) 
               | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound4) 
                  << 4U));
    }
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
        = (0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready));
    if ((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound9 
            = vlTOPp->simu_top__DOT__soc__DOT__m0_rready;
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
            = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready)) 
               | (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound9));
    }
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
        = (0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready));
    if ((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound9 
            = vlTOPp->simu_top__DOT__soc__DOT__m0_rready;
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
            = ((0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready)) 
               | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound9) 
                  << 1U));
    }
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
        = (0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready));
    if ((2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound9 
            = vlTOPp->simu_top__DOT__soc__DOT__m0_rready;
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
            = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready)) 
               | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound9) 
                  << 2U));
    }
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
        = (0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready));
    if ((3U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound9 
            = vlTOPp->simu_top__DOT__soc__DOT__m0_rready;
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
            = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready)) 
               | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound9) 
                  << 3U));
    }
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
        = (0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready));
    if ((4U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir))) {
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound9 
            = vlTOPp->simu_top__DOT__soc__DOT__m0_rready;
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready 
            = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready)) 
               | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound9) 
                  << 4U));
    }
    vlTOPp->simu_top__DOT__soc__DOT__cpu_awready = 
        ((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_awready) 
         & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_aw) 
            | (~ (IData)(vlTOPp->enable_delay))));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_dir_ins 
        = (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
            & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_awvalid)) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_awready));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_dina 
        = ((- (IData)((0x10U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)))) 
           & vlTOPp->simu_top__DOT__soc__DOT__m0_rdata);
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_dina 
        = (((- (IData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_state))) 
            & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_wdata) 
           | ((- (IData)((0x10U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state)))) 
              & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_op) 
                  & ((3U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_offset) 
                            >> 2U)) == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_ret_num)))
                  ? ((0xff000000U & (((8U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wstrb))
                                       ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wdata 
                                          >> 0x18U)
                                       : (vlTOPp->simu_top__DOT__soc__DOT__m0_rdata 
                                          >> 0x18U)) 
                                     << 0x18U)) | (
                                                   (0xff0000U 
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
                  : vlTOPp->simu_top__DOT__soc__DOT__m0_rdata)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_rdata 
        = (((- (IData)((2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state)))) 
            & (((- (IData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_hit))) 
                & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_data[
                (3U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_offset) 
                       >> 2U))]) | ((- (IData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_hit))) 
                                    & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_data[
                                    (3U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_offset) 
                                           >> 2U))]))) 
           | ((- (IData)((0x10U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state)))) 
              & vlTOPp->simu_top__DOT__soc__DOT__m0_rdata));
    __Vtemp846[0U] = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__output_buffer;
    __Vtemp846[1U] = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__output_buffer;
    __Vtemp846[2U] = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__output_buffer)) 
                               << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__output_buffer))));
    __Vtemp846[3U] = (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__output_buffer)) 
                                << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__output_buffer))) 
                              >> 0x20U));
    __Vtemp848[0U] = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__output_buffer;
    __Vtemp848[1U] = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__output_buffer;
    __Vtemp848[2U] = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__output_buffer)) 
                               << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__output_buffer))));
    __Vtemp848[3U] = (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__output_buffer)) 
                                << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__output_buffer))) 
                              >> 0x20U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_rdata 
        = (((- (IData)((2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)))) 
            & (((- (IData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_hit))) 
                & __Vtemp846[(3U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_offset) 
                                    >> 2U))]) | ((- (IData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_hit))) 
                                                 & __Vtemp848[
                                                 (3U 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_offset) 
                                                     >> 2U))]))) 
           | ((- (IData)((0x10U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)))) 
              & vlTOPp->simu_top__DOT__soc__DOT__m0_rdata));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__tagv_wea_en 
        = ((0x10U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)) 
           & (((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_valid) 
                 & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_last)) 
                | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode0)) 
               | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode1)) 
              | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode2_hit_wr)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_wr_en 
        = ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__miss_buffer_replace_way)) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_valid));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_wr_en 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__miss_buffer_replace_way) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_valid));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_data_ok 
        = (((2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)) 
            & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cache_hit) 
               | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_tlb_excp_cancel_req))) 
           | (((0x10U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)) 
               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_valid) 
                  & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__miss_buffer_ret_num) 
                      == (3U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_offset) 
                                >> 2U))) | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_uncache_en)))) 
              & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_icacop))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__tagv_wea_en 
        = ((0x10U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state)) 
           & (((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_valid) 
                 & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_last)) 
                | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode0)) 
               | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode1)) 
              | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode2_hit_wr)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_wr_en 
        = ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_replace_way)) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_valid));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_wr_en 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_replace_way) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_valid));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_data_ok 
        = ((((2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state)) 
             & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cache_hit) 
                 | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_op)) 
                | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_tlb_excp_cancel_req))) 
            | ((0x10U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state)) 
               & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_op)) 
                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_valid) 
                     & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_ret_num) 
                         == (3U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_offset) 
                                   >> 2U))) | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_uncache_en)))))) 
           & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_preld) 
                 | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_dcacop))));
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_pop 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid));
    vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__write_timer 
        = ((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
           & (0xe000U == (0xffffU & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)));
    vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__write_uart_valid 
        = ((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
           & (0xff10U == (0xffffU & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_pop 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push 
        = (1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                  >> 3U) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid))));
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_push 
        = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                 & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid))));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_go 
        = (((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
            >> 3U) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_wready));
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_go 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__s0_wready));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_cpu 
        = (1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr) 
                   | (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd)) 
                  | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                     >> 2U)) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                >> 2U)));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_push 
        = (1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                  >> 3U) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid))));
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_push 
        = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                 & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid))));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop 
        = (((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
            >> 3U) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid));
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm_nxt 
        = ((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm))
            ? ((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                        | (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid)) 
                       >> 2U) & ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr) 
                                     | (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd))) 
                                 & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)))))
                ? 2U : 1U) : ((2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm))
                               ? ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr)
                                   ? 8U : ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd)
                                            ? 8U : 2U))
                               : ((8U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm))
                                   ? (((((8U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm)) 
                                         & (IData)(vlTOPp->simu_top__DOT__soc__DOT__apb_s_rlast)) 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                           >> 2U)) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__apb_s_bvalid) 
                                          & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                             >> 2U)))
                                       ? 1U : 8U) : 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_valid) 
           & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
               >> 3U) | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rvalid))));
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_en 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid) 
           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
              | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rvalid))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_rdata 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__data_buff_enable)
            ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__data_rd_buff
            : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_rdata);
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_tagv_wea 
        = ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__miss_buffer_replace_way)) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__tagv_wea_en));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_tagv_wea 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__miss_buffer_replace_way) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__tagv_wea_en));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_wea 
        = (0xfU & (- (IData)(((0x10U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)) 
                              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_wr_en) 
                                 & (0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__miss_buffer_ret_num)))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1_wea 
        = (0xfU & (- (IData)(((0x10U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)) 
                              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_wr_en) 
                                 & (1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__miss_buffer_ret_num)))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2_wea 
        = (0xfU & (- (IData)(((0x10U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)) 
                              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_wr_en) 
                                 & (2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__miss_buffer_ret_num)))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3_wea 
        = (0xfU & (- (IData)(((0x10U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)) 
                              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_wr_en) 
                                 & (3U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__miss_buffer_ret_num)))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0_wea 
        = (0xfU & (- (IData)(((0x10U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)) 
                              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_wr_en) 
                                 & (0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__miss_buffer_ret_num)))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1_wea 
        = (0xfU & (- (IData)(((0x10U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)) 
                              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_wr_en) 
                                 & (1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__miss_buffer_ret_num)))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2_wea 
        = (0xfU & (- (IData)(((0x10U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)) 
                              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_wr_en) 
                                 & (2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__miss_buffer_ret_num)))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3_wea 
        = (0xfU & (- (IData)(((0x10U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)) 
                              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_wr_en) 
                                 & (3U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__miss_buffer_ret_num)))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_ready_go 
        = (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_data_ok) 
            | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__inst_buff_enable)) 
           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__excp));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv_wea 
        = ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_replace_way)) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__tagv_wea_en));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv_wea 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_replace_way) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__tagv_wea_en));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_wea 
        = (0xfU & (((- (IData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__wr_match_way0_bank0))) 
                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_wstrb)) 
                   | (- (IData)(((0x10U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state)) 
                                 & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_wr_en) 
                                    & (0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_ret_num))))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1_wea 
        = (0xfU & (((- (IData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__wr_match_way0_bank1))) 
                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_wstrb)) 
                   | (- (IData)(((0x10U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state)) 
                                 & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_wr_en) 
                                    & (1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_ret_num))))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2_wea 
        = (0xfU & (((- (IData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__wr_match_way0_bank2))) 
                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_wstrb)) 
                   | (- (IData)(((0x10U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state)) 
                                 & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_wr_en) 
                                    & (2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_ret_num))))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3_wea 
        = (0xfU & (((- (IData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__wr_match_way0_bank3))) 
                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_wstrb)) 
                   | (- (IData)(((0x10U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state)) 
                                 & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_wr_en) 
                                    & (3U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_ret_num))))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0_wea 
        = (0xfU & (((- (IData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__wr_match_way1_bank0))) 
                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_wstrb)) 
                   | (- (IData)(((0x10U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state)) 
                                 & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_wr_en) 
                                    & (0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_ret_num))))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1_wea 
        = (0xfU & (((- (IData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__wr_match_way1_bank1))) 
                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_wstrb)) 
                   | (- (IData)(((0x10U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state)) 
                                 & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_wr_en) 
                                    & (1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_ret_num))))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2_wea 
        = (0xfU & (((- (IData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__wr_match_way1_bank2))) 
                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_wstrb)) 
                   | (- (IData)(((0x10U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state)) 
                                 & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_wr_en) 
                                    & (2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_ret_num))))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3_wea 
        = (0xfU & (((- (IData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__wr_match_way1_bank3))) 
                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_wstrb)) 
                   | (- (IData)(((0x10U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state)) 
                                 & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_wr_en) 
                                    & (3U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_ret_num))))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_ready_go 
        = (1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_data_ok) 
                   | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__data_buff_enable)) 
                  | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__access_mem))) 
                 | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp)));
    vlTOPp->write_uart_valid = vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__write_uart_valid;
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_push 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_push) 
           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) 
              | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_valid))));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_push 
        = ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_push) 
             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_valid)) 
            & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop))) 
           & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid)));
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_push 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_push) 
           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) 
              | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_valid))));
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_push 
        = ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_push) 
             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_valid)) 
            & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop))) 
           & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid)));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_pop 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_push 
        = ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) 
             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid)) 
            & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop))) 
           & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid)));
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_pop 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid));
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_push 
        = ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) 
             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid)) 
            & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop))) 
           & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid)));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen_last));
    vlTOPp->ram_ren = vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_en;
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_en) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__mem_byteLoaded 
        = (0xffU & (((((- (IData)((0U == (3U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[1U])))) 
                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_rdata) 
                      | ((- (IData)((1U == (3U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[1U])))) 
                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_rdata 
                            >> 8U))) | ((- (IData)(
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[1U])))) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_rdata 
                                           >> 0x10U))) 
                    | ((- (IData)((3U == (3U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[1U])))) 
                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_rdata 
                          >> 0x18U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__mem_halfLoaded 
        = (0xffffU & (((- (IData)((0U == (3U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[1U])))) 
                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_rdata) 
                      | ((- (IData)((2U == (3U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[1U])))) 
                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_rdata 
                            >> 0x10U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fs_to_ds_valid 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_valid) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_ready_go));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_allowin 
        = (1U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_valid)) 
                 | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_ready_go)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_valid 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_valid) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_ready_go));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_pop 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_push 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push) 
           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop) 
              | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_valid))));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_push 
        = ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push) 
             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_valid)) 
            & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop))) 
           & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid)));
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_pop 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid));
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_push 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_push) 
           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop) 
              | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid))));
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_push 
        = ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_push) 
             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid)) 
            & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop))) 
           & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid)));
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
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__dcache_req_or_inst_en 
        = (((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_valid) 
              & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__excp))) 
             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_allowin)) 
            & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__flush_sign))) 
           & (~ ((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp) 
                     | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                        >> 0xeU)) | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[3U] 
                                      >> 0x1dU) | (
                                                   ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                     >> 8U) 
                                                    | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                       >> 9U)) 
                                                   & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp))))) 
                   | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                      >> 0xeU)) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                   >> 0x16U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_valid))));
    __Vtemp850[0U] = (IData)((((QData)((IData)((1U 
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
    __Vtemp850[1U] = ((0xffff8000U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[7U] 
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
    __Vtemp860[2U] = ((0xffffff00U & ((IData)((((QData)((IData)(
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
    __Vtemp860[3U] = ((0xffU & ((IData)((((QData)((IData)(
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
    __Vtemp861[4U] = ((0x100U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
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
    __Vtemp865[9U] = ((0x7ffU & ((0x7f8U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[9U] 
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
    __Vtemp865[0xaU] = ((0x7ffU & ((0x7f8U & ((IData)(
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
    __Vtemp865[0xbU] = ((0x7ffU & ((7U & ((IData)((
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
        = __Vtemp860[2U];
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[3U] 
        = __Vtemp860[3U];
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[4U] 
        = ((0xfffffe00U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[6U] 
                            << 0x12U) | (0x3fe00U & 
                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                          >> 0xeU)))) 
           | __Vtemp861[4U]);
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[5U] 
        = ((0xfffff800U & (__Vtemp850[0U] << 0xbU)) 
           | ((0xfffffc00U & ((IData)((0U != vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1)) 
                              << 0xaU)) | ((0x200U 
                                            & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                               >> 2U)) 
                                           | (0x1ffU 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[6U] 
                                                 >> 0xeU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[6U] 
        = ((0x7ffU & (__Vtemp850[0U] >> 0x15U)) | (0xfffff800U 
                                                   & (__Vtemp850[1U] 
                                                      << 0xbU)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[7U] 
        = ((0x7ffU & (__Vtemp850[1U] >> 0x15U)) | (0xfffff800U 
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
        = __Vtemp865[9U];
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[0xaU] 
        = __Vtemp865[0xaU];
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[0xbU] 
        = __Vtemp865[0xbU];
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
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcacop_op_en 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__dcacop_inst) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__dcache_req_or_inst_en));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_valid 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__access_mem) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__dcache_req_or_inst_en));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__preld_en 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__preld_inst) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__dcache_req_or_inst_en));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icacop_op_en 
        = (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
             >> 5U) & (0U == (7U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U]))) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__dcache_req_or_inst_en));
    if (((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_raddr2) 
           == (0x1fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                                >> 0x20U)))) & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                                                        >> 0x25U))) 
         & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rkd))) {
        __Vtemp874[0U] = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus)) 
                                   << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus))));
        __Vtemp874[1U] = (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus)) 
                                    << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus))) 
                                  >> 0x20U));
    } else {
        __Vtemp874[0U] = (((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_raddr2) 
                             == (0x1fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                                  >> 0x20U)))) 
                            & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                       >> 0x25U))) 
                           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rkd))
                           ? (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus)) 
                                       << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2))))
                           : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2);
        __Vtemp874[1U] = (((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_raddr2) 
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
        __Vtemp881[0U] = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus)) 
                                   << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus))));
        __Vtemp881[1U] = (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus)) 
                                    << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus))) 
                                  >> 0x20U));
        __Vtemp881[2U] = (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                                        >> 0x26U)));
    } else {
        __Vtemp881[0U] = (((((0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
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
        __Vtemp881[1U] = (((((0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
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
        __Vtemp881[2U] = (((((0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
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
                        | __Vtemp881[2U]) | (((((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
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
        __Vtemp888[0U] = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus)) 
                                   << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus))));
        __Vtemp888[1U] = (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus)) 
                                    << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus))) 
                                  >> 0x20U));
    } else {
        __Vtemp888[0U] = (((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_raddr2) 
                             == (0x1fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                                  >> 0x20U)))) 
                            & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                       >> 0x25U))) 
                           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rkd))
                           ? (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus)) 
                                       << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2))))
                           : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2);
        __Vtemp888[1U] = (((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_raddr2) 
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
        = __Vtemp888[0U];
    if (((((0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                      << 0x1bU) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                   >> 5U))) == (0x1fU 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                                                           >> 0x20U)))) 
          & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                     >> 0x25U))) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rj))) {
        __Vtemp895[0U] = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus)) 
                                   << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus))));
        __Vtemp895[1U] = (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus)) 
                                    << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus))) 
                                  >> 0x20U));
        __Vtemp895[2U] = (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                                        >> 0x26U)));
    } else {
        __Vtemp895[0U] = (((((0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
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
        __Vtemp895[1U] = (((((0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
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
        __Vtemp895[2U] = (((((0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
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
        = __Vtemp895[0U];
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__req_or_inst_valid 
        = (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_valid) 
            | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcacop_op_en)) 
           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__preld_en));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch 
        = (1U & (((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_valid) 
                    | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                       >> 5U)) | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__preld_en)) 
                  & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_addr_ok)) 
                 | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                    >> 0x1eU)));
    __Vtemp898[0U] = (IData)((((QData)((IData)((1U 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                                   >> 0xbU)))) 
                               << 0x2dU) | (((QData)((IData)(
                                                             (1U 
                                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                                                 >> 5U)))) 
                                             << 0x2cU) 
                                            | (((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__preld_inst)) 
                                                << 0x2bU) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                                                       >> 0xaU)))) 
                                                   << 0x2aU) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                                                          >> 9U)))) 
                                                      << 0x29U) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                                                             >> 8U)))) 
                                                         << 0x28U) 
                                                        | (((QData)((IData)(
                                                                            ((0x80000000U 
                                                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                                                                << 0x18U)) 
                                                                             | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icacop_op_en) 
                                                                                << 0x1eU) 
                                                                                | ((0x20000000U 
                                                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                                                                << 0x19U)) 
                                                                                | ((0x1ffffc00U 
                                                                                & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U] 
                                                                                << 0x1dU) 
                                                                                | (0x1ffffc00U 
                                                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U] 
                                                                                >> 3U)))) 
                                                                                | (0x3ffU 
                                                                                & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U]))))))) 
                                                            << 8U) 
                                                           | (QData)((IData)(
                                                                             ((0x80U 
                                                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                                                                << 4U)) 
                                                                              | ((0x40U 
                                                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                                                                << 4U)) 
                                                                                | ((0x20U 
                                                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                                                                << 4U)) 
                                                                                | ((0x10U 
                                                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                                                                >> 0x1cU)) 
                                                                                | ((4U 
                                                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                                                                >> 0x1cU)) 
                                                                                | ((2U 
                                                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                                                >> 4U)) 
                                                                                | (1U 
                                                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                                                                >> 0x1dU)))))))))))))))))));
    __Vtemp898[1U] = ((0xffffc000U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_alu_result 
                                      << 0xeU)) | (IData)(
                                                          ((((QData)((IData)(
                                                                             (1U 
                                                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                                                                >> 0xbU)))) 
                                                             << 0x2dU) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                                                                >> 5U)))) 
                                                                << 0x2cU) 
                                                               | (((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__preld_inst)) 
                                                                   << 0x2bU) 
                                                                  | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                                                                >> 0xaU)))) 
                                                                      << 0x2aU) 
                                                                     | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                                                                >> 9U)))) 
                                                                         << 0x29U) 
                                                                        | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                                                                >> 8U)))) 
                                                                            << 0x28U) 
                                                                           | (((QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                                                                << 0x18U)) 
                                                                                | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icacop_op_en) 
                                                                                << 0x1eU) 
                                                                                | ((0x20000000U 
                                                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                                                                << 0x19U)) 
                                                                                | ((0x1ffffc00U 
                                                                                & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U] 
                                                                                << 0x1dU) 
                                                                                | (0x1ffffc00U 
                                                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U] 
                                                                                >> 3U)))) 
                                                                                | (0x3ffU 
                                                                                & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U]))))))) 
                                                                               << 8U) 
                                                                              | (QData)((IData)(
                                                                                ((0x80U 
                                                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                                                                << 4U)) 
                                                                                | ((0x40U 
                                                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                                                                << 4U)) 
                                                                                | ((0x20U 
                                                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                                                                << 4U)) 
                                                                                | ((0x10U 
                                                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                                                                >> 0x1cU)) 
                                                                                | ((4U 
                                                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                                                                >> 0x1cU)) 
                                                                                | ((2U 
                                                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                                                >> 4U)) 
                                                                                | (1U 
                                                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                                                                >> 0x1dU)))))))))))))))))) 
                                                           >> 0x20U)));
    __Vtemp913[2U] = ((0xffff8000U & (((0x40000U & 
                                        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U])
                                        ? ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U] 
                                            & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]) 
                                           | ((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U]) 
                                              & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                                  << 0x1eU) 
                                                 | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[5U] 
                                                    >> 2U))))
                                        : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]) 
                                      << 0xfU)) | (
                                                   (0x4000U 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[5U] 
                                                       << 0xdU)) 
                                                   | ((0xffffe000U 
                                                       & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__excp) 
                                                          << 0xdU)) 
                                                      | ((0x1800U 
                                                          & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[5U] 
                                                              << 0xdU) 
                                                             | (0x1800U 
                                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                                   >> 0x13U)))) 
                                                         | ((0x780U 
                                                             & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[5U] 
                                                                 << 0xdU) 
                                                                | (0x1f80U 
                                                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                                      >> 0x13U)))) 
                                                            | ((0x40U 
                                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                                   >> 4U)) 
                                                               | ((0x20U 
                                                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                                      >> 1U)) 
                                                                  | (0x1fU 
                                                                     & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U]))))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ms_bus[0U] 
        = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__exe_result)) 
                    << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[0U]))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ms_bus[1U] 
        = (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__exe_result)) 
                     << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[0U]))) 
                   >> 0x20U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ms_bus[2U] 
        = __Vtemp913[2U];
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ms_bus[3U] 
        = ((0xc0000000U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                           << 0xbU)) | ((0x20000000U 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                            << 0xcU)) 
                                        | ((0x1fff8000U 
                                            & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                               << 0xcU)) 
                                           | (0x7fffU 
                                              & (((0x40000U 
                                                   & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U])
                                                   ? 
                                                  ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U] 
                                                    & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]) 
                                                   | ((~ 
                                                       vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U]) 
                                                      & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                                          << 0x1eU) 
                                                         | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[5U] 
                                                            >> 2U))))
                                                   : 
                                                  vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]) 
                                                 >> 0x11U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ms_bus[4U] 
        = ((0xfffffe00U & (__Vtemp898[0U] << 9U)) | 
           ((0x100U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                       >> 0x14U)) | (0x3fffffffU & 
                                     ((0x3fffff80U 
                                       & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__excp_ale) 
                                          << 7U)) | 
                                      (0x7fU & ((0x3ffff800U 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                                    << 0xbU)) 
                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                                   >> 0x15U)))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ms_bus[5U] 
        = ((0x1ffU & (__Vtemp898[0U] >> 0x17U)) | (0xfffffe00U 
                                                   & (__Vtemp898[1U] 
                                                      << 9U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ms_bus[6U] 
        = ((0x1ffU & (__Vtemp898[1U] >> 0x17U)) | (0xfffffe00U 
                                                   & ((0x7ffe00U 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_alu_result 
                                                          >> 9U)) 
                                                      | (0xff800000U 
                                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                                            << 0xbU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ms_bus[7U] 
        = ((0x1ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                      >> 0x15U)) | (0xfffffe00U & (
                                                   (0x7ffe00U 
                                                    & ((0x7ff800U 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[8U] 
                                                           << 0xbU)) 
                                                       | (0x600U 
                                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                                             >> 0x15U)))) 
                                                   | (0xff800000U 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[8U] 
                                                         << 0xbU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ms_bus[8U] 
        = ((0x1ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[8U] 
                      >> 0x15U)) | (0xfffffe00U & (
                                                   (0x7ffe00U 
                                                    & ((0x7ff800U 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[9U] 
                                                           << 0xbU)) 
                                                       | (0x600U 
                                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[8U] 
                                                             >> 0x15U)))) 
                                                   | (0xff800000U 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[9U] 
                                                         << 0xbU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ms_bus[9U] 
        = ((0x1ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[9U] 
                      >> 0x15U)) | (0xfffffe00U & (
                                                   (0xff000000U 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[0xaU] 
                                                       << 0xbU)) 
                                                   | ((0x800000U 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[0xaU] 
                                                          << 0xbU)) 
                                                      | (0x7ffe00U 
                                                         & ((0x7ff800U 
                                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[0xaU] 
                                                                << 0xbU)) 
                                                            | (0x600U 
                                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[9U] 
                                                                  >> 0x15U))))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ms_bus[0xaU] 
        = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr;
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ms_bus[0xbU] 
        = ((0x1ffU & ((0x100U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_wdata 
                                 << 8U)) | (0xffU & 
                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[0xaU] 
                                             >> 0x15U)))) 
           | (0xfffffe00U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_wdata 
                             << 8U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ms_bus[0xcU] 
        = ((0x1ffU & ((0x100U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[0xaU] 
                                 >> 0x15U)) | (0xffU 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_wdata 
                                                  >> 0x18U)))) 
           | (0xfffffe00U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[5U] 
                             << 7U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ms_bus[0xdU] 
        = (0x1ffU & ((0x180U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                << 7U)) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[5U] 
                                           >> 0x19U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_addr_ok 
        = (((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)) 
            | ((2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)) 
               & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cache_hit))) 
           & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icacop_op_en)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_ready_go 
        = (1U & (((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_div_enable) 
                        & (0xffU != (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__count)))) 
                    & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__dcache_req_or_inst_en) 
                        & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_addr_ok)) 
                       | (~ (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__access_mem) 
                              | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__dcacop_inst)) 
                             | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__preld_inst))))) 
                   & (~ ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                          >> 0x1eU) & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[3U] 
                                         >> 0x1dU) 
                                        & (0x11U == 
                                           (0x3fffU 
                                            & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                << 0x11U) 
                                               | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[3U] 
                                                  >> 0xfU))))) 
                                       & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_valid))))) 
                  & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icacop_op_en) 
                        & (1U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))))) 
                 | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__excp)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_valid 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_valid) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_ready_go));
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
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_delay 
        = (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_sign) 
            & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_addr_ok))) 
           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__idle_flush));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_go_dirt 
        = (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_sign) 
            & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_addr_ok)) 
           & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__idle_flush)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ms_valid 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_valid) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_ready_go));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_allowin 
        = (1U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_valid)) 
                 | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_ready_go) 
                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_allowin))));
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
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ds_allowin 
        = (1U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_valid)) 
                 | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_ready_go) 
                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_allowin))));
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
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb_operate_en 
        = (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_valid) 
            & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ds_allowin)) 
           & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                 >> 4U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_allowin 
        = (1U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_valid)) 
                 | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_ready_go) 
                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ds_allowin))));
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
    __Vtemp920[0U] = ((0xffffc000U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
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
    __Vtemp923[3U] = ((0xff800000U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__llbit) 
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
    __Vtemp925[0U] = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sc_w)) 
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
    __Vtemp925[1U] = (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sc_w)) 
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
        __Vtemp932[0U] = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus)) 
                                   << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus))));
        __Vtemp932[1U] = (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus)) 
                                    << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus))) 
                                  >> 0x20U));
        __Vtemp932[2U] = (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                                        >> 0x26U)));
    } else {
        __Vtemp932[0U] = (((((0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
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
        __Vtemp932[1U] = (((((0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
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
        __Vtemp932[2U] = (((((0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
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
        __Vtemp939[0U] = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus)) 
                                   << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus))));
        __Vtemp939[1U] = (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus)) 
                                    << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus))) 
                                  >> 0x20U));
    } else {
        __Vtemp939[0U] = (((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_raddr2) 
                             == (0x1fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                                  >> 0x20U)))) 
                            & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                       >> 0x25U))) 
                           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rkd))
                           ? (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus)) 
                                       << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2))))
                           : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2);
        __Vtemp939[1U] = (((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_raddr2) 
                             == (0x1fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                                  >> 0x20U)))) 
                            & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                       >> 0x25U))) 
                           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rkd))
                           ? (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus)) 
                                        << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2))) 
                                      >> 0x20U)) : (IData)((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2))));
    }
    __Vtemp944[4U] = ((0x40U & ((((((((((((((((((((
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
    __Vtemp946[4U] = ((0xffffff00U & ((((((((((((((
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
                                                 | __Vtemp944[4U]));
    __Vtemp952[4U] = ((0xc0000000U & (__Vtemp925[0U] 
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
                                 | __Vtemp946[4U]))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_bus[0U] 
        = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[0U];
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_bus[1U] 
        = __Vtemp939[1U];
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_bus[2U] 
        = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_imm)) 
                    << 0x20U) | (QData)((IData)(__Vtemp932[1U]))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_bus[3U] 
        = (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_imm)) 
                     << 0x20U) | (QData)((IData)(__Vtemp932[1U]))) 
                   >> 0x20U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_bus[4U] 
        = __Vtemp952[4U];
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_bus[5U] 
        = ((0x3fffffffU & (__Vtemp925[0U] >> 2U)) | 
           (0xc0000000U & (__Vtemp925[1U] << 0x1eU)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_bus[6U] 
        = ((0x3fffffffU & (__Vtemp925[1U] >> 2U)) | 
           (0xc0000000U & (__Vtemp920[0U] << 0x1eU)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_bus[7U] 
        = ((0x3fffffffU & (__Vtemp920[0U] >> 2U)) | 
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
           | (0xc0000000U & (__Vtemp923[3U] << 0x1eU)));
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
                          | (__Vtemp923[3U] >> 2U)));
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
