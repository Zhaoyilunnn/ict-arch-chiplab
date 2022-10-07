// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimu_top.h for the primary calling header

#include "Vsimu_top.h"
#include "Vsimu_top__Syms.h"

#include "verilated_dpi.h"

void Vsimu_top::_settle__TOP__5(Vsimu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top::_settle__TOP__5\n"); );
    Vsimu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02835__029 
        = ((0x3ff7U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02835__029)) 
           | (8U & ((0x3ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                   >> 0xaU) & ((0x7ffff8U 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                               | (0xfffff8U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                                     >> 8U))))) 
                    | (0x7ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                     >> 9U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                               >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02835__029 
        = ((0x3fefU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02835__029)) 
           | (0x10U & ((0xffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                     >> 0xcU) & ((0x1ffff0U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                                     >> 0xbU)) 
                                                 | (0x3ffff0U 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                                       >> 0xaU))))) 
                       | (0x1ffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                        >> 0xbU) & 
                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                        >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                            >> 4U)) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                          >> 3U))) 
                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                          >> 2U)) | (((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                          >> 4U)) & 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                       >> 3U)) & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                                   >> 2U)))) 
                     | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                          >> 4U) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                       >> 3U))) & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                                    >> 2U)))) 
                    | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                         >> 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                   >> 3U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                              >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__FirSig)) 
           | (2U & ((((0xffffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                           >> 7U)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                             >> 6U))) 
                                      << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                                >> 4U))) 
                      | (0x7fffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                             >> 7U)) 
                                         << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                                   >> 5U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                              >> 5U)) 
                                          << 1U)))) 
                     | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                        >> 6U) & ((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                                    >> 6U)) 
                                                  << 1U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                             >> 5U)) 
                                         << 1U)))) 
                    | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                       >> 6U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                                 >> 5U)) 
                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                        >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__FirSig)) 
           | (4U & ((((0x3fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                           >> 0xaU)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                             >> 9U))) 
                                      << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                                >> 6U))) 
                      | (0x1fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                             >> 0xaU)) 
                                         << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                                   >> 7U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                              >> 8U)) 
                                          << 2U)))) 
                     | (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                       >> 8U) & ((~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                                 << 2U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                            >> 8U)) 
                                        << 2U)))) | 
                    (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                    >> 8U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                              >> 7U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                     >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__FirSig)) 
           | (8U & ((((0xfffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                          >> 0xdU)) 
                                      & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                            >> 0xcU))) 
                                     << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                               >> 8U))) 
                      | (0x7ffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                            >> 0xdU)) 
                                        << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                                  >> 9U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                             >> 0xbU)) 
                                         << 3U)))) 
                     | (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                       >> 0xaU) & (
                                                   (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                                     >> 0xcU)) 
                                                   << 3U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                            >> 0xbU)) 
                                        << 3U)))) | 
                    (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                    >> 0xaU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                                >> 9U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                     >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & ((((0x3ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                             >> 0x10U)) 
                                         & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                               >> 0xfU))) 
                                        << 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                                  >> 0xaU))) 
                         | (0x1ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                               >> 0x10U)) 
                                           << 4U) & 
                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                           >> 0xbU)) 
                                         & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                                >> 0xeU)) 
                                            << 4U)))) 
                        | (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                         >> 0xcU) & 
                                        ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                             >> 0xfU)) 
                                         << 4U)) & 
                                       ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                            >> 0xeU)) 
                                        << 4U)))) | 
                       (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                      >> 0xcU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                                  >> 0xbU)) 
                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData 
                                       >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02834__029 
        = ((0x3ffeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02834__029)) 
           | (1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                      >> 4U) & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                 >> 3U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                           >> 2U))) 
                    | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                        >> 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                  >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02834__029 
        = ((0x3ffdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02834__029)) 
           | (2U & ((0x3fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                    >> 6U) & ((0x7fffffeU 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                                  >> 5U)) 
                                              | (0xffffffeU 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                                    >> 4U))))) 
                    | (0x7fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                      >> 5U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                                >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02834__029 
        = ((0x3ffbU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02834__029)) 
           | (4U & ((0xfffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                   >> 8U) & ((0x1fffffcU 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                                 >> 7U)) 
                                             | (0x3fffffcU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                                   >> 6U))))) 
                    | (0x1fffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                      >> 7U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                                >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02834__029 
        = ((0x3ff7U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02834__029)) 
           | (8U & ((0x3ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                   >> 0xaU) & ((0x7ffff8U 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                               | (0xfffff8U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                                     >> 8U))))) 
                    | (0x7ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                     >> 9U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                               >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02834__029 
        = ((0x3fefU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02834__029)) 
           | (0x10U & ((0xffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                     >> 0xcU) & ((0x1ffff0U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                                     >> 0xbU)) 
                                                 | (0x3ffff0U 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                                       >> 0xaU))))) 
                       | (0x1ffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                        >> 0xbU) & 
                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                        >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                            >> 4U)) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                          >> 3U))) 
                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                          >> 2U)) | (((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                          >> 4U)) & 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                       >> 3U)) & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                                   >> 2U)))) 
                     | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                          >> 4U) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                       >> 3U))) & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                                    >> 2U)))) 
                    | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                         >> 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                   >> 3U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                              >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT__FirSig)) 
           | (2U & ((((0xffffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                           >> 7U)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                             >> 6U))) 
                                      << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                                >> 4U))) 
                      | (0x7fffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                             >> 7U)) 
                                         << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                                   >> 5U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                              >> 5U)) 
                                          << 1U)))) 
                     | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                        >> 6U) & ((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                                    >> 6U)) 
                                                  << 1U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                             >> 5U)) 
                                         << 1U)))) 
                    | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                       >> 6U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                                 >> 5U)) 
                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                        >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT__FirSig)) 
           | (4U & ((((0x3fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                           >> 0xaU)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                             >> 9U))) 
                                      << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                                >> 6U))) 
                      | (0x1fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                             >> 0xaU)) 
                                         << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                                   >> 7U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                              >> 8U)) 
                                          << 2U)))) 
                     | (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                       >> 8U) & ((~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                                 << 2U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                            >> 8U)) 
                                        << 2U)))) | 
                    (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                    >> 8U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                              >> 7U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                     >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT__FirSig)) 
           | (8U & ((((0xfffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                          >> 0xdU)) 
                                      & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                            >> 0xcU))) 
                                     << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                               >> 8U))) 
                      | (0x7ffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                            >> 0xdU)) 
                                        << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                                  >> 9U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                             >> 0xbU)) 
                                         << 3U)))) 
                     | (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                       >> 0xaU) & (
                                                   (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                                     >> 0xcU)) 
                                                   << 3U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                            >> 0xbU)) 
                                        << 3U)))) | 
                    (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                    >> 0xaU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                                >> 9U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                     >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & ((((0x3ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                             >> 0x10U)) 
                                         & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                               >> 0xfU))) 
                                        << 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                                  >> 0xaU))) 
                         | (0x1ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                               >> 0x10U)) 
                                           << 4U) & 
                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                           >> 0xbU)) 
                                         & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                                >> 0xeU)) 
                                            << 4U)))) 
                        | (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                         >> 0xcU) & 
                                        ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                             >> 0xfU)) 
                                         << 4U)) & 
                                       ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                            >> 0xeU)) 
                                        << 4U)))) | 
                       (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                      >> 0xcU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                                  >> 0xbU)) 
                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData 
                                       >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02833__029 
        = ((0x3ffeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02833__029)) 
           | (1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                      >> 4U) & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                 >> 3U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                           >> 2U))) 
                    | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                        >> 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                  >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02833__029 
        = ((0x3ffdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02833__029)) 
           | (2U & ((0x3fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                    >> 6U) & ((0x7fffffeU 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                                  >> 5U)) 
                                              | (0xffffffeU 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                                    >> 4U))))) 
                    | (0x7fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                      >> 5U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                                >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02833__029 
        = ((0x3ffbU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02833__029)) 
           | (4U & ((0xfffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                   >> 8U) & ((0x1fffffcU 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                                 >> 7U)) 
                                             | (0x3fffffcU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                                   >> 6U))))) 
                    | (0x1fffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                      >> 7U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                                >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02833__029 
        = ((0x3ff7U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02833__029)) 
           | (8U & ((0x3ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                   >> 0xaU) & ((0x7ffff8U 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                               | (0xfffff8U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                                     >> 8U))))) 
                    | (0x7ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                     >> 9U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                               >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02833__029 
        = ((0x3fefU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02833__029)) 
           | (0x10U & ((0xffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                     >> 0xcU) & ((0x1ffff0U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                                     >> 0xbU)) 
                                                 | (0x3ffff0U 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                                       >> 0xaU))))) 
                       | (0x1ffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                        >> 0xbU) & 
                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                        >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                            >> 4U)) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                          >> 3U))) 
                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                          >> 2U)) | (((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                          >> 4U)) & 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                       >> 3U)) & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                                   >> 2U)))) 
                     | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                          >> 4U) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                       >> 3U))) & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                                    >> 2U)))) 
                    | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                         >> 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                   >> 3U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                              >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT__FirSig)) 
           | (2U & ((((0xffffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                           >> 7U)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                             >> 6U))) 
                                      << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                                >> 4U))) 
                      | (0x7fffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                             >> 7U)) 
                                         << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                                   >> 5U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                              >> 5U)) 
                                          << 1U)))) 
                     | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                        >> 6U) & ((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                                    >> 6U)) 
                                                  << 1U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                             >> 5U)) 
                                         << 1U)))) 
                    | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                       >> 6U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                                 >> 5U)) 
                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                        >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT__FirSig)) 
           | (4U & ((((0x3fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                           >> 0xaU)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                             >> 9U))) 
                                      << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                                >> 6U))) 
                      | (0x1fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                             >> 0xaU)) 
                                         << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                                   >> 7U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                              >> 8U)) 
                                          << 2U)))) 
                     | (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                       >> 8U) & ((~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                                 << 2U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                            >> 8U)) 
                                        << 2U)))) | 
                    (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                    >> 8U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                              >> 7U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                     >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT__FirSig)) 
           | (8U & ((((0xfffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                          >> 0xdU)) 
                                      & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                            >> 0xcU))) 
                                     << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                               >> 8U))) 
                      | (0x7ffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                            >> 0xdU)) 
                                        << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                                  >> 9U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                             >> 0xbU)) 
                                         << 3U)))) 
                     | (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                       >> 0xaU) & (
                                                   (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                                     >> 0xcU)) 
                                                   << 3U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                            >> 0xbU)) 
                                        << 3U)))) | 
                    (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                    >> 0xaU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                                >> 9U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                     >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & ((((0x3ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                             >> 0x10U)) 
                                         & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                               >> 0xfU))) 
                                        << 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                                  >> 0xaU))) 
                         | (0x1ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                               >> 0x10U)) 
                                           << 4U) & 
                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                           >> 0xbU)) 
                                         & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                                >> 0xeU)) 
                                            << 4U)))) 
                        | (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                         >> 0xcU) & 
                                        ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                             >> 0xfU)) 
                                         << 4U)) & 
                                       ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                            >> 0xeU)) 
                                        << 4U)))) | 
                       (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                      >> 0xcU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                                  >> 0xbU)) 
                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData 
                                       >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02832__029 
        = ((0x3ffeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02832__029)) 
           | (1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                      >> 4U) & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                 >> 3U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                           >> 2U))) 
                    | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                        >> 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                  >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02832__029 
        = ((0x3ffdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02832__029)) 
           | (2U & ((0x3fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                    >> 6U) & ((0x7fffffeU 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                                  >> 5U)) 
                                              | (0xffffffeU 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                                    >> 4U))))) 
                    | (0x7fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                      >> 5U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                                >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02832__029 
        = ((0x3ffbU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02832__029)) 
           | (4U & ((0xfffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                   >> 8U) & ((0x1fffffcU 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                                 >> 7U)) 
                                             | (0x3fffffcU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                                   >> 6U))))) 
                    | (0x1fffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                      >> 7U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                                >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02832__029 
        = ((0x3ff7U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02832__029)) 
           | (8U & ((0x3ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                   >> 0xaU) & ((0x7ffff8U 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                               | (0xfffff8U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                                     >> 8U))))) 
                    | (0x7ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                     >> 9U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                               >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02832__029 
        = ((0x3fefU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02832__029)) 
           | (0x10U & ((0xffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                     >> 0xcU) & ((0x1ffff0U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                                     >> 0xbU)) 
                                                 | (0x3ffff0U 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                                       >> 0xaU))))) 
                       | (0x1ffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                        >> 0xbU) & 
                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                        >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                            >> 4U)) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                          >> 3U))) 
                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                          >> 2U)) | (((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                          >> 4U)) & 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                       >> 3U)) & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                                   >> 2U)))) 
                     | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                          >> 4U) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                       >> 3U))) & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                                    >> 2U)))) 
                    | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                         >> 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                   >> 3U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                              >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT__FirSig)) 
           | (2U & ((((0xffffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                           >> 7U)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                             >> 6U))) 
                                      << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                                >> 4U))) 
                      | (0x7fffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                             >> 7U)) 
                                         << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                                   >> 5U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                              >> 5U)) 
                                          << 1U)))) 
                     | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                        >> 6U) & ((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                                    >> 6U)) 
                                                  << 1U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                             >> 5U)) 
                                         << 1U)))) 
                    | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                       >> 6U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                                 >> 5U)) 
                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                        >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT__FirSig)) 
           | (4U & ((((0x3fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                           >> 0xaU)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                             >> 9U))) 
                                      << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                                >> 6U))) 
                      | (0x1fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                             >> 0xaU)) 
                                         << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                                   >> 7U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                              >> 8U)) 
                                          << 2U)))) 
                     | (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                       >> 8U) & ((~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                                 << 2U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                            >> 8U)) 
                                        << 2U)))) | 
                    (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                    >> 8U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                              >> 7U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                     >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT__FirSig)) 
           | (8U & ((((0xfffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                          >> 0xdU)) 
                                      & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                            >> 0xcU))) 
                                     << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                               >> 8U))) 
                      | (0x7ffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                            >> 0xdU)) 
                                        << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                                  >> 9U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                             >> 0xbU)) 
                                         << 3U)))) 
                     | (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                       >> 0xaU) & (
                                                   (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                                     >> 0xcU)) 
                                                   << 3U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                            >> 0xbU)) 
                                        << 3U)))) | 
                    (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                    >> 0xaU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                                >> 9U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                     >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & ((((0x3ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                             >> 0x10U)) 
                                         & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                               >> 0xfU))) 
                                        << 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                                  >> 0xaU))) 
                         | (0x1ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                               >> 0x10U)) 
                                           << 4U) & 
                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                           >> 0xbU)) 
                                         & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                                >> 0xeU)) 
                                            << 4U)))) 
                        | (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                         >> 0xcU) & 
                                        ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                             >> 0xfU)) 
                                         << 4U)) & 
                                       ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                            >> 0xeU)) 
                                        << 4U)))) | 
                       (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                      >> 0xcU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                                  >> 0xbU)) 
                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData 
                                       >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02831__029 
        = ((0x3ffeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02831__029)) 
           | (1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                      >> 4U) & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                 >> 3U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                           >> 2U))) 
                    | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                        >> 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                  >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02831__029 
        = ((0x3ffdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02831__029)) 
           | (2U & ((0x3fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                    >> 6U) & ((0x7fffffeU 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                                  >> 5U)) 
                                              | (0xffffffeU 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                                    >> 4U))))) 
                    | (0x7fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                      >> 5U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                                >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02831__029 
        = ((0x3ffbU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02831__029)) 
           | (4U & ((0xfffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                   >> 8U) & ((0x1fffffcU 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                                 >> 7U)) 
                                             | (0x3fffffcU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                                   >> 6U))))) 
                    | (0x1fffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                      >> 7U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                                >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02831__029 
        = ((0x3ff7U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02831__029)) 
           | (8U & ((0x3ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                   >> 0xaU) & ((0x7ffff8U 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                               | (0xfffff8U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                                     >> 8U))))) 
                    | (0x7ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                     >> 9U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                               >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02831__029 
        = ((0x3fefU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02831__029)) 
           | (0x10U & ((0xffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                     >> 0xcU) & ((0x1ffff0U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                                     >> 0xbU)) 
                                                 | (0x3ffff0U 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                                       >> 0xaU))))) 
                       | (0x1ffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                        >> 0xbU) & 
                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                        >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                            >> 4U)) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                          >> 3U))) 
                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                          >> 2U)) | (((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                          >> 4U)) & 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                       >> 3U)) & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                                   >> 2U)))) 
                     | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                          >> 4U) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                       >> 3U))) & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                                    >> 2U)))) 
                    | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                         >> 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                   >> 3U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                              >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT__FirSig)) 
           | (2U & ((((0xffffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                           >> 7U)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                             >> 6U))) 
                                      << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                                >> 4U))) 
                      | (0x7fffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                             >> 7U)) 
                                         << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                                   >> 5U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                              >> 5U)) 
                                          << 1U)))) 
                     | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                        >> 6U) & ((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                                    >> 6U)) 
                                                  << 1U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                             >> 5U)) 
                                         << 1U)))) 
                    | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                       >> 6U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                                 >> 5U)) 
                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                        >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT__FirSig)) 
           | (4U & ((((0x3fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                           >> 0xaU)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                             >> 9U))) 
                                      << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                                >> 6U))) 
                      | (0x1fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                             >> 0xaU)) 
                                         << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                                   >> 7U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                              >> 8U)) 
                                          << 2U)))) 
                     | (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                       >> 8U) & ((~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                                 << 2U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                            >> 8U)) 
                                        << 2U)))) | 
                    (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                    >> 8U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                              >> 7U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                     >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT__FirSig)) 
           | (8U & ((((0xfffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                          >> 0xdU)) 
                                      & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                            >> 0xcU))) 
                                     << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                               >> 8U))) 
                      | (0x7ffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                            >> 0xdU)) 
                                        << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                                  >> 9U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                             >> 0xbU)) 
                                         << 3U)))) 
                     | (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                       >> 0xaU) & (
                                                   (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                                     >> 0xcU)) 
                                                   << 3U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                            >> 0xbU)) 
                                        << 3U)))) | 
                    (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                    >> 0xaU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                                >> 9U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                     >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & ((((0x3ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                             >> 0x10U)) 
                                         & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                               >> 0xfU))) 
                                        << 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                                  >> 0xaU))) 
                         | (0x1ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                               >> 0x10U)) 
                                           << 4U) & 
                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                           >> 0xbU)) 
                                         & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                                >> 0xeU)) 
                                            << 4U)))) 
                        | (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                         >> 0xcU) & 
                                        ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                             >> 0xfU)) 
                                         << 4U)) & 
                                       ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                            >> 0xeU)) 
                                        << 4U)))) | 
                       (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                      >> 0xcU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                                  >> 0xbU)) 
                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData 
                                       >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02830__029 
        = ((0x3ffeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02830__029)) 
           | (1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                      >> 4U) & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                 >> 3U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                           >> 2U))) 
                    | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                        >> 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                  >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02830__029 
        = ((0x3ffdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02830__029)) 
           | (2U & ((0x3fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                    >> 6U) & ((0x7fffffeU 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                                  >> 5U)) 
                                              | (0xffffffeU 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                                    >> 4U))))) 
                    | (0x7fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                      >> 5U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                                >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02830__029 
        = ((0x3ffbU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02830__029)) 
           | (4U & ((0xfffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                   >> 8U) & ((0x1fffffcU 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                                 >> 7U)) 
                                             | (0x3fffffcU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                                   >> 6U))))) 
                    | (0x1fffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                      >> 7U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                                >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02830__029 
        = ((0x3ff7U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02830__029)) 
           | (8U & ((0x3ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                   >> 0xaU) & ((0x7ffff8U 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                               | (0xfffff8U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                                     >> 8U))))) 
                    | (0x7ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                     >> 9U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                               >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02830__029 
        = ((0x3fefU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02830__029)) 
           | (0x10U & ((0xffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                     >> 0xcU) & ((0x1ffff0U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                                     >> 0xbU)) 
                                                 | (0x3ffff0U 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                                       >> 0xaU))))) 
                       | (0x1ffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                        >> 0xbU) & 
                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                        >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                            >> 4U)) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                          >> 3U))) 
                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                          >> 2U)) | (((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                          >> 4U)) & 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                       >> 3U)) & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                                   >> 2U)))) 
                     | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                          >> 4U) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                       >> 3U))) & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                                    >> 2U)))) 
                    | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                         >> 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                   >> 3U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                              >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT__FirSig)) 
           | (2U & ((((0xffffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                           >> 7U)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                             >> 6U))) 
                                      << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                                >> 4U))) 
                      | (0x7fffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                             >> 7U)) 
                                         << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                                   >> 5U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                              >> 5U)) 
                                          << 1U)))) 
                     | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                        >> 6U) & ((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                                    >> 6U)) 
                                                  << 1U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                             >> 5U)) 
                                         << 1U)))) 
                    | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                       >> 6U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                                 >> 5U)) 
                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                        >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT__FirSig)) 
           | (4U & ((((0x3fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                           >> 0xaU)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                             >> 9U))) 
                                      << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                                >> 6U))) 
                      | (0x1fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                             >> 0xaU)) 
                                         << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                                   >> 7U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                              >> 8U)) 
                                          << 2U)))) 
                     | (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                       >> 8U) & ((~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                                 << 2U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                            >> 8U)) 
                                        << 2U)))) | 
                    (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                    >> 8U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                              >> 7U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                     >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT__FirSig)) 
           | (8U & ((((0xfffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                          >> 0xdU)) 
                                      & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                            >> 0xcU))) 
                                     << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                               >> 8U))) 
                      | (0x7ffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                            >> 0xdU)) 
                                        << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                                  >> 9U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                             >> 0xbU)) 
                                         << 3U)))) 
                     | (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                       >> 0xaU) & (
                                                   (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                                     >> 0xcU)) 
                                                   << 3U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                            >> 0xbU)) 
                                        << 3U)))) | 
                    (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                    >> 0xaU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                                >> 9U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                     >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & ((((0x3ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                             >> 0x10U)) 
                                         & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                               >> 0xfU))) 
                                        << 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                                  >> 0xaU))) 
                         | (0x1ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                               >> 0x10U)) 
                                           << 4U) & 
                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                           >> 0xbU)) 
                                         & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                                >> 0xeU)) 
                                            << 4U)))) 
                        | (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                         >> 0xcU) & 
                                        ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                             >> 0xfU)) 
                                         << 4U)) & 
                                       ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                            >> 0xeU)) 
                                        << 4U)))) | 
                       (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                      >> 0xcU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                                  >> 0xbU)) 
                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData 
                                       >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02829__029 
        = ((0x3ffeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02829__029)) 
           | (1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                      >> 4U) & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                 >> 3U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                           >> 2U))) 
                    | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                        >> 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                  >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02829__029 
        = ((0x3ffdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02829__029)) 
           | (2U & ((0x3fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                    >> 6U) & ((0x7fffffeU 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                                  >> 5U)) 
                                              | (0xffffffeU 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                                    >> 4U))))) 
                    | (0x7fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                      >> 5U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                                >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02829__029 
        = ((0x3ffbU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02829__029)) 
           | (4U & ((0xfffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                   >> 8U) & ((0x1fffffcU 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                                 >> 7U)) 
                                             | (0x3fffffcU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                                   >> 6U))))) 
                    | (0x1fffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                      >> 7U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                                >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02829__029 
        = ((0x3ff7U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02829__029)) 
           | (8U & ((0x3ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                   >> 0xaU) & ((0x7ffff8U 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                               | (0xfffff8U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                                     >> 8U))))) 
                    | (0x7ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                     >> 9U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                               >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02829__029 
        = ((0x3fefU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02829__029)) 
           | (0x10U & ((0xffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                     >> 0xcU) & ((0x1ffff0U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                                     >> 0xbU)) 
                                                 | (0x3ffff0U 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                                       >> 0xaU))))) 
                       | (0x1ffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                        >> 0xbU) & 
                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                        >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                            >> 4U)) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                          >> 3U))) 
                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                          >> 2U)) | (((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                          >> 4U)) & 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                       >> 3U)) & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                                   >> 2U)))) 
                     | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                          >> 4U) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                       >> 3U))) & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                                    >> 2U)))) 
                    | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                         >> 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                   >> 3U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                              >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT__FirSig)) 
           | (2U & ((((0xffffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                           >> 7U)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                             >> 6U))) 
                                      << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                                >> 4U))) 
                      | (0x7fffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                             >> 7U)) 
                                         << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                                   >> 5U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                              >> 5U)) 
                                          << 1U)))) 
                     | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                        >> 6U) & ((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                                    >> 6U)) 
                                                  << 1U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                             >> 5U)) 
                                         << 1U)))) 
                    | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                       >> 6U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                                 >> 5U)) 
                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                        >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT__FirSig)) 
           | (4U & ((((0x3fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                           >> 0xaU)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                             >> 9U))) 
                                      << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                                >> 6U))) 
                      | (0x1fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                             >> 0xaU)) 
                                         << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                                   >> 7U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                              >> 8U)) 
                                          << 2U)))) 
                     | (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                       >> 8U) & ((~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                                 << 2U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                            >> 8U)) 
                                        << 2U)))) | 
                    (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                    >> 8U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                              >> 7U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                     >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT__FirSig)) 
           | (8U & ((((0xfffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                          >> 0xdU)) 
                                      & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                            >> 0xcU))) 
                                     << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                               >> 8U))) 
                      | (0x7ffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                            >> 0xdU)) 
                                        << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                                  >> 9U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                             >> 0xbU)) 
                                         << 3U)))) 
                     | (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                       >> 0xaU) & (
                                                   (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                                     >> 0xcU)) 
                                                   << 3U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                            >> 0xbU)) 
                                        << 3U)))) | 
                    (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                    >> 0xaU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                                >> 9U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                     >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & ((((0x3ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                             >> 0x10U)) 
                                         & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                               >> 0xfU))) 
                                        << 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                                  >> 0xaU))) 
                         | (0x1ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                               >> 0x10U)) 
                                           << 4U) & 
                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                           >> 0xbU)) 
                                         & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                                >> 0xeU)) 
                                            << 4U)))) 
                        | (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                         >> 0xcU) & 
                                        ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                             >> 0xfU)) 
                                         << 4U)) & 
                                       ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                            >> 0xeU)) 
                                        << 4U)))) | 
                       (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                      >> 0xcU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                                  >> 0xbU)) 
                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData 
                                       >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02828__029 
        = ((0x3ffeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02828__029)) 
           | (1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                      >> 4U) & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                 >> 3U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                           >> 2U))) 
                    | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                        >> 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                  >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02828__029 
        = ((0x3ffdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02828__029)) 
           | (2U & ((0x3fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                    >> 6U) & ((0x7fffffeU 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                                  >> 5U)) 
                                              | (0xffffffeU 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                                    >> 4U))))) 
                    | (0x7fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                      >> 5U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                                >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02828__029 
        = ((0x3ffbU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02828__029)) 
           | (4U & ((0xfffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                   >> 8U) & ((0x1fffffcU 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                                 >> 7U)) 
                                             | (0x3fffffcU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                                   >> 6U))))) 
                    | (0x1fffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                      >> 7U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                                >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02828__029 
        = ((0x3ff7U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02828__029)) 
           | (8U & ((0x3ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                   >> 0xaU) & ((0x7ffff8U 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                               | (0xfffff8U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                                     >> 8U))))) 
                    | (0x7ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                     >> 9U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                               >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02828__029 
        = ((0x3fefU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02828__029)) 
           | (0x10U & ((0xffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                     >> 0xcU) & ((0x1ffff0U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                                     >> 0xbU)) 
                                                 | (0x3ffff0U 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                                       >> 0xaU))))) 
                       | (0x1ffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                        >> 0xbU) & 
                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                        >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                            >> 4U)) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                          >> 3U))) 
                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                          >> 2U)) | (((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                          >> 4U)) & 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                       >> 3U)) & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                                   >> 2U)))) 
                     | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                          >> 4U) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                       >> 3U))) & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                                    >> 2U)))) 
                    | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                         >> 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                   >> 3U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                              >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT__FirSig)) 
           | (2U & ((((0xffffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                           >> 7U)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                             >> 6U))) 
                                      << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                                >> 4U))) 
                      | (0x7fffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                             >> 7U)) 
                                         << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                                   >> 5U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                              >> 5U)) 
                                          << 1U)))) 
                     | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                        >> 6U) & ((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                                    >> 6U)) 
                                                  << 1U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                             >> 5U)) 
                                         << 1U)))) 
                    | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                       >> 6U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                                 >> 5U)) 
                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                        >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT__FirSig)) 
           | (4U & ((((0x3fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                           >> 0xaU)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                             >> 9U))) 
                                      << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                                >> 6U))) 
                      | (0x1fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                             >> 0xaU)) 
                                         << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                                   >> 7U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                              >> 8U)) 
                                          << 2U)))) 
                     | (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                       >> 8U) & ((~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                                 << 2U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                            >> 8U)) 
                                        << 2U)))) | 
                    (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                    >> 8U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                              >> 7U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                     >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT__FirSig)) 
           | (8U & ((((0xfffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                          >> 0xdU)) 
                                      & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                            >> 0xcU))) 
                                     << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                               >> 8U))) 
                      | (0x7ffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                            >> 0xdU)) 
                                        << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                                  >> 9U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                             >> 0xbU)) 
                                         << 3U)))) 
                     | (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                       >> 0xaU) & (
                                                   (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                                     >> 0xcU)) 
                                                   << 3U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                            >> 0xbU)) 
                                        << 3U)))) | 
                    (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                    >> 0xaU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                                >> 9U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                     >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & ((((0x3ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                             >> 0x10U)) 
                                         & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                               >> 0xfU))) 
                                        << 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                                  >> 0xaU))) 
                         | (0x1ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                               >> 0x10U)) 
                                           << 4U) & 
                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                           >> 0xbU)) 
                                         & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                                >> 0xeU)) 
                                            << 4U)))) 
                        | (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                         >> 0xcU) & 
                                        ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                             >> 0xfU)) 
                                         << 4U)) & 
                                       ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                            >> 0xeU)) 
                                        << 4U)))) | 
                       (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                      >> 0xcU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                                  >> 0xbU)) 
                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData 
                                       >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02827__029 
        = ((0x3ffeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02827__029)) 
           | (1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                      >> 4U) & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                 >> 3U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                           >> 2U))) 
                    | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                        >> 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                  >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02827__029 
        = ((0x3ffdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02827__029)) 
           | (2U & ((0x3fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                    >> 6U) & ((0x7fffffeU 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                                  >> 5U)) 
                                              | (0xffffffeU 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                                    >> 4U))))) 
                    | (0x7fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                      >> 5U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                                >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02827__029 
        = ((0x3ffbU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02827__029)) 
           | (4U & ((0xfffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                   >> 8U) & ((0x1fffffcU 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                                 >> 7U)) 
                                             | (0x3fffffcU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                                   >> 6U))))) 
                    | (0x1fffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                      >> 7U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                                >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02827__029 
        = ((0x3ff7U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02827__029)) 
           | (8U & ((0x3ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                   >> 0xaU) & ((0x7ffff8U 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                               | (0xfffff8U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                                     >> 8U))))) 
                    | (0x7ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                     >> 9U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                               >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02827__029 
        = ((0x3fefU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02827__029)) 
           | (0x10U & ((0xffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                     >> 0xcU) & ((0x1ffff0U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                                     >> 0xbU)) 
                                                 | (0x3ffff0U 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                                       >> 0xaU))))) 
                       | (0x1ffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                        >> 0xbU) & 
                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                        >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                            >> 4U)) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                          >> 3U))) 
                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                          >> 2U)) | (((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                          >> 4U)) & 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                       >> 3U)) & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                                   >> 2U)))) 
                     | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                          >> 4U) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                       >> 3U))) & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                                    >> 2U)))) 
                    | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                         >> 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                   >> 3U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                              >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT__FirSig)) 
           | (2U & ((((0xffffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                           >> 7U)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                             >> 6U))) 
                                      << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                                >> 4U))) 
                      | (0x7fffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                             >> 7U)) 
                                         << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                                   >> 5U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                              >> 5U)) 
                                          << 1U)))) 
                     | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                        >> 6U) & ((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                                    >> 6U)) 
                                                  << 1U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                             >> 5U)) 
                                         << 1U)))) 
                    | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                       >> 6U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                                 >> 5U)) 
                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                        >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT__FirSig)) 
           | (4U & ((((0x3fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                           >> 0xaU)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                             >> 9U))) 
                                      << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                                >> 6U))) 
                      | (0x1fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                             >> 0xaU)) 
                                         << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                                   >> 7U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                              >> 8U)) 
                                          << 2U)))) 
                     | (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                       >> 8U) & ((~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                                 << 2U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                            >> 8U)) 
                                        << 2U)))) | 
                    (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                    >> 8U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                              >> 7U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                     >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT__FirSig)) 
           | (8U & ((((0xfffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                          >> 0xdU)) 
                                      & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                            >> 0xcU))) 
                                     << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                               >> 8U))) 
                      | (0x7ffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                            >> 0xdU)) 
                                        << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                                  >> 9U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                             >> 0xbU)) 
                                         << 3U)))) 
                     | (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                       >> 0xaU) & (
                                                   (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                                     >> 0xcU)) 
                                                   << 3U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                            >> 0xbU)) 
                                        << 3U)))) | 
                    (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                    >> 0xaU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                                >> 9U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                     >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & ((((0x3ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                             >> 0x10U)) 
                                         & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                               >> 0xfU))) 
                                        << 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                                  >> 0xaU))) 
                         | (0x1ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                               >> 0x10U)) 
                                           << 4U) & 
                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                           >> 0xbU)) 
                                         & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                                >> 0xeU)) 
                                            << 4U)))) 
                        | (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                         >> 0xcU) & 
                                        ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                             >> 0xfU)) 
                                         << 4U)) & 
                                       ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                            >> 0xeU)) 
                                        << 4U)))) | 
                       (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                      >> 0xcU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                                  >> 0xbU)) 
                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData 
                                       >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02826__029 
        = ((0x3ffeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02826__029)) 
           | (1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                      >> 4U) & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                 >> 3U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                           >> 2U))) 
                    | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                        >> 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                  >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02826__029 
        = ((0x3ffdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02826__029)) 
           | (2U & ((0x3fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                    >> 6U) & ((0x7fffffeU 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                                  >> 5U)) 
                                              | (0xffffffeU 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                                    >> 4U))))) 
                    | (0x7fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                      >> 5U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                                >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02826__029 
        = ((0x3ffbU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02826__029)) 
           | (4U & ((0xfffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                   >> 8U) & ((0x1fffffcU 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                                 >> 7U)) 
                                             | (0x3fffffcU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                                   >> 6U))))) 
                    | (0x1fffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                      >> 7U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                                >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02826__029 
        = ((0x3ff7U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02826__029)) 
           | (8U & ((0x3ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                   >> 0xaU) & ((0x7ffff8U 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                               | (0xfffff8U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                                     >> 8U))))) 
                    | (0x7ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                     >> 9U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                               >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02826__029 
        = ((0x3fefU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02826__029)) 
           | (0x10U & ((0xffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                     >> 0xcU) & ((0x1ffff0U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                                     >> 0xbU)) 
                                                 | (0x3ffff0U 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                                       >> 0xaU))))) 
                       | (0x1ffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                        >> 0xbU) & 
                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                        >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                            >> 4U)) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                          >> 3U))) 
                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                          >> 2U)) | (((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                          >> 4U)) & 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                       >> 3U)) & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                                   >> 2U)))) 
                     | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                          >> 4U) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                       >> 3U))) & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                                    >> 2U)))) 
                    | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                         >> 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                   >> 3U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                              >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT__FirSig)) 
           | (2U & ((((0xffffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                           >> 7U)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                             >> 6U))) 
                                      << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                                >> 4U))) 
                      | (0x7fffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                             >> 7U)) 
                                         << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                                   >> 5U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                              >> 5U)) 
                                          << 1U)))) 
                     | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                        >> 6U) & ((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                                    >> 6U)) 
                                                  << 1U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                             >> 5U)) 
                                         << 1U)))) 
                    | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                       >> 6U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                                 >> 5U)) 
                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                        >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT__FirSig)) 
           | (4U & ((((0x3fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                           >> 0xaU)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                             >> 9U))) 
                                      << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                                >> 6U))) 
                      | (0x1fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                             >> 0xaU)) 
                                         << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                                   >> 7U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                              >> 8U)) 
                                          << 2U)))) 
                     | (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                       >> 8U) & ((~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                                 << 2U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                            >> 8U)) 
                                        << 2U)))) | 
                    (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                    >> 8U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                              >> 7U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                     >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT__FirSig)) 
           | (8U & ((((0xfffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                          >> 0xdU)) 
                                      & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                            >> 0xcU))) 
                                     << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                               >> 8U))) 
                      | (0x7ffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                            >> 0xdU)) 
                                        << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                                  >> 9U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                             >> 0xbU)) 
                                         << 3U)))) 
                     | (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                       >> 0xaU) & (
                                                   (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                                     >> 0xcU)) 
                                                   << 3U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                            >> 0xbU)) 
                                        << 3U)))) | 
                    (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                    >> 0xaU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                                >> 9U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                     >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & ((((0x3ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                             >> 0x10U)) 
                                         & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                               >> 0xfU))) 
                                        << 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                                  >> 0xaU))) 
                         | (0x1ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                               >> 0x10U)) 
                                           << 4U) & 
                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                           >> 0xbU)) 
                                         & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                                >> 0xeU)) 
                                            << 4U)))) 
                        | (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                         >> 0xcU) & 
                                        ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                             >> 0xfU)) 
                                         << 4U)) & 
                                       ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                            >> 0xeU)) 
                                        << 4U)))) | 
                       (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                      >> 0xcU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                                  >> 0xbU)) 
                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData 
                                       >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02825__029 
        = ((0x3ffeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02825__029)) 
           | (1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                      >> 4U) & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                 >> 3U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                           >> 2U))) 
                    | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                        >> 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                  >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02825__029 
        = ((0x3ffdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02825__029)) 
           | (2U & ((0x3fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                    >> 6U) & ((0x7fffffeU 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                                  >> 5U)) 
                                              | (0xffffffeU 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                                    >> 4U))))) 
                    | (0x7fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                      >> 5U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                                >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02825__029 
        = ((0x3ffbU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02825__029)) 
           | (4U & ((0xfffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                   >> 8U) & ((0x1fffffcU 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                                 >> 7U)) 
                                             | (0x3fffffcU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                                   >> 6U))))) 
                    | (0x1fffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                      >> 7U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                                >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02825__029 
        = ((0x3ff7U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02825__029)) 
           | (8U & ((0x3ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                   >> 0xaU) & ((0x7ffff8U 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                               | (0xfffff8U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                                     >> 8U))))) 
                    | (0x7ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                     >> 9U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                               >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02825__029 
        = ((0x3fefU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02825__029)) 
           | (0x10U & ((0xffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                     >> 0xcU) & ((0x1ffff0U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                                     >> 0xbU)) 
                                                 | (0x3ffff0U 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                                       >> 0xaU))))) 
                       | (0x1ffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                        >> 0xbU) & 
                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                        >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                            >> 4U)) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                          >> 3U))) 
                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                          >> 2U)) | (((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                          >> 4U)) & 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                       >> 3U)) & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                                   >> 2U)))) 
                     | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                          >> 4U) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                       >> 3U))) & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                                    >> 2U)))) 
                    | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                         >> 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                   >> 3U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                              >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT__FirSig)) 
           | (2U & ((((0xffffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                           >> 7U)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                             >> 6U))) 
                                      << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                                >> 4U))) 
                      | (0x7fffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                             >> 7U)) 
                                         << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                                   >> 5U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                              >> 5U)) 
                                          << 1U)))) 
                     | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                        >> 6U) & ((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                                    >> 6U)) 
                                                  << 1U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                             >> 5U)) 
                                         << 1U)))) 
                    | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                       >> 6U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                                 >> 5U)) 
                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                        >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT__FirSig)) 
           | (4U & ((((0x3fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                           >> 0xaU)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                             >> 9U))) 
                                      << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                                >> 6U))) 
                      | (0x1fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                             >> 0xaU)) 
                                         << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                                   >> 7U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                              >> 8U)) 
                                          << 2U)))) 
                     | (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                       >> 8U) & ((~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                                 << 2U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                            >> 8U)) 
                                        << 2U)))) | 
                    (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                    >> 8U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                              >> 7U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                     >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT__FirSig)) 
           | (8U & ((((0xfffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                          >> 0xdU)) 
                                      & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                            >> 0xcU))) 
                                     << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                               >> 8U))) 
                      | (0x7ffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                            >> 0xdU)) 
                                        << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                                  >> 9U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                             >> 0xbU)) 
                                         << 3U)))) 
                     | (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                       >> 0xaU) & (
                                                   (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                                     >> 0xcU)) 
                                                   << 3U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                            >> 0xbU)) 
                                        << 3U)))) | 
                    (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                    >> 0xaU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                                >> 9U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                     >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & ((((0x3ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                             >> 0x10U)) 
                                         & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                               >> 0xfU))) 
                                        << 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                                  >> 0xaU))) 
                         | (0x1ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                               >> 0x10U)) 
                                           << 4U) & 
                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                           >> 0xbU)) 
                                         & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                                >> 0xeU)) 
                                            << 4U)))) 
                        | (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                         >> 0xcU) & 
                                        ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                             >> 0xfU)) 
                                         << 4U)) & 
                                       ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                            >> 0xeU)) 
                                        << 4U)))) | 
                       (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                      >> 0xcU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                                  >> 0xbU)) 
                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData 
                                       >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02824__029 
        = ((0x3ffeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02824__029)) 
           | (1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                      >> 4U) & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                 >> 3U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                           >> 2U))) 
                    | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                        >> 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                  >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02824__029 
        = ((0x3ffdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02824__029)) 
           | (2U & ((0x3fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                    >> 6U) & ((0x7fffffeU 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                                  >> 5U)) 
                                              | (0xffffffeU 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                                    >> 4U))))) 
                    | (0x7fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                      >> 5U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                                >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02824__029 
        = ((0x3ffbU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02824__029)) 
           | (4U & ((0xfffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                   >> 8U) & ((0x1fffffcU 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                                 >> 7U)) 
                                             | (0x3fffffcU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                                   >> 6U))))) 
                    | (0x1fffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                      >> 7U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                                >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02824__029 
        = ((0x3ff7U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02824__029)) 
           | (8U & ((0x3ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                   >> 0xaU) & ((0x7ffff8U 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                               | (0xfffff8U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                                     >> 8U))))) 
                    | (0x7ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                     >> 9U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                               >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02824__029 
        = ((0x3fefU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02824__029)) 
           | (0x10U & ((0xffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                     >> 0xcU) & ((0x1ffff0U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                                     >> 0xbU)) 
                                                 | (0x3ffff0U 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                                       >> 0xaU))))) 
                       | (0x1ffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                        >> 0xbU) & 
                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                        >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                            >> 4U)) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                          >> 3U))) 
                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                          >> 2U)) | (((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                          >> 4U)) & 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                       >> 3U)) & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                                   >> 2U)))) 
                     | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                          >> 4U) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                       >> 3U))) & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                                    >> 2U)))) 
                    | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                         >> 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                   >> 3U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                              >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT__FirSig)) 
           | (2U & ((((0xffffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                           >> 7U)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                             >> 6U))) 
                                      << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                                >> 4U))) 
                      | (0x7fffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                             >> 7U)) 
                                         << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                                   >> 5U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                              >> 5U)) 
                                          << 1U)))) 
                     | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                        >> 6U) & ((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                                    >> 6U)) 
                                                  << 1U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                             >> 5U)) 
                                         << 1U)))) 
                    | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                       >> 6U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                                 >> 5U)) 
                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                        >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT__FirSig)) 
           | (4U & ((((0x3fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                           >> 0xaU)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                             >> 9U))) 
                                      << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                                >> 6U))) 
                      | (0x1fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                             >> 0xaU)) 
                                         << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                                   >> 7U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                              >> 8U)) 
                                          << 2U)))) 
                     | (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                       >> 8U) & ((~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                                 << 2U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                            >> 8U)) 
                                        << 2U)))) | 
                    (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                    >> 8U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                              >> 7U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                     >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT__FirSig)) 
           | (8U & ((((0xfffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                          >> 0xdU)) 
                                      & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                            >> 0xcU))) 
                                     << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                               >> 8U))) 
                      | (0x7ffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                            >> 0xdU)) 
                                        << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                                  >> 9U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                             >> 0xbU)) 
                                         << 3U)))) 
                     | (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                       >> 0xaU) & (
                                                   (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                                     >> 0xcU)) 
                                                   << 3U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                            >> 0xbU)) 
                                        << 3U)))) | 
                    (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                    >> 0xaU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                                >> 9U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                     >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & ((((0x3ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                             >> 0x10U)) 
                                         & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                               >> 0xfU))) 
                                        << 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                                  >> 0xaU))) 
                         | (0x1ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                               >> 0x10U)) 
                                           << 4U) & 
                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                           >> 0xbU)) 
                                         & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                                >> 0xeU)) 
                                            << 4U)))) 
                        | (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                         >> 0xcU) & 
                                        ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                             >> 0xfU)) 
                                         << 4U)) & 
                                       ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                            >> 0xeU)) 
                                        << 4U)))) | 
                       (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                      >> 0xcU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                                  >> 0xbU)) 
                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData 
                                       >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02823__029 
        = ((0x3ffeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02823__029)) 
           | (1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                      >> 4U) & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                 >> 3U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                           >> 2U))) 
                    | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                        >> 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                  >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02823__029 
        = ((0x3ffdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02823__029)) 
           | (2U & ((0x3fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                    >> 6U) & ((0x7fffffeU 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                                  >> 5U)) 
                                              | (0xffffffeU 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                                    >> 4U))))) 
                    | (0x7fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                      >> 5U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                                >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02823__029 
        = ((0x3ffbU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02823__029)) 
           | (4U & ((0xfffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                   >> 8U) & ((0x1fffffcU 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                                 >> 7U)) 
                                             | (0x3fffffcU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                                   >> 6U))))) 
                    | (0x1fffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                      >> 7U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                                >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02823__029 
        = ((0x3ff7U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02823__029)) 
           | (8U & ((0x3ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                   >> 0xaU) & ((0x7ffff8U 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                               | (0xfffff8U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                                     >> 8U))))) 
                    | (0x7ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                     >> 9U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                               >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02823__029 
        = ((0x3fefU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02823__029)) 
           | (0x10U & ((0xffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                     >> 0xcU) & ((0x1ffff0U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                                     >> 0xbU)) 
                                                 | (0x3ffff0U 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                                       >> 0xaU))))) 
                       | (0x1ffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                        >> 0xbU) & 
                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                        >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                            >> 4U)) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                          >> 3U))) 
                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                          >> 2U)) | (((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                          >> 4U)) & 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                       >> 3U)) & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                                   >> 2U)))) 
                     | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                          >> 4U) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                       >> 3U))) & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                                    >> 2U)))) 
                    | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                         >> 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                   >> 3U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                              >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT__FirSig)) 
           | (2U & ((((0xffffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                           >> 7U)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                             >> 6U))) 
                                      << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                                >> 4U))) 
                      | (0x7fffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                             >> 7U)) 
                                         << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                                   >> 5U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                              >> 5U)) 
                                          << 1U)))) 
                     | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                        >> 6U) & ((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                                    >> 6U)) 
                                                  << 1U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                             >> 5U)) 
                                         << 1U)))) 
                    | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                       >> 6U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                                 >> 5U)) 
                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                        >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT__FirSig)) 
           | (4U & ((((0x3fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                           >> 0xaU)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                             >> 9U))) 
                                      << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                                >> 6U))) 
                      | (0x1fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                             >> 0xaU)) 
                                         << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                                   >> 7U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                              >> 8U)) 
                                          << 2U)))) 
                     | (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                       >> 8U) & ((~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                                 << 2U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                            >> 8U)) 
                                        << 2U)))) | 
                    (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                    >> 8U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                              >> 7U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                     >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT__FirSig)) 
           | (8U & ((((0xfffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                          >> 0xdU)) 
                                      & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                            >> 0xcU))) 
                                     << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                               >> 8U))) 
                      | (0x7ffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                            >> 0xdU)) 
                                        << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                                  >> 9U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                             >> 0xbU)) 
                                         << 3U)))) 
                     | (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                       >> 0xaU) & (
                                                   (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                                     >> 0xcU)) 
                                                   << 3U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                            >> 0xbU)) 
                                        << 3U)))) | 
                    (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                    >> 0xaU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                                >> 9U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                     >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & ((((0x3ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                             >> 0x10U)) 
                                         & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                               >> 0xfU))) 
                                        << 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                                  >> 0xaU))) 
                         | (0x1ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                               >> 0x10U)) 
                                           << 4U) & 
                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                           >> 0xbU)) 
                                         & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                                >> 0xeU)) 
                                            << 4U)))) 
                        | (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                         >> 0xcU) & 
                                        ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                             >> 0xfU)) 
                                         << 4U)) & 
                                       ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                            >> 0xeU)) 
                                        << 4U)))) | 
                       (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                      >> 0xcU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                                  >> 0xbU)) 
                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData 
                                       >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02822__029 
        = ((0x3ffeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02822__029)) 
           | (1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                      >> 4U) & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                 >> 3U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                           >> 2U))) 
                    | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                        >> 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                  >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02822__029 
        = ((0x3ffdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02822__029)) 
           | (2U & ((0x3fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                    >> 6U) & ((0x7fffffeU 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                                  >> 5U)) 
                                              | (0xffffffeU 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                                    >> 4U))))) 
                    | (0x7fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                      >> 5U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                                >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02822__029 
        = ((0x3ffbU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02822__029)) 
           | (4U & ((0xfffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                   >> 8U) & ((0x1fffffcU 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                                 >> 7U)) 
                                             | (0x3fffffcU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                                   >> 6U))))) 
                    | (0x1fffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                      >> 7U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                                >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02822__029 
        = ((0x3ff7U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02822__029)) 
           | (8U & ((0x3ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                   >> 0xaU) & ((0x7ffff8U 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                               | (0xfffff8U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                                     >> 8U))))) 
                    | (0x7ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                     >> 9U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                               >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02822__029 
        = ((0x3fefU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02822__029)) 
           | (0x10U & ((0xffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                     >> 0xcU) & ((0x1ffff0U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                                     >> 0xbU)) 
                                                 | (0x3ffff0U 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                                       >> 0xaU))))) 
                       | (0x1ffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                        >> 0xbU) & 
                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                        >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                            >> 4U)) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                          >> 3U))) 
                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                          >> 2U)) | (((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                          >> 4U)) & 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                       >> 3U)) & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                                   >> 2U)))) 
                     | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                          >> 4U) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                       >> 3U))) & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                                    >> 2U)))) 
                    | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                         >> 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                   >> 3U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                              >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT__FirSig)) 
           | (2U & ((((0xffffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                           >> 7U)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                             >> 6U))) 
                                      << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                                >> 4U))) 
                      | (0x7fffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                             >> 7U)) 
                                         << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                                   >> 5U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                              >> 5U)) 
                                          << 1U)))) 
                     | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                        >> 6U) & ((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                                    >> 6U)) 
                                                  << 1U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                             >> 5U)) 
                                         << 1U)))) 
                    | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                       >> 6U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                                 >> 5U)) 
                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                        >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT__FirSig)) 
           | (4U & ((((0x3fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                           >> 0xaU)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                             >> 9U))) 
                                      << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                                >> 6U))) 
                      | (0x1fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                             >> 0xaU)) 
                                         << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                                   >> 7U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                              >> 8U)) 
                                          << 2U)))) 
                     | (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                       >> 8U) & ((~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                                 << 2U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                            >> 8U)) 
                                        << 2U)))) | 
                    (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                    >> 8U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                              >> 7U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                     >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT__FirSig)) 
           | (8U & ((((0xfffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                          >> 0xdU)) 
                                      & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                            >> 0xcU))) 
                                     << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                               >> 8U))) 
                      | (0x7ffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                            >> 0xdU)) 
                                        << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                                  >> 9U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                             >> 0xbU)) 
                                         << 3U)))) 
                     | (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                       >> 0xaU) & (
                                                   (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                                     >> 0xcU)) 
                                                   << 3U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                            >> 0xbU)) 
                                        << 3U)))) | 
                    (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                    >> 0xaU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                                >> 9U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                     >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & ((((0x3ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                             >> 0x10U)) 
                                         & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                               >> 0xfU))) 
                                        << 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                                  >> 0xaU))) 
                         | (0x1ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                               >> 0x10U)) 
                                           << 4U) & 
                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                           >> 0xbU)) 
                                         & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                                >> 0xeU)) 
                                            << 4U)))) 
                        | (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                         >> 0xcU) & 
                                        ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                             >> 0xfU)) 
                                         << 4U)) & 
                                       ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                            >> 0xeU)) 
                                        << 4U)))) | 
                       (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                      >> 0xcU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                                  >> 0xbU)) 
                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData 
                                       >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02821__029 
        = ((0x3ffeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02821__029)) 
           | (1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                      >> 4U) & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                 >> 3U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                           >> 2U))) 
                    | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                        >> 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                  >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02821__029 
        = ((0x3ffdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02821__029)) 
           | (2U & ((0x3fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                    >> 6U) & ((0x7fffffeU 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                                  >> 5U)) 
                                              | (0xffffffeU 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                                    >> 4U))))) 
                    | (0x7fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                      >> 5U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                                >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02821__029 
        = ((0x3ffbU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02821__029)) 
           | (4U & ((0xfffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                   >> 8U) & ((0x1fffffcU 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                                 >> 7U)) 
                                             | (0x3fffffcU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                                   >> 6U))))) 
                    | (0x1fffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                      >> 7U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                                >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02821__029 
        = ((0x3ff7U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02821__029)) 
           | (8U & ((0x3ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                   >> 0xaU) & ((0x7ffff8U 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                               | (0xfffff8U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                                     >> 8U))))) 
                    | (0x7ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                     >> 9U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                               >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02821__029 
        = ((0x3fefU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02821__029)) 
           | (0x10U & ((0xffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                     >> 0xcU) & ((0x1ffff0U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                                     >> 0xbU)) 
                                                 | (0x3ffff0U 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                                       >> 0xaU))))) 
                       | (0x1ffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                        >> 0xbU) & 
                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                        >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                            >> 4U)) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                          >> 3U))) 
                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                          >> 2U)) | (((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                          >> 4U)) & 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                       >> 3U)) & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                                   >> 2U)))) 
                     | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                          >> 4U) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                       >> 3U))) & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                                    >> 2U)))) 
                    | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                         >> 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                   >> 3U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                              >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT__FirSig)) 
           | (2U & ((((0xffffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                           >> 7U)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                             >> 6U))) 
                                      << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                                >> 4U))) 
                      | (0x7fffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                             >> 7U)) 
                                         << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                                   >> 5U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                              >> 5U)) 
                                          << 1U)))) 
                     | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                        >> 6U) & ((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                                    >> 6U)) 
                                                  << 1U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                             >> 5U)) 
                                         << 1U)))) 
                    | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                       >> 6U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                                 >> 5U)) 
                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                        >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT__FirSig)) 
           | (4U & ((((0x3fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                           >> 0xaU)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                             >> 9U))) 
                                      << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                                >> 6U))) 
                      | (0x1fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                             >> 0xaU)) 
                                         << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                                   >> 7U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                              >> 8U)) 
                                          << 2U)))) 
                     | (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                       >> 8U) & ((~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                                 << 2U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                            >> 8U)) 
                                        << 2U)))) | 
                    (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                    >> 8U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                              >> 7U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                     >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT__FirSig)) 
           | (8U & ((((0xfffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                          >> 0xdU)) 
                                      & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                            >> 0xcU))) 
                                     << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                               >> 8U))) 
                      | (0x7ffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                            >> 0xdU)) 
                                        << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                                  >> 9U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                             >> 0xbU)) 
                                         << 3U)))) 
                     | (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                       >> 0xaU) & (
                                                   (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                                     >> 0xcU)) 
                                                   << 3U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                            >> 0xbU)) 
                                        << 3U)))) | 
                    (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                    >> 0xaU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                                >> 9U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                     >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & ((((0x3ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                             >> 0x10U)) 
                                         & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                               >> 0xfU))) 
                                        << 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                                  >> 0xaU))) 
                         | (0x1ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                               >> 0x10U)) 
                                           << 4U) & 
                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                           >> 0xbU)) 
                                         & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                                >> 0xeU)) 
                                            << 4U)))) 
                        | (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                         >> 0xcU) & 
                                        ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                             >> 0xfU)) 
                                         << 4U)) & 
                                       ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                            >> 0xeU)) 
                                        << 4U)))) | 
                       (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                      >> 0xcU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                                  >> 0xbU)) 
                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData 
                                       >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02820__029 
        = ((0x3ffeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02820__029)) 
           | (1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                      >> 4U) & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                 >> 3U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                           >> 2U))) 
                    | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                        >> 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                  >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02820__029 
        = ((0x3ffdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02820__029)) 
           | (2U & ((0x3fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                    >> 6U) & ((0x7fffffeU 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                                  >> 5U)) 
                                              | (0xffffffeU 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                                    >> 4U))))) 
                    | (0x7fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                      >> 5U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                                >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02820__029 
        = ((0x3ffbU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02820__029)) 
           | (4U & ((0xfffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                   >> 8U) & ((0x1fffffcU 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                                 >> 7U)) 
                                             | (0x3fffffcU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                                   >> 6U))))) 
                    | (0x1fffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                      >> 7U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                                >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02820__029 
        = ((0x3ff7U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02820__029)) 
           | (8U & ((0x3ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                   >> 0xaU) & ((0x7ffff8U 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                               | (0xfffff8U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                                     >> 8U))))) 
                    | (0x7ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                     >> 9U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                               >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02820__029 
        = ((0x3fefU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02820__029)) 
           | (0x10U & ((0xffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                     >> 0xcU) & ((0x1ffff0U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                                     >> 0xbU)) 
                                                 | (0x3ffff0U 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                                       >> 0xaU))))) 
                       | (0x1ffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                        >> 0xbU) & 
                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                        >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                            >> 4U)) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                          >> 3U))) 
                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                          >> 2U)) | (((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                          >> 4U)) & 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                       >> 3U)) & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                                   >> 2U)))) 
                     | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                          >> 4U) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                       >> 3U))) & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                                    >> 2U)))) 
                    | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                         >> 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                   >> 3U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                              >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT__FirSig)) 
           | (2U & ((((0xffffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                           >> 7U)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                             >> 6U))) 
                                      << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                                >> 4U))) 
                      | (0x7fffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                             >> 7U)) 
                                         << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                                   >> 5U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                              >> 5U)) 
                                          << 1U)))) 
                     | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                        >> 6U) & ((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                                    >> 6U)) 
                                                  << 1U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                             >> 5U)) 
                                         << 1U)))) 
                    | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                       >> 6U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                                 >> 5U)) 
                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                        >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT__FirSig)) 
           | (4U & ((((0x3fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                           >> 0xaU)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                             >> 9U))) 
                                      << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                                >> 6U))) 
                      | (0x1fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                             >> 0xaU)) 
                                         << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                                   >> 7U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                              >> 8U)) 
                                          << 2U)))) 
                     | (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                       >> 8U) & ((~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                                 << 2U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                            >> 8U)) 
                                        << 2U)))) | 
                    (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                    >> 8U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                              >> 7U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                     >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT__FirSig)) 
           | (8U & ((((0xfffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                          >> 0xdU)) 
                                      & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                            >> 0xcU))) 
                                     << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                               >> 8U))) 
                      | (0x7ffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                            >> 0xdU)) 
                                        << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                                  >> 9U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                             >> 0xbU)) 
                                         << 3U)))) 
                     | (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                       >> 0xaU) & (
                                                   (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                                     >> 0xcU)) 
                                                   << 3U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                            >> 0xbU)) 
                                        << 3U)))) | 
                    (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                    >> 0xaU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                                >> 9U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                     >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & ((((0x3ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                             >> 0x10U)) 
                                         & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                               >> 0xfU))) 
                                        << 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                                  >> 0xaU))) 
                         | (0x1ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                               >> 0x10U)) 
                                           << 4U) & 
                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                           >> 0xbU)) 
                                         & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                                >> 0xeU)) 
                                            << 4U)))) 
                        | (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                         >> 0xcU) & 
                                        ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                             >> 0xfU)) 
                                         << 4U)) & 
                                       ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                            >> 0xeU)) 
                                        << 4U)))) | 
                       (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                      >> 0xcU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                                  >> 0xbU)) 
                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData 
                                       >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02819__029 
        = ((0x3ffeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02819__029)) 
           | (1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                      >> 4U) & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                 >> 3U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                           >> 2U))) 
                    | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                        >> 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                  >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02819__029 
        = ((0x3ffdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02819__029)) 
           | (2U & ((0x3fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                    >> 6U) & ((0x7fffffeU 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                                  >> 5U)) 
                                              | (0xffffffeU 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                                    >> 4U))))) 
                    | (0x7fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                      >> 5U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                                >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02819__029 
        = ((0x3ffbU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02819__029)) 
           | (4U & ((0xfffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                   >> 8U) & ((0x1fffffcU 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                                 >> 7U)) 
                                             | (0x3fffffcU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                                   >> 6U))))) 
                    | (0x1fffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                      >> 7U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                                >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02819__029 
        = ((0x3ff7U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02819__029)) 
           | (8U & ((0x3ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                   >> 0xaU) & ((0x7ffff8U 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                               | (0xfffff8U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                                     >> 8U))))) 
                    | (0x7ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                     >> 9U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                               >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02819__029 
        = ((0x3fefU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02819__029)) 
           | (0x10U & ((0xffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                     >> 0xcU) & ((0x1ffff0U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                                     >> 0xbU)) 
                                                 | (0x3ffff0U 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                                       >> 0xaU))))) 
                       | (0x1ffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                        >> 0xbU) & 
                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                        >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                            >> 4U)) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                          >> 3U))) 
                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                          >> 2U)) | (((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                          >> 4U)) & 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                       >> 3U)) & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                                   >> 2U)))) 
                     | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                          >> 4U) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                       >> 3U))) & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                                    >> 2U)))) 
                    | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                         >> 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                   >> 3U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                              >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT__FirSig)) 
           | (2U & ((((0xffffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                           >> 7U)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                             >> 6U))) 
                                      << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                                >> 4U))) 
                      | (0x7fffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                             >> 7U)) 
                                         << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                                   >> 5U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                              >> 5U)) 
                                          << 1U)))) 
                     | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                        >> 6U) & ((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                                    >> 6U)) 
                                                  << 1U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                             >> 5U)) 
                                         << 1U)))) 
                    | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                       >> 6U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                                 >> 5U)) 
                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                        >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT__FirSig)) 
           | (4U & ((((0x3fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                           >> 0xaU)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                             >> 9U))) 
                                      << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                                >> 6U))) 
                      | (0x1fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                             >> 0xaU)) 
                                         << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                                   >> 7U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                              >> 8U)) 
                                          << 2U)))) 
                     | (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                       >> 8U) & ((~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                                 << 2U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                            >> 8U)) 
                                        << 2U)))) | 
                    (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                    >> 8U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                              >> 7U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                     >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT__FirSig)) 
           | (8U & ((((0xfffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                          >> 0xdU)) 
                                      & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                            >> 0xcU))) 
                                     << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                               >> 8U))) 
                      | (0x7ffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                            >> 0xdU)) 
                                        << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                                  >> 9U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                             >> 0xbU)) 
                                         << 3U)))) 
                     | (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                       >> 0xaU) & (
                                                   (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                                     >> 0xcU)) 
                                                   << 3U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                            >> 0xbU)) 
                                        << 3U)))) | 
                    (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                    >> 0xaU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                                >> 9U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                     >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & ((((0x3ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                             >> 0x10U)) 
                                         & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                               >> 0xfU))) 
                                        << 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                                  >> 0xaU))) 
                         | (0x1ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                               >> 0x10U)) 
                                           << 4U) & 
                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                           >> 0xbU)) 
                                         & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                                >> 0xeU)) 
                                            << 4U)))) 
                        | (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                         >> 0xcU) & 
                                        ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                             >> 0xfU)) 
                                         << 4U)) & 
                                       ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                            >> 0xeU)) 
                                        << 4U)))) | 
                       (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                      >> 0xcU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                                  >> 0xbU)) 
                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData 
                                       >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02818__029 
        = ((0x3ffeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02818__029)) 
           | (1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                      >> 4U) & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                 >> 3U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                           >> 2U))) 
                    | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                        >> 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                  >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02818__029 
        = ((0x3ffdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02818__029)) 
           | (2U & ((0x3fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                    >> 6U) & ((0x7fffffeU 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                                  >> 5U)) 
                                              | (0xffffffeU 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                                    >> 4U))))) 
                    | (0x7fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                      >> 5U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                                >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02818__029 
        = ((0x3ffbU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02818__029)) 
           | (4U & ((0xfffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                   >> 8U) & ((0x1fffffcU 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                                 >> 7U)) 
                                             | (0x3fffffcU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                                   >> 6U))))) 
                    | (0x1fffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                      >> 7U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                                >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02818__029 
        = ((0x3ff7U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02818__029)) 
           | (8U & ((0x3ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                   >> 0xaU) & ((0x7ffff8U 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                               | (0xfffff8U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                                     >> 8U))))) 
                    | (0x7ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                     >> 9U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                               >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02818__029 
        = ((0x3fefU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02818__029)) 
           | (0x10U & ((0xffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                     >> 0xcU) & ((0x1ffff0U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                                     >> 0xbU)) 
                                                 | (0x3ffff0U 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                                       >> 0xaU))))) 
                       | (0x1ffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                        >> 0xbU) & 
                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                        >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                            >> 4U)) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                          >> 3U))) 
                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                          >> 2U)) | (((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                          >> 4U)) & 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                       >> 3U)) & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                                   >> 2U)))) 
                     | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                          >> 4U) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                       >> 3U))) & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                                    >> 2U)))) 
                    | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                         >> 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                   >> 3U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                              >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT__FirSig)) 
           | (2U & ((((0xffffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                           >> 7U)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                             >> 6U))) 
                                      << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                                >> 4U))) 
                      | (0x7fffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                             >> 7U)) 
                                         << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                                   >> 5U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                              >> 5U)) 
                                          << 1U)))) 
                     | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                        >> 6U) & ((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                                    >> 6U)) 
                                                  << 1U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                             >> 5U)) 
                                         << 1U)))) 
                    | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                       >> 6U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                                 >> 5U)) 
                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                        >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT__FirSig)) 
           | (4U & ((((0x3fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                           >> 0xaU)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                             >> 9U))) 
                                      << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                                >> 6U))) 
                      | (0x1fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                             >> 0xaU)) 
                                         << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                                   >> 7U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                              >> 8U)) 
                                          << 2U)))) 
                     | (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                       >> 8U) & ((~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                                 << 2U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                            >> 8U)) 
                                        << 2U)))) | 
                    (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                    >> 8U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                              >> 7U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                     >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT__FirSig)) 
           | (8U & ((((0xfffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                          >> 0xdU)) 
                                      & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                            >> 0xcU))) 
                                     << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                               >> 8U))) 
                      | (0x7ffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                            >> 0xdU)) 
                                        << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                                  >> 9U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                             >> 0xbU)) 
                                         << 3U)))) 
                     | (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                       >> 0xaU) & (
                                                   (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                                     >> 0xcU)) 
                                                   << 3U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                            >> 0xbU)) 
                                        << 3U)))) | 
                    (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                    >> 0xaU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                                >> 9U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                     >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & ((((0x3ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                             >> 0x10U)) 
                                         & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                               >> 0xfU))) 
                                        << 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                                  >> 0xaU))) 
                         | (0x1ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                               >> 0x10U)) 
                                           << 4U) & 
                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                           >> 0xbU)) 
                                         & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                                >> 0xeU)) 
                                            << 4U)))) 
                        | (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                         >> 0xcU) & 
                                        ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                             >> 0xfU)) 
                                         << 4U)) & 
                                       ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                            >> 0xeU)) 
                                        << 4U)))) | 
                       (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                      >> 0xcU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                                  >> 0xbU)) 
                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData 
                                       >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02817__029 
        = ((0x3ffeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02817__029)) 
           | (1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                      >> 4U) & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                 >> 3U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                           >> 2U))) 
                    | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                        >> 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                  >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02817__029 
        = ((0x3ffdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02817__029)) 
           | (2U & ((0x3fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                    >> 6U) & ((0x7fffffeU 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                                  >> 5U)) 
                                              | (0xffffffeU 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                                    >> 4U))))) 
                    | (0x7fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                      >> 5U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                                >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02817__029 
        = ((0x3ffbU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02817__029)) 
           | (4U & ((0xfffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                   >> 8U) & ((0x1fffffcU 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                                 >> 7U)) 
                                             | (0x3fffffcU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                                   >> 6U))))) 
                    | (0x1fffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                      >> 7U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                                >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02817__029 
        = ((0x3ff7U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02817__029)) 
           | (8U & ((0x3ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                   >> 0xaU) & ((0x7ffff8U 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                               | (0xfffff8U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                                     >> 8U))))) 
                    | (0x7ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                     >> 9U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                               >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02817__029 
        = ((0x3fefU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02817__029)) 
           | (0x10U & ((0xffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                     >> 0xcU) & ((0x1ffff0U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                                     >> 0xbU)) 
                                                 | (0x3ffff0U 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                                       >> 0xaU))))) 
                       | (0x1ffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                        >> 0xbU) & 
                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                        >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                            >> 4U)) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                          >> 3U))) 
                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                          >> 2U)) | (((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                          >> 4U)) & 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                       >> 3U)) & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                                   >> 2U)))) 
                     | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                          >> 4U) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                       >> 3U))) & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                                    >> 2U)))) 
                    | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                         >> 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                   >> 3U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                              >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT__FirSig)) 
           | (2U & ((((0xffffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                           >> 7U)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                             >> 6U))) 
                                      << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                                >> 4U))) 
                      | (0x7fffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                             >> 7U)) 
                                         << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                                   >> 5U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                              >> 5U)) 
                                          << 1U)))) 
                     | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                        >> 6U) & ((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                                    >> 6U)) 
                                                  << 1U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                             >> 5U)) 
                                         << 1U)))) 
                    | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                       >> 6U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                                 >> 5U)) 
                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                        >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT__FirSig)) 
           | (4U & ((((0x3fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                           >> 0xaU)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                             >> 9U))) 
                                      << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                                >> 6U))) 
                      | (0x1fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                             >> 0xaU)) 
                                         << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                                   >> 7U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                              >> 8U)) 
                                          << 2U)))) 
                     | (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                       >> 8U) & ((~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                                 << 2U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                            >> 8U)) 
                                        << 2U)))) | 
                    (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                    >> 8U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                              >> 7U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                     >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT__FirSig)) 
           | (8U & ((((0xfffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                          >> 0xdU)) 
                                      & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                            >> 0xcU))) 
                                     << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                               >> 8U))) 
                      | (0x7ffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                            >> 0xdU)) 
                                        << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                                  >> 9U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                             >> 0xbU)) 
                                         << 3U)))) 
                     | (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                       >> 0xaU) & (
                                                   (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                                     >> 0xcU)) 
                                                   << 3U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                            >> 0xbU)) 
                                        << 3U)))) | 
                    (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                    >> 0xaU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                                >> 9U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                     >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & ((((0x3ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                             >> 0x10U)) 
                                         & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                               >> 0xfU))) 
                                        << 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                                  >> 0xaU))) 
                         | (0x1ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                               >> 0x10U)) 
                                           << 4U) & 
                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                           >> 0xbU)) 
                                         & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                                >> 0xeU)) 
                                            << 4U)))) 
                        | (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                         >> 0xcU) & 
                                        ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                             >> 0xfU)) 
                                         << 4U)) & 
                                       ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                            >> 0xeU)) 
                                        << 4U)))) | 
                       (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                      >> 0xcU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                                  >> 0xbU)) 
                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData 
                                       >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02816__029 
        = ((0x3ffeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02816__029)) 
           | (1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                      >> 4U) & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                 >> 3U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                           >> 2U))) 
                    | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                        >> 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                  >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02816__029 
        = ((0x3ffdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02816__029)) 
           | (2U & ((0x3fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                    >> 6U) & ((0x7fffffeU 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                                  >> 5U)) 
                                              | (0xffffffeU 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                                    >> 4U))))) 
                    | (0x7fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                      >> 5U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                                >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02816__029 
        = ((0x3ffbU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02816__029)) 
           | (4U & ((0xfffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                   >> 8U) & ((0x1fffffcU 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                                 >> 7U)) 
                                             | (0x3fffffcU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                                   >> 6U))))) 
                    | (0x1fffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                      >> 7U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                                >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02816__029 
        = ((0x3ff7U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02816__029)) 
           | (8U & ((0x3ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                   >> 0xaU) & ((0x7ffff8U 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                               | (0xfffff8U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                                     >> 8U))))) 
                    | (0x7ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                     >> 9U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                               >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02816__029 
        = ((0x3fefU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02816__029)) 
           | (0x10U & ((0xffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                     >> 0xcU) & ((0x1ffff0U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                                     >> 0xbU)) 
                                                 | (0x3ffff0U 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                                       >> 0xaU))))) 
                       | (0x1ffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                        >> 0xbU) & 
                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                        >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                            >> 4U)) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                          >> 3U))) 
                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                          >> 2U)) | (((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                          >> 4U)) & 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                       >> 3U)) & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                                   >> 2U)))) 
                     | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                          >> 4U) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                       >> 3U))) & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                                    >> 2U)))) 
                    | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                         >> 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                   >> 3U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                              >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT__FirSig)) 
           | (2U & ((((0xffffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                           >> 7U)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                             >> 6U))) 
                                      << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                                >> 4U))) 
                      | (0x7fffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                             >> 7U)) 
                                         << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                                   >> 5U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                              >> 5U)) 
                                          << 1U)))) 
                     | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                        >> 6U) & ((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                                    >> 6U)) 
                                                  << 1U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                             >> 5U)) 
                                         << 1U)))) 
                    | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                       >> 6U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                                 >> 5U)) 
                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                        >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT__FirSig)) 
           | (4U & ((((0x3fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                           >> 0xaU)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                             >> 9U))) 
                                      << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                                >> 6U))) 
                      | (0x1fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                             >> 0xaU)) 
                                         << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                                   >> 7U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                              >> 8U)) 
                                          << 2U)))) 
                     | (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                       >> 8U) & ((~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                                 << 2U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                            >> 8U)) 
                                        << 2U)))) | 
                    (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                    >> 8U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                              >> 7U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                     >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT__FirSig)) 
           | (8U & ((((0xfffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                          >> 0xdU)) 
                                      & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                            >> 0xcU))) 
                                     << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                               >> 8U))) 
                      | (0x7ffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                            >> 0xdU)) 
                                        << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                                  >> 9U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                             >> 0xbU)) 
                                         << 3U)))) 
                     | (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                       >> 0xaU) & (
                                                   (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                                     >> 0xcU)) 
                                                   << 3U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                            >> 0xbU)) 
                                        << 3U)))) | 
                    (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                    >> 0xaU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                                >> 9U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                     >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & ((((0x3ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                             >> 0x10U)) 
                                         & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                               >> 0xfU))) 
                                        << 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                                  >> 0xaU))) 
                         | (0x1ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                               >> 0x10U)) 
                                           << 4U) & 
                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                           >> 0xbU)) 
                                         & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                                >> 0xeU)) 
                                            << 4U)))) 
                        | (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                         >> 0xcU) & 
                                        ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                             >> 0xfU)) 
                                         << 4U)) & 
                                       ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                            >> 0xeU)) 
                                        << 4U)))) | 
                       (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                      >> 0xcU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                                  >> 0xbU)) 
                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData 
                                       >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02815__029 
        = ((0x3ffeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02815__029)) 
           | (1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                      >> 4U) & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                 >> 3U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                           >> 2U))) 
                    | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                        >> 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                  >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02815__029 
        = ((0x3ffdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02815__029)) 
           | (2U & ((0x3fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                    >> 6U) & ((0x7fffffeU 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                                  >> 5U)) 
                                              | (0xffffffeU 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                                    >> 4U))))) 
                    | (0x7fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                      >> 5U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                                >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02815__029 
        = ((0x3ffbU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02815__029)) 
           | (4U & ((0xfffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                   >> 8U) & ((0x1fffffcU 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                                 >> 7U)) 
                                             | (0x3fffffcU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                                   >> 6U))))) 
                    | (0x1fffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                      >> 7U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                                >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02815__029 
        = ((0x3ff7U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02815__029)) 
           | (8U & ((0x3ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                   >> 0xaU) & ((0x7ffff8U 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                               | (0xfffff8U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                                     >> 8U))))) 
                    | (0x7ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                     >> 9U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                               >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02815__029 
        = ((0x3fefU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02815__029)) 
           | (0x10U & ((0xffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                     >> 0xcU) & ((0x1ffff0U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                                     >> 0xbU)) 
                                                 | (0x3ffff0U 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                                       >> 0xaU))))) 
                       | (0x1ffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                        >> 0xbU) & 
                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                        >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                            >> 4U)) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                          >> 3U))) 
                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                          >> 2U)) | (((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                          >> 4U)) & 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                       >> 3U)) & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                                   >> 2U)))) 
                     | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                          >> 4U) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                       >> 3U))) & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                                    >> 2U)))) 
                    | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                         >> 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                   >> 3U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                              >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT__FirSig)) 
           | (2U & ((((0xffffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                           >> 7U)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                             >> 6U))) 
                                      << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                                >> 4U))) 
                      | (0x7fffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                             >> 7U)) 
                                         << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                                   >> 5U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                              >> 5U)) 
                                          << 1U)))) 
                     | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                        >> 6U) & ((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                                    >> 6U)) 
                                                  << 1U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                             >> 5U)) 
                                         << 1U)))) 
                    | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                       >> 6U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                                 >> 5U)) 
                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                        >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT__FirSig)) 
           | (4U & ((((0x3fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                           >> 0xaU)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                             >> 9U))) 
                                      << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                                >> 6U))) 
                      | (0x1fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                             >> 0xaU)) 
                                         << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                                   >> 7U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                              >> 8U)) 
                                          << 2U)))) 
                     | (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                       >> 8U) & ((~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                                 << 2U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                            >> 8U)) 
                                        << 2U)))) | 
                    (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                    >> 8U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                              >> 7U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                     >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT__FirSig)) 
           | (8U & ((((0xfffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                          >> 0xdU)) 
                                      & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                            >> 0xcU))) 
                                     << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                               >> 8U))) 
                      | (0x7ffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                            >> 0xdU)) 
                                        << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                                  >> 9U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                             >> 0xbU)) 
                                         << 3U)))) 
                     | (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                       >> 0xaU) & (
                                                   (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                                     >> 0xcU)) 
                                                   << 3U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                            >> 0xbU)) 
                                        << 3U)))) | 
                    (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                    >> 0xaU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                                >> 9U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                     >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & ((((0x3ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                             >> 0x10U)) 
                                         & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                               >> 0xfU))) 
                                        << 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                                  >> 0xaU))) 
                         | (0x1ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                               >> 0x10U)) 
                                           << 4U) & 
                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                           >> 0xbU)) 
                                         & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                                >> 0xeU)) 
                                            << 4U)))) 
                        | (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                         >> 0xcU) & 
                                        ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                             >> 0xfU)) 
                                         << 4U)) & 
                                       ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                            >> 0xeU)) 
                                        << 4U)))) | 
                       (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                      >> 0xcU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                                  >> 0xbU)) 
                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData 
                                       >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02814__029 
        = ((0x3ffeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02814__029)) 
           | (1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                      >> 4U) & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                 >> 3U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                           >> 2U))) 
                    | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                        >> 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                  >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02814__029 
        = ((0x3ffdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02814__029)) 
           | (2U & ((0x3fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                    >> 6U) & ((0x7fffffeU 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                                  >> 5U)) 
                                              | (0xffffffeU 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                                    >> 4U))))) 
                    | (0x7fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                      >> 5U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                                >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02814__029 
        = ((0x3ffbU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02814__029)) 
           | (4U & ((0xfffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                   >> 8U) & ((0x1fffffcU 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                                 >> 7U)) 
                                             | (0x3fffffcU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                                   >> 6U))))) 
                    | (0x1fffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                      >> 7U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                                >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02814__029 
        = ((0x3ff7U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02814__029)) 
           | (8U & ((0x3ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                   >> 0xaU) & ((0x7ffff8U 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                               | (0xfffff8U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                                     >> 8U))))) 
                    | (0x7ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                     >> 9U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                               >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02814__029 
        = ((0x3fefU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02814__029)) 
           | (0x10U & ((0xffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                     >> 0xcU) & ((0x1ffff0U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                                     >> 0xbU)) 
                                                 | (0x3ffff0U 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                                       >> 0xaU))))) 
                       | (0x1ffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                        >> 0xbU) & 
                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                        >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                            >> 4U)) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                          >> 3U))) 
                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                          >> 2U)) | (((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                          >> 4U)) & 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                       >> 3U)) & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                                   >> 2U)))) 
                     | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                          >> 4U) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                       >> 3U))) & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                                    >> 2U)))) 
                    | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                         >> 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                   >> 3U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                              >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT__FirSig)) 
           | (2U & ((((0xffffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                           >> 7U)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                             >> 6U))) 
                                      << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                                >> 4U))) 
                      | (0x7fffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                             >> 7U)) 
                                         << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                                   >> 5U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                              >> 5U)) 
                                          << 1U)))) 
                     | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                        >> 6U) & ((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                                    >> 6U)) 
                                                  << 1U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                             >> 5U)) 
                                         << 1U)))) 
                    | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                       >> 6U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                                 >> 5U)) 
                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                        >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT__FirSig)) 
           | (4U & ((((0x3fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                           >> 0xaU)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                             >> 9U))) 
                                      << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                                >> 6U))) 
                      | (0x1fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                             >> 0xaU)) 
                                         << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                                   >> 7U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                              >> 8U)) 
                                          << 2U)))) 
                     | (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                       >> 8U) & ((~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                                 << 2U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                            >> 8U)) 
                                        << 2U)))) | 
                    (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                    >> 8U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                              >> 7U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                     >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT__FirSig)) 
           | (8U & ((((0xfffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                          >> 0xdU)) 
                                      & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                            >> 0xcU))) 
                                     << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                               >> 8U))) 
                      | (0x7ffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                            >> 0xdU)) 
                                        << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                                  >> 9U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                             >> 0xbU)) 
                                         << 3U)))) 
                     | (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                       >> 0xaU) & (
                                                   (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                                     >> 0xcU)) 
                                                   << 3U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                            >> 0xbU)) 
                                        << 3U)))) | 
                    (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                    >> 0xaU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                                >> 9U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                     >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & ((((0x3ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                             >> 0x10U)) 
                                         & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                               >> 0xfU))) 
                                        << 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                                  >> 0xaU))) 
                         | (0x1ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                               >> 0x10U)) 
                                           << 4U) & 
                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                           >> 0xbU)) 
                                         & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                                >> 0xeU)) 
                                            << 4U)))) 
                        | (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                         >> 0xcU) & 
                                        ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                             >> 0xfU)) 
                                         << 4U)) & 
                                       ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                            >> 0xeU)) 
                                        << 4U)))) | 
                       (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                      >> 0xcU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                                  >> 0xbU)) 
                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData 
                                       >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02813__029 
        = ((0x3ffeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02813__029)) 
           | (1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                      >> 4U) & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                 >> 3U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                           >> 2U))) 
                    | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                        >> 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                  >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02813__029 
        = ((0x3ffdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02813__029)) 
           | (2U & ((0x3fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                    >> 6U) & ((0x7fffffeU 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                                  >> 5U)) 
                                              | (0xffffffeU 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                                    >> 4U))))) 
                    | (0x7fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                      >> 5U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                                >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02813__029 
        = ((0x3ffbU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02813__029)) 
           | (4U & ((0xfffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                   >> 8U) & ((0x1fffffcU 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                                 >> 7U)) 
                                             | (0x3fffffcU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                                   >> 6U))))) 
                    | (0x1fffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                      >> 7U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                                >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02813__029 
        = ((0x3ff7U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02813__029)) 
           | (8U & ((0x3ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                   >> 0xaU) & ((0x7ffff8U 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                               | (0xfffff8U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                                     >> 8U))))) 
                    | (0x7ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                     >> 9U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                               >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02813__029 
        = ((0x3fefU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02813__029)) 
           | (0x10U & ((0xffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                     >> 0xcU) & ((0x1ffff0U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                                     >> 0xbU)) 
                                                 | (0x3ffff0U 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                                       >> 0xaU))))) 
                       | (0x1ffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                        >> 0xbU) & 
                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                        >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                            >> 4U)) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                          >> 3U))) 
                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                          >> 2U)) | (((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                          >> 4U)) & 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                       >> 3U)) & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                                   >> 2U)))) 
                     | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                          >> 4U) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                       >> 3U))) & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                                    >> 2U)))) 
                    | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                         >> 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                   >> 3U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                              >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT__FirSig)) 
           | (2U & ((((0xffffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                           >> 7U)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                             >> 6U))) 
                                      << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                                >> 4U))) 
                      | (0x7fffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                             >> 7U)) 
                                         << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                                   >> 5U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                              >> 5U)) 
                                          << 1U)))) 
                     | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                        >> 6U) & ((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                                    >> 6U)) 
                                                  << 1U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                             >> 5U)) 
                                         << 1U)))) 
                    | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                       >> 6U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                                 >> 5U)) 
                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                        >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT__FirSig)) 
           | (4U & ((((0x3fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                           >> 0xaU)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                             >> 9U))) 
                                      << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                                >> 6U))) 
                      | (0x1fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                             >> 0xaU)) 
                                         << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                                   >> 7U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                              >> 8U)) 
                                          << 2U)))) 
                     | (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                       >> 8U) & ((~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                                 << 2U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                            >> 8U)) 
                                        << 2U)))) | 
                    (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                    >> 8U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                              >> 7U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                     >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT__FirSig)) 
           | (8U & ((((0xfffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                          >> 0xdU)) 
                                      & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                            >> 0xcU))) 
                                     << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                               >> 8U))) 
                      | (0x7ffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                            >> 0xdU)) 
                                        << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                                  >> 9U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                             >> 0xbU)) 
                                         << 3U)))) 
                     | (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                       >> 0xaU) & (
                                                   (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                                     >> 0xcU)) 
                                                   << 3U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                            >> 0xbU)) 
                                        << 3U)))) | 
                    (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                    >> 0xaU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                                >> 9U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                     >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & ((((0x3ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                             >> 0x10U)) 
                                         & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                               >> 0xfU))) 
                                        << 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                                  >> 0xaU))) 
                         | (0x1ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                               >> 0x10U)) 
                                           << 4U) & 
                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                           >> 0xbU)) 
                                         & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                                >> 0xeU)) 
                                            << 4U)))) 
                        | (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                         >> 0xcU) & 
                                        ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                             >> 0xfU)) 
                                         << 4U)) & 
                                       ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                            >> 0xeU)) 
                                        << 4U)))) | 
                       (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                      >> 0xcU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                                  >> 0xbU)) 
                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData 
                                       >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02812__029 
        = ((0x3ffeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02812__029)) 
           | (1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                      >> 4U) & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                 >> 3U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                           >> 2U))) 
                    | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                        >> 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                  >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02812__029 
        = ((0x3ffdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02812__029)) 
           | (2U & ((0x3fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                    >> 6U) & ((0x7fffffeU 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                                  >> 5U)) 
                                              | (0xffffffeU 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                                    >> 4U))))) 
                    | (0x7fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                      >> 5U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                                >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02812__029 
        = ((0x3ffbU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02812__029)) 
           | (4U & ((0xfffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                   >> 8U) & ((0x1fffffcU 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                                 >> 7U)) 
                                             | (0x3fffffcU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                                   >> 6U))))) 
                    | (0x1fffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                      >> 7U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                                >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02812__029 
        = ((0x3ff7U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02812__029)) 
           | (8U & ((0x3ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                   >> 0xaU) & ((0x7ffff8U 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                               | (0xfffff8U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                                     >> 8U))))) 
                    | (0x7ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                     >> 9U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                               >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02812__029 
        = ((0x3fefU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02812__029)) 
           | (0x10U & ((0xffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                     >> 0xcU) & ((0x1ffff0U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                                     >> 0xbU)) 
                                                 | (0x3ffff0U 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                                       >> 0xaU))))) 
                       | (0x1ffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                        >> 0xbU) & 
                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                        >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                            >> 4U)) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                          >> 3U))) 
                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                          >> 2U)) | (((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                          >> 4U)) & 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                       >> 3U)) & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                                   >> 2U)))) 
                     | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                          >> 4U) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                       >> 3U))) & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                                    >> 2U)))) 
                    | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                         >> 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                   >> 3U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                              >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT__FirSig)) 
           | (2U & ((((0xffffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                           >> 7U)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                             >> 6U))) 
                                      << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                                >> 4U))) 
                      | (0x7fffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                             >> 7U)) 
                                         << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                                   >> 5U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                              >> 5U)) 
                                          << 1U)))) 
                     | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                        >> 6U) & ((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                                    >> 6U)) 
                                                  << 1U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                             >> 5U)) 
                                         << 1U)))) 
                    | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                       >> 6U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                                 >> 5U)) 
                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                        >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT__FirSig)) 
           | (4U & ((((0x3fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                           >> 0xaU)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                             >> 9U))) 
                                      << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                                >> 6U))) 
                      | (0x1fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                             >> 0xaU)) 
                                         << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                                   >> 7U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                              >> 8U)) 
                                          << 2U)))) 
                     | (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                       >> 8U) & ((~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                                 << 2U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                            >> 8U)) 
                                        << 2U)))) | 
                    (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                    >> 8U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                              >> 7U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                     >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT__FirSig)) 
           | (8U & ((((0xfffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                          >> 0xdU)) 
                                      & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                            >> 0xcU))) 
                                     << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                               >> 8U))) 
                      | (0x7ffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                            >> 0xdU)) 
                                        << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                                  >> 9U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                             >> 0xbU)) 
                                         << 3U)))) 
                     | (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                       >> 0xaU) & (
                                                   (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                                     >> 0xcU)) 
                                                   << 3U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                            >> 0xbU)) 
                                        << 3U)))) | 
                    (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                    >> 0xaU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                                >> 9U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                     >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & ((((0x3ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                             >> 0x10U)) 
                                         & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                               >> 0xfU))) 
                                        << 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                                  >> 0xaU))) 
                         | (0x1ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                               >> 0x10U)) 
                                           << 4U) & 
                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                           >> 0xbU)) 
                                         & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                                >> 0xeU)) 
                                            << 4U)))) 
                        | (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                         >> 0xcU) & 
                                        ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                             >> 0xfU)) 
                                         << 4U)) & 
                                       ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                            >> 0xeU)) 
                                        << 4U)))) | 
                       (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                      >> 0xcU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                                  >> 0xbU)) 
                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData 
                                       >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02811__029 
        = ((0x3ffeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02811__029)) 
           | (1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                      >> 4U) & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                 >> 3U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                           >> 2U))) 
                    | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                        >> 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                  >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02811__029 
        = ((0x3ffdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02811__029)) 
           | (2U & ((0x3fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                    >> 6U) & ((0x7fffffeU 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                                  >> 5U)) 
                                              | (0xffffffeU 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                                    >> 4U))))) 
                    | (0x7fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                      >> 5U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                                >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02811__029 
        = ((0x3ffbU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02811__029)) 
           | (4U & ((0xfffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                   >> 8U) & ((0x1fffffcU 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                                 >> 7U)) 
                                             | (0x3fffffcU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                                   >> 6U))))) 
                    | (0x1fffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                      >> 7U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                                >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02811__029 
        = ((0x3ff7U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02811__029)) 
           | (8U & ((0x3ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                   >> 0xaU) & ((0x7ffff8U 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                               | (0xfffff8U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                                     >> 8U))))) 
                    | (0x7ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                     >> 9U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                               >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02811__029 
        = ((0x3fefU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02811__029)) 
           | (0x10U & ((0xffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                     >> 0xcU) & ((0x1ffff0U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                                     >> 0xbU)) 
                                                 | (0x3ffff0U 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                                       >> 0xaU))))) 
                       | (0x1ffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                        >> 0xbU) & 
                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                        >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                            >> 4U)) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                          >> 3U))) 
                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                          >> 2U)) | (((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                          >> 4U)) & 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                       >> 3U)) & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                                   >> 2U)))) 
                     | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                          >> 4U) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                       >> 3U))) & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                                    >> 2U)))) 
                    | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                         >> 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                   >> 3U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                              >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__FirSig)) 
           | (2U & ((((0xffffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                           >> 7U)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                             >> 6U))) 
                                      << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                                >> 4U))) 
                      | (0x7fffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                             >> 7U)) 
                                         << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                                   >> 5U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                              >> 5U)) 
                                          << 1U)))) 
                     | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                        >> 6U) & ((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                                    >> 6U)) 
                                                  << 1U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                             >> 5U)) 
                                         << 1U)))) 
                    | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                       >> 6U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                                 >> 5U)) 
                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                        >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__FirSig)) 
           | (4U & ((((0x3fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                           >> 0xaU)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                             >> 9U))) 
                                      << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                                >> 6U))) 
                      | (0x1fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                             >> 0xaU)) 
                                         << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                                   >> 7U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                              >> 8U)) 
                                          << 2U)))) 
                     | (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                       >> 8U) & ((~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                                 << 2U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                            >> 8U)) 
                                        << 2U)))) | 
                    (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                    >> 8U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                              >> 7U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                     >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__FirSig)) 
           | (8U & ((((0xfffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                          >> 0xdU)) 
                                      & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                            >> 0xcU))) 
                                     << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                               >> 8U))) 
                      | (0x7ffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                            >> 0xdU)) 
                                        << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                                  >> 9U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                             >> 0xbU)) 
                                         << 3U)))) 
                     | (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                       >> 0xaU) & (
                                                   (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                                     >> 0xcU)) 
                                                   << 3U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                            >> 0xbU)) 
                                        << 3U)))) | 
                    (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                    >> 0xaU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                                >> 9U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                     >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & ((((0x3ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                             >> 0x10U)) 
                                         & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                               >> 0xfU))) 
                                        << 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                                  >> 0xaU))) 
                         | (0x1ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                               >> 0x10U)) 
                                           << 4U) & 
                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                           >> 0xbU)) 
                                         & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                                >> 0xeU)) 
                                            << 4U)))) 
                        | (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                         >> 0xcU) & 
                                        ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                             >> 0xfU)) 
                                         << 4U)) & 
                                       ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                            >> 0xeU)) 
                                        << 4U)))) | 
                       (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                      >> 0xcU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                                  >> 0xbU)) 
                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData 
                                       >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029 
        = ((0x3ffeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029)) 
           | (1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                      >> 4U) & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                 >> 3U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                           >> 2U))) 
                    | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                        >> 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                  >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029 
        = ((0x3ffdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029)) 
           | (2U & ((0x3fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                    >> 6U) & ((0x7fffffeU 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                                  >> 5U)) 
                                              | (0xffffffeU 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                                    >> 4U))))) 
                    | (0x7fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                      >> 5U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                                >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029 
        = ((0x3ffbU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029)) 
           | (4U & ((0xfffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                   >> 8U) & ((0x1fffffcU 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                                 >> 7U)) 
                                             | (0x3fffffcU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                                   >> 6U))))) 
                    | (0x1fffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                      >> 7U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                                >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029 
        = ((0x3ff7U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029)) 
           | (8U & ((0x3ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                   >> 0xaU) & ((0x7ffff8U 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                               | (0xfffff8U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                                     >> 8U))))) 
                    | (0x7ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                     >> 9U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                               >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029 
        = ((0x3fefU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029)) 
           | (0x10U & ((0xffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                     >> 0xcU) & ((0x1ffff0U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                                     >> 0xbU)) 
                                                 | (0x3ffff0U 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                                       >> 0xaU))))) 
                       | (0x1ffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                        >> 0xbU) & 
                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                        >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                            >> 4U)) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                          >> 3U))) 
                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                          >> 2U)) | (((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                          >> 4U)) & 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                       >> 3U)) & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                                   >> 2U)))) 
                     | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                          >> 4U) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                       >> 3U))) & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                                    >> 2U)))) 
                    | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                         >> 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                   >> 3U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                              >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FirSig)) 
           | (2U & ((((0xffffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                           >> 7U)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                             >> 6U))) 
                                      << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                                >> 4U))) 
                      | (0x7fffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                             >> 7U)) 
                                         << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                                   >> 5U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                              >> 5U)) 
                                          << 1U)))) 
                     | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                        >> 6U) & ((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                                    >> 6U)) 
                                                  << 1U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                             >> 5U)) 
                                         << 1U)))) 
                    | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                       >> 6U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                                 >> 5U)) 
                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                        >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FirSig)) 
           | (4U & ((((0x3fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                           >> 0xaU)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                             >> 9U))) 
                                      << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                                >> 6U))) 
                      | (0x1fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                             >> 0xaU)) 
                                         << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                                   >> 7U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                              >> 8U)) 
                                          << 2U)))) 
                     | (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                       >> 8U) & ((~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                                 << 2U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                            >> 8U)) 
                                        << 2U)))) | 
                    (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                    >> 8U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                              >> 7U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                     >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FirSig)) 
           | (8U & ((((0xfffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                          >> 0xdU)) 
                                      & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                            >> 0xcU))) 
                                     << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                               >> 8U))) 
                      | (0x7ffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                            >> 0xdU)) 
                                        << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                                  >> 9U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                             >> 0xbU)) 
                                         << 3U)))) 
                     | (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                       >> 0xaU) & (
                                                   (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                                     >> 0xcU)) 
                                                   << 3U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                            >> 0xbU)) 
                                        << 3U)))) | 
                    (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                    >> 0xaU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                                >> 9U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                     >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & ((((0x3ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                             >> 0x10U)) 
                                         & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                               >> 0xfU))) 
                                        << 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                                  >> 0xaU))) 
                         | (0x1ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                               >> 0x10U)) 
                                           << 4U) & 
                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                           >> 0xbU)) 
                                         & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                                >> 0xeU)) 
                                            << 4U)))) 
                        | (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                         >> 0xcU) & 
                                        ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                             >> 0xfU)) 
                                         << 4U)) & 
                                       ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                            >> 0xeU)) 
                                        << 4U)))) | 
                       (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                      >> 0xcU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                                  >> 0xbU)) 
                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData 
                                       >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029 
        = ((0x3ffeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029)) 
           | (1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                      >> 4U) & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                 >> 3U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                           >> 2U))) 
                    | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                        >> 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                  >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029 
        = ((0x3ffdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029)) 
           | (2U & ((0x3fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                    >> 6U) & ((0x7fffffeU 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                                  >> 5U)) 
                                              | (0xffffffeU 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                                    >> 4U))))) 
                    | (0x7fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                      >> 5U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                                >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029 
        = ((0x3ffbU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029)) 
           | (4U & ((0xfffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                   >> 8U) & ((0x1fffffcU 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                                 >> 7U)) 
                                             | (0x3fffffcU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                                   >> 6U))))) 
                    | (0x1fffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                      >> 7U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                                >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029 
        = ((0x3ff7U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029)) 
           | (8U & ((0x3ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                   >> 0xaU) & ((0x7ffff8U 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                               | (0xfffff8U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                                     >> 8U))))) 
                    | (0x7ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                     >> 9U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                               >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029 
        = ((0x3fefU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029)) 
           | (0x10U & ((0xffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                     >> 0xcU) & ((0x1ffff0U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                                     >> 0xbU)) 
                                                 | (0x3ffff0U 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                                       >> 0xaU))))) 
                       | (0x1ffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                        >> 0xbU) & 
                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                        >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                            >> 4U)) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                          >> 3U))) 
                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                          >> 2U)) | (((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                          >> 4U)) & 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                       >> 3U)) & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                                   >> 2U)))) 
                     | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                          >> 4U) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                       >> 3U))) & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                                    >> 2U)))) 
                    | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                         >> 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                   >> 3U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                              >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FirSig)) 
           | (2U & ((((0xffffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                           >> 7U)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                             >> 6U))) 
                                      << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                                >> 4U))) 
                      | (0x7fffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                             >> 7U)) 
                                         << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                                   >> 5U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                              >> 5U)) 
                                          << 1U)))) 
                     | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                        >> 6U) & ((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                                    >> 6U)) 
                                                  << 1U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                             >> 5U)) 
                                         << 1U)))) 
                    | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                       >> 6U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                                 >> 5U)) 
                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                        >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FirSig)) 
           | (4U & ((((0x3fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                           >> 0xaU)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                             >> 9U))) 
                                      << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                                >> 6U))) 
                      | (0x1fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                             >> 0xaU)) 
                                         << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                                   >> 7U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                              >> 8U)) 
                                          << 2U)))) 
                     | (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                       >> 8U) & ((~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                                 << 2U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                            >> 8U)) 
                                        << 2U)))) | 
                    (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                    >> 8U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                              >> 7U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                     >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FirSig)) 
           | (8U & ((((0xfffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                          >> 0xdU)) 
                                      & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                            >> 0xcU))) 
                                     << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                               >> 8U))) 
                      | (0x7ffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                            >> 0xdU)) 
                                        << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                                  >> 9U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                             >> 0xbU)) 
                                         << 3U)))) 
                     | (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                       >> 0xaU) & (
                                                   (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                                     >> 0xcU)) 
                                                   << 3U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                            >> 0xbU)) 
                                        << 3U)))) | 
                    (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                    >> 0xaU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                                >> 9U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                     >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & ((((0x3ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                             >> 0x10U)) 
                                         & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                               >> 0xfU))) 
                                        << 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                                  >> 0xaU))) 
                         | (0x1ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                               >> 0x10U)) 
                                           << 4U) & 
                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                           >> 0xbU)) 
                                         & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                                >> 0xeU)) 
                                            << 4U)))) 
                        | (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                         >> 0xcU) & 
                                        ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                             >> 0xfU)) 
                                         << 4U)) & 
                                       ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                            >> 0xeU)) 
                                        << 4U)))) | 
                       (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                      >> 0xcU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                                  >> 0xbU)) 
                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData 
                                       >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029 
        = ((0x3ffeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029)) 
           | (1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                      >> 4U) & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                 >> 3U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                           >> 2U))) 
                    | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                        >> 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                  >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029 
        = ((0x3ffdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029)) 
           | (2U & ((0x3fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                    >> 6U) & ((0x7fffffeU 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                                  >> 5U)) 
                                              | (0xffffffeU 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                                    >> 4U))))) 
                    | (0x7fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                      >> 5U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                                >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029 
        = ((0x3ffbU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029)) 
           | (4U & ((0xfffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                   >> 8U) & ((0x1fffffcU 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                                 >> 7U)) 
                                             | (0x3fffffcU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                                   >> 6U))))) 
                    | (0x1fffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                      >> 7U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                                >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029 
        = ((0x3ff7U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029)) 
           | (8U & ((0x3ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                   >> 0xaU) & ((0x7ffff8U 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                               | (0xfffff8U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                                     >> 8U))))) 
                    | (0x7ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                     >> 9U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                               >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029 
        = ((0x3fefU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029)) 
           | (0x10U & ((0xffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                     >> 0xcU) & ((0x1ffff0U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                                     >> 0xbU)) 
                                                 | (0x3ffff0U 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                                       >> 0xaU))))) 
                       | (0x1ffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                        >> 0xbU) & 
                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                        >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                            >> 4U)) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                          >> 3U))) 
                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                          >> 2U)) | (((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                          >> 4U)) & 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                       >> 3U)) & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                                   >> 2U)))) 
                     | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                          >> 4U) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                       >> 3U))) & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                                    >> 2U)))) 
                    | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                         >> 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                   >> 3U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                              >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FirSig)) 
           | (2U & ((((0xffffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                           >> 7U)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                             >> 6U))) 
                                      << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                                >> 4U))) 
                      | (0x7fffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                             >> 7U)) 
                                         << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                                   >> 5U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                              >> 5U)) 
                                          << 1U)))) 
                     | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                        >> 6U) & ((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                                    >> 6U)) 
                                                  << 1U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                             >> 5U)) 
                                         << 1U)))) 
                    | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                       >> 6U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                                 >> 5U)) 
                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                        >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FirSig)) 
           | (4U & ((((0x3fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                           >> 0xaU)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                             >> 9U))) 
                                      << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                                >> 6U))) 
                      | (0x1fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                             >> 0xaU)) 
                                         << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                                   >> 7U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                              >> 8U)) 
                                          << 2U)))) 
                     | (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                       >> 8U) & ((~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                                 << 2U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                            >> 8U)) 
                                        << 2U)))) | 
                    (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                    >> 8U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                              >> 7U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                     >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FirSig)) 
           | (8U & ((((0xfffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                          >> 0xdU)) 
                                      & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                            >> 0xcU))) 
                                     << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                               >> 8U))) 
                      | (0x7ffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                            >> 0xdU)) 
                                        << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                                  >> 9U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                             >> 0xbU)) 
                                         << 3U)))) 
                     | (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                       >> 0xaU) & (
                                                   (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                                     >> 0xcU)) 
                                                   << 3U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                            >> 0xbU)) 
                                        << 3U)))) | 
                    (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                    >> 0xaU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                                >> 9U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                     >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & ((((0x3ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                             >> 0x10U)) 
                                         & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                               >> 0xfU))) 
                                        << 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                                  >> 0xaU))) 
                         | (0x1ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                               >> 0x10U)) 
                                           << 4U) & 
                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                           >> 0xbU)) 
                                         & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                                >> 0xeU)) 
                                            << 4U)))) 
                        | (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                         >> 0xcU) & 
                                        ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                             >> 0xfU)) 
                                         << 4U)) & 
                                       ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                            >> 0xeU)) 
                                        << 4U)))) | 
                       (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                      >> 0xcU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                                  >> 0xbU)) 
                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData 
                                       >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029 
        = ((0x3ffeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029)) 
           | (1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                      >> 4U) & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                 >> 3U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                           >> 2U))) 
                    | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                        >> 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                  >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029 
        = ((0x3ffdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029)) 
           | (2U & ((0x3fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                    >> 6U) & ((0x7fffffeU 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                                  >> 5U)) 
                                              | (0xffffffeU 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                                    >> 4U))))) 
                    | (0x7fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                      >> 5U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                                >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029 
        = ((0x3ffbU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029)) 
           | (4U & ((0xfffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                   >> 8U) & ((0x1fffffcU 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                                 >> 7U)) 
                                             | (0x3fffffcU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                                   >> 6U))))) 
                    | (0x1fffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                      >> 7U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                                >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029 
        = ((0x3ff7U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029)) 
           | (8U & ((0x3ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                   >> 0xaU) & ((0x7ffff8U 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                               | (0xfffff8U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                                     >> 8U))))) 
                    | (0x7ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                     >> 9U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                               >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029 
        = ((0x3fefU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029)) 
           | (0x10U & ((0xffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                     >> 0xcU) & ((0x1ffff0U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                                     >> 0xbU)) 
                                                 | (0x3ffff0U 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                                       >> 0xaU))))) 
                       | (0x1ffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                        >> 0xbU) & 
                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                        >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                            >> 4U)) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                          >> 3U))) 
                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                          >> 2U)) | (((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                          >> 4U)) & 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                       >> 3U)) & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                                   >> 2U)))) 
                     | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                          >> 4U) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                       >> 3U))) & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                                    >> 2U)))) 
                    | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                         >> 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                   >> 3U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                              >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FirSig)) 
           | (2U & ((((0xffffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                           >> 7U)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                             >> 6U))) 
                                      << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                                >> 4U))) 
                      | (0x7fffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                             >> 7U)) 
                                         << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                                   >> 5U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                              >> 5U)) 
                                          << 1U)))) 
                     | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                        >> 6U) & ((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                                    >> 6U)) 
                                                  << 1U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                             >> 5U)) 
                                         << 1U)))) 
                    | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                       >> 6U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                                 >> 5U)) 
                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                        >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FirSig)) 
           | (4U & ((((0x3fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                           >> 0xaU)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                             >> 9U))) 
                                      << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                                >> 6U))) 
                      | (0x1fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                             >> 0xaU)) 
                                         << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                                   >> 7U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                              >> 8U)) 
                                          << 2U)))) 
                     | (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                       >> 8U) & ((~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                                 << 2U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                            >> 8U)) 
                                        << 2U)))) | 
                    (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                    >> 8U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                              >> 7U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                     >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FirSig)) 
           | (8U & ((((0xfffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                          >> 0xdU)) 
                                      & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                            >> 0xcU))) 
                                     << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                               >> 8U))) 
                      | (0x7ffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                            >> 0xdU)) 
                                        << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                                  >> 9U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                             >> 0xbU)) 
                                         << 3U)))) 
                     | (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                       >> 0xaU) & (
                                                   (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                                     >> 0xcU)) 
                                                   << 3U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                            >> 0xbU)) 
                                        << 3U)))) | 
                    (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                    >> 0xaU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                                >> 9U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                     >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & ((((0x3ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                             >> 0x10U)) 
                                         & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                               >> 0xfU))) 
                                        << 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                                  >> 0xaU))) 
                         | (0x1ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                               >> 0x10U)) 
                                           << 4U) & 
                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                           >> 0xbU)) 
                                         & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                                >> 0xeU)) 
                                            << 4U)))) 
                        | (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                         >> 0xcU) & 
                                        ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                             >> 0xfU)) 
                                         << 4U)) & 
                                       ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                            >> 0xeU)) 
                                        << 4U)))) | 
                       (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                      >> 0xcU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                                  >> 0xbU)) 
                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData 
                                       >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029 
        = ((0x3ffeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029)) 
           | (1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                      >> 4U) & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                 >> 3U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                           >> 2U))) 
                    | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                        >> 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                  >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029 
        = ((0x3ffdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029)) 
           | (2U & ((0x3fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                    >> 6U) & ((0x7fffffeU 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                                  >> 5U)) 
                                              | (0xffffffeU 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                                    >> 4U))))) 
                    | (0x7fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                      >> 5U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                                >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029 
        = ((0x3ffbU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029)) 
           | (4U & ((0xfffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                   >> 8U) & ((0x1fffffcU 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                                 >> 7U)) 
                                             | (0x3fffffcU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                                   >> 6U))))) 
                    | (0x1fffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                      >> 7U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                                >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029 
        = ((0x3ff7U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029)) 
           | (8U & ((0x3ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                   >> 0xaU) & ((0x7ffff8U 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                               | (0xfffff8U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                                     >> 8U))))) 
                    | (0x7ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                     >> 9U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                               >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029 
        = ((0x3fefU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029)) 
           | (0x10U & ((0xffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                     >> 0xcU) & ((0x1ffff0U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                                     >> 0xbU)) 
                                                 | (0x3ffff0U 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                                       >> 0xaU))))) 
                       | (0x1ffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                        >> 0xbU) & 
                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                        >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                            >> 4U)) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                          >> 3U))) 
                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                          >> 2U)) | (((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                          >> 4U)) & 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                       >> 3U)) & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                                   >> 2U)))) 
                     | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                          >> 4U) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                       >> 3U))) & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                                    >> 2U)))) 
                    | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                         >> 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                   >> 3U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                              >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FirSig)) 
           | (2U & ((((0xffffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                           >> 7U)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                             >> 6U))) 
                                      << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                                >> 4U))) 
                      | (0x7fffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                             >> 7U)) 
                                         << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                                   >> 5U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                              >> 5U)) 
                                          << 1U)))) 
                     | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                        >> 6U) & ((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                                    >> 6U)) 
                                                  << 1U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                             >> 5U)) 
                                         << 1U)))) 
                    | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                       >> 6U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                                 >> 5U)) 
                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                        >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FirSig)) 
           | (4U & ((((0x3fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                           >> 0xaU)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                             >> 9U))) 
                                      << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                                >> 6U))) 
                      | (0x1fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                             >> 0xaU)) 
                                         << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                                   >> 7U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                              >> 8U)) 
                                          << 2U)))) 
                     | (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                       >> 8U) & ((~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                                 << 2U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                            >> 8U)) 
                                        << 2U)))) | 
                    (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                    >> 8U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                              >> 7U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                     >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FirSig)) 
           | (8U & ((((0xfffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                          >> 0xdU)) 
                                      & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                            >> 0xcU))) 
                                     << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                               >> 8U))) 
                      | (0x7ffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                            >> 0xdU)) 
                                        << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                                  >> 9U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                             >> 0xbU)) 
                                         << 3U)))) 
                     | (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                       >> 0xaU) & (
                                                   (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                                     >> 0xcU)) 
                                                   << 3U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                            >> 0xbU)) 
                                        << 3U)))) | 
                    (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                    >> 0xaU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                                >> 9U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                     >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & ((((0x3ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                             >> 0x10U)) 
                                         & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                               >> 0xfU))) 
                                        << 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                                  >> 0xaU))) 
                         | (0x1ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                               >> 0x10U)) 
                                           << 4U) & 
                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                           >> 0xbU)) 
                                         & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                                >> 0xeU)) 
                                            << 4U)))) 
                        | (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                         >> 0xcU) & 
                                        ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                             >> 0xfU)) 
                                         << 4U)) & 
                                       ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                            >> 0xeU)) 
                                        << 4U)))) | 
                       (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                      >> 0xcU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                                  >> 0xbU)) 
                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData 
                                       >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029 
        = ((0x3ffeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029)) 
           | (1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                      >> 4U) & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                 >> 3U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                           >> 2U))) 
                    | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                        >> 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                  >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029 
        = ((0x3ffdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029)) 
           | (2U & ((0x3fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                    >> 6U) & ((0x7fffffeU 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                                  >> 5U)) 
                                              | (0xffffffeU 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                                    >> 4U))))) 
                    | (0x7fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                      >> 5U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                                >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029 
        = ((0x3ffbU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029)) 
           | (4U & ((0xfffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                   >> 8U) & ((0x1fffffcU 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                                 >> 7U)) 
                                             | (0x3fffffcU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                                   >> 6U))))) 
                    | (0x1fffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                      >> 7U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                                >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029 
        = ((0x3ff7U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029)) 
           | (8U & ((0x3ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                   >> 0xaU) & ((0x7ffff8U 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                               | (0xfffff8U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                                     >> 8U))))) 
                    | (0x7ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                     >> 9U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                               >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029 
        = ((0x3fefU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029)) 
           | (0x10U & ((0xffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                     >> 0xcU) & ((0x1ffff0U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                                     >> 0xbU)) 
                                                 | (0x3ffff0U 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                                       >> 0xaU))))) 
                       | (0x1ffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                        >> 0xbU) & 
                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                        >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                            >> 4U)) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                          >> 3U))) 
                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                          >> 2U)) | (((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                          >> 4U)) & 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                       >> 3U)) & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                                   >> 2U)))) 
                     | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                          >> 4U) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                       >> 3U))) & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                                    >> 2U)))) 
                    | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                         >> 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                   >> 3U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                              >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT__FirSig)) 
           | (2U & ((((0xffffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                           >> 7U)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                             >> 6U))) 
                                      << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                                >> 4U))) 
                      | (0x7fffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                             >> 7U)) 
                                         << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                                   >> 5U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                              >> 5U)) 
                                          << 1U)))) 
                     | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                        >> 6U) & ((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                                    >> 6U)) 
                                                  << 1U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                             >> 5U)) 
                                         << 1U)))) 
                    | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                       >> 6U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                                 >> 5U)) 
                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                        >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT__FirSig)) 
           | (4U & ((((0x3fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                           >> 0xaU)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                             >> 9U))) 
                                      << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                                >> 6U))) 
                      | (0x1fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                             >> 0xaU)) 
                                         << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                                   >> 7U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                              >> 8U)) 
                                          << 2U)))) 
                     | (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                       >> 8U) & ((~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                                 << 2U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                            >> 8U)) 
                                        << 2U)))) | 
                    (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                    >> 8U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                              >> 7U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                     >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT__FirSig)) 
           | (8U & ((((0xfffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                          >> 0xdU)) 
                                      & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                            >> 0xcU))) 
                                     << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                               >> 8U))) 
                      | (0x7ffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                            >> 0xdU)) 
                                        << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                                  >> 9U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                             >> 0xbU)) 
                                         << 3U)))) 
                     | (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                       >> 0xaU) & (
                                                   (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                                     >> 0xcU)) 
                                                   << 3U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                            >> 0xbU)) 
                                        << 3U)))) | 
                    (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                    >> 0xaU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                                >> 9U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                     >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & ((((0x3ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                             >> 0x10U)) 
                                         & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                               >> 0xfU))) 
                                        << 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                                  >> 0xaU))) 
                         | (0x1ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                               >> 0x10U)) 
                                           << 4U) & 
                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                           >> 0xbU)) 
                                         & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                                >> 0xeU)) 
                                            << 4U)))) 
                        | (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                         >> 0xcU) & 
                                        ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                             >> 0xfU)) 
                                         << 4U)) & 
                                       ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                            >> 0xeU)) 
                                        << 4U)))) | 
                       (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                      >> 0xcU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                                  >> 0xbU)) 
                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData 
                                       >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0284__029 
        = ((0x3ffeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0284__029)) 
           | (1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                      >> 4U) & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                 >> 3U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                           >> 2U))) 
                    | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                        >> 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                  >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0284__029 
        = ((0x3ffdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0284__029)) 
           | (2U & ((0x3fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                    >> 6U) & ((0x7fffffeU 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                  >> 5U)) 
                                              | (0xffffffeU 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                    >> 4U))))) 
                    | (0x7fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                      >> 5U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0284__029 
        = ((0x3ffbU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0284__029)) 
           | (4U & ((0xfffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                   >> 8U) & ((0x1fffffcU 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                 >> 7U)) 
                                             | (0x3fffffcU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                   >> 6U))))) 
                    | (0x1fffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                      >> 7U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0284__029 
        = ((0x3ff7U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0284__029)) 
           | (8U & ((0x3ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                   >> 0xaU) & ((0x7ffff8U 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                               | (0xfffff8U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                     >> 8U))))) 
                    | (0x7ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                     >> 9U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                               >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0284__029 
        = ((0x3fefU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0284__029)) 
           | (0x10U & ((0xffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                     >> 0xcU) & ((0x1ffff0U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                     >> 0xbU)) 
                                                 | (0x3ffff0U 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                       >> 0xaU))))) 
                       | (0x1ffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                        >> 0xbU) & 
                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                        >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                            >> 4U)) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                          >> 3U))) 
                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                          >> 2U)) | (((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                          >> 4U)) & 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                       >> 3U)) & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                   >> 2U)))) 
                     | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                          >> 4U) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                       >> 3U))) & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                    >> 2U)))) 
                    | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                         >> 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                   >> 3U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                              >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FirSig)) 
           | (2U & ((((0xffffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                           >> 7U)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                             >> 6U))) 
                                      << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                >> 4U))) 
                      | (0x7fffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                             >> 7U)) 
                                         << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                   >> 5U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                              >> 5U)) 
                                          << 1U)))) 
                     | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                        >> 6U) & ((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                    >> 6U)) 
                                                  << 1U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                             >> 5U)) 
                                         << 1U)))) 
                    | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                       >> 6U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                 >> 5U)) 
                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                        >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FirSig)) 
           | (4U & ((((0x3fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                           >> 0xaU)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                             >> 9U))) 
                                      << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                >> 6U))) 
                      | (0x1fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                             >> 0xaU)) 
                                         << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                   >> 7U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                              >> 8U)) 
                                          << 2U)))) 
                     | (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                       >> 8U) & ((~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                                 << 2U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                            >> 8U)) 
                                        << 2U)))) | 
                    (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                    >> 8U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                              >> 7U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                     >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FirSig)) 
           | (8U & ((((0xfffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                          >> 0xdU)) 
                                      & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                            >> 0xcU))) 
                                     << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                               >> 8U))) 
                      | (0x7ffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                            >> 0xdU)) 
                                        << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                  >> 9U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                             >> 0xbU)) 
                                         << 3U)))) 
                     | (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                       >> 0xaU) & (
                                                   (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                     >> 0xcU)) 
                                                   << 3U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                            >> 0xbU)) 
                                        << 3U)))) | 
                    (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                    >> 0xaU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                >> 9U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                     >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & ((((0x3ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                             >> 0x10U)) 
                                         & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                               >> 0xfU))) 
                                        << 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                  >> 0xaU))) 
                         | (0x1ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                               >> 0x10U)) 
                                           << 4U) & 
                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                           >> 0xbU)) 
                                         & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                >> 0xeU)) 
                                            << 4U)))) 
                        | (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                         >> 0xcU) & 
                                        ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                             >> 0xfU)) 
                                         << 4U)) & 
                                       ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                            >> 0xeU)) 
                                        << 4U)))) | 
                       (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                      >> 0xcU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                                  >> 0xbU)) 
                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData 
                                       >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029 
        = ((0x3ffeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029)) 
           | (1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                      >> 4U) & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                 >> 3U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                           >> 2U))) 
                    | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                        >> 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                  >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029 
        = ((0x3ffdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029)) 
           | (2U & ((0x3fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                    >> 6U) & ((0x7fffffeU 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                  >> 5U)) 
                                              | (0xffffffeU 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                    >> 4U))))) 
                    | (0x7fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                      >> 5U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029 
        = ((0x3ffbU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029)) 
           | (4U & ((0xfffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                   >> 8U) & ((0x1fffffcU 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                 >> 7U)) 
                                             | (0x3fffffcU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                   >> 6U))))) 
                    | (0x1fffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                      >> 7U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029 
        = ((0x3ff7U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029)) 
           | (8U & ((0x3ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                   >> 0xaU) & ((0x7ffff8U 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                               | (0xfffff8U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                     >> 8U))))) 
                    | (0x7ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                     >> 9U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                               >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029 
        = ((0x3fefU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029)) 
           | (0x10U & ((0xffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                     >> 0xcU) & ((0x1ffff0U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                     >> 0xbU)) 
                                                 | (0x3ffff0U 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                       >> 0xaU))))) 
                       | (0x1ffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                        >> 0xbU) & 
                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                        >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                            >> 4U)) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                          >> 3U))) 
                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                          >> 2U)) | (((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                          >> 4U)) & 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                       >> 3U)) & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                   >> 2U)))) 
                     | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                          >> 4U) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                       >> 3U))) & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                    >> 2U)))) 
                    | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                         >> 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                   >> 3U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                              >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FirSig)) 
           | (2U & ((((0xffffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                           >> 7U)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                             >> 6U))) 
                                      << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                >> 4U))) 
                      | (0x7fffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                             >> 7U)) 
                                         << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                   >> 5U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                              >> 5U)) 
                                          << 1U)))) 
                     | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                        >> 6U) & ((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                    >> 6U)) 
                                                  << 1U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                             >> 5U)) 
                                         << 1U)))) 
                    | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                       >> 6U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                 >> 5U)) 
                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                        >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FirSig)) 
           | (4U & ((((0x3fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                           >> 0xaU)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                             >> 9U))) 
                                      << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                >> 6U))) 
                      | (0x1fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                             >> 0xaU)) 
                                         << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                   >> 7U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                              >> 8U)) 
                                          << 2U)))) 
                     | (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                       >> 8U) & ((~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                                 << 2U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                            >> 8U)) 
                                        << 2U)))) | 
                    (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                    >> 8U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                              >> 7U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                     >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FirSig)) 
           | (8U & ((((0xfffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                          >> 0xdU)) 
                                      & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                            >> 0xcU))) 
                                     << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                               >> 8U))) 
                      | (0x7ffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                            >> 0xdU)) 
                                        << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                  >> 9U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                             >> 0xbU)) 
                                         << 3U)))) 
                     | (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                       >> 0xaU) & (
                                                   (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                     >> 0xcU)) 
                                                   << 3U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                            >> 0xbU)) 
                                        << 3U)))) | 
                    (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                    >> 0xaU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                >> 9U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                     >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & ((((0x3ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                             >> 0x10U)) 
                                         & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                               >> 0xfU))) 
                                        << 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                  >> 0xaU))) 
                         | (0x1ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                               >> 0x10U)) 
                                           << 4U) & 
                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                           >> 0xbU)) 
                                         & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                >> 0xeU)) 
                                            << 4U)))) 
                        | (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                         >> 0xcU) & 
                                        ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                             >> 0xfU)) 
                                         << 4U)) & 
                                       ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                            >> 0xeU)) 
                                        << 4U)))) | 
                       (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                      >> 0xcU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                                  >> 0xbU)) 
                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData 
                                       >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029 
        = ((0x3ffeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029)) 
           | (1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                      >> 4U) & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                 >> 3U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                           >> 2U))) 
                    | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                        >> 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                  >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029 
        = ((0x3ffdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029)) 
           | (2U & ((0x3fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                    >> 6U) & ((0x7fffffeU 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                  >> 5U)) 
                                              | (0xffffffeU 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                    >> 4U))))) 
                    | (0x7fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                      >> 5U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029 
        = ((0x3ffbU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029)) 
           | (4U & ((0xfffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                   >> 8U) & ((0x1fffffcU 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                 >> 7U)) 
                                             | (0x3fffffcU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                   >> 6U))))) 
                    | (0x1fffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                      >> 7U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029 
        = ((0x3ff7U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029)) 
           | (8U & ((0x3ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                   >> 0xaU) & ((0x7ffff8U 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                               | (0xfffff8U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                     >> 8U))))) 
                    | (0x7ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                     >> 9U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                               >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029 
        = ((0x3fefU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029)) 
           | (0x10U & ((0xffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                     >> 0xcU) & ((0x1ffff0U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                     >> 0xbU)) 
                                                 | (0x3ffff0U 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                       >> 0xaU))))) 
                       | (0x1ffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                        >> 0xbU) & 
                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                        >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FirSig 
        = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FirSig)) 
           | (1U & ((((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                            >> 4U)) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                          >> 3U))) 
                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                          >> 2U)) | (((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                          >> 4U)) & 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                       >> 3U)) & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                   >> 2U)))) 
                     | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                          >> 4U) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                       >> 3U))) & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                    >> 2U)))) 
                    | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                         >> 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                   >> 3U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                              >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FirSig 
        = ((0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FirSig)) 
           | (2U & ((((0xffffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                           >> 7U)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                             >> 6U))) 
                                      << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                >> 4U))) 
                      | (0x7fffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                             >> 7U)) 
                                         << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                   >> 5U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                              >> 5U)) 
                                          << 1U)))) 
                     | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                        >> 6U) & ((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                    >> 6U)) 
                                                  << 1U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                             >> 5U)) 
                                         << 1U)))) 
                    | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                       >> 6U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                 >> 5U)) 
                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                        >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FirSig 
        = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FirSig)) 
           | (4U & ((((0x3fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                           >> 0xaU)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                             >> 9U))) 
                                      << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                >> 6U))) 
                      | (0x1fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                             >> 0xaU)) 
                                         << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                   >> 7U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                              >> 8U)) 
                                          << 2U)))) 
                     | (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                       >> 8U) & ((~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                                 << 2U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                            >> 8U)) 
                                        << 2U)))) | 
                    (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                    >> 8U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                              >> 7U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                     >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FirSig 
        = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FirSig)) 
           | (8U & ((((0xfffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                          >> 0xdU)) 
                                      & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                            >> 0xcU))) 
                                     << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                               >> 8U))) 
                      | (0x7ffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                            >> 0xdU)) 
                                        << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                  >> 9U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                             >> 0xbU)) 
                                         << 3U)))) 
                     | (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                       >> 0xaU) & (
                                                   (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                     >> 0xcU)) 
                                                   << 3U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                            >> 0xbU)) 
                                        << 3U)))) | 
                    (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                    >> 0xaU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                >> 9U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                     >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FirSig 
        = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FirSig)) 
           | (0x10U & ((((0x3ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                             >> 0x10U)) 
                                         & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                               >> 0xfU))) 
                                        << 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                  >> 0xaU))) 
                         | (0x1ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                               >> 0x10U)) 
                                           << 4U) & 
                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                           >> 0xbU)) 
                                         & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                >> 0xeU)) 
                                            << 4U)))) 
                        | (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                         >> 0xcU) & 
                                        ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                             >> 0xfU)) 
                                         << 4U)) & 
                                       ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                            >> 0xeU)) 
                                        << 4U)))) | 
                       (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                      >> 0xcU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                                  >> 0xbU)) 
                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData 
                                       >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029 
        = ((0x3ffeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029)) 
           | (1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                      >> 4U) & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                 >> 3U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                           >> 2U))) 
                    | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                        >> 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                  >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029 
        = ((0x3ffdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029)) 
           | (2U & ((0x3fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                    >> 6U) & ((0x7fffffeU 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                  >> 5U)) 
                                              | (0xffffffeU 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                    >> 4U))))) 
                    | (0x7fffffeU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                      >> 5U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029 
        = ((0x3ffbU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029)) 
           | (4U & ((0xfffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                   >> 8U) & ((0x1fffffcU 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                 >> 7U)) 
                                             | (0x3fffffcU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                   >> 6U))))) 
                    | (0x1fffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                      >> 7U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029 
        = ((0x3ff7U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029)) 
           | (8U & ((0x3ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                   >> 0xaU) & ((0x7ffff8U 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                   >> 9U)) 
                                               | (0xfffff8U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                     >> 8U))))) 
                    | (0x7ffff8U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                     >> 9U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                               >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029 
        = ((0x3fefU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029)) 
           | (0x10U & ((0xffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                     >> 0xcU) & ((0x1ffff0U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                     >> 0xbU)) 
                                                 | (0x3ffff0U 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                       >> 0xaU))))) 
                       | (0x1ffff0U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                        >> 0xbU) & 
                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                        >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029 
        = ((0x3fbfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029)) 
           | (0x40U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                         << 6U) & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                    << 2U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                              << 3U))) 
                       | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                           << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                     << 3U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__SecSig 
        = ((0xdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__SecSig)) 
           | (2U & ((((0x3ffffffeU & ((((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData) 
                                        & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                              >> 4U))) 
                                       << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                 >> 2U))) 
                      | (0x1ffffffeU & ((((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData) 
                                          << 1U) & 
                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                          >> 3U)) & 
                                        ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                             >> 3U)) 
                                         << 1U)))) 
                     | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                          & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                >> 4U))) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                               >> 3U))) 
                        << 1U)) | (0x1ffffffeU & ((
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                    << 1U) 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                      >> 3U)) 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                     >> 2U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig 
        = ((0x1eU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig)) 
           | (1U & ((((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                            >> 4U)) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                          >> 3U))) 
                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                          >> 2U)) | (((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                          >> 4U)) & 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                       >> 3U)) & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                   >> 2U)))) 
                     | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                          >> 4U) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                       >> 3U))) & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                    >> 2U)))) 
                    | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                         >> 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                   >> 3U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                              >> 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig 
        = ((0x1dU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig)) 
           | (2U & ((((0xffffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                           >> 7U)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                             >> 6U))) 
                                      << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                >> 4U))) 
                      | (0x7fffffeU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                             >> 7U)) 
                                         << 1U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                   >> 5U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                              >> 5U)) 
                                          << 1U)))) 
                     | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                        >> 6U) & ((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                    >> 6U)) 
                                                  << 1U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                             >> 5U)) 
                                         << 1U)))) 
                    | (0x3fffffeU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                       >> 6U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                 >> 5U)) 
                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                        >> 4U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig 
        = ((0x1bU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig)) 
           | (4U & ((((0x3fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                           >> 0xaU)) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                             >> 9U))) 
                                      << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                >> 6U))) 
                      | (0x1fffffcU & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                             >> 0xaU)) 
                                         << 2U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                   >> 7U)) 
                                       & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                              >> 8U)) 
                                          << 2U)))) 
                     | (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                       >> 8U) & ((~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                   >> 9U)) 
                                                 << 2U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                            >> 8U)) 
                                        << 2U)))) | 
                    (0xfffffcU & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                    >> 8U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                              >> 7U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                     >> 6U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig 
        = ((0x17U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig)) 
           | (8U & ((((0xfffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                          >> 0xdU)) 
                                      & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                            >> 0xcU))) 
                                     << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                               >> 8U))) 
                      | (0x7ffff8U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                            >> 0xdU)) 
                                        << 3U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                  >> 9U)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                             >> 0xbU)) 
                                         << 3U)))) 
                     | (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                       >> 0xaU) & (
                                                   (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                     >> 0xcU)) 
                                                   << 3U)) 
                                     & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                            >> 0xbU)) 
                                        << 3U)))) | 
                    (0x3ffff8U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                    >> 0xaU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                >> 9U)) 
                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                     >> 8U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig 
        = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig)) 
           | (0x10U & ((((0x3ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                             >> 0x10U)) 
                                         & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                               >> 0xfU))) 
                                        << 4U) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                  >> 0xaU))) 
                         | (0x1ffff0U & ((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                               >> 0x10U)) 
                                           << 4U) & 
                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                           >> 0xbU)) 
                                         & ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                >> 0xeU)) 
                                            << 4U)))) 
                        | (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                         >> 0xcU) & 
                                        ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                             >> 0xfU)) 
                                         << 4U)) & 
                                       ((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                            >> 0xeU)) 
                                        << 4U)))) | 
                       (0xffff0U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                      >> 0xcU) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                  >> 0xbU)) 
                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                       >> 0xaU))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__add_entry_index 
        = (0x1fU & ((0xffffffffU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid)
                     ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__fcsr)
                     : (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__select_one_invalid_entry)));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_next 
        = ((((- (IData)((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst)))) 
             & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr) 
            | ((- (IData)((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst)))) 
               & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_incr)) 
           | ((- (IData)((2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst)))) 
              & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_wrap));
    vlTOPp->simu_top__DOT__soc__DOT__m0_wvalid = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu_wvalid) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_w) 
                                                     | (~ (IData)(vlTOPp->enable_delay))));
    vlTOPp->simu_top__DOT__soc__DOT__m0_arvalid = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu_arvalid) 
                                                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_ar) 
                                                      | (~ (IData)(vlTOPp->enable_delay))));
    vlTOPp->simu_top__DOT__soc__DOT__m0_awvalid = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu_awvalid) 
                                                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_aw) 
                                                      | (~ (IData)(vlTOPp->enable_delay))));
    vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__pre_num 
        = vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_pre_sel;
    vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__valid 
        = (7U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid));
    vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__Vfuncout 
        = ((1U == (IData)(vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__valid))
            ? 0U : ((2U == (IData)(vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__valid))
                     ? 1U : ((4U == (IData)(vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__valid))
                              ? 2U : ((3U == (IData)(vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__valid))
                                       ? ((0U != (IData)(vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__pre_num))
                                           ? 0U : 1U)
                                       : ((6U == (IData)(vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__valid))
                                           ? ((1U != (IData)(vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__pre_num))
                                               ? 1U
                                               : 2U)
                                           : ((5U == (IData)(vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__valid))
                                               ? ((2U 
                                                   != (IData)(vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__pre_num))
                                                   ? 2U
                                                   : 0U)
                                               : ((7U 
                                                   == (IData)(vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__valid))
                                                   ? 
                                                  ((0U 
                                                    == (IData)(vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__pre_num))
                                                    ? 1U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__pre_num))
                                                     ? 2U
                                                     : 0U))
                                                   : 7U)))))));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_0 
        = vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__Vfuncout;
    vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__pre_num 
        = vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_pre_sel;
    vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__valid 
        = (3U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid) 
                 >> 3U));
    vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__Vfuncout 
        = ((1U == (IData)(vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__valid))
            ? 3U : ((2U == (IData)(vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__valid))
                     ? 4U : ((4U == (IData)(vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__valid))
                              ? 5U : ((3U == (IData)(vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__valid))
                                       ? ((3U != (IData)(vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__pre_num))
                                           ? 3U : 4U)
                                       : ((6U == (IData)(vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__valid))
                                           ? ((4U != (IData)(vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__pre_num))
                                               ? 4U
                                               : 5U)
                                           : ((5U == (IData)(vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__valid))
                                               ? ((5U 
                                                   != (IData)(vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__pre_num))
                                                   ? 5U
                                                   : 3U)
                                               : ((7U 
                                                   == (IData)(vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__valid))
                                                   ? 
                                                  ((3U 
                                                    == (IData)(vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__pre_num))
                                                    ? 4U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__pre_num))
                                                     ? 5U
                                                     : 3U))
                                                   : 7U)))))));
    vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_1 
        = vlTOPp->__Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__Vfuncout;
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0 
        = ((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count)) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_push_pulse));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY 
        = (1U & ((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_number))
                  ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY_post_i)
                  : ((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_number))
                      ? ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY_post_i) 
                         >> 1U) : ((2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_number))
                                    ? ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY_post_i) 
                                       >> 2U) : ((3U 
                                                  != (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_number)) 
                                                 | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY_post_i) 
                                                    >> 3U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__tlbr_tlbelo0 
        = ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0
            [(0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)] 
            << 8U) | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__r_g) 
                       << 6U) | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0
                                  [(0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)] 
                                  << 4U) | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
                                             [(0x1fU 
                                               & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)] 
                                             << 2U) 
                                            | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0
                                                [(0x1fU 
                                                  & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)] 
                                                << 1U) 
                                               | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0
                                               [(0x1fU 
                                                 & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)])))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__tlbr_tlbelo1 
        = ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1
            [(0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)] 
            << 8U) | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__r_g) 
                       << 6U) | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1
                                  [(0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)] 
                                  << 4U) | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
                                             [(0x1fU 
                                               & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)] 
                                             << 2U) 
                                            | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1
                                                [(0x1fU 
                                                  & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)] 
                                                << 1U) 
                                               | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1
                                               [(0x1fU 
                                                 & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)])))));
    vlTOPp->simu_top__DOT__soc__DOT__s0_wready = (1U 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_allow_out) 
                                                     | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wvalid))));
    vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en 
        = (((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wvalid) 
            & (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_allow_out)) 
           & (IData)(vlTOPp->aresetn));
    vlTOPp->simu_top__DOT__soc__DOT__conf_s_wready 
        = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_allow_out) 
                 | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wvalid))));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en 
        = (((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wvalid) 
            & (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_allow_out)) 
           & (IData)(vlTOPp->aresetn));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb_ret_pc 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_jirl_flag)
            ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_buffer 
               << 2U) : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_target 
                         << 2U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__alu_op 
        = ((0x2fffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__alu_op)) 
           | (0x1000U & (((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                            & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                           << 0xcU) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                                       << 0xbU)) & 
                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                          >> 1U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__alu_op 
        = ((0x1fffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__alu_op)) 
           | (0x2000U & (((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                            & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                           << 0xdU) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                                       << 0xcU)) & 
                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                          << 1U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_to_btb 
        = (1U & (((((((((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                 >> 0x16U)) | (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                       >> 0x17U))) 
                       | (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                  >> 0x18U))) | (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                         >> 0x19U))) 
                     | (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                >> 0x1aU))) | (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                       >> 0x1bU))) 
                   | (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                              >> 0x15U))) | (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                     >> 0x14U))) 
                 | (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                            >> 0x13U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntid_w 
        = (1U & ((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                     & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d)) 
                   & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d) 
                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rk_d 
                     >> 0x18U)) & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rd_d));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvh_w 
        = (1U & ((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                     & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d)) 
                   & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d) 
                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rk_d 
                     >> 0x19U)) & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_d));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvl_w 
        = (1U & (((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                     & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d)) 
                    & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d) 
                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rk_d 
                      >> 0x18U)) & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_d) 
                 & (~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rd_d)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_pcaddi 
        = (1U & ((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                          >> 6U)) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                        >> 0x19U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_dbar 
        = (1U & ((((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                            >> 0xeU)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                                         >> 1U)) & 
                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                   >> 3U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                              >> 4U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ibar 
        = (1U & ((((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                            >> 0xeU)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                                         >> 1U)) & 
                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                   >> 3U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                              >> 5U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_break 
        = (1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 2U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                                >> 0x14U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_syscall 
        = (1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 2U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                                >> 0x16U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrrd 
        = (1U & ((((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                            >> 1U)) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                          >> 0x19U))) 
                  & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                        >> 0x18U))) & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_d));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_idle 
        = (1U & ((((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                            >> 1U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                                       >> 9U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d)) 
                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                    >> 0x11U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ertn 
        = (1U & (((((((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                               >> 1U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                                          >> 9U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d)) 
                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                       >> 0x10U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rk_d 
                                     >> 0xeU)) & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_d) 
                 & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rd_d));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbsrch 
        = (1U & (((((((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                               >> 1U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                                          >> 9U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d)) 
                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                       >> 0x10U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rk_d 
                                     >> 0xaU)) & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_d) 
                 & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rd_d));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbrd 
        = (1U & (((((((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                               >> 1U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                                          >> 9U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d)) 
                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                       >> 0x10U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rk_d 
                                     >> 0xbU)) & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_d) 
                 & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rd_d));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbwr 
        = (1U & (((((((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                               >> 1U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                                          >> 9U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d)) 
                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                       >> 0x10U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rk_d 
                                     >> 0xcU)) & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_d) 
                 & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rd_d));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbfill 
        = (1U & (((((((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                               >> 1U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                                          >> 9U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d)) 
                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                       >> 0x10U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rk_d 
                                     >> 0xdU)) & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_d) 
                 & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rd_d));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_lu12i_w 
        = (1U & ((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                          >> 5U)) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                        >> 0x19U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_pcaddu12i 
        = (1U & ((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                          >> 7U)) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                        >> 0x19U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_need_reg_data 
        = (1U & (((((((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                               >> 0x16U)) | (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                     >> 0x17U))) 
                     | (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                >> 0x18U))) | (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                       >> 0x19U))) 
                   | (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                              >> 0x1aU))) | (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                     >> 0x1bU))) 
                 | (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                            >> 0x13U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_slti 
        = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                 & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                    >> 8U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sltui 
        = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                 & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                    >> 9U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_andi 
        = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                 & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                    >> 0xdU)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ori 
        = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                 & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                    >> 0xeU)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_xori 
        = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                 & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                    >> 0xfU)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_slli_w 
        = (1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                      >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d)) 
                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                    >> 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_srli_w 
        = (1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                      >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d)) 
                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                    >> 9U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_srai_w 
        = (1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                      >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d)) 
                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                    >> 0x11U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_addi_w 
        = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                 & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                    >> 0xaU)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_b 
        = (1U & ((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                          >> 0xaU)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_h 
        = (1U & ((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                          >> 0xaU)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                                       >> 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_w 
        = (1U & ((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                          >> 0xaU)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                                       >> 2U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_bu 
        = (1U & ((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                          >> 0xaU)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                                       >> 8U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_hu 
        = (1U & ((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                          >> 0xaU)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                                       >> 9U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_preld 
        = (1U & ((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                          >> 0xaU)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                                       >> 0xbU)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ll_w 
        = (1U & (((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                           >> 8U)) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                         >> 0x19U))) 
                 & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                       >> 0x18U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_cacop 
        = (1U & ((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                          >> 1U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                                     >> 8U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mulh_wu 
        = (1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 1U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                                >> 0x1aU)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_div_wu 
        = (1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 2U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                                >> 2U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mod_wu 
        = (1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 2U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                                >> 3U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sub_w 
        = (1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 1U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                                >> 2U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_nor 
        = (1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 1U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                                >> 8U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_slt 
        = (1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 1U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                                >> 4U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sltu 
        = (1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 1U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                                >> 5U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_and 
        = (1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 1U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                                >> 9U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_or 
        = (1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 1U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                                >> 0xaU)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_xor 
        = (1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 1U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                                >> 0xbU)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sll_w 
        = (1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 1U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                                >> 0xeU)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_srl_w 
        = (1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 1U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                                >> 0xfU)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sra_w 
        = (1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 1U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                                >> 0x10U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_add_w 
        = (1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 1U)) & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mul_w 
        = (1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 1U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                                >> 0x18U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mulh_w 
        = (1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 1U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                                >> 0x19U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_div_w 
        = (1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 2U)) & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mod_w 
        = (1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                     >> 2U)) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                                >> 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_invtlb 
        = (1U & ((((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                            >> 1U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                                       >> 9U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d)) 
                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                    >> 0x13U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrwr 
        = (1U & ((((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                            >> 1U)) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                          >> 0x19U))) 
                  & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                        >> 0x18U))) & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_d 
                                       >> 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrxchg 
        = (1U & ((((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                            >> 1U)) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                          >> 0x19U))) 
                  & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                        >> 0x18U))) & ((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_d) 
                                       & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_d 
                                             >> 1U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_b 
        = (1U & ((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                          >> 0xaU)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                                       >> 4U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_h 
        = (1U & ((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                          >> 0xaU)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                                       >> 5U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_w 
        = (1U & ((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                          >> 0xaU)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d) 
                                       >> 6U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sc_w 
        = (1U & (((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                           >> 8U)) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                         >> 0x19U))) 
                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                    >> 0x18U)));
    vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_next 
        = ((((- (IData)((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst)))) 
             & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr) 
            | ((- (IData)((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst)))) 
               & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_incr)) 
           | ((- (IData)((2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst)))) 
              & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_wrap));
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
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_sign 
        = (((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ertn_flush) 
              | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__excp_flush)) 
             | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__refetch_flush)) 
            | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icacop_flush)) 
           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__idle_flush));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__flush_sign 
        = (((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__excp_flush) 
              | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ertn_flush)) 
             | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__refetch_flush)) 
            | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icacop_flush)) 
           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__idle_flush));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__invtlb_en 
        = ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
            >> 0x14U) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__commit_inst));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__tlbrd_en 
        = (1U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                  >> 0x13U) & ((- (IData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__commit_inst))) 
                               >> 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__tlbwr_en 
        = (1U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                  >> 0x10U) & ((- (IData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__commit_inst))) 
                               >> 3U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__tlbfill_en 
        = (1U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                  >> 0x11U) & ((- (IData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__commit_inst))) 
                               >> 2U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__rf_we 
        = ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
            >> 5U) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__commit_inst));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en 
        = ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
            >> 0x16U) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__commit_inst));
    vlTOPp->uart_rx = (((((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode) 
                          & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_reg) 
                             ^ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                >> 3U))) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode)) 
                        & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode)) 
                       & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int 
        = (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier) 
            >> 3U) & ((2U == (3U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))
                       ? ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time) 
                            == (7U & ((IData)(1U) + (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__repeat_reg)))) 
                           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode)) 
                          & (2U == (3U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))))
                       : (0U != (0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr)))));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5 
        = (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode)) 
            | ((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate)) 
               & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error) 
                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time) 
                      == (7U & ((IData)(1U) + (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__repeat_reg))))) 
                  | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error))))) 
           & ((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count)) 
              & (~ (IData)((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt))))));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__rx_en 
        = (((0U == (3U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))) 
            | (1U == (3U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))) 
           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode) 
              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                 >> 2U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_ena 
        = (1U & (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_uncache_en) 
                      | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode0))) 
                  | (1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))) 
                 | (2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__replace_way 
        = (1U & (((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode0) 
                    | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode1)) 
                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_offset)) 
                  | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode2) 
                     & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lookup_way1_hit_buffer))) 
                 | ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_icacop)) 
                    & (((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_tagv__DOT__output_buffer) 
                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr) 
                           >> 7U)) & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_tagv__DOT__output_buffer))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode2_hit_wr 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode2) 
           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lookup_way0_hit_buffer) 
              | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lookup_way1_hit_buffer)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_rd_req 
        = ((8U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)) 
           & (~ (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode0) 
                  | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode1)) 
                 | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode2))));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_toggle 
        = (1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_cnt) 
                  ^ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_next)) 
                 >> 8U));
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
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_datai 
        = ((0xffffff00U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)
                             ? (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_wdata_dma 
                                >> 8U) : vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_high_24b_wr) 
                           << 8U)) | (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_word_trans_cpu 
        = ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)) 
           & (0U != (0x3fU & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                              >> 0xeU))));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_psel 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_psel) 
           & (0U == (0x3fU & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                              >> 0xeU))));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_enab 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_enab) 
           & (0U == (0x3fU & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                              >> 0xeU))));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_enab) 
           & (0U != (0x3fU & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                              >> 0xeU))));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_psel) 
           & (0U != (0x3fU & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                              >> 0xeU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__data_real_rd_size 
        = ((4U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_type))
            ? 2U : (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_type));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_in 
        = (1U & ((0x10U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr))
                  ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_out)
                  : ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_pol)
                      ? (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__srx_pad))
                      : (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__srx_pad))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_ena 
        = (1U & (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_uncache_en) 
                      | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode0))) 
                  | (1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))) 
                 | (2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode2_hit_wr 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode2) 
           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lookup_way0_hit_buffer) 
              | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lookup_way1_hit_buffer)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__replace_way 
        = (1U & (((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode0) 
                    | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode1)) 
                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_offset)) 
                  | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode2) 
                     & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lookup_way1_hit_buffer))) 
                 | ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_dcacop)) 
                    & (((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv__DOT__output_buffer) 
                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr) 
                           >> 7U)) & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv__DOT__output_buffer))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x 
        = (1U & (((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                              >> 3U))) & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                  >> 2U))) 
                 & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                            >> 1U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x 
        = (1U & (((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                              >> 5U))) & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                  >> 4U))) 
                 & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                            >> 3U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x 
        = (1U & (((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                              >> 7U))) & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                  >> 6U))) 
                 & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                            >> 5U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x 
        = (1U & (((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                              >> 9U))) & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                  >> 8U))) 
                 & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                            >> 7U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x 
        = (1U & (((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                              >> 0xbU))) & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                    >> 0xaU))) 
                 & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                            >> 9U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x 
        = (1U & (((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                              >> 0xdU))) & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                    >> 0xcU))) 
                 & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                            >> 0xbU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x 
        = (1U & (((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                              >> 0xfU))) & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                    >> 0xeU))) 
                 & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                            >> 0xdU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x 
        = (1U & (((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                              >> 0x11U))) & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                     >> 0x10U))) 
                 & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                            >> 0xfU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x 
        = (1U & (((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                              >> 0x13U))) & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                     >> 0x12U))) 
                 & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                            >> 0x11U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x 
        = (1U & (((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                              >> 0x15U))) & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                     >> 0x14U))) 
                 & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                            >> 0x13U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x 
        = (1U & (((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                              >> 0x17U))) & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                     >> 0x16U))) 
                 & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                            >> 0x15U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x 
        = (1U & (((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                              >> 0x19U))) & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                     >> 0x18U))) 
                 & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                            >> 0x17U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x 
        = (1U & (((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                              >> 0x1bU))) & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                     >> 0x1aU))) 
                 & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                            >> 0x19U))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x 
        = (1U & (((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                              >> 0x1dU))) & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                     >> 0x1cU))) 
                 & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                            >> 0x1bU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x 
        = (1U & (((~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                              >> 0x1fU))) & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                     >> 0x1eU))) 
                 & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                            >> 0x1dU))));
}
