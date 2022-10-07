// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vsimu_top__Syms.h"


void Vsimu_top::traceChgTop0(void* userp, VerilatedFst* tracep) {
    Vsimu_top__Syms* __restrict vlSymsp = static_cast<Vsimu_top__Syms*>(userp);
    Vsimu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
        vlTOPp->traceChgSub1(userp, tracep);
        vlTOPp->traceChgSub2(userp, tracep);
        vlTOPp->traceChgSub3(userp, tracep);
        vlTOPp->traceChgSub4(userp, tracep);
        vlTOPp->traceChgSub5(userp, tracep);
        vlTOPp->traceChgSub6(userp, tracep);
        vlTOPp->traceChgSub7(userp, tracep);
        vlTOPp->traceChgSub8(userp, tracep);
    }
}

void Vsimu_top::traceChgSub0(void* userp, VerilatedFst* tracep) {
    Vsimu_top__Syms* __restrict vlSymsp = static_cast<Vsimu_top__Syms*>(userp);
    Vsimu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0U])) {
            tracep->chgCData(oldp+0,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[0]),2);
            tracep->chgCData(oldp+1,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[1]),2);
            tracep->chgCData(oldp+2,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[2]),2);
            tracep->chgCData(oldp+3,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[3]),2);
            tracep->chgCData(oldp+4,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[4]),2);
            tracep->chgCData(oldp+5,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[0]),2);
            tracep->chgCData(oldp+6,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[1]),2);
            tracep->chgCData(oldp+7,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[2]),2);
            tracep->chgCData(oldp+8,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[3]),2);
            tracep->chgCData(oldp+9,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[4]),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+10,(vlTOPp->simu_top__DOT__soc__DOT__cpu_awaddr),32);
            tracep->chgCData(oldp+11,((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT____Vcellout__cpu__awlen))),4);
            tracep->chgCData(oldp+12,(vlTOPp->simu_top__DOT__soc__DOT__cpu_awsize),3);
            tracep->chgBit(oldp+13,(vlTOPp->simu_top__DOT__soc__DOT__cpu_awvalid));
            tracep->chgIData(oldp+14,(vlTOPp->simu_top__DOT__soc__DOT__cpu_wdata),32);
            tracep->chgCData(oldp+15,(vlTOPp->simu_top__DOT__soc__DOT__cpu_wstrb),4);
            tracep->chgBit(oldp+16,(vlTOPp->simu_top__DOT__soc__DOT__cpu_wlast));
            tracep->chgBit(oldp+17,(vlTOPp->simu_top__DOT__soc__DOT__cpu_wvalid));
            tracep->chgCData(oldp+18,(vlTOPp->simu_top__DOT__soc__DOT__m0_bid),4);
            tracep->chgCData(oldp+19,(vlTOPp->simu_top__DOT__soc__DOT__m0_bresp),2);
            tracep->chgBit(oldp+20,(vlTOPp->simu_top__DOT__soc__DOT__cpu_bready));
            tracep->chgCData(oldp+21,(vlTOPp->simu_top__DOT__soc__DOT__cpu_arid),4);
            tracep->chgIData(oldp+22,(vlTOPp->simu_top__DOT__soc__DOT__cpu_araddr),32);
            tracep->chgCData(oldp+23,((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT____Vcellout__cpu__arlen))),4);
            tracep->chgCData(oldp+24,(vlTOPp->simu_top__DOT__soc__DOT__cpu_arsize),3);
            tracep->chgBit(oldp+25,(vlTOPp->simu_top__DOT__soc__DOT__cpu_arvalid));
            tracep->chgCData(oldp+26,(vlTOPp->simu_top__DOT__soc__DOT__m0_rid),4);
            tracep->chgCData(oldp+27,(vlTOPp->simu_top__DOT__soc__DOT__m0_rresp),2);
            tracep->chgBit(oldp+28,(vlTOPp->simu_top__DOT__soc__DOT__m0_rlast));
            tracep->chgBit(oldp+29,(vlTOPp->simu_top__DOT__soc__DOT__m0_wready));
            tracep->chgBit(oldp+30,(vlTOPp->simu_top__DOT__soc__DOT__m0_bvalid));
            tracep->chgBit(oldp+31,(vlTOPp->simu_top__DOT__soc__DOT__m0_rvalid));
            tracep->chgBit(oldp+32,((1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid)))));
            tracep->chgBit(oldp+33,(vlTOPp->simu_top__DOT__soc__DOT__s0_wready));
            tracep->chgCData(oldp+34,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_data),4);
            tracep->chgBit(oldp+35,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid));
            tracep->chgBit(oldp+36,((1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid)))));
            tracep->chgCData(oldp+37,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rid),4);
            tracep->chgBit(oldp+38,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rlast));
            tracep->chgBit(oldp+39,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rvalid));
            tracep->chgBit(oldp+40,((1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid)))));
            tracep->chgBit(oldp+41,(vlTOPp->simu_top__DOT__soc__DOT__conf_s_wready));
            tracep->chgCData(oldp+42,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_data),4);
            tracep->chgBit(oldp+43,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid));
            tracep->chgBit(oldp+44,((1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid)))));
            tracep->chgCData(oldp+45,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rid),4);
            tracep->chgIData(oldp+46,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__conf_rdata_reg),32);
            tracep->chgBit(oldp+47,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rlast));
            tracep->chgBit(oldp+48,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rvalid));
            tracep->chgBit(oldp+49,(vlTOPp->simu_top__DOT__soc__DOT__apb_s_awready));
            tracep->chgBit(oldp+50,(vlTOPp->simu_top__DOT__soc__DOT__apb_s_wready));
            tracep->chgCData(oldp+51,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_w_id),4);
            tracep->chgBit(oldp+52,(vlTOPp->simu_top__DOT__soc__DOT__apb_s_bvalid));
            tracep->chgBit(oldp+53,(vlTOPp->simu_top__DOT__soc__DOT__apb_s_arready));
            tracep->chgCData(oldp+54,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_r_id),4);
            tracep->chgIData(oldp+55,(((0U == (3U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb)))
                                        ? vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32
                                        : ((1U == (3U 
                                                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb)))
                                            ? (0xffffff00U 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                                                  << 8U))
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb)))
                                                ? (0xffff0000U 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                                                      << 0x10U))
                                                : (
                                                   (3U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb)))
                                                    ? 
                                                   (0xff000000U 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                                                       << 0x18U))
                                                    : 0U))))),32);
            tracep->chgBit(oldp+56,(vlTOPp->simu_top__DOT__soc__DOT__apb_s_rlast));
            tracep->chgBit(oldp+57,(vlTOPp->simu_top__DOT__soc__DOT__apb_s_rvalid));
            tracep->chgIData(oldp+58,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr),32);
            tracep->chgIData(oldp+59,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr),32);
            tracep->chgIData(oldp+60,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata),32);
            tracep->chgCData(oldp+61,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__uart0_int) 
                                       << 1U)),8);
            tracep->chgBit(oldp+62,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                           >> 1U))));
            tracep->chgBit(oldp+63,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr))));
            tracep->chgBit(oldp+64,(vlTOPp->simu_top__DOT__soc__DOT__uart0_int));
            tracep->chgBit(oldp+65,((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                            >> 4U) 
                                           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__infrared) 
                                              | (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_out))))));
            tracep->chgBit(oldp+66,(vlTOPp->simu_top__DOT__soc__DOT__uart0_txd_oe));
            tracep->chgBit(oldp+67,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_reg) 
                                           ^ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                              >> 3U)))));
            tracep->chgBit(oldp+68,((1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode)))));
            tracep->chgCData(oldp+69,(vlTOPp->simu_top__DOT__soc__DOT____Vcellout__cpu__arlen),8);
            tracep->chgCData(oldp+70,(vlTOPp->simu_top__DOT__soc__DOT____Vcellout__cpu__awlen),8);
            tracep->chgCData(oldp+71,((0xfU & (- (IData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__rf_we))))),4);
            tracep->chgIData(oldp+72,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[7U] 
                                        << 6U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                                  >> 0x1aU))),32);
            tracep->chgBit(oldp+73,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset));
            tracep->chgIData(oldp+74,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_eentry),32);
            tracep->chgIData(oldp+75,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_era),32);
            tracep->chgIData(oldp+76,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U]),32);
            tracep->chgSData(oldp+77,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ws_csr_esubcode),9);
            tracep->chgCData(oldp+78,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ws_csr_ecode),6);
            tracep->chgQData(oldp+79,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ds_timer_64),64);
            tracep->chgIData(oldp+81,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tid),32);
            tracep->chgSData(oldp+82,((0x3fffU & ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                   << 0x16U) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0xaU)))),14);
            tracep->chgIData(oldp+83,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__rd_csr_data),32);
            tracep->chgSData(oldp+84,((0x3fffU & ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                                     >> 8U)))),14);
            tracep->chgIData(oldp+85,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                        << 0x18U) | 
                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                        >> 8U))),32);
            tracep->chgIData(oldp+86,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ws_bad_va),32);
            tracep->chgBit(oldp+87,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ws_va_error));
            tracep->chgBit(oldp+88,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__llbit));
            tracep->chgBit(oldp+89,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                           >> 7U))));
            tracep->chgBit(oldp+90,(((((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                        >> 7U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                  >> 8U)) 
                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)) 
                                     & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                           >> 6U)))));
            tracep->chgBit(oldp+91,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__has_int));
            tracep->chgBit(oldp+92,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en));
            tracep->chgBit(oldp+93,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__excp_flush));
            tracep->chgBit(oldp+94,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ertn_flush));
            tracep->chgBit(oldp+95,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icacop_flush));
            tracep->chgBit(oldp+96,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__idle_flush));
            tracep->chgBit(oldp+97,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_div_enable));
            tracep->chgBit(oldp+98,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                           >> 0x19U))));
            tracep->chgIData(oldp+99,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U]),32);
            tracep->chgIData(oldp+100,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]),32);
            tracep->chgBit(oldp+101,((0xffU == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__count))));
            tracep->chgIData(oldp+102,((IData)((0x1ffffffffULL 
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
                                                    : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignS)))),32);
            tracep->chgIData(oldp+103,((IData)((0x1ffffffffULL 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_div_signed)
                                                    ? 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_x_31)
                                                     ? 
                                                    (~ 
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignR 
                                                      - 1ULL))
                                                     : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignR)
                                                    : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignR)))),32);
            tracep->chgQData(oldp+104,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mul_result),64);
            tracep->chgSData(oldp+106,((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid)),10);
            tracep->chgCData(oldp+107,((0x1fU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__timer_64))),5);
            tracep->chgIData(oldp+108,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbehi),32);
            tracep->chgIData(oldp+109,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo0),32);
            tracep->chgIData(oldp+110,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo1),32);
            tracep->chgIData(oldp+111,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx),32);
            tracep->chgCData(oldp+112,((0x3fU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat 
                                                 >> 0x10U))),6);
            tracep->chgBit(oldp+113,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__tlbrd_en));
            tracep->chgIData(oldp+114,((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                        [(0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)] 
                                        << 0xdU)),32);
            tracep->chgIData(oldp+115,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__tlbr_tlbelo0),32);
            tracep->chgIData(oldp+116,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__tlbr_tlbelo1),32);
            tracep->chgIData(oldp+117,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__tlbr_tlbidx),32);
            tracep->chgSData(oldp+118,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                                       [(0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)]),10);
            tracep->chgBit(oldp+119,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__invtlb_en));
            tracep->chgSData(oldp+120,((0x3ffU & ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                                   << 0xbU) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                     >> 0x15U)))),10);
            tracep->chgIData(oldp+121,((0x7ffffU & 
                                        ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                          << 1U) | 
                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                          >> 0x1fU)))),19);
            tracep->chgCData(oldp+122,((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U])),5);
            tracep->chgIData(oldp+123,((0x7ffffU & 
                                        (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                                          & (0x11U 
                                             == (0x3fffU 
                                                 & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                     << 0x18U) 
                                                    | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                                       >> 8U)))))
                                          ? ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                              << 0xbU) 
                                             | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                                >> 0x15U))
                                          : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbehi 
                                             >> 0xdU)))),19);
            tracep->chgBit(oldp+124,((0U != vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0)));
            tracep->chgBit(oldp+125,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_tlb_v));
            tracep->chgBit(oldp+126,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_tlb_d));
            tracep->chgCData(oldp+127,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_tlb_mat),2);
            tracep->chgCData(oldp+128,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_tlb_plv),2);
            tracep->chgBit(oldp+129,((0U != vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1)));
            tracep->chgCData(oldp+130,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_tlb_index),5);
            tracep->chgBit(oldp+131,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_tlb_v));
            tracep->chgBit(oldp+132,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_tlb_d));
            tracep->chgCData(oldp+133,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_tlb_mat),2);
            tracep->chgCData(oldp+134,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_tlb_plv),2);
            tracep->chgBit(oldp+135,((1U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                             >> 9U) 
                                            & ((- (IData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__commit_inst))) 
                                               >> 4U)))));
            tracep->chgBit(oldp+136,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__tlbfill_en));
            tracep->chgBit(oldp+137,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__tlbwr_en));
            tracep->chgBit(oldp+138,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__refetch_flush));
            tracep->chgBit(oldp+139,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                            >> 0xaU))));
            tracep->chgCData(oldp+140,((0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                                  << 0x15U) 
                                                 | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                    >> 0xbU)))),5);
            tracep->chgBit(oldp+141,((((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[3U] 
                                        >> 0x1dU) & 
                                       (0x11U == (0x3fffU 
                                                  & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                      << 0x11U) 
                                                     | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[3U] 
                                                        >> 0xfU))))) 
                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_valid))));
            tracep->chgBit(oldp+142,(((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp) 
                                          | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                             >> 0xeU)) 
                                         | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[3U] 
                                             >> 0x1dU) 
                                            | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                 >> 8U) 
                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                   >> 9U)) 
                                               & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp))))) 
                                        | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                           >> 0xeU)) 
                                       | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                          >> 0x16U)) 
                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_valid))));
            tracep->chgBit(oldp+143,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__excp_tlbrefill));
            tracep->chgIData(oldp+144,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbrentry),32);
            tracep->chgBit(oldp+145,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_pg));
            tracep->chgBit(oldp+146,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_da));
            tracep->chgIData(oldp+147,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw0),32);
            tracep->chgIData(oldp+148,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw1),32);
            tracep->chgCData(oldp+149,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_plv),2);
            tracep->chgCData(oldp+150,((3U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
                                              >> 5U))),2);
            tracep->chgCData(oldp+151,((3U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
                                              >> 7U))),2);
            tracep->chgBit(oldp+152,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_addr_trans_en));
            tracep->chgBit(oldp+153,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_addr_trans_en));
            tracep->chgBit(oldp+154,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cacop_op_mode_di));
            tracep->chgBit(oldp+155,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__excp_tlb));
            tracep->chgIData(oldp+156,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__excp_tlb_vppn),19);
            tracep->chgCData(oldp+157,((3U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[5U] 
                                               << 0x1dU) 
                                              | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                 >> 3U)))),2);
            tracep->chgBit(oldp+158,((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))));
            tracep->chgIData(oldp+159,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb_ret_pc),32);
            tracep->chgBit(oldp+160,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_counter) 
                                            >> 2U))));
            tracep->chgBit(oldp+161,((0U != vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd)));
            tracep->chgCData(oldp+162,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_index),5);
            tracep->chgBit(oldp+163,((1U & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                    >> 0x13U)))));
            tracep->chgBit(oldp+164,((1U & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                    >> 0x15U)))));
            tracep->chgBit(oldp+165,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb_delete_entry));
            tracep->chgIData(oldp+166,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[0U]),32);
            tracep->chgCData(oldp+167,((0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[3U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                    >> 8U)))),5);
            tracep->chgBit(oldp+168,((((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                        >> 0x1eU) | 
                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                        >> 2U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_valid))));
            tracep->chgBit(oldp+169,((((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                        >> 0xbU) | 
                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                        >> 0xfU)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_valid))));
            tracep->chgBit(oldp+170,((((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                        >> 9U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                  >> 0x13U)) 
                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid))));
            tracep->chgQData(oldp+171,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ws_to_rf_bus),38);
            tracep->chgQData(oldp+173,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus),39);
            tracep->chgIData(oldp+175,((0xfffffU & 
                                        ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_addr_trans_en)
                                          ? ((0xcU 
                                              == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__s0_ps))
                                              ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__s0_ppn
                                              : ((0xffc00U 
                                                  & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__s0_ppn) 
                                                 | (0x3ffU 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__inst_paddr 
                                                       >> 0xcU))))
                                          : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__inst_paddr 
                                             >> 0xcU)))),20);
            tracep->chgBit(oldp+176,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_rd_req));
            tracep->chgCData(oldp+177,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_uncache_en)
                                         ? 2U : 4U)),3);
            tracep->chgIData(oldp+178,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_rd_addr),32);
            tracep->chgBit(oldp+179,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_last));
            tracep->chgBit(oldp+180,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_wr_req));
            tracep->chgBit(oldp+181,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_uncache_en));
            tracep->chgBit(oldp+182,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_tlb_excp_cancel_req));
            tracep->chgBit(oldp+183,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_dmw0_en));
            tracep->chgBit(oldp+184,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_dmw1_en));
            tracep->chgIData(oldp+185,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr),32);
            tracep->chgBit(oldp+186,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_op));
            tracep->chgCData(oldp+187,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_size),3);
            tracep->chgCData(oldp+188,((0xffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                                 >> 4U))),8);
            tracep->chgIData(oldp+189,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_tag),20);
            tracep->chgCData(oldp+190,((0xfU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr)),4);
            tracep->chgCData(oldp+191,((0xfU & ((0x1fffffffU 
                                                 & ((((- (IData)(
                                                                 (1U 
                                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                                     >> 0x1eU)))) 
                                                      >> 3U) 
                                                     & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_stb_wen)) 
                                                    | (((- (IData)(
                                                                   (1U 
                                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                                       >> 0x1fU)))) 
                                                        >> 3U) 
                                                       & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_sth_wen)))) 
                                                | (0xfU 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (~ (IData)(
                                                                               (0U 
                                                                                != 
                                                                                (3U 
                                                                                & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[5U] 
                                                                                << 2U) 
                                                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                                                >> 0x1eU))))))))) 
                                                      >> 3U))))),4);
            tracep->chgIData(oldp+192,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_wdata),32);
            tracep->chgBit(oldp+193,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_addr_ok));
            tracep->chgBit(oldp+194,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_req));
            tracep->chgCData(oldp+195,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_type),3);
            tracep->chgIData(oldp+196,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_addr),32);
            tracep->chgBit(oldp+197,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_last));
            tracep->chgBit(oldp+198,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_req));
            tracep->chgCData(oldp+199,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_type),3);
            tracep->chgIData(oldp+200,((IData)(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__uncache_wr)
                                                 ? (QData)((IData)(
                                                                   ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_tag 
                                                                     << 0xcU) 
                                                                    | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index) 
                                                                        << 4U) 
                                                                       | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_offset)))))
                                                 : 
                                                (((QData)((IData)(
                                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_replace_way)
                                                                    ? 
                                                                   (0xfffffU 
                                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv__DOT__output_buffer 
                                                                       >> 1U))
                                                                    : 
                                                                   (0xfffffU 
                                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv__DOT__output_buffer 
                                                                       >> 1U))))) 
                                                  << 0xcU) 
                                                 | (QData)((IData)(
                                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index) 
                                                                    << 4U))))))),32);
            tracep->chgCData(oldp+201,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__uncache_wr)
                                         ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wstrb)
                                         : 0xfU)),4);
            tracep->chgWData(oldp+202,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_data),128);
            tracep->chgBit(oldp+206,((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state))));
            tracep->chgBit(oldp+207,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_uncache_en));
            tracep->chgBit(oldp+208,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_dmw0_en));
            tracep->chgBit(oldp+209,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_dmw1_en));
            tracep->chgBit(oldp+210,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_tlb_excp_cancel_req));
            tracep->chgBit(oldp+211,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_valid));
            tracep->chgBit(oldp+212,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_valid));
            tracep->chgBit(oldp+213,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid));
            tracep->chgBit(oldp+214,(((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_num)) 
                                      & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_wait_enable)))));
            tracep->chgCData(oldp+215,((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])),5);
            tracep->chgBit(oldp+216,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__commit_inst));
            tracep->chgBit(oldp+217,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                       >> 0x13U) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__commit_inst))));
            tracep->chgBit(oldp+218,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                       >> 0x14U) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__commit_inst))));
            tracep->chgBit(oldp+219,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                       >> 0x16U) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__commit_inst))));
            tracep->chgBit(oldp+220,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                       >> 0x15U) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__commit_inst))));
            tracep->chgBit(oldp+221,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                       >> 0x17U) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__commit_inst))));
            tracep->chgBit(oldp+222,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                       >> 0x18U) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__commit_inst))));
            tracep->chgBit(oldp+223,((((0x10U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)) 
                                       & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_last)) 
                                      & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_uncache_en) 
                                            | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_icacop))))));
            tracep->chgBit(oldp+224,((((0x10U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state)) 
                                       & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_last)) 
                                      & (~ (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_uncache_en) 
                                             | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_dcacop)) 
                                            | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_preld))))));
            tracep->chgBit(oldp+225,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_disable_cache)));
            tracep->chgSData(oldp+226,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__uart0_int) 
                                        << 1U)),9);
            tracep->chgBit(oldp+227,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[9U] 
                                            >> 0x1aU))));
            tracep->chgQData(oldp+228,((((QData)((IData)(
                                                         vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[9U])) 
                                         << 0x26U) 
                                        | (((QData)((IData)(
                                                            vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[8U])) 
                                            << 6U) 
                                           | ((QData)((IData)(
                                                              vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[7U])) 
                                              >> 0x1aU)))),64);
            tracep->chgCData(oldp+230,((0xffU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xaU] 
                                                  << 5U) 
                                                 | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[9U] 
                                                    >> 0x1bU)))),8);
            tracep->chgIData(oldp+231,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xbU] 
                                         << 0x1dU) 
                                        | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xaU] 
                                           >> 3U))),32);
            tracep->chgIData(oldp+232,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xcU] 
                                         << 0x1dU) 
                                        | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xbU] 
                                           >> 3U))),32);
            tracep->chgCData(oldp+233,((0xffU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xdU] 
                                                  << 0x1dU) 
                                                 | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xcU] 
                                                    >> 3U)))),8);
            tracep->chgIData(oldp+234,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xdU] 
                                         << 0x15U) 
                                        | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xcU] 
                                           >> 0xbU))),32);
            tracep->chgBit(oldp+235,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xdU] 
                                            >> 0xbU))));
            tracep->chgIData(oldp+236,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xeU] 
                                         << 0x14U) 
                                        | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0xdU] 
                                           >> 0xcU))),32);
            tracep->chgBit(oldp+237,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cmt_valid));
            tracep->chgBit(oldp+238,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cmt_cnt_inst));
            tracep->chgQData(oldp+239,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cmt_timer_64),64);
            tracep->chgCData(oldp+241,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cmt_inst_ld_en),8);
            tracep->chgIData(oldp+242,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cmt_ld_paddr),32);
            tracep->chgIData(oldp+243,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cmt_ld_vaddr),32);
            tracep->chgCData(oldp+244,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cmt_inst_st_en),8);
            tracep->chgIData(oldp+245,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cmt_st_paddr),32);
            tracep->chgIData(oldp+246,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cmt_st_vaddr),32);
            tracep->chgIData(oldp+247,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cmt_st_data),32);
            tracep->chgBit(oldp+248,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cmt_csr_rstat_en));
            tracep->chgIData(oldp+249,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cmt_csr_data),32);
            tracep->chgBit(oldp+250,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cmt_wen));
            tracep->chgCData(oldp+251,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cmt_wdest),8);
            tracep->chgIData(oldp+252,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cmt_wdata),32);
            tracep->chgIData(oldp+253,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cmt_pc),32);
            tracep->chgIData(oldp+254,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cmt_inst),32);
            tracep->chgBit(oldp+255,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cmt_excp_flush));
            tracep->chgBit(oldp+256,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cmt_ertn));
            tracep->chgCData(oldp+257,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cmt_csr_ecode),6);
            tracep->chgBit(oldp+258,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cmt_tlbfill_en));
            tracep->chgCData(oldp+259,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cmt_rand_index),5);
            tracep->chgBit(oldp+260,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__trap));
            tracep->chgCData(oldp+261,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__trap_code),8);
            tracep->chgQData(oldp+262,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cycleCnt),64);
            tracep->chgQData(oldp+264,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__instrCnt),64);
            tracep->chgIData(oldp+266,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs[0]),32);
            tracep->chgIData(oldp+267,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs[1]),32);
            tracep->chgIData(oldp+268,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs[2]),32);
            tracep->chgIData(oldp+269,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs[3]),32);
            tracep->chgIData(oldp+270,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs[4]),32);
            tracep->chgIData(oldp+271,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs[5]),32);
            tracep->chgIData(oldp+272,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs[6]),32);
            tracep->chgIData(oldp+273,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs[7]),32);
            tracep->chgIData(oldp+274,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs[8]),32);
            tracep->chgIData(oldp+275,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs[9]),32);
            tracep->chgIData(oldp+276,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs[10]),32);
            tracep->chgIData(oldp+277,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs[11]),32);
            tracep->chgIData(oldp+278,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs[12]),32);
            tracep->chgIData(oldp+279,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs[13]),32);
            tracep->chgIData(oldp+280,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs[14]),32);
            tracep->chgIData(oldp+281,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs[15]),32);
            tracep->chgIData(oldp+282,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs[16]),32);
            tracep->chgIData(oldp+283,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs[17]),32);
            tracep->chgIData(oldp+284,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs[18]),32);
            tracep->chgIData(oldp+285,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs[19]),32);
            tracep->chgIData(oldp+286,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs[20]),32);
            tracep->chgIData(oldp+287,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs[21]),32);
            tracep->chgIData(oldp+288,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs[22]),32);
            tracep->chgIData(oldp+289,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs[23]),32);
            tracep->chgIData(oldp+290,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs[24]),32);
            tracep->chgIData(oldp+291,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs[25]),32);
            tracep->chgIData(oldp+292,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs[26]),32);
            tracep->chgIData(oldp+293,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs[27]),32);
            tracep->chgIData(oldp+294,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs[28]),32);
            tracep->chgIData(oldp+295,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs[29]),32);
            tracep->chgIData(oldp+296,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs[30]),32);
            tracep->chgIData(oldp+297,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs[31]),32);
            tracep->chgIData(oldp+298,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd),32);
            tracep->chgIData(oldp+299,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_prmd),32);
            tracep->chgIData(oldp+300,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_ectl),32);
            tracep->chgIData(oldp+301,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat),32);
            tracep->chgIData(oldp+302,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_badv),32);
            tracep->chgIData(oldp+303,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid),32);
            tracep->chgIData(oldp+304,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save0),32);
            tracep->chgIData(oldp+305,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save1),32);
            tracep->chgIData(oldp+306,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save2),32);
            tracep->chgIData(oldp+307,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save3),32);
            tracep->chgIData(oldp+308,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tcfg),32);
            tracep->chgIData(oldp+309,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tval),32);
            tracep->chgIData(oldp+310,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_ticlr),32);
            tracep->chgIData(oldp+311,(((0xfffffffeU 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_llbctl) 
                                        | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__llbit))),32);
            tracep->chgIData(oldp+312,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw0),32);
            tracep->chgIData(oldp+313,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw1),32);
            tracep->chgIData(oldp+314,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_pgdl),32);
            tracep->chgIData(oldp+315,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_pgdh),32);
            tracep->chgBit(oldp+316,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_valid));
            tracep->chgIData(oldp+317,(((IData)(4U) 
                                        + vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_pc)),32);
            tracep->chgBit(oldp+318,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_tlbr));
            tracep->chgBit(oldp+319,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_pif));
            tracep->chgBit(oldp+320,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_ppi));
            tracep->chgBit(oldp+321,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp));
            tracep->chgBit(oldp+322,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_num));
            tracep->chgBit(oldp+323,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__excp));
            tracep->chgCData(oldp+324,((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_ppi) 
                                         << 3U) | (
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_pif) 
                                                    << 2U) 
                                                   | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_tlbr) 
                                                       << 1U) 
                                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_num) 
                                                         | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_adef)))))),4);
            tracep->chgBit(oldp+325,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_sign));
            tracep->chgIData(oldp+326,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__inst_rd_buff),32);
            tracep->chgBit(oldp+327,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__inst_buff_enable));
            tracep->chgBit(oldp+328,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_da) 
                                      & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_pg)))));
            tracep->chgBit(oldp+329,((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_counter) 
                                       >> 2U) & (0U 
                                                 != vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd))));
            tracep->chgBit(oldp+330,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__idle_lock));
            tracep->chgBit(oldp+331,((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_tlb_excp_cancel_req) 
                                       & (4U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__br_target_inst_req_state))) 
                                      & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_req_state)))));
            tracep->chgBit(oldp+332,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_adef));
            tracep->chgIData(oldp+333,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_pc),32);
            tracep->chgIData(oldp+334,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_req_buffer),32);
            tracep->chgBit(oldp+335,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_req_state));
            tracep->chgIData(oldp+336,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__br_target_inst_req_buffer),32);
            tracep->chgCData(oldp+337,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__br_target_inst_req_state),3);
            tracep->chgIData(oldp+338,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[0]),32);
            tracep->chgIData(oldp+339,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[1]),32);
            tracep->chgIData(oldp+340,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[2]),32);
            tracep->chgIData(oldp+341,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[3]),32);
            tracep->chgIData(oldp+342,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[4]),32);
            tracep->chgIData(oldp+343,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[5]),32);
            tracep->chgIData(oldp+344,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[6]),32);
            tracep->chgIData(oldp+345,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[7]),32);
            tracep->chgIData(oldp+346,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[8]),32);
            tracep->chgIData(oldp+347,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[9]),32);
            tracep->chgIData(oldp+348,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[10]),32);
            tracep->chgIData(oldp+349,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[11]),32);
            tracep->chgIData(oldp+350,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[12]),32);
            tracep->chgIData(oldp+351,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[13]),32);
            tracep->chgIData(oldp+352,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[14]),32);
            tracep->chgIData(oldp+353,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[15]),32);
            tracep->chgIData(oldp+354,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[16]),32);
            tracep->chgIData(oldp+355,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[17]),32);
            tracep->chgIData(oldp+356,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[18]),32);
            tracep->chgIData(oldp+357,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[19]),32);
            tracep->chgIData(oldp+358,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[20]),32);
            tracep->chgIData(oldp+359,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[21]),32);
            tracep->chgIData(oldp+360,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[22]),32);
            tracep->chgIData(oldp+361,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[23]),32);
            tracep->chgIData(oldp+362,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[24]),32);
            tracep->chgIData(oldp+363,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[25]),32);
            tracep->chgIData(oldp+364,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[26]),32);
            tracep->chgIData(oldp+365,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[27]),32);
            tracep->chgIData(oldp+366,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[28]),32);
            tracep->chgIData(oldp+367,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[29]),32);
            tracep->chgIData(oldp+368,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[30]),32);
            tracep->chgIData(oldp+369,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[31]),32);
            tracep->chgBit(oldp+370,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_valid));
            tracep->chgWData(oldp+371,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r),109);
            tracep->chgIData(oldp+375,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U]),32);
            tracep->chgCData(oldp+376,((0xfU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U])),4);
            tracep->chgBit(oldp+377,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                            >> 4U))));
            tracep->chgBit(oldp+378,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                            >> 5U))));
            tracep->chgBit(oldp+379,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                            >> 7U))));
            tracep->chgBit(oldp+380,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                            >> 6U))));
            tracep->chgIData(oldp+381,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[3U] 
                                         << 0x13U) 
                                        | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                           >> 0xdU))),32);
            tracep->chgBit(oldp+382,((1U & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ws_to_rf_bus 
                                                    >> 0x25U)))));
            tracep->chgCData(oldp+383,((0x1fU & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ws_to_rf_bus 
                                                         >> 0x20U)))),5);
            tracep->chgIData(oldp+384,((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ws_to_rf_bus)),32);
            tracep->chgSData(oldp+385,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__alu_op),14);
            tracep->chgCData(oldp+386,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__mul_div_op),4);
            tracep->chgBit(oldp+387,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mul_w) 
                                        | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mulh_w)) 
                                       | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_div_w)) 
                                      | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mod_w))));
            tracep->chgBit(oldp+388,((1U & ((((IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                       >> 0x13U)) 
                                              | (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                         >> 0x15U))) 
                                             | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_pcaddi)) 
                                            | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_pcaddu12i)))));
            tracep->chgBit(oldp+389,(((((((((((((((
                                                   ((((((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_slli_w) 
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
                                      | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_preld))));
            tracep->chgBit(oldp+390,((1U & ((IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                     >> 0x13U)) 
                                            | (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                       >> 0x15U))))));
            tracep->chgBit(oldp+391,(((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_b) 
                                          | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_h)) 
                                         | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_w)) 
                                        | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_bu)) 
                                       | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_hu)) 
                                      | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ll_w))));
            tracep->chgBit(oldp+392,((((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrrd) 
                                           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrwr)) 
                                          | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrxchg)) 
                                         | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntid_w)) 
                                        | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvh_w)) 
                                       | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvl_w)) 
                                      | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sc_w))));
            tracep->chgBit(oldp+393,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrxchg));
            tracep->chgBit(oldp+394,((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_b) 
                                       | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_bu)) 
                                      | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_b))));
            tracep->chgBit(oldp+395,((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_h) 
                                       | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_hu)) 
                                      | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_h))));
            tracep->chgBit(oldp+396,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_b) 
                                      | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_h))));
            tracep->chgBit(oldp+397,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntid_w));
            tracep->chgBit(oldp+398,((1U & ((((((((
                                                   ((((((((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_b)) 
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
                                            & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ibar))))));
            tracep->chgBit(oldp+399,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_b) 
                                        | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_h)) 
                                       | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_w)) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sc_w) 
                                         & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__llbit)))));
            tracep->chgBit(oldp+400,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrwr) 
                                      | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrxchg))));
            tracep->chgBit(oldp+401,((1U & ((((((((
                                                   ((((IData)(
                                                              (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                               >> 0x16U)) 
                                                      | (IData)(
                                                                (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                                 >> 0x17U))) 
                                                     | (IData)(
                                                               (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                                >> 0x18U))) 
                                                    | (IData)(
                                                              (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                               >> 0x1aU))) 
                                                   | (IData)(
                                                             (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                              >> 0x19U))) 
                                                  | (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                             >> 0x1bU))) 
                                                 | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_b)) 
                                                | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_h)) 
                                               | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_w)) 
                                              | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sc_w)) 
                                             | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrwr)) 
                                            | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrxchg)))));
            tracep->chgCData(oldp+402,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_h) 
                                           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_hu)) 
                                          | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_h)) 
                                         << 1U) | (
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_b) 
                                                    | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_bu)) 
                                                   | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_b)))),2);
            tracep->chgCData(oldp+403,(((1U & (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                       >> 0x15U)))
                                         ? 1U : (0x1fU 
                                                 & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntid_w)
                                                     ? 
                                                    ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                      << 0x1bU) 
                                                     | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                        >> 5U))
                                                     : 
                                                    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U])))),5);
            tracep->chgIData(oldp+404,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_imm),32);
            tracep->chgCData(oldp+405,((0x3fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                  << 6U) 
                                                 | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                    >> 0x1aU)))),6);
            tracep->chgCData(oldp+406,((0xfU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                 << 0xaU) 
                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                   >> 0x16U)))),4);
            tracep->chgCData(oldp+407,((3U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                               << 0xcU) 
                                              | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                 >> 0x14U)))),2);
            tracep->chgCData(oldp+408,((0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                  << 0x11U) 
                                                 | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                    >> 0xfU)))),5);
            tracep->chgCData(oldp+409,((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U])),5);
            tracep->chgCData(oldp+410,((0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                  << 0x1bU) 
                                                 | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                    >> 5U)))),5);
            tracep->chgCData(oldp+411,((0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                  << 0x16U) 
                                                 | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                    >> 0xaU)))),5);
            tracep->chgSData(oldp+412,((0xfffU & ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                   << 0x16U) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0xaU)))),12);
            tracep->chgIData(oldp+413,((0xfffffU & 
                                        ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                          << 0x1bU) 
                                         | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                            >> 5U)))),20);
            tracep->chgSData(oldp+414,((0xffffU & (
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                    << 0x16U) 
                                                   | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                      >> 0xaU)))),16);
            tracep->chgIData(oldp+415,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__i26),26);
            tracep->chgQData(oldp+416,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d),64);
            tracep->chgSData(oldp+418,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d),16);
            tracep->chgCData(oldp+419,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d),4);
            tracep->chgIData(oldp+420,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d),32);
            tracep->chgIData(oldp+421,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rd_d),32);
            tracep->chgIData(oldp+422,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_d),32);
            tracep->chgIData(oldp+423,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rk_d),32);
            tracep->chgBit(oldp+424,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_add_w));
            tracep->chgBit(oldp+425,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sub_w));
            tracep->chgBit(oldp+426,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_slt));
            tracep->chgBit(oldp+427,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sltu));
            tracep->chgBit(oldp+428,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_nor));
            tracep->chgBit(oldp+429,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_and));
            tracep->chgBit(oldp+430,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_or));
            tracep->chgBit(oldp+431,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_xor));
            tracep->chgBit(oldp+432,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_lu12i_w));
            tracep->chgBit(oldp+433,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_addi_w));
            tracep->chgBit(oldp+434,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_slti));
            tracep->chgBit(oldp+435,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sltui));
            tracep->chgBit(oldp+436,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_pcaddi));
            tracep->chgBit(oldp+437,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_pcaddu12i));
            tracep->chgBit(oldp+438,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                                              & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                                                >> 1U)) 
                                            & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                                               >> 0xdU)))));
            tracep->chgBit(oldp+439,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d) 
                                              & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d)) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d) 
                                                >> 1U)) 
                                            & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d 
                                               >> 0xcU)))));
            tracep->chgBit(oldp+440,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_andi));
            tracep->chgBit(oldp+441,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ori));
            tracep->chgBit(oldp+442,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_xori));
            tracep->chgBit(oldp+443,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mul_w));
            tracep->chgBit(oldp+444,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mulh_w));
            tracep->chgBit(oldp+445,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mulh_wu));
            tracep->chgBit(oldp+446,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_div_w));
            tracep->chgBit(oldp+447,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mod_w));
            tracep->chgBit(oldp+448,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_div_wu));
            tracep->chgBit(oldp+449,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mod_wu));
            tracep->chgBit(oldp+450,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_slli_w));
            tracep->chgBit(oldp+451,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_srli_w));
            tracep->chgBit(oldp+452,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_srai_w));
            tracep->chgBit(oldp+453,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sll_w));
            tracep->chgBit(oldp+454,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_srl_w));
            tracep->chgBit(oldp+455,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sra_w));
            tracep->chgBit(oldp+456,((1U & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                    >> 0x14U)))));
            tracep->chgBit(oldp+457,((1U & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                    >> 0x16U)))));
            tracep->chgBit(oldp+458,((1U & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                    >> 0x17U)))));
            tracep->chgBit(oldp+459,((1U & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                    >> 0x18U)))));
            tracep->chgBit(oldp+460,((1U & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                    >> 0x19U)))));
            tracep->chgBit(oldp+461,((1U & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                    >> 0x1aU)))));
            tracep->chgBit(oldp+462,((1U & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                    >> 0x1bU)))));
            tracep->chgBit(oldp+463,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ll_w));
            tracep->chgBit(oldp+464,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sc_w));
            tracep->chgBit(oldp+465,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_b));
            tracep->chgBit(oldp+466,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_bu));
            tracep->chgBit(oldp+467,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_h));
            tracep->chgBit(oldp+468,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_hu));
            tracep->chgBit(oldp+469,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_w));
            tracep->chgBit(oldp+470,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_b));
            tracep->chgBit(oldp+471,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_h));
            tracep->chgBit(oldp+472,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_w));
            tracep->chgBit(oldp+473,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_syscall));
            tracep->chgBit(oldp+474,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_break));
            tracep->chgBit(oldp+475,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrrd));
            tracep->chgBit(oldp+476,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrwr));
            tracep->chgBit(oldp+477,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ertn));
            tracep->chgBit(oldp+478,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvl_w));
            tracep->chgBit(oldp+479,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvh_w));
            tracep->chgBit(oldp+480,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_idle));
            tracep->chgBit(oldp+481,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbsrch));
            tracep->chgBit(oldp+482,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbrd));
            tracep->chgBit(oldp+483,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbwr));
            tracep->chgBit(oldp+484,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbfill));
            tracep->chgBit(oldp+485,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_invtlb));
            tracep->chgBit(oldp+486,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_cacop));
            tracep->chgBit(oldp+487,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_preld));
            tracep->chgBit(oldp+488,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_dbar));
            tracep->chgBit(oldp+489,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ibar));
            tracep->chgBit(oldp+490,((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_slli_w) 
                                       | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_srli_w)) 
                                      | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_srai_w))));
            tracep->chgBit(oldp+491,((((((((((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_addi_w) 
                                                 | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_b)) 
                                                | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_h)) 
                                               | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_w)) 
                                              | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_b)) 
                                             | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_h)) 
                                            | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_w)) 
                                           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_bu)) 
                                          | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_hu)) 
                                         | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_slti)) 
                                        | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sltui)) 
                                       | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_cacop)) 
                                      | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_preld))));
            tracep->chgBit(oldp+492,((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_andi) 
                                       | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ori)) 
                                      | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_xori))));
            tracep->chgBit(oldp+493,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ll_w) 
                                      | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sc_w))));
            tracep->chgBit(oldp+494,((1U & (((((((IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                          >> 0x13U)) 
                                                 | (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                            >> 0x16U))) 
                                                | (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                           >> 0x17U))) 
                                               | (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                          >> 0x18U))) 
                                              | (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                         >> 0x19U))) 
                                             | (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                        >> 0x1aU))) 
                                            | (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                       >> 0x1bU))))));
            tracep->chgBit(oldp+495,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_lu12i_w) 
                                      | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_pcaddu12i))));
            tracep->chgBit(oldp+496,((1U & ((IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                     >> 0x14U)) 
                                            | (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                       >> 0x15U))))));
            tracep->chgIData(oldp+497,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1),32);
            tracep->chgCData(oldp+498,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_raddr2),5);
            tracep->chgIData(oldp+499,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2),32);
            tracep->chgBit(oldp+500,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__pipeline_no_empty));
            tracep->chgBit(oldp+501,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_dbar) 
                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__pipeline_no_empty))));
            tracep->chgBit(oldp+502,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ibar) 
                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__pipeline_no_empty))));
            tracep->chgBit(oldp+503,((1U & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                                                    >> 0x26U)))));
            tracep->chgBit(oldp+504,((1U & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                                                    >> 0x25U)))));
            tracep->chgCData(oldp+505,((0x1fU & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                                                         >> 0x20U)))),5);
            tracep->chgIData(oldp+506,((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus)),32);
            tracep->chgBit(oldp+507,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__excp));
            tracep->chgSData(oldp+508,((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__excp_ipe) 
                                         << 8U) | (
                                                   (0x80U 
                                                    & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_valid)) 
                                                       << 7U)) 
                                                   | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_break) 
                                                       << 6U) 
                                                      | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_syscall) 
                                                          << 5U) 
                                                         | ((0x1eU 
                                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                                << 1U)) 
                                                            | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__has_int))))))),9);
            tracep->chgBit(oldp+509,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_valid));
            tracep->chgBit(oldp+510,((1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_valid)))));
            tracep->chgBit(oldp+511,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__excp_ipe));
            tracep->chgIData(oldp+512,(((1U & (IData)(
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
                                         ? ((((IData)(
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
                                         : ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sc_w)
                                             ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__llbit)
                                             : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__rd_csr_data))),32);
            tracep->chgBit(oldp+513,((((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbwr) 
                                           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbfill)) 
                                          | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbrd)) 
                                         | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_invtlb)) 
                                        | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ertn)) 
                                       | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ibar)) 
                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_valid))));
            tracep->chgBit(oldp+514,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__flush_sign));
            tracep->chgBit(oldp+515,((((((((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrrd) 
                                               | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrwr)) 
                                              | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrxchg)) 
                                             | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_cacop)) 
                                            | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbsrch)) 
                                           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbrd)) 
                                          | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbwr)) 
                                         | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbfill)) 
                                        | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_invtlb)) 
                                       | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ertn)) 
                                      | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_idle))));
            tracep->chgIData(oldp+516,(((((IData)((0x1ffffffffULL 
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
                                           & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tid))),32);
            tracep->chgBit(oldp+517,((1U & (IData)(
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
                                                             >> 0x20U))))))));
            tracep->chgBit(oldp+518,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__branch_slot_cancel));
            tracep->chgBit(oldp+519,((((((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
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
                                           >> 9U) | 
                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                           >> 0x13U)) 
                                         & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)))));
            tracep->chgBit(oldp+520,((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_need_reg_data) 
                                             | (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                        >> 0x15U))) 
                                            | (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                       >> 0x14U))))));
            tracep->chgBit(oldp+521,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_need_reg_data));
            tracep->chgBit(oldp+522,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_to_btb));
            tracep->chgBit(oldp+523,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rj));
            tracep->chgBit(oldp+524,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rkd));
            tracep->chgCData(oldp+525,((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ll_w) 
                                         << 5U) | (
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_w) 
                                                    << 4U) 
                                                   | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_hu) 
                                                       << 3U) 
                                                      | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_h) 
                                                          << 2U) 
                                                         | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_bu) 
                                                             << 1U) 
                                                            | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_b))))))),8);
            tracep->chgCData(oldp+526,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__llbit) 
                                          & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sc_w)) 
                                         << 3U) | (
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_w) 
                                                    << 2U) 
                                                   | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_h) 
                                                       << 1U) 
                                                      | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_b))))),8);
            tracep->chgBit(oldp+527,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrrd) 
                                        | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrwr)) 
                                       | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrxchg)) 
                                      & (5U == (0x3fffU 
                                                & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                    << 0x16U) 
                                                   | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                      >> 0xaU)))))));
            tracep->chgIData(oldp+528,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[0]),32);
            tracep->chgIData(oldp+529,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[1]),32);
            tracep->chgIData(oldp+530,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[2]),32);
            tracep->chgIData(oldp+531,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[3]),32);
            tracep->chgIData(oldp+532,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[4]),32);
            tracep->chgIData(oldp+533,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[5]),32);
            tracep->chgIData(oldp+534,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[6]),32);
            tracep->chgIData(oldp+535,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[7]),32);
            tracep->chgIData(oldp+536,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[8]),32);
            tracep->chgIData(oldp+537,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[9]),32);
            tracep->chgIData(oldp+538,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[10]),32);
            tracep->chgIData(oldp+539,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[11]),32);
            tracep->chgIData(oldp+540,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[12]),32);
            tracep->chgIData(oldp+541,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[13]),32);
            tracep->chgIData(oldp+542,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[14]),32);
            tracep->chgIData(oldp+543,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[15]),32);
            tracep->chgIData(oldp+544,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[16]),32);
            tracep->chgIData(oldp+545,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[17]),32);
            tracep->chgIData(oldp+546,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[18]),32);
            tracep->chgIData(oldp+547,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[19]),32);
            tracep->chgIData(oldp+548,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[20]),32);
            tracep->chgIData(oldp+549,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[21]),32);
            tracep->chgIData(oldp+550,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[22]),32);
            tracep->chgIData(oldp+551,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[23]),32);
            tracep->chgIData(oldp+552,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[24]),32);
            tracep->chgIData(oldp+553,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[25]),32);
            tracep->chgIData(oldp+554,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[26]),32);
            tracep->chgIData(oldp+555,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[27]),32);
            tracep->chgIData(oldp+556,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[28]),32);
            tracep->chgIData(oldp+557,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[29]),32);
            tracep->chgIData(oldp+558,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[30]),32);
            tracep->chgIData(oldp+559,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[31]),32);
            tracep->chgIData(oldp+560,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[0]),32);
            tracep->chgIData(oldp+561,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[1]),32);
            tracep->chgIData(oldp+562,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[2]),32);
            tracep->chgIData(oldp+563,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[3]),32);
            tracep->chgIData(oldp+564,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[4]),32);
            tracep->chgIData(oldp+565,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[5]),32);
            tracep->chgIData(oldp+566,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[6]),32);
            tracep->chgIData(oldp+567,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[7]),32);
            tracep->chgIData(oldp+568,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[8]),32);
            tracep->chgIData(oldp+569,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[9]),32);
            tracep->chgIData(oldp+570,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[10]),32);
            tracep->chgIData(oldp+571,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[11]),32);
            tracep->chgIData(oldp+572,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[12]),32);
            tracep->chgIData(oldp+573,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[13]),32);
            tracep->chgIData(oldp+574,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[14]),32);
            tracep->chgIData(oldp+575,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[15]),32);
            tracep->chgIData(oldp+576,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[16]),32);
            tracep->chgIData(oldp+577,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[17]),32);
            tracep->chgIData(oldp+578,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[18]),32);
            tracep->chgIData(oldp+579,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[19]),32);
            tracep->chgIData(oldp+580,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[20]),32);
            tracep->chgIData(oldp+581,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[21]),32);
            tracep->chgIData(oldp+582,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[22]),32);
            tracep->chgIData(oldp+583,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[23]),32);
            tracep->chgIData(oldp+584,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[24]),32);
            tracep->chgIData(oldp+585,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[25]),32);
            tracep->chgIData(oldp+586,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[26]),32);
            tracep->chgIData(oldp+587,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[27]),32);
            tracep->chgIData(oldp+588,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[28]),32);
            tracep->chgIData(oldp+589,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[29]),32);
            tracep->chgIData(oldp+590,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[30]),32);
            tracep->chgIData(oldp+591,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[31]),32);
            tracep->chgIData(oldp+592,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_alu_result),32);
            tracep->chgWData(oldp+593,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r),350);
            tracep->chgSData(oldp+604,((0x3fffU & (
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[5U] 
                                                    << 0x15U) 
                                                   | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                      >> 0xbU)))),14);
            tracep->chgBit(oldp+605,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                            >> 9U))));
            tracep->chgBit(oldp+606,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                            >> 8U))));
            tracep->chgBit(oldp+607,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                            >> 7U))));
            tracep->chgBit(oldp+608,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                            >> 6U))));
            tracep->chgBit(oldp+609,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                            >> 5U))));
            tracep->chgIData(oldp+610,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[3U]),32);
            tracep->chgIData(oldp+611,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[0U]),32);
            tracep->chgCData(oldp+612,((0xfU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[5U] 
                                                 << 6U) 
                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                   >> 0x1aU)))),4);
            tracep->chgCData(oldp+613,((3U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[5U] 
                                               << 2U) 
                                              | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                 >> 0x1eU)))),2);
            tracep->chgIData(oldp+614,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                         << 0x1eU) 
                                        | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[5U] 
                                           >> 2U))),32);
            tracep->chgSData(oldp+615,((0x3fffU & (
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                                    << 0x1dU) 
                                                   | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                                      >> 3U)))),14);
            tracep->chgIData(oldp+616,(((0x40000U & 
                                         vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U])
                                         ? ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U] 
                                             & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]) 
                                            | ((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U]) 
                                               & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                                   << 0x1eU) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[5U] 
                                                     >> 2U))))
                                         : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U])),32);
            tracep->chgIData(oldp+617,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U] 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]) 
                                        | ((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U]) 
                                           & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                               << 0x1eU) 
                                              | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[5U] 
                                                 >> 2U))))),32);
            tracep->chgBit(oldp+618,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                            >> 2U))));
            tracep->chgBit(oldp+619,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+620,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+621,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[5U])));
            tracep->chgBit(oldp+622,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__excp));
            tracep->chgSData(oldp+623,((0x1ffU & ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                                   << 0xdU) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                                     >> 0x13U)))),9);
            tracep->chgSData(oldp+624,((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__excp_ale) 
                                         << 9U) | (0x1ffU 
                                                   & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                                       << 0xdU) 
                                                      | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                                         >> 0x13U))))),10);
            tracep->chgBit(oldp+625,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[5U] 
                                            >> 1U))));
            tracep->chgBit(oldp+626,((1U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                             >> 0x1aU) 
                                            | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                               >> 0x1bU)))));
            tracep->chgBit(oldp+627,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_div_enable) 
                                      & (0xffU != (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__count)))));
            tracep->chgBit(oldp+628,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+629,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+630,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+631,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                            >> 0x1fU))));
            tracep->chgBit(oldp+632,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U])));
            tracep->chgBit(oldp+633,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                            >> 2U))));
            tracep->chgBit(oldp+634,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                            >> 1U))));
            tracep->chgBit(oldp+635,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                            >> 3U))));
            tracep->chgSData(oldp+636,((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U])),10);
            tracep->chgIData(oldp+637,((0x7ffffU & 
                                        ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U] 
                                          << 0x13U) 
                                         | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U] 
                                            >> 0xdU)))),19);
            tracep->chgBit(oldp+638,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                            >> 5U))));
            tracep->chgBit(oldp+639,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                            >> 6U))));
            tracep->chgBit(oldp+640,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                            >> 7U))));
            tracep->chgBit(oldp+641,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                            >> 8U))));
            tracep->chgBit(oldp+642,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+643,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+644,((1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                              >> 0xaU) 
                                             | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_div_enable)) 
                                            | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                >> 0x1aU) 
                                               | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                  >> 0x1bU))))));
            tracep->chgBit(oldp+645,((((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                        >> 6U) & (0U 
                                                  != 
                                                  (0x1fU 
                                                   & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U]))) 
                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_valid))));
            tracep->chgBit(oldp+646,((0U == (0x1fU 
                                             & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U]))));
            tracep->chgBit(oldp+647,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__excp_ale));
            tracep->chgBit(oldp+648,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__access_mem));
            tracep->chgBit(oldp+649,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                            >> 4U))));
            tracep->chgCData(oldp+650,((3U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_alu_result)),2);
            tracep->chgBit(oldp+651,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                       >> 0x1eU) & 
                                      (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[3U] 
                                         >> 0x1dU) 
                                        & (0x11U == 
                                           (0x3fffU 
                                            & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                << 0x11U) 
                                               | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[3U] 
                                                  >> 0xfU))))) 
                                       & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_valid)))));
            tracep->chgBit(oldp+652,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                       >> 5U) & (0U 
                                                 == 
                                                 (7U 
                                                  & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U])))));
            tracep->chgBit(oldp+653,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__dcacop_inst));
            tracep->chgBit(oldp+654,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__preld_inst));
            tracep->chgBit(oldp+655,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+656,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                            >> 9U))));
            tracep->chgIData(oldp+657,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1),32);
            tracep->chgIData(oldp+658,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_alu_src2),32);
            tracep->chgIData(oldp+659,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__exe_result),32);
            tracep->chgCData(oldp+660,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_stb_wen),4);
            tracep->chgCData(oldp+661,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_sth_wen),4);
            tracep->chgIData(oldp+662,(((0xff000000U 
                                         & (((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_stb_wen) 
                                                            >> 3U)))) 
                                             & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]) 
                                            << 0x18U)) 
                                        | ((0xff0000U 
                                            & (((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_stb_wen) 
                                                               >> 2U)))) 
                                                & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]) 
                                               << 0x10U)) 
                                           | ((0xff00U 
                                               & (((- (IData)(
                                                              (1U 
                                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_stb_wen) 
                                                                  >> 1U)))) 
                                                   & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]) 
                                                  << 8U)) 
                                              | (0xffU 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_stb_wen)))) 
                                                    & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U])))))),32);
            tracep->chgIData(oldp+663,(((0xffff0000U 
                                         & (((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_sth_wen) 
                                                            >> 3U)))) 
                                             & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]) 
                                            << 0x10U)) 
                                        | (0xffffU 
                                           & ((- (IData)(
                                                         (1U 
                                                          & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_sth_wen)))) 
                                              & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U])))),32);
            tracep->chgIData(oldp+664,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[8U] 
                                         << 0x14U) 
                                        | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                           >> 0xcU))),32);
            tracep->chgQData(oldp+665,((((QData)((IData)(
                                                         vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[0xaU])) 
                                         << 0x34U) 
                                        | (((QData)((IData)(
                                                            vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[9U])) 
                                            << 0x14U) 
                                           | ((QData)((IData)(
                                                              vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[8U])) 
                                              >> 0xcU)))),64);
            tracep->chgBit(oldp+667,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[0xaU] 
                                            >> 0xcU))));
            tracep->chgCData(oldp+668,((0xffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[0xaU] 
                                                 >> 0xdU))),8);
            tracep->chgCData(oldp+669,((0xffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[0xaU] 
                                                 >> 0x15U))),8);
            tracep->chgBit(oldp+670,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[0xaU] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+671,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+672,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+673,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+674,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+675,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+676,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+677,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+678,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+679,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+680,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+681,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+682,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+683,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+684,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                            >> 0x18U))));
            tracep->chgIData(oldp+685,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__adder_result),32);
            tracep->chgIData(oldp+686,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__slt_result),32);
            tracep->chgIData(oldp+687,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__sltu_result),32);
            tracep->chgIData(oldp+688,((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1 
                                        & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_alu_src2)),32);
            tracep->chgIData(oldp+689,((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__or_result)),32);
            tracep->chgIData(oldp+690,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__or_result),32);
            tracep->chgIData(oldp+691,((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1 
                                        ^ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_alu_src2)),32);
            tracep->chgIData(oldp+692,((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1 
                                        << (0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_alu_src2))),32);
            tracep->chgQData(oldp+693,(((((QData)((IData)(
                                                          (- (IData)(
                                                                     (1U 
                                                                      & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                                          >> 0x15U) 
                                                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1 
                                                                            >> 0x1fU))))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1))) 
                                        >> (0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_alu_src2))),64);
            tracep->chgIData(oldp+695,((IData)(((((QData)((IData)(
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                                                                                >> 0x15U) 
                                                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1 
                                                                                >> 0x1fU))))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1))) 
                                                >> 
                                                (0x1fU 
                                                 & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_alu_src2)))),32);
            tracep->chgIData(oldp+696,((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1 
                                        & (~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_alu_src2))),32);
            tracep->chgIData(oldp+697,((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1 
                                        | (~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_alu_src2))),32);
            tracep->chgIData(oldp+698,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__adder_b),32);
            tracep->chgBit(oldp+699,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__adder_cin));
            tracep->chgBit(oldp+700,((1U & (IData)(
                                                   (1ULL 
                                                    & ((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1)) 
                                                         + (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__adder_b))) 
                                                        + (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__adder_cin))) 
                                                       >> 0x20U))))));
            tracep->chgQData(oldp+701,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignS),33);
            tracep->chgQData(oldp+703,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignR),33);
            tracep->chgQData(oldp+705,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__tmp_r),33);
            tracep->chgCData(oldp+707,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__count),8);
            tracep->chgQData(oldp+708,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__tmp_d),33);
            tracep->chgQData(oldp+710,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__result_r),33);
            tracep->chgQData(oldp+712,((QData)((IData)(
                                                       ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_div_signed)
                                                         ? 
                                                        ((0x80000000U 
                                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U])
                                                          ? 
                                                         ((IData)(1U) 
                                                          + 
                                                          (~ 
                                                           vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U]))
                                                          : 
                                                         vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U])
                                                         : 
                                                        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U])))),33);
            tracep->chgQData(oldp+714,((QData)((IData)(
                                                       ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_div_signed)
                                                         ? 
                                                        ((0x80000000U 
                                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U])
                                                          ? 
                                                         ((IData)(1U) 
                                                          + 
                                                          (~ 
                                                           vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U]))
                                                          : 
                                                         vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U])
                                                         : 
                                                        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U])))),33);
            tracep->chgBit(oldp+716,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__div_signed_buffer));
            tracep->chgBit(oldp+717,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__x_31_buffer));
            tracep->chgBit(oldp+718,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__y_31_buffer));
            tracep->chgBit(oldp+719,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_div_signed));
            tracep->chgBit(oldp+720,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_x_31));
            tracep->chgBit(oldp+721,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_complete)
                                             ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__y_31_buffer)
                                             : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U] 
                                                >> 0x1fU)))));
            tracep->chgBit(oldp+722,((0xf0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__count))));
            tracep->chgBit(oldp+723,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_complete));
            tracep->chgQData(oldp+724,((0x1ffffffffULL 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_div_signed)
                                            ? (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_x_31) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_complete)
                                                     ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__y_31_buffer)
                                                     : 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U] 
                                                     >> 0x1fU))))
                                                ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignS
                                                : (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignS 
                                                    - 1ULL)))
                                            : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignS))),33);
            tracep->chgQData(oldp+726,((0x1ffffffffULL 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_div_signed)
                                            ? ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_x_31)
                                                ? (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignR 
                                                    - 1ULL))
                                                : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignR)
                                            : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignR))),33);
            tracep->chgQData(oldp+728,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX),64);
            tracep->chgQData(oldp+730,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY),33);
            tracep->chgIData(oldp+732,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__Carry),17);
            tracep->chgQData(oldp+733,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__BoothRes[0]),64);
            tracep->chgQData(oldp+735,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__BoothRes[1]),64);
            tracep->chgQData(oldp+737,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__BoothRes[2]),64);
            tracep->chgQData(oldp+739,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__BoothRes[3]),64);
            tracep->chgQData(oldp+741,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__BoothRes[4]),64);
            tracep->chgQData(oldp+743,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__BoothRes[5]),64);
            tracep->chgQData(oldp+745,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__BoothRes[6]),64);
            tracep->chgQData(oldp+747,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__BoothRes[7]),64);
            tracep->chgQData(oldp+749,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__BoothRes[8]),64);
            tracep->chgQData(oldp+751,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__BoothRes[9]),64);
            tracep->chgQData(oldp+753,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__BoothRes[10]),64);
            tracep->chgQData(oldp+755,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__BoothRes[11]),64);
            tracep->chgQData(oldp+757,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__BoothRes[12]),64);
            tracep->chgQData(oldp+759,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__BoothRes[13]),64);
            tracep->chgQData(oldp+761,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__BoothRes[14]),64);
            tracep->chgQData(oldp+763,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__BoothRes[15]),64);
            tracep->chgQData(oldp+765,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__BoothRes[16]),64);
            tracep->chgIData(oldp+767,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry),17);
            tracep->chgQData(oldp+768,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes[0]),64);
            tracep->chgQData(oldp+770,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes[1]),64);
            tracep->chgQData(oldp+772,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes[2]),64);
            tracep->chgQData(oldp+774,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes[3]),64);
            tracep->chgQData(oldp+776,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes[4]),64);
            tracep->chgQData(oldp+778,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes[5]),64);
            tracep->chgQData(oldp+780,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes[6]),64);
            tracep->chgQData(oldp+782,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes[7]),64);
            tracep->chgQData(oldp+784,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes[8]),64);
            tracep->chgQData(oldp+786,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes[9]),64);
            tracep->chgQData(oldp+788,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes[10]),64);
            tracep->chgQData(oldp+790,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes[11]),64);
            tracep->chgQData(oldp+792,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes[12]),64);
            tracep->chgQData(oldp+794,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes[13]),64);
            tracep->chgQData(oldp+796,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes[14]),64);
            tracep->chgQData(oldp+798,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes[15]),64);
            tracep->chgQData(oldp+800,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes[16]),64);
            tracep->chgIData(oldp+802,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__p),32);
            tracep->chgSData(oldp+803,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029),14);
            tracep->chgSData(oldp+804,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029),14);
            tracep->chgSData(oldp+805,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029),14);
            tracep->chgSData(oldp+806,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0284__029),14);
            tracep->chgSData(oldp+807,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029),14);
            tracep->chgSData(oldp+808,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029),14);
            tracep->chgSData(oldp+809,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029),14);
            tracep->chgSData(oldp+810,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029),14);
            tracep->chgSData(oldp+811,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029),14);
            tracep->chgSData(oldp+812,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029),14);
            tracep->chgSData(oldp+813,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02811__029),14);
            tracep->chgSData(oldp+814,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02812__029),14);
            tracep->chgSData(oldp+815,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02813__029),14);
            tracep->chgSData(oldp+816,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02814__029),14);
            tracep->chgSData(oldp+817,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02815__029),14);
            tracep->chgSData(oldp+818,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02816__029),14);
            tracep->chgSData(oldp+819,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02817__029),14);
            tracep->chgSData(oldp+820,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02818__029),14);
            tracep->chgSData(oldp+821,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02819__029),14);
            tracep->chgSData(oldp+822,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02820__029),14);
            tracep->chgSData(oldp+823,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02821__029),14);
            tracep->chgSData(oldp+824,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02822__029),14);
            tracep->chgSData(oldp+825,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02823__029),14);
            tracep->chgSData(oldp+826,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02824__029),14);
            tracep->chgSData(oldp+827,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02825__029),14);
            tracep->chgSData(oldp+828,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02826__029),14);
            tracep->chgSData(oldp+829,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02827__029),14);
            tracep->chgSData(oldp+830,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02828__029),14);
            tracep->chgSData(oldp+831,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02829__029),14);
            tracep->chgSData(oldp+832,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02830__029),14);
            tracep->chgSData(oldp+833,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02831__029),14);
            tracep->chgSData(oldp+834,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02832__029),14);
            tracep->chgSData(oldp+835,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02833__029),14);
            tracep->chgSData(oldp+836,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02834__029),14);
            tracep->chgSData(oldp+837,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02835__029),14);
            tracep->chgSData(oldp+838,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02836__029),14);
            tracep->chgSData(oldp+839,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02837__029),14);
            tracep->chgSData(oldp+840,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02838__029),14);
            tracep->chgSData(oldp+841,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02839__029),14);
            tracep->chgSData(oldp+842,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02840__029),14);
            tracep->chgSData(oldp+843,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02841__029),14);
            tracep->chgSData(oldp+844,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02842__029),14);
            tracep->chgSData(oldp+845,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02843__029),14);
            tracep->chgSData(oldp+846,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02844__029),14);
            tracep->chgSData(oldp+847,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02845__029),14);
            tracep->chgSData(oldp+848,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029),14);
            tracep->chgSData(oldp+849,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029),14);
            tracep->chgSData(oldp+850,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029),14);
            tracep->chgSData(oldp+851,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029),14);
            tracep->chgSData(oldp+852,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029),14);
            tracep->chgSData(oldp+853,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029),14);
            tracep->chgSData(oldp+854,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029),14);
            tracep->chgSData(oldp+855,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029),14);
            tracep->chgSData(oldp+856,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029),14);
            tracep->chgSData(oldp+857,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029),14);
            tracep->chgSData(oldp+858,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029),14);
            tracep->chgSData(oldp+859,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029),14);
            tracep->chgSData(oldp+860,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029),14);
            tracep->chgSData(oldp+861,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029),14);
            tracep->chgSData(oldp+862,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029),14);
            tracep->chgSData(oldp+863,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029),14);
            tracep->chgSData(oldp+864,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029),14);
            tracep->chgSData(oldp+865,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029),14);
            tracep->chgSData(oldp+866,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02864__029),14);
            tracep->chgQData(oldp+867,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut),64);
            tracep->chgQData(oldp+869,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut),64);
            tracep->chgCData(oldp+871,((6U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY) 
                                              << 1U))),3);
            tracep->chgQData(oldp+872,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__fir__OutX),64);
            tracep->chgBit(oldp+874,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                      | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x))));
            tracep->chgBit(oldp+875,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx));
            tracep->chgBit(oldp+876,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x));
            tracep->chgBit(oldp+877,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x));
            tracep->chgBit(oldp+878,((1U & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                    >> 1U)))));
            tracep->chgBit(oldp+879,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY))));
            tracep->chgBit(oldp+880,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))));
            tracep->chgBit(oldp+881,((1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))));
            tracep->chgBit(oldp+882,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))) 
                                      | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x))));
            tracep->chgBit(oldp+883,((1U & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 1U)))));
            tracep->chgBit(oldp+884,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [1U])));
            tracep->chgBit(oldp+885,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [1U] >> 1U))));
            tracep->chgBit(oldp+886,((1U & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 1U))))));
            tracep->chgBit(oldp+887,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 1U)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 1U)))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [1U] >> 1U)))));
            tracep->chgBit(oldp+888,((1U & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 2U)))));
            tracep->chgBit(oldp+889,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [2U])));
            tracep->chgBit(oldp+890,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [2U] >> 1U))));
            tracep->chgBit(oldp+891,((1U & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 2U))))));
            tracep->chgBit(oldp+892,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 2U)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 2U)))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [2U] >> 1U)))));
            tracep->chgBit(oldp+893,((1U & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 3U)))));
            tracep->chgBit(oldp+894,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [3U])));
            tracep->chgBit(oldp+895,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [3U] >> 1U))));
            tracep->chgBit(oldp+896,((1U & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 3U))))));
            tracep->chgBit(oldp+897,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 3U)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 3U)))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [3U] >> 1U)))));
            tracep->chgBit(oldp+898,((1U & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 4U)))));
            tracep->chgBit(oldp+899,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [4U])));
            tracep->chgBit(oldp+900,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [4U] >> 1U))));
            tracep->chgBit(oldp+901,((1U & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 4U))))));
            tracep->chgBit(oldp+902,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 4U)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 4U)))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [4U] >> 1U)))));
            tracep->chgBit(oldp+903,((1U & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 5U)))));
            tracep->chgBit(oldp+904,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [5U])));
            tracep->chgBit(oldp+905,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [5U] >> 1U))));
            tracep->chgBit(oldp+906,((1U & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 5U))))));
            tracep->chgBit(oldp+907,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 5U)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 5U)))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [5U] >> 1U)))));
            tracep->chgBit(oldp+908,((1U & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 6U)))));
            tracep->chgBit(oldp+909,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [6U])));
            tracep->chgBit(oldp+910,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [6U] >> 1U))));
            tracep->chgBit(oldp+911,((1U & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 6U))))));
            tracep->chgBit(oldp+912,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 6U)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 6U)))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [6U] >> 1U)))));
            tracep->chgBit(oldp+913,((1U & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 7U)))));
            tracep->chgBit(oldp+914,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [7U])));
            tracep->chgBit(oldp+915,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [7U] >> 1U))));
            tracep->chgBit(oldp+916,((1U & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 7U))))));
            tracep->chgBit(oldp+917,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 7U)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 7U)))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [7U] >> 1U)))));
            tracep->chgBit(oldp+918,((1U & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 8U)))));
            tracep->chgBit(oldp+919,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [8U])));
            tracep->chgBit(oldp+920,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [8U] >> 1U))));
            tracep->chgBit(oldp+921,((1U & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 8U))))));
            tracep->chgBit(oldp+922,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 8U)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 8U)))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [8U] >> 1U)))));
            tracep->chgBit(oldp+923,((1U & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 9U)))));
            tracep->chgBit(oldp+924,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [9U])));
            tracep->chgBit(oldp+925,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [9U] >> 1U))));
            tracep->chgBit(oldp+926,((1U & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 9U))))));
            tracep->chgBit(oldp+927,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 9U)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 9U)))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [9U] >> 1U)))));
            tracep->chgBit(oldp+928,((1U & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xaU)))));
            tracep->chgBit(oldp+929,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0xaU])));
            tracep->chgBit(oldp+930,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0xaU] 
                                            >> 1U))));
            tracep->chgBit(oldp+931,((1U & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xaU))))));
            tracep->chgBit(oldp+932,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 0xaU)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xaU)))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0xaU] 
                                            >> 1U)))));
            tracep->chgBit(oldp+933,((1U & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xbU)))));
            tracep->chgBit(oldp+934,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0xbU])));
            tracep->chgBit(oldp+935,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0xbU] 
                                            >> 1U))));
            tracep->chgBit(oldp+936,((1U & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xbU))))));
            tracep->chgBit(oldp+937,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 0xbU)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xbU)))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0xbU] 
                                            >> 1U)))));
            tracep->chgBit(oldp+938,((1U & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xcU)))));
            tracep->chgBit(oldp+939,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0xcU])));
            tracep->chgBit(oldp+940,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0xcU] 
                                            >> 1U))));
            tracep->chgBit(oldp+941,((1U & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xcU))))));
            tracep->chgBit(oldp+942,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 0xcU)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xcU)))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0xcU] 
                                            >> 1U)))));
            tracep->chgBit(oldp+943,((1U & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xdU)))));
            tracep->chgBit(oldp+944,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0xdU])));
            tracep->chgBit(oldp+945,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0xdU] 
                                            >> 1U))));
            tracep->chgBit(oldp+946,((1U & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xdU))))));
            tracep->chgBit(oldp+947,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 0xdU)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xdU)))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0xdU] 
                                            >> 1U)))));
            tracep->chgBit(oldp+948,((1U & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xeU)))));
            tracep->chgBit(oldp+949,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0xeU])));
            tracep->chgBit(oldp+950,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0xeU] 
                                            >> 1U))));
            tracep->chgBit(oldp+951,((1U & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xeU))))));
            tracep->chgBit(oldp+952,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 0xeU)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xeU)))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0xeU] 
                                            >> 1U)))));
            tracep->chgBit(oldp+953,((1U & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0xfU)))));
            tracep->chgBit(oldp+954,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0xfU])));
            tracep->chgBit(oldp+955,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0xfU] 
                                            >> 1U))));
            tracep->chgBit(oldp+956,((1U & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0xfU))))));
            tracep->chgBit(oldp+957,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 0xfU)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0xfU)))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0xfU] 
                                            >> 1U)))));
            tracep->chgBit(oldp+958,((1U & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x10U)))));
            tracep->chgBit(oldp+959,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x10U])));
            tracep->chgBit(oldp+960,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x10U] 
                                            >> 1U))));
            tracep->chgBit(oldp+961,((1U & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x10U))))));
            tracep->chgBit(oldp+962,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 0x10U)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x10U)))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x10U] 
                                            >> 1U)))));
            tracep->chgBit(oldp+963,((1U & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x11U)))));
            tracep->chgBit(oldp+964,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x11U])));
            tracep->chgBit(oldp+965,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x11U] 
                                            >> 1U))));
            tracep->chgBit(oldp+966,((1U & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x11U))))));
            tracep->chgBit(oldp+967,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 0x11U)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x11U)))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x11U] 
                                            >> 1U)))));
            tracep->chgBit(oldp+968,((1U & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x12U)))));
            tracep->chgBit(oldp+969,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x12U])));
            tracep->chgBit(oldp+970,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x12U] 
                                            >> 1U))));
            tracep->chgBit(oldp+971,((1U & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x12U))))));
            tracep->chgBit(oldp+972,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 0x12U)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x12U)))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x12U] 
                                            >> 1U)))));
            tracep->chgBit(oldp+973,((1U & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x13U)))));
            tracep->chgBit(oldp+974,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x13U])));
            tracep->chgBit(oldp+975,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x13U] 
                                            >> 1U))));
            tracep->chgBit(oldp+976,((1U & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x13U))))));
            tracep->chgBit(oldp+977,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 0x13U)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x13U)))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x13U] 
                                            >> 1U)))));
            tracep->chgBit(oldp+978,((1U & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x14U)))));
            tracep->chgBit(oldp+979,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x14U])));
            tracep->chgBit(oldp+980,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x14U] 
                                            >> 1U))));
            tracep->chgBit(oldp+981,((1U & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x14U))))));
            tracep->chgBit(oldp+982,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 0x14U)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x14U)))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x14U] 
                                            >> 1U)))));
            tracep->chgBit(oldp+983,((1U & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x15U)))));
            tracep->chgBit(oldp+984,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x15U])));
            tracep->chgBit(oldp+985,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x15U] 
                                            >> 1U))));
            tracep->chgBit(oldp+986,((1U & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x15U))))));
            tracep->chgBit(oldp+987,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 0x15U)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x15U)))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x15U] 
                                            >> 1U)))));
            tracep->chgBit(oldp+988,((1U & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x16U)))));
            tracep->chgBit(oldp+989,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x16U])));
            tracep->chgBit(oldp+990,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x16U] 
                                            >> 1U))));
            tracep->chgBit(oldp+991,((1U & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x16U))))));
            tracep->chgBit(oldp+992,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 0x16U)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x16U)))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x16U] 
                                            >> 1U)))));
            tracep->chgBit(oldp+993,((1U & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x17U)))));
            tracep->chgBit(oldp+994,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x17U])));
            tracep->chgBit(oldp+995,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x17U] 
                                            >> 1U))));
            tracep->chgBit(oldp+996,((1U & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x17U))))));
            tracep->chgBit(oldp+997,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                        & (~ (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 0x17U)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                          & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x17U)))) 
                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                            [0x17U] 
                                            >> 1U)))));
            tracep->chgBit(oldp+998,((1U & (IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                    >> 0x18U)))));
            tracep->chgBit(oldp+999,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                      [0x18U])));
            tracep->chgBit(oldp+1000,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x18U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1001,((1U & (~ (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x18U))))));
            tracep->chgBit(oldp+1002,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                         & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x18U)))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                           & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 0x18U)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x18U] 
                                             >> 1U)))));
            tracep->chgBit(oldp+1003,((1U & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x19U)))));
            tracep->chgBit(oldp+1004,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x19U])));
            tracep->chgBit(oldp+1005,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x19U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1006,((1U & (~ (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x19U))))));
            tracep->chgBit(oldp+1007,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                         & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x19U)))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                           & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 0x19U)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x19U] 
                                             >> 1U)))));
            tracep->chgBit(oldp+1008,((1U & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1aU)))));
            tracep->chgBit(oldp+1009,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x1aU])));
            tracep->chgBit(oldp+1010,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x1aU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1011,((1U & (~ (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1aU))))));
            tracep->chgBit(oldp+1012,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                         & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1aU)))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                           & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 0x1aU)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x1aU] 
                                             >> 1U)))));
            tracep->chgBit(oldp+1013,((1U & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1bU)))));
            tracep->chgBit(oldp+1014,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x1bU])));
            tracep->chgBit(oldp+1015,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x1bU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1016,((1U & (~ (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1bU))))));
            tracep->chgBit(oldp+1017,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                         & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1bU)))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                           & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 0x1bU)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x1bU] 
                                             >> 1U)))));
            tracep->chgBit(oldp+1018,((1U & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1cU)))));
            tracep->chgBit(oldp+1019,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x1cU])));
            tracep->chgBit(oldp+1020,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x1cU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1021,((1U & (~ (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1cU))))));
            tracep->chgBit(oldp+1022,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                         & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1cU)))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                           & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 0x1cU)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x1cU] 
                                             >> 1U)))));
            tracep->chgBit(oldp+1023,((1U & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1dU)))));
            tracep->chgBit(oldp+1024,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x1dU])));
            tracep->chgBit(oldp+1025,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x1dU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1026,((1U & (~ (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1dU))))));
            tracep->chgBit(oldp+1027,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                         & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1dU)))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                           & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 0x1dU)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x1dU] 
                                             >> 1U)))));
            tracep->chgBit(oldp+1028,((1U & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1eU)))));
            tracep->chgBit(oldp+1029,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x1eU])));
            tracep->chgBit(oldp+1030,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x1eU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1031,((1U & (~ (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1eU))))));
            tracep->chgBit(oldp+1032,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                         & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1eU)))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                           & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 0x1eU)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x1eU] 
                                             >> 1U)))));
            tracep->chgBit(oldp+1033,((1U & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x1fU)))));
            tracep->chgBit(oldp+1034,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x1fU])));
            tracep->chgBit(oldp+1035,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x1fU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1036,((1U & (~ (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1fU))))));
            tracep->chgBit(oldp+1037,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                         & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x1fU)))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                           & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 0x1fU)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x1fU] 
                                             >> 1U)))));
            tracep->chgBit(oldp+1038,((1U & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x20U)))));
            tracep->chgBit(oldp+1039,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x20U])));
            tracep->chgBit(oldp+1040,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x20U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1041,((1U & (~ (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x20U))))));
            tracep->chgBit(oldp+1042,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                         & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x20U)))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                           & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 0x20U)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x20U] 
                                             >> 1U)))));
            tracep->chgBit(oldp+1043,((1U & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x21U)))));
            tracep->chgBit(oldp+1044,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x21U])));
            tracep->chgBit(oldp+1045,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x21U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1046,((1U & (~ (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x21U))))));
            tracep->chgBit(oldp+1047,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                         & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x21U)))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                           & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 0x21U)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x21U] 
                                             >> 1U)))));
            tracep->chgBit(oldp+1048,((1U & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x22U)))));
            tracep->chgBit(oldp+1049,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x22U])));
            tracep->chgBit(oldp+1050,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x22U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1051,((1U & (~ (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x22U))))));
            tracep->chgBit(oldp+1052,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                         & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x22U)))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                           & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 0x22U)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x22U] 
                                             >> 1U)))));
            tracep->chgBit(oldp+1053,((1U & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x23U)))));
            tracep->chgBit(oldp+1054,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x23U])));
            tracep->chgBit(oldp+1055,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x23U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1056,((1U & (~ (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x23U))))));
            tracep->chgBit(oldp+1057,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                         & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x23U)))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                           & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 0x23U)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x23U] 
                                             >> 1U)))));
            tracep->chgBit(oldp+1058,((1U & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x24U)))));
            tracep->chgBit(oldp+1059,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x24U])));
            tracep->chgBit(oldp+1060,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x24U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1061,((1U & (~ (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x24U))))));
            tracep->chgBit(oldp+1062,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                         & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x24U)))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                           & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 0x24U)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x24U] 
                                             >> 1U)))));
            tracep->chgBit(oldp+1063,((1U & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x25U)))));
            tracep->chgBit(oldp+1064,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x25U])));
            tracep->chgBit(oldp+1065,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x25U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1066,((1U & (~ (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x25U))))));
            tracep->chgBit(oldp+1067,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                         & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x25U)))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                           & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 0x25U)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x25U] 
                                             >> 1U)))));
            tracep->chgBit(oldp+1068,((1U & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x26U)))));
            tracep->chgBit(oldp+1069,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x26U])));
            tracep->chgBit(oldp+1070,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x26U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1071,((1U & (~ (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x26U))))));
            tracep->chgBit(oldp+1072,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                         & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x26U)))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                           & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 0x26U)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x26U] 
                                             >> 1U)))));
            tracep->chgBit(oldp+1073,((1U & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x27U)))));
            tracep->chgBit(oldp+1074,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x27U])));
            tracep->chgBit(oldp+1075,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x27U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1076,((1U & (~ (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x27U))))));
            tracep->chgBit(oldp+1077,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                         & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x27U)))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                           & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 0x27U)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x27U] 
                                             >> 1U)))));
            tracep->chgBit(oldp+1078,((1U & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x28U)))));
            tracep->chgBit(oldp+1079,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x28U])));
            tracep->chgBit(oldp+1080,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x28U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1081,((1U & (~ (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x28U))))));
            tracep->chgBit(oldp+1082,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                         & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x28U)))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                           & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 0x28U)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x28U] 
                                             >> 1U)))));
            tracep->chgBit(oldp+1083,((1U & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x29U)))));
            tracep->chgBit(oldp+1084,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x29U])));
            tracep->chgBit(oldp+1085,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x29U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1086,((1U & (~ (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x29U))))));
            tracep->chgBit(oldp+1087,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                         & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x29U)))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                           & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 0x29U)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x29U] 
                                             >> 1U)))));
            tracep->chgBit(oldp+1088,((1U & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2aU)))));
            tracep->chgBit(oldp+1089,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x2aU])));
            tracep->chgBit(oldp+1090,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x2aU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1091,((1U & (~ (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2aU))))));
            tracep->chgBit(oldp+1092,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                         & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x2aU)))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                           & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 0x2aU)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x2aU] 
                                             >> 1U)))));
            tracep->chgBit(oldp+1093,((1U & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2bU)))));
            tracep->chgBit(oldp+1094,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x2bU])));
            tracep->chgBit(oldp+1095,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x2bU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1096,((1U & (~ (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2bU))))));
            tracep->chgBit(oldp+1097,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                         & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x2bU)))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                           & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 0x2bU)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x2bU] 
                                             >> 1U)))));
            tracep->chgBit(oldp+1098,((1U & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2cU)))));
            tracep->chgBit(oldp+1099,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x2cU])));
            tracep->chgBit(oldp+1100,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x2cU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1101,((1U & (~ (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2cU))))));
            tracep->chgBit(oldp+1102,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                         & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x2cU)))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                           & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 0x2cU)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x2cU] 
                                             >> 1U)))));
            tracep->chgBit(oldp+1103,((1U & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2dU)))));
            tracep->chgBit(oldp+1104,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x2dU])));
            tracep->chgBit(oldp+1105,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x2dU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1106,((1U & (~ (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2dU))))));
            tracep->chgBit(oldp+1107,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                         & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x2dU)))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                           & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 0x2dU)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x2dU] 
                                             >> 1U)))));
            tracep->chgBit(oldp+1108,((1U & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2eU)))));
            tracep->chgBit(oldp+1109,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x2eU])));
            tracep->chgBit(oldp+1110,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x2eU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1111,((1U & (~ (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2eU))))));
            tracep->chgBit(oldp+1112,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                         & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x2eU)))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                           & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 0x2eU)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x2eU] 
                                             >> 1U)))));
            tracep->chgBit(oldp+1113,((1U & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x2fU)))));
            tracep->chgBit(oldp+1114,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x2fU])));
            tracep->chgBit(oldp+1115,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x2fU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1116,((1U & (~ (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2fU))))));
            tracep->chgBit(oldp+1117,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                         & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x2fU)))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                           & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 0x2fU)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x2fU] 
                                             >> 1U)))));
            tracep->chgBit(oldp+1118,((1U & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x30U)))));
            tracep->chgBit(oldp+1119,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x30U])));
            tracep->chgBit(oldp+1120,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x30U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1121,((1U & (~ (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x30U))))));
            tracep->chgBit(oldp+1122,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                         & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x30U)))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                           & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 0x30U)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x30U] 
                                             >> 1U)))));
            tracep->chgBit(oldp+1123,((1U & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x31U)))));
            tracep->chgBit(oldp+1124,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x31U])));
            tracep->chgBit(oldp+1125,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x31U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1126,((1U & (~ (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x31U))))));
            tracep->chgBit(oldp+1127,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                         & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x31U)))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                           & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 0x31U)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x31U] 
                                             >> 1U)))));
            tracep->chgBit(oldp+1128,((1U & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x32U)))));
            tracep->chgBit(oldp+1129,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x32U])));
            tracep->chgBit(oldp+1130,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x32U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1131,((1U & (~ (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x32U))))));
            tracep->chgBit(oldp+1132,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                         & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x32U)))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                           & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 0x32U)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x32U] 
                                             >> 1U)))));
            tracep->chgBit(oldp+1133,((1U & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+1134,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x33U])));
            tracep->chgBit(oldp+1135,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x33U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1136,((1U & (~ (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x33U))))));
            tracep->chgBit(oldp+1137,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                         & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x33U)))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                           & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 0x33U)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x33U] 
                                             >> 1U)))));
            tracep->chgBit(oldp+1138,((1U & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x34U)))));
            tracep->chgBit(oldp+1139,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x34U])));
            tracep->chgBit(oldp+1140,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x34U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1141,((1U & (~ (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x34U))))));
            tracep->chgBit(oldp+1142,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                         & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x34U)))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                           & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 0x34U)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x34U] 
                                             >> 1U)))));
            tracep->chgBit(oldp+1143,((1U & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x35U)))));
            tracep->chgBit(oldp+1144,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x35U])));
            tracep->chgBit(oldp+1145,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x35U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1146,((1U & (~ (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x35U))))));
            tracep->chgBit(oldp+1147,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                         & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x35U)))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                           & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 0x35U)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x35U] 
                                             >> 1U)))));
            tracep->chgBit(oldp+1148,((1U & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x36U)))));
            tracep->chgBit(oldp+1149,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x36U])));
            tracep->chgBit(oldp+1150,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x36U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1151,((1U & (~ (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x36U))))));
            tracep->chgBit(oldp+1152,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                         & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x36U)))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                           & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 0x36U)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x36U] 
                                             >> 1U)))));
            tracep->chgBit(oldp+1153,((1U & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x37U)))));
            tracep->chgBit(oldp+1154,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x37U])));
            tracep->chgBit(oldp+1155,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x37U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1156,((1U & (~ (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x37U))))));
            tracep->chgBit(oldp+1157,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                         & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x37U)))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                           & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 0x37U)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x37U] 
                                             >> 1U)))));
            tracep->chgBit(oldp+1158,((1U & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x38U)))));
            tracep->chgBit(oldp+1159,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x38U])));
            tracep->chgBit(oldp+1160,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x38U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1161,((1U & (~ (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x38U))))));
            tracep->chgBit(oldp+1162,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                         & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x38U)))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                           & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 0x38U)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x38U] 
                                             >> 1U)))));
            tracep->chgBit(oldp+1163,((1U & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x39U)))));
            tracep->chgBit(oldp+1164,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x39U])));
            tracep->chgBit(oldp+1165,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x39U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1166,((1U & (~ (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x39U))))));
            tracep->chgBit(oldp+1167,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                         & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x39U)))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                           & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 0x39U)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x39U] 
                                             >> 1U)))));
            tracep->chgBit(oldp+1168,((1U & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x3aU)))));
            tracep->chgBit(oldp+1169,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x3aU])));
            tracep->chgBit(oldp+1170,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x3aU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1171,((1U & (~ (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x3aU))))));
            tracep->chgBit(oldp+1172,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                         & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x3aU)))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                           & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 0x3aU)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x3aU] 
                                             >> 1U)))));
            tracep->chgBit(oldp+1173,((1U & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x3bU)))));
            tracep->chgBit(oldp+1174,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x3bU])));
            tracep->chgBit(oldp+1175,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x3bU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1176,((1U & (~ (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x3bU))))));
            tracep->chgBit(oldp+1177,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                         & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x3bU)))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                           & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 0x3bU)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x3bU] 
                                             >> 1U)))));
            tracep->chgBit(oldp+1178,((1U & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x3cU)))));
            tracep->chgBit(oldp+1179,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x3cU])));
            tracep->chgBit(oldp+1180,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x3cU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1181,((1U & (~ (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x3cU))))));
            tracep->chgBit(oldp+1182,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                         & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x3cU)))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                           & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 0x3cU)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x3cU] 
                                             >> 1U)))));
            tracep->chgBit(oldp+1183,((1U & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x3dU)))));
            tracep->chgBit(oldp+1184,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x3dU])));
            tracep->chgBit(oldp+1185,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x3dU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1186,((1U & (~ (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x3dU))))));
            tracep->chgBit(oldp+1187,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                         & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x3dU)))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                           & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 0x3dU)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x3dU] 
                                             >> 1U)))));
            tracep->chgBit(oldp+1188,((1U & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x3eU)))));
            tracep->chgBit(oldp+1189,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x3eU])));
            tracep->chgBit(oldp+1190,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x3eU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1191,((1U & (~ (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x3eU))))));
            tracep->chgBit(oldp+1192,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                         & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x3eU)))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                           & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 0x3eU)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x3eU] 
                                             >> 1U)))));
            tracep->chgBit(oldp+1193,((1U & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     >> 0x3fU)))));
            tracep->chgBit(oldp+1194,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                       [0x3fU])));
            tracep->chgBit(oldp+1195,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x3fU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1196,((1U & (~ (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x3fU))))));
            tracep->chgBit(oldp+1197,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx) 
                                         & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       >> 0x3fU)))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x) 
                                           & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      >> 0x3fU)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x) 
                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig
                                             [0x3fU] 
                                             >> 1U)))));
            tracep->chgCData(oldp+1198,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__las__y),3);
            tracep->chgQData(oldp+1199,((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         << 0x20U)),64);
            tracep->chgQData(oldp+1201,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__las__OutX),64);
            tracep->chgBit(oldp+1203,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                       | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x))));
            tracep->chgBit(oldp+1204,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx));
            tracep->chgBit(oldp+1205,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x));
            tracep->chgBit(oldp+1206,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x));
            tracep->chgBit(oldp+1207,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__las__y) 
                                             >> 2U))));
            tracep->chgBit(oldp+1208,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__las__y) 
                                             >> 1U))));
            tracep->chgBit(oldp+1209,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__las__y))));
            tracep->chgBit(oldp+1210,((1U & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 0x20U)))));
            tracep->chgBit(oldp+1211,((1U & (~ (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x20U))))));
            tracep->chgBit(oldp+1212,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                         & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 0x20U)))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                           & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      << 0x20U)))) 
                                       | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x))));
            tracep->chgBit(oldp+1213,((1U & (IData)(
                                                    (0x7fffffff80000000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x1fU))))));
            tracep->chgBit(oldp+1214,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [1U])));
            tracep->chgBit(oldp+1215,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [1U] >> 1U))));
            tracep->chgBit(oldp+1216,((1U & (~ (IData)(
                                                       (0x7fffffff80000000ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 0x1fU)))))));
            tracep->chgBit(oldp+1217,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffffff80000000ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 0x1fU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x7fffffff80000000ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 0x1fU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [1U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [1U]))));
            tracep->chgBit(oldp+1218,((1U & (IData)(
                                                    (0x3fffffffc0000000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x1eU))))));
            tracep->chgBit(oldp+1219,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [2U])));
            tracep->chgBit(oldp+1220,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [2U] >> 1U))));
            tracep->chgBit(oldp+1221,((1U & (~ (IData)(
                                                       (0x3fffffffc0000000ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 0x1eU)))))));
            tracep->chgBit(oldp+1222,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fffffffc0000000ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 0x1eU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x3fffffffc0000000ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 0x1eU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [2U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [2U]))));
            tracep->chgBit(oldp+1223,((1U & (IData)(
                                                    (0x1fffffffe0000000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x1dU))))));
            tracep->chgBit(oldp+1224,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [3U])));
            tracep->chgBit(oldp+1225,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [3U] >> 1U))));
            tracep->chgBit(oldp+1226,((1U & (~ (IData)(
                                                       (0x1fffffffe0000000ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 0x1dU)))))));
            tracep->chgBit(oldp+1227,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fffffffe0000000ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 0x1dU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x1fffffffe0000000ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 0x1dU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [3U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [3U]))));
            tracep->chgBit(oldp+1228,((1U & (IData)(
                                                    (0xffffffff0000000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x1cU))))));
            tracep->chgBit(oldp+1229,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [4U])));
            tracep->chgBit(oldp+1230,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [4U] >> 1U))));
            tracep->chgBit(oldp+1231,((1U & (~ (IData)(
                                                       (0xffffffff0000000ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 0x1cU)))))));
            tracep->chgBit(oldp+1232,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffffffff0000000ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 0x1cU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0xffffffff0000000ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 0x1cU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [4U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [4U]))));
            tracep->chgBit(oldp+1233,((1U & (IData)(
                                                    (0x7fffffff8000000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x1bU))))));
            tracep->chgBit(oldp+1234,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [5U])));
            tracep->chgBit(oldp+1235,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [5U] >> 1U))));
            tracep->chgBit(oldp+1236,((1U & (~ (IData)(
                                                       (0x7fffffff8000000ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 0x1bU)))))));
            tracep->chgBit(oldp+1237,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffffff8000000ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 0x1bU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x7fffffff8000000ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 0x1bU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [5U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [5U]))));
            tracep->chgBit(oldp+1238,((1U & (IData)(
                                                    (0x3fffffffc000000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x1aU))))));
            tracep->chgBit(oldp+1239,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [6U])));
            tracep->chgBit(oldp+1240,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [6U] >> 1U))));
            tracep->chgBit(oldp+1241,((1U & (~ (IData)(
                                                       (0x3fffffffc000000ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 0x1aU)))))));
            tracep->chgBit(oldp+1242,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fffffffc000000ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 0x1aU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x3fffffffc000000ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 0x1aU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [6U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [6U]))));
            tracep->chgBit(oldp+1243,((1U & (IData)(
                                                    (0x1fffffffe000000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x19U))))));
            tracep->chgBit(oldp+1244,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [7U])));
            tracep->chgBit(oldp+1245,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [7U] >> 1U))));
            tracep->chgBit(oldp+1246,((1U & (~ (IData)(
                                                       (0x1fffffffe000000ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 0x19U)))))));
            tracep->chgBit(oldp+1247,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fffffffe000000ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 0x19U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x1fffffffe000000ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 0x19U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [7U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [7U]))));
            tracep->chgBit(oldp+1248,((1U & (IData)(
                                                    (0xffffffff000000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x18U))))));
            tracep->chgBit(oldp+1249,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [8U])));
            tracep->chgBit(oldp+1250,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [8U] >> 1U))));
            tracep->chgBit(oldp+1251,((1U & (~ (IData)(
                                                       (0xffffffff000000ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 0x18U)))))));
            tracep->chgBit(oldp+1252,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffffffff000000ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 0x18U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0xffffffff000000ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 0x18U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [8U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [8U]))));
            tracep->chgBit(oldp+1253,((1U & (IData)(
                                                    (0x7fffffff800000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x17U))))));
            tracep->chgBit(oldp+1254,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [9U])));
            tracep->chgBit(oldp+1255,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [9U] >> 1U))));
            tracep->chgBit(oldp+1256,((1U & (~ (IData)(
                                                       (0x7fffffff800000ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 0x17U)))))));
            tracep->chgBit(oldp+1257,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffffff800000ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 0x17U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x7fffffff800000ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 0x17U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [9U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [9U]))));
            tracep->chgBit(oldp+1258,((1U & (IData)(
                                                    (0x3fffffffc00000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x16U))))));
            tracep->chgBit(oldp+1259,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0xaU])));
            tracep->chgBit(oldp+1260,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0xaU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1261,((1U & (~ (IData)(
                                                       (0x3fffffffc00000ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 0x16U)))))));
            tracep->chgBit(oldp+1262,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fffffffc00000ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 0x16U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x3fffffffc00000ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 0x16U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0xaU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0xaU]))));
            tracep->chgBit(oldp+1263,((1U & (IData)(
                                                    (0x1fffffffe00000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x15U))))));
            tracep->chgBit(oldp+1264,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0xbU])));
            tracep->chgBit(oldp+1265,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0xbU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1266,((1U & (~ (IData)(
                                                       (0x1fffffffe00000ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 0x15U)))))));
            tracep->chgBit(oldp+1267,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fffffffe00000ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 0x15U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x1fffffffe00000ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 0x15U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0xbU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0xbU]))));
            tracep->chgBit(oldp+1268,((1U & (IData)(
                                                    (0xffffffff00000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x14U))))));
            tracep->chgBit(oldp+1269,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0xcU])));
            tracep->chgBit(oldp+1270,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0xcU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1271,((1U & (~ (IData)(
                                                       (0xffffffff00000ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 0x14U)))))));
            tracep->chgBit(oldp+1272,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffffffff00000ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 0x14U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0xffffffff00000ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 0x14U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0xcU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0xcU]))));
            tracep->chgBit(oldp+1273,((1U & (IData)(
                                                    (0x7fffffff80000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x13U))))));
            tracep->chgBit(oldp+1274,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0xdU])));
            tracep->chgBit(oldp+1275,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0xdU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1276,((1U & (~ (IData)(
                                                       (0x7fffffff80000ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 0x13U)))))));
            tracep->chgBit(oldp+1277,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffffff80000ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 0x13U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x7fffffff80000ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 0x13U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0xdU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0xdU]))));
            tracep->chgBit(oldp+1278,((1U & (IData)(
                                                    (0x3fffffffc0000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x12U))))));
            tracep->chgBit(oldp+1279,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0xeU])));
            tracep->chgBit(oldp+1280,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0xeU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1281,((1U & (~ (IData)(
                                                       (0x3fffffffc0000ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 0x12U)))))));
            tracep->chgBit(oldp+1282,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fffffffc0000ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 0x12U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x3fffffffc0000ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 0x12U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0xeU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0xeU]))));
            tracep->chgBit(oldp+1283,((1U & (IData)(
                                                    (0x1fffffffe0000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x11U))))));
            tracep->chgBit(oldp+1284,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0xfU])));
            tracep->chgBit(oldp+1285,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0xfU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1286,((1U & (~ (IData)(
                                                       (0x1fffffffe0000ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 0x11U)))))));
            tracep->chgBit(oldp+1287,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fffffffe0000ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 0x11U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x1fffffffe0000ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 0x11U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0xfU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0xfU]))));
            tracep->chgBit(oldp+1288,((1U & (IData)(
                                                    (0xffffffff0000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0x10U))))));
            tracep->chgBit(oldp+1289,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x10U])));
            tracep->chgBit(oldp+1290,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x10U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1291,((1U & (~ (IData)(
                                                       (0xffffffff0000ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 0x10U)))))));
            tracep->chgBit(oldp+1292,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffffffff0000ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 0x10U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0xffffffff0000ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 0x10U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x10U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x10U]))));
            tracep->chgBit(oldp+1293,((1U & (IData)(
                                                    (0x7fffffff8000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xfU))))));
            tracep->chgBit(oldp+1294,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x11U])));
            tracep->chgBit(oldp+1295,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x11U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1296,((1U & (~ (IData)(
                                                       (0x7fffffff8000ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 0xfU)))))));
            tracep->chgBit(oldp+1297,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffffff8000ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 0xfU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x7fffffff8000ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 0xfU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x11U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x11U]))));
            tracep->chgBit(oldp+1298,((1U & (IData)(
                                                    (0x3fffffffc000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xeU))))));
            tracep->chgBit(oldp+1299,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x12U])));
            tracep->chgBit(oldp+1300,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x12U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1301,((1U & (~ (IData)(
                                                       (0x3fffffffc000ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 0xeU)))))));
            tracep->chgBit(oldp+1302,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fffffffc000ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 0xeU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x3fffffffc000ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 0xeU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x12U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x12U]))));
            tracep->chgBit(oldp+1303,((1U & (IData)(
                                                    (0x1fffffffe000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xdU))))));
            tracep->chgBit(oldp+1304,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x13U])));
            tracep->chgBit(oldp+1305,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x13U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1306,((1U & (~ (IData)(
                                                       (0x1fffffffe000ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 0xdU)))))));
            tracep->chgBit(oldp+1307,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fffffffe000ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 0xdU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x1fffffffe000ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 0xdU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x13U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x13U]))));
            tracep->chgBit(oldp+1308,((1U & (IData)(
                                                    (0xffffffff000ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xcU))))));
            tracep->chgBit(oldp+1309,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x14U])));
            tracep->chgBit(oldp+1310,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x14U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1311,((1U & (~ (IData)(
                                                       (0xffffffff000ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 0xcU)))))));
            tracep->chgBit(oldp+1312,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffffffff000ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 0xcU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0xffffffff000ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 0xcU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x14U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x14U]))));
            tracep->chgBit(oldp+1313,((1U & (IData)(
                                                    (0x7fffffff800ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xbU))))));
            tracep->chgBit(oldp+1314,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x15U])));
            tracep->chgBit(oldp+1315,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x15U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1316,((1U & (~ (IData)(
                                                       (0x7fffffff800ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 0xbU)))))));
            tracep->chgBit(oldp+1317,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffffff800ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 0xbU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x7fffffff800ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 0xbU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x15U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x15U]))));
            tracep->chgBit(oldp+1318,((1U & (IData)(
                                                    (0x3fffffffc00ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 0xaU))))));
            tracep->chgBit(oldp+1319,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x16U])));
            tracep->chgBit(oldp+1320,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x16U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1321,((1U & (~ (IData)(
                                                       (0x3fffffffc00ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 0xaU)))))));
            tracep->chgBit(oldp+1322,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fffffffc00ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 0xaU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x3fffffffc00ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 0xaU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x16U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x16U]))));
            tracep->chgBit(oldp+1323,((1U & (IData)(
                                                    (0x1fffffffe00ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 9U))))));
            tracep->chgBit(oldp+1324,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x17U])));
            tracep->chgBit(oldp+1325,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x17U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1326,((1U & (~ (IData)(
                                                       (0x1fffffffe00ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 9U)))))));
            tracep->chgBit(oldp+1327,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fffffffe00ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 9U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x1fffffffe00ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 9U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x17U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x17U]))));
            tracep->chgBit(oldp+1328,((1U & (IData)(
                                                    (0xffffffff00ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 8U))))));
            tracep->chgBit(oldp+1329,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x18U])));
            tracep->chgBit(oldp+1330,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x18U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1331,((1U & (~ (IData)(
                                                       (0xffffffff00ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 8U)))))));
            tracep->chgBit(oldp+1332,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffffffff00ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 8U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0xffffffff00ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 8U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x18U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x18U]))));
            tracep->chgBit(oldp+1333,((1U & (IData)(
                                                    (0x7fffffff80ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 7U))))));
            tracep->chgBit(oldp+1334,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x19U])));
            tracep->chgBit(oldp+1335,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x19U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1336,((1U & (~ (IData)(
                                                       (0x7fffffff80ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 7U)))))));
            tracep->chgBit(oldp+1337,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffffff80ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 7U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x7fffffff80ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 7U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x19U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x19U]))));
            tracep->chgBit(oldp+1338,((1U & (IData)(
                                                    (0x3fffffffc0ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 6U))))));
            tracep->chgBit(oldp+1339,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x1aU])));
            tracep->chgBit(oldp+1340,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x1aU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1341,((1U & (~ (IData)(
                                                       (0x3fffffffc0ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 6U)))))));
            tracep->chgBit(oldp+1342,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fffffffc0ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 6U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x3fffffffc0ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 6U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x1aU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x1aU]))));
            tracep->chgBit(oldp+1343,((1U & (IData)(
                                                    (0x1fffffffe0ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 5U))))));
            tracep->chgBit(oldp+1344,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x1bU])));
            tracep->chgBit(oldp+1345,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x1bU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1346,((1U & (~ (IData)(
                                                       (0x1fffffffe0ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 5U)))))));
            tracep->chgBit(oldp+1347,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fffffffe0ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 5U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x1fffffffe0ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 5U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x1bU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x1bU]))));
            tracep->chgBit(oldp+1348,((1U & (IData)(
                                                    (0xffffffff0ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 4U))))));
            tracep->chgBit(oldp+1349,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x1cU])));
            tracep->chgBit(oldp+1350,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x1cU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1351,((1U & (~ (IData)(
                                                       (0xffffffff0ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 4U)))))));
            tracep->chgBit(oldp+1352,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffffffff0ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 4U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0xffffffff0ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 4U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x1cU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x1cU]))));
            tracep->chgBit(oldp+1353,((1U & (IData)(
                                                    (0x7fffffff8ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 3U))))));
            tracep->chgBit(oldp+1354,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x1dU])));
            tracep->chgBit(oldp+1355,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x1dU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1356,((1U & (~ (IData)(
                                                       (0x7fffffff8ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 3U)))))));
            tracep->chgBit(oldp+1357,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffffff8ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 3U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x7fffffff8ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 3U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x1dU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x1dU]))));
            tracep->chgBit(oldp+1358,((1U & (IData)(
                                                    (0x3fffffffcULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 2U))))));
            tracep->chgBit(oldp+1359,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x1eU])));
            tracep->chgBit(oldp+1360,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x1eU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1361,((1U & (~ (IData)(
                                                       (0x3fffffffcULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 2U)))))));
            tracep->chgBit(oldp+1362,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fffffffcULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 2U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x3fffffffcULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 2U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x1eU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x1eU]))));
            tracep->chgBit(oldp+1363,((1U & (IData)(
                                                    (0x1fffffffeULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 1U))))));
            tracep->chgBit(oldp+1364,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x1fU])));
            tracep->chgBit(oldp+1365,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x1fU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1366,((1U & (~ (IData)(
                                                       (0x1fffffffeULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 1U)))))));
            tracep->chgBit(oldp+1367,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fffffffeULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 1U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x1fffffffeULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 1U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x1fU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x1fU]))));
            tracep->chgBit(oldp+1368,((1U & (IData)(
                                                    (0xffffffffULL 
                                                     & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))));
            tracep->chgBit(oldp+1369,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x20U])));
            tracep->chgBit(oldp+1370,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x20U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1371,((1U & (~ (IData)(
                                                       (0xffffffffULL 
                                                        & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))))));
            tracep->chgBit(oldp+1372,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffffffffULL 
                                                        & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0xffffffffULL 
                                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x20U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x20U]))));
            tracep->chgBit(oldp+1373,((1U & (IData)(
                                                    (0x7fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 1U))))));
            tracep->chgBit(oldp+1374,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x21U])));
            tracep->chgBit(oldp+1375,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x21U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1376,((1U & (~ (IData)(
                                                       (0x7fffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 1U)))))));
            tracep->chgBit(oldp+1377,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 1U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x7fffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 1U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x21U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x21U]))));
            tracep->chgBit(oldp+1378,((1U & (IData)(
                                                    (0x3fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 2U))))));
            tracep->chgBit(oldp+1379,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x22U])));
            tracep->chgBit(oldp+1380,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x22U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1381,((1U & (~ (IData)(
                                                       (0x3fffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 2U)))))));
            tracep->chgBit(oldp+1382,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 2U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x3fffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 2U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x22U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x22U]))));
            tracep->chgBit(oldp+1383,((1U & (IData)(
                                                    (0x1fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 3U))))));
            tracep->chgBit(oldp+1384,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x23U])));
            tracep->chgBit(oldp+1385,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x23U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1386,((1U & (~ (IData)(
                                                       (0x1fffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 3U)))))));
            tracep->chgBit(oldp+1387,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 3U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x1fffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 3U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x23U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x23U]))));
            tracep->chgBit(oldp+1388,((1U & (IData)(
                                                    (0xfffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 4U))))));
            tracep->chgBit(oldp+1389,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x24U])));
            tracep->chgBit(oldp+1390,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x24U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1391,((1U & (~ (IData)(
                                                       (0xfffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 4U)))))));
            tracep->chgBit(oldp+1392,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xfffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 4U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0xfffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 4U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x24U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x24U]))));
            tracep->chgBit(oldp+1393,((1U & (IData)(
                                                    (0x7ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 5U))))));
            tracep->chgBit(oldp+1394,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x25U])));
            tracep->chgBit(oldp+1395,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x25U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1396,((1U & (~ (IData)(
                                                       (0x7ffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 5U)))))));
            tracep->chgBit(oldp+1397,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7ffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 5U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x7ffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 5U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x25U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x25U]))));
            tracep->chgBit(oldp+1398,((1U & (IData)(
                                                    (0x3ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 6U))))));
            tracep->chgBit(oldp+1399,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x26U])));
            tracep->chgBit(oldp+1400,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x26U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1401,((1U & (~ (IData)(
                                                       (0x3ffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 6U)))))));
            tracep->chgBit(oldp+1402,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3ffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 6U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x3ffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 6U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x26U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x26U]))));
            tracep->chgBit(oldp+1403,((1U & (IData)(
                                                    (0x1ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 7U))))));
            tracep->chgBit(oldp+1404,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x27U])));
            tracep->chgBit(oldp+1405,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x27U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1406,((1U & (~ (IData)(
                                                       (0x1ffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 7U)))))));
            tracep->chgBit(oldp+1407,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1ffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 7U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x1ffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 7U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x27U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x27U]))));
            tracep->chgBit(oldp+1408,((1U & (IData)(
                                                    (0xffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 8U))))));
            tracep->chgBit(oldp+1409,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x28U])));
            tracep->chgBit(oldp+1410,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x28U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1411,((1U & (~ (IData)(
                                                       (0xffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 8U)))))));
            tracep->chgBit(oldp+1412,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 8U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0xffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 8U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x28U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x28U]))));
            tracep->chgBit(oldp+1413,((1U & (IData)(
                                                    (0x7fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 9U))))));
            tracep->chgBit(oldp+1414,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x29U])));
            tracep->chgBit(oldp+1415,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x29U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1416,((1U & (~ (IData)(
                                                       (0x7fffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 9U)))))));
            tracep->chgBit(oldp+1417,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 9U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x7fffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 9U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x29U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x29U]))));
            tracep->chgBit(oldp+1418,((1U & (IData)(
                                                    (0x3fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xaU))))));
            tracep->chgBit(oldp+1419,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x2aU])));
            tracep->chgBit(oldp+1420,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x2aU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1421,((1U & (~ (IData)(
                                                       (0x3fffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xaU)))))));
            tracep->chgBit(oldp+1422,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xaU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x3fffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xaU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x2aU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x2aU]))));
            tracep->chgBit(oldp+1423,((1U & (IData)(
                                                    (0x1fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xbU))))));
            tracep->chgBit(oldp+1424,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x2bU])));
            tracep->chgBit(oldp+1425,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x2bU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1426,((1U & (~ (IData)(
                                                       (0x1fffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xbU)))))));
            tracep->chgBit(oldp+1427,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xbU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x1fffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xbU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x2bU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x2bU]))));
            tracep->chgBit(oldp+1428,((1U & (IData)(
                                                    (0xfffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xcU))))));
            tracep->chgBit(oldp+1429,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x2cU])));
            tracep->chgBit(oldp+1430,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x2cU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1431,((1U & (~ (IData)(
                                                       (0xfffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xcU)))))));
            tracep->chgBit(oldp+1432,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xfffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xcU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0xfffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xcU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x2cU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x2cU]))));
            tracep->chgBit(oldp+1433,((1U & (IData)(
                                                    (0x7ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xdU))))));
            tracep->chgBit(oldp+1434,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x2dU])));
            tracep->chgBit(oldp+1435,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x2dU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1436,((1U & (~ (IData)(
                                                       (0x7ffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xdU)))))));
            tracep->chgBit(oldp+1437,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7ffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xdU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x7ffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xdU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x2dU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x2dU]))));
            tracep->chgBit(oldp+1438,((1U & (IData)(
                                                    (0x3ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xeU))))));
            tracep->chgBit(oldp+1439,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x2eU])));
            tracep->chgBit(oldp+1440,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x2eU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1441,((1U & (~ (IData)(
                                                       (0x3ffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xeU)))))));
            tracep->chgBit(oldp+1442,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3ffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xeU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x3ffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xeU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x2eU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x2eU]))));
            tracep->chgBit(oldp+1443,((1U & (IData)(
                                                    (0x1ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xfU))))));
            tracep->chgBit(oldp+1444,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x2fU])));
            tracep->chgBit(oldp+1445,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x2fU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1446,((1U & (~ (IData)(
                                                       (0x1ffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xfU)))))));
            tracep->chgBit(oldp+1447,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1ffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xfU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x1ffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xfU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x2fU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x2fU]))));
            tracep->chgBit(oldp+1448,((1U & (IData)(
                                                    (0xffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x10U))))));
            tracep->chgBit(oldp+1449,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x30U])));
            tracep->chgBit(oldp+1450,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x30U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1451,((1U & (~ (IData)(
                                                       (0xffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x10U)))))));
            tracep->chgBit(oldp+1452,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x10U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0xffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x10U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x30U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x30U]))));
            tracep->chgBit(oldp+1453,((1U & (IData)(
                                                    (0x7fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x11U))))));
            tracep->chgBit(oldp+1454,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x31U])));
            tracep->chgBit(oldp+1455,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x31U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1456,((1U & (~ (IData)(
                                                       (0x7fffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x11U)))))));
            tracep->chgBit(oldp+1457,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x11U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x7fffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x11U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x31U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x31U]))));
            tracep->chgBit(oldp+1458,((1U & (IData)(
                                                    (0x3fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x12U))))));
            tracep->chgBit(oldp+1459,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x32U])));
            tracep->chgBit(oldp+1460,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x32U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1461,((1U & (~ (IData)(
                                                       (0x3fffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x12U)))))));
            tracep->chgBit(oldp+1462,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x12U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x3fffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x12U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x32U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x32U]))));
            tracep->chgBit(oldp+1463,((1U & (IData)(
                                                    (0x1fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x13U))))));
            tracep->chgBit(oldp+1464,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x33U])));
            tracep->chgBit(oldp+1465,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x33U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1466,((1U & (~ (IData)(
                                                       (0x1fffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x13U)))))));
            tracep->chgBit(oldp+1467,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x13U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x1fffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x13U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x33U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x33U]))));
            tracep->chgBit(oldp+1468,((1U & (IData)(
                                                    (0xfffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x14U))))));
            tracep->chgBit(oldp+1469,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x34U])));
            tracep->chgBit(oldp+1470,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x34U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1471,((1U & (~ (IData)(
                                                       (0xfffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x14U)))))));
            tracep->chgBit(oldp+1472,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xfffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x14U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0xfffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x14U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x34U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x34U]))));
            tracep->chgBit(oldp+1473,((1U & (IData)(
                                                    (0x7ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x15U))))));
            tracep->chgBit(oldp+1474,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x35U])));
            tracep->chgBit(oldp+1475,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x35U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1476,((1U & (~ (IData)(
                                                       (0x7ffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x15U)))))));
            tracep->chgBit(oldp+1477,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7ffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x15U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x7ffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x15U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x35U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x35U]))));
            tracep->chgBit(oldp+1478,((1U & (IData)(
                                                    (0x3ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x16U))))));
            tracep->chgBit(oldp+1479,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x36U])));
            tracep->chgBit(oldp+1480,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x36U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1481,((1U & (~ (IData)(
                                                       (0x3ffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x16U)))))));
            tracep->chgBit(oldp+1482,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3ffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x16U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x3ffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x16U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x36U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x36U]))));
            tracep->chgBit(oldp+1483,((1U & (IData)(
                                                    (0x1ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x17U))))));
            tracep->chgBit(oldp+1484,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x37U])));
            tracep->chgBit(oldp+1485,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x37U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1486,((1U & (~ (IData)(
                                                       (0x1ffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x17U)))))));
            tracep->chgBit(oldp+1487,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1ffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x17U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x1ffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x17U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x37U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x37U]))));
            tracep->chgBit(oldp+1488,((1U & (IData)(
                                                    (0xffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x18U))))));
            tracep->chgBit(oldp+1489,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x38U])));
            tracep->chgBit(oldp+1490,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x38U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1491,((1U & (~ (IData)(
                                                       (0xffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x18U)))))));
            tracep->chgBit(oldp+1492,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x18U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0xffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x18U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x38U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x38U]))));
            tracep->chgBit(oldp+1493,((1U & (IData)(
                                                    (0x7fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x19U))))));
            tracep->chgBit(oldp+1494,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x39U])));
            tracep->chgBit(oldp+1495,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x39U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1496,((1U & (~ (IData)(
                                                       (0x7fULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x19U)))))));
            tracep->chgBit(oldp+1497,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x19U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x7fULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x19U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x39U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x39U]))));
            tracep->chgBit(oldp+1498,((1U & (IData)(
                                                    (0x3fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1aU))))));
            tracep->chgBit(oldp+1499,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x3aU])));
            tracep->chgBit(oldp+1500,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x3aU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1501,((1U & (~ (IData)(
                                                       (0x3fULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x1aU)))))));
            tracep->chgBit(oldp+1502,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x1aU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x3fULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1aU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x3aU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x3aU]))));
            tracep->chgBit(oldp+1503,((1U & (IData)(
                                                    (0x1fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1bU))))));
            tracep->chgBit(oldp+1504,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x3bU])));
            tracep->chgBit(oldp+1505,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x3bU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1506,((1U & (~ (IData)(
                                                       (0x1fULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x1bU)))))));
            tracep->chgBit(oldp+1507,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x1bU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0x1fULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1bU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x3bU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x3bU]))));
            tracep->chgBit(oldp+1508,((1U & (IData)(
                                                    (0xfULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1cU))))));
            tracep->chgBit(oldp+1509,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x3cU])));
            tracep->chgBit(oldp+1510,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x3cU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1511,((1U & (~ (IData)(
                                                       (0xfULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x1cU)))))));
            tracep->chgBit(oldp+1512,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xfULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x1cU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (0xfULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1cU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x3cU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x3cU]))));
            tracep->chgBit(oldp+1513,((1U & (IData)(
                                                    (7ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1dU))))));
            tracep->chgBit(oldp+1514,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x3dU])));
            tracep->chgBit(oldp+1515,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x3dU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1516,((1U & (~ (IData)(
                                                       (7ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x1dU)))))));
            tracep->chgBit(oldp+1517,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (7ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x1dU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (7ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1dU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x3dU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x3dU]))));
            tracep->chgBit(oldp+1518,((1U & (IData)(
                                                    (3ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1eU))))));
            tracep->chgBit(oldp+1519,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x3eU])));
            tracep->chgBit(oldp+1520,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x3eU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1521,((1U & (~ (IData)(
                                                       (3ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x1eU)))))));
            tracep->chgBit(oldp+1522,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (3ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x1eU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (3ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1eU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x3eU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x3eU]))));
            tracep->chgBit(oldp+1523,((1U & (IData)(
                                                    (1ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1fU))))));
            tracep->chgBit(oldp+1524,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                       [0x3fU])));
            tracep->chgBit(oldp+1525,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                             [0x3fU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1526,((1U & (~ (IData)(
                                                       (1ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x1fU)))))));
            tracep->chgBit(oldp+1527,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx) 
                                          & (~ (IData)(
                                                       (1ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x1fU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x) 
                                            & (IData)(
                                                      (1ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1fU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                              [0x3fU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig
                                          [0x3fU]))));
            tracep->chgIData(oldp+1528,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData),17);
            tracep->chgSData(oldp+1529,((0x3fffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry)),14);
            tracep->chgBit(oldp+1530,((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FifSig) 
                                              & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                  >> 0xdU) 
                                                 | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                    >> 0xcU))) 
                                             | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                 >> 0xdU) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                   >> 0xcU))))));
            tracep->chgBit(oldp+1531,((1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FifSig)) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                     >> 0xdU))) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                   >> 0xcU)) 
                                               | (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FifSig)) 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                      >> 0xdU)) 
                                                  & (~ 
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                      >> 0xcU)))) 
                                              | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FifSig) 
                                                  & (~ 
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                      >> 0xdU))) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                     >> 0xcU)))) 
                                             | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FifSig) 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                    >> 0xdU)) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                   >> 0xcU))))));
            tracep->chgCData(oldp+1532,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig),5);
            tracep->chgCData(oldp+1533,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__SecSig),4);
            tracep->chgCData(oldp+1534,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ThiSig),2);
            tracep->chgCData(oldp+1535,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ForSig),2);
            tracep->chgBit(oldp+1536,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FifSig));
            tracep->chgBit(oldp+1537,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                             >> 4U))));
            tracep->chgBit(oldp+1538,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                             >> 3U))));
            tracep->chgBit(oldp+1539,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                             >> 2U))));
            tracep->chgBit(oldp+1540,((1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                               >> 4U) 
                                              & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                  >> 3U) 
                                                 | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                    >> 2U))) 
                                             | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                 >> 3U) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1541,((1U & ((((((~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                   >> 4U)) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                     >> 3U))) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                   >> 2U)) 
                                               | (((~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                     >> 4U)) 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                      >> 3U)) 
                                                  & (~ 
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                      >> 2U)))) 
                                              | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                   >> 4U) 
                                                  & (~ 
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                      >> 3U))) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                     >> 2U)))) 
                                             | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                  >> 4U) 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                    >> 3U)) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1542,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                             >> 7U))));
            tracep->chgBit(oldp+1543,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                             >> 6U))));
            tracep->chgBit(oldp+1544,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                             >> 5U))));
            tracep->chgBit(oldp+1545,((1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                               >> 7U) 
                                              & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                  >> 6U) 
                                                 | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                    >> 5U))) 
                                             | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                 >> 6U) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                   >> 5U))))));
            tracep->chgBit(oldp+1546,((1U & ((((((~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                   >> 7U)) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                     >> 6U))) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                   >> 5U)) 
                                               | (((~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                     >> 7U)) 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                      >> 6U)) 
                                                  & (~ 
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                      >> 5U)))) 
                                              | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                   >> 7U) 
                                                  & (~ 
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                      >> 6U))) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                     >> 5U)))) 
                                             | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                  >> 7U) 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                    >> 6U)) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                   >> 5U))))));
            tracep->chgBit(oldp+1547,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1548,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                             >> 9U))));
            tracep->chgBit(oldp+1549,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                             >> 8U))));
            tracep->chgBit(oldp+1550,((1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                               >> 0xaU) 
                                              & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                  >> 9U) 
                                                 | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                    >> 8U))) 
                                             | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                 >> 9U) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                   >> 8U))))));
            tracep->chgBit(oldp+1551,((1U & ((((((~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                   >> 0xaU)) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                     >> 9U))) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                   >> 8U)) 
                                               | (((~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                     >> 0xaU)) 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                      >> 9U)) 
                                                  & (~ 
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                      >> 8U)))) 
                                              | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                   >> 0xaU) 
                                                  & (~ 
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                      >> 9U))) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                     >> 8U)))) 
                                             | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                  >> 0xaU) 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                    >> 9U)) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                   >> 8U))))));
            tracep->chgBit(oldp+1552,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1553,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1554,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1555,((1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                               >> 0xdU) 
                                              & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                  >> 0xcU) 
                                                 | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                    >> 0xbU))) 
                                             | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                 >> 0xcU) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                   >> 0xbU))))));
            tracep->chgBit(oldp+1556,((1U & ((((((~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                   >> 0xdU)) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                     >> 0xcU))) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                   >> 0xbU)) 
                                               | (((~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                     >> 0xdU)) 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                      >> 0xcU)) 
                                                  & (~ 
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                      >> 0xbU)))) 
                                              | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                   >> 0xdU) 
                                                  & (~ 
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                      >> 0xcU))) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                     >> 0xbU)))) 
                                             | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                  >> 0xdU) 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                    >> 0xcU)) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                   >> 0xbU))))));
            tracep->chgBit(oldp+1557,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1558,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1559,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1560,((1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                               >> 0x10U) 
                                              & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                  >> 0xfU) 
                                                 | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                    >> 0xeU))) 
                                             | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                 >> 0xfU) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+1561,((1U & ((((((~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                   >> 0x10U)) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                     >> 0xfU))) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                   >> 0xeU)) 
                                               | (((~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                     >> 0x10U)) 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                      >> 0xfU)) 
                                                  & (~ 
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                      >> 0xeU)))) 
                                              | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                   >> 0x10U) 
                                                  & (~ 
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                      >> 0xfU))) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                     >> 0xeU)))) 
                                             | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                  >> 0x10U) 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                    >> 0xfU)) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                   >> 0xeU))))));
            tracep->chgBit(oldp+1562,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                             >> 2U))));
            tracep->chgBit(oldp+1563,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                             >> 1U))));
            tracep->chgBit(oldp+1564,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry)));
            tracep->chgBit(oldp+1565,((1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                               >> 2U) 
                                              & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                  >> 1U) 
                                                 | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry)) 
                                             | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                 >> 1U) 
                                                & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry)))));
            tracep->chgBit(oldp+1566,((1U & ((((((~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                   >> 2U)) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                     >> 1U))) 
                                                & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry) 
                                               | (((~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                     >> 2U)) 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                      >> 1U)) 
                                                  & (~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry))) 
                                              | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                   >> 2U) 
                                                  & (~ 
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                      >> 1U))) 
                                                 & (~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry))) 
                                             | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                  >> 2U) 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                    >> 1U)) 
                                                & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry)))));
            tracep->chgBit(oldp+1567,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData)));
            tracep->chgBit(oldp+1568,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                             >> 4U))));
            tracep->chgBit(oldp+1569,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                             >> 3U))));
            tracep->chgBit(oldp+1570,((1U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                              & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                  >> 4U) 
                                                 | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                    >> 3U))) 
                                             | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                 >> 4U) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                   >> 3U))))));
            tracep->chgBit(oldp+1571,((1U & ((((((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                     >> 4U))) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                   >> 3U)) 
                                               | (((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData) 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                      >> 4U)) 
                                                  & (~ 
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                      >> 3U)))) 
                                              | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                  & (~ 
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                      >> 4U))) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                     >> 3U)))) 
                                             | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                    >> 4U)) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                   >> 3U))))));
            tracep->chgBit(oldp+1572,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig) 
                                             >> 1U))));
            tracep->chgBit(oldp+1573,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig))));
            tracep->chgBit(oldp+1574,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                             >> 1U))));
            tracep->chgBit(oldp+1575,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig) 
                                               >> 1U) 
                                              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig) 
                                                 | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                    >> 1U))) 
                                             | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1576,((1U & ((((((~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig) 
                                                   >> 1U)) 
                                                 & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig))) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                   >> 1U)) 
                                               | (((~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig) 
                                                     >> 1U)) 
                                                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig)) 
                                                  & (~ 
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                      >> 1U)))) 
                                              | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig) 
                                                   >> 1U) 
                                                  & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig))) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                     >> 1U)))) 
                                             | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig) 
                                                  >> 1U) 
                                                 & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig)) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1577,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig) 
                                             >> 4U))));
            tracep->chgBit(oldp+1578,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig) 
                                             >> 3U))));
            tracep->chgBit(oldp+1579,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig) 
                                             >> 2U))));
            tracep->chgBit(oldp+1580,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig) 
                                               >> 4U) 
                                              & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig) 
                                                  >> 3U) 
                                                 | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig) 
                                                    >> 2U))) 
                                             | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1581,((1U & ((((((~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig) 
                                                   >> 4U)) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig) 
                                                     >> 3U))) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig) 
                                                   >> 2U)) 
                                               | (((~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig) 
                                                     >> 4U)) 
                                                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig) 
                                                      >> 3U)) 
                                                  & (~ 
                                                     ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig) 
                                                      >> 2U)))) 
                                              | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig) 
                                                   >> 4U) 
                                                  & (~ 
                                                     ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig) 
                                                      >> 3U))) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig) 
                                                     >> 2U)))) 
                                             | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig) 
                                                  >> 4U) 
                                                 & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig) 
                                                    >> 3U)) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1582,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__SecSig))));
            tracep->chgBit(oldp+1583,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                             >> 6U))));
            tracep->chgBit(oldp+1584,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                             >> 5U))));
            tracep->chgBit(oldp+1585,((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__SecSig) 
                                              & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                  >> 6U) 
                                                 | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                    >> 5U))) 
                                             | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                 >> 6U) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                   >> 5U))))));
            tracep->chgBit(oldp+1586,((1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__SecSig)) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                     >> 6U))) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                   >> 5U)) 
                                               | (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__SecSig)) 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                      >> 6U)) 
                                                  & (~ 
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                      >> 5U)))) 
                                              | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__SecSig) 
                                                  & (~ 
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                      >> 6U))) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                     >> 5U)))) 
                                             | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__SecSig) 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                    >> 6U)) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                   >> 5U))))));
            tracep->chgBit(oldp+1587,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__SecSig) 
                                             >> 3U))));
            tracep->chgBit(oldp+1588,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__SecSig) 
                                             >> 2U))));
            tracep->chgBit(oldp+1589,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__SecSig) 
                                             >> 1U))));
            tracep->chgBit(oldp+1590,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__SecSig) 
                                               >> 3U) 
                                              & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__SecSig) 
                                                  >> 2U) 
                                                 | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__SecSig) 
                                                    >> 1U))) 
                                             | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__SecSig) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__SecSig) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1591,((1U & ((((((~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__SecSig) 
                                                   >> 3U)) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__SecSig) 
                                                     >> 2U))) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__SecSig) 
                                                   >> 1U)) 
                                               | (((~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__SecSig) 
                                                     >> 3U)) 
                                                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__SecSig) 
                                                      >> 2U)) 
                                                  & (~ 
                                                     ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__SecSig) 
                                                      >> 1U)))) 
                                              | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__SecSig) 
                                                   >> 3U) 
                                                  & (~ 
                                                     ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__SecSig) 
                                                      >> 2U))) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__SecSig) 
                                                     >> 1U)))) 
                                             | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__SecSig) 
                                                  >> 3U) 
                                                 & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__SecSig) 
                                                    >> 2U)) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__SecSig) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1592,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                             >> 9U))));
            tracep->chgBit(oldp+1593,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                             >> 8U))));
            tracep->chgBit(oldp+1594,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                             >> 7U))));
            tracep->chgBit(oldp+1595,((1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                               >> 9U) 
                                              & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                  >> 8U) 
                                                 | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                    >> 7U))) 
                                             | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                 >> 8U) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                   >> 7U))))));
            tracep->chgBit(oldp+1596,((1U & ((((((~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                   >> 9U)) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                     >> 8U))) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                   >> 7U)) 
                                               | (((~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                     >> 9U)) 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                      >> 8U)) 
                                                  & (~ 
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                      >> 7U)))) 
                                              | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                   >> 9U) 
                                                  & (~ 
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                      >> 8U))) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                     >> 7U)))) 
                                             | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                  >> 9U) 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                    >> 8U)) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                   >> 7U))))));
            tracep->chgBit(oldp+1597,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ThiSig) 
                                             >> 1U))));
            tracep->chgBit(oldp+1598,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ThiSig))));
            tracep->chgBit(oldp+1599,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1600,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ThiSig) 
                                               >> 1U) 
                                              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ThiSig) 
                                                 | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                    >> 0xaU))) 
                                             | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ThiSig) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                   >> 0xaU))))));
            tracep->chgBit(oldp+1601,((1U & ((((((~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ThiSig) 
                                                   >> 1U)) 
                                                 & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ThiSig))) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                   >> 0xaU)) 
                                               | (((~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ThiSig) 
                                                     >> 1U)) 
                                                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ThiSig)) 
                                                  & (~ 
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                      >> 0xaU)))) 
                                              | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ThiSig) 
                                                   >> 1U) 
                                                  & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ThiSig))) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                     >> 0xaU)))) 
                                             | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ThiSig) 
                                                  >> 1U) 
                                                 & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ThiSig)) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                   >> 0xaU))))));
            tracep->chgBit(oldp+1602,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ForSig) 
                                             >> 1U))));
            tracep->chgBit(oldp+1603,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ForSig))));
            tracep->chgBit(oldp+1604,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1605,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ForSig) 
                                               >> 1U) 
                                              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ForSig) 
                                                 | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                    >> 0xbU))) 
                                             | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ForSig) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                   >> 0xbU))))));
            tracep->chgBit(oldp+1606,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1607,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                             >> 0xcU))));
            tracep->chgCData(oldp+1608,((7U & (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                       >> 1U)))),3);
            tracep->chgQData(oldp+1609,((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         << 2U)),64);
            tracep->chgQData(oldp+1611,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__2__KET____DOT__ai__OutX),64);
            tracep->chgBit(oldp+1613,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                       | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x))));
            tracep->chgBit(oldp+1614,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx));
            tracep->chgBit(oldp+1615,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x));
            tracep->chgBit(oldp+1616,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x));
            tracep->chgBit(oldp+1617,((1U & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                     >> 3U)))));
            tracep->chgBit(oldp+1618,((1U & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                     >> 2U)))));
            tracep->chgBit(oldp+1619,((1U & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 2U)))));
            tracep->chgBit(oldp+1620,((1U & (~ (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 2U))))));
            tracep->chgBit(oldp+1621,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 2U)))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      << 2U)))) 
                                       | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x))));
            tracep->chgBit(oldp+1622,((1U & (IData)(
                                                    (0x7ffffffffffffffeULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 1U))))));
            tracep->chgBit(oldp+1623,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [1U])));
            tracep->chgBit(oldp+1624,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [1U] >> 1U))));
            tracep->chgBit(oldp+1625,((1U & (~ (IData)(
                                                       (0x7ffffffffffffffeULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 1U)))))));
            tracep->chgBit(oldp+1626,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7ffffffffffffffeULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 1U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7ffffffffffffffeULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 1U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [1U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [1U]))));
            tracep->chgBit(oldp+1627,((1U & (IData)(
                                                    (0x3fffffffffffffffULL 
                                                     & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))));
            tracep->chgBit(oldp+1628,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [2U])));
            tracep->chgBit(oldp+1629,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [2U] >> 1U))));
            tracep->chgBit(oldp+1630,((1U & (~ (IData)(
                                                       (0x3fffffffffffffffULL 
                                                        & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))))));
            tracep->chgBit(oldp+1631,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fffffffffffffffULL 
                                                        & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3fffffffffffffffULL 
                                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [2U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [2U]))));
            tracep->chgBit(oldp+1632,((1U & (IData)(
                                                    (0x1fffffffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 1U))))));
            tracep->chgBit(oldp+1633,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [3U])));
            tracep->chgBit(oldp+1634,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [3U] >> 1U))));
            tracep->chgBit(oldp+1635,((1U & (~ (IData)(
                                                       (0x1fffffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 1U)))))));
            tracep->chgBit(oldp+1636,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fffffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 1U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1fffffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 1U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [3U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [3U]))));
            tracep->chgBit(oldp+1637,((1U & (IData)(
                                                    (0xfffffffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 2U))))));
            tracep->chgBit(oldp+1638,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [4U])));
            tracep->chgBit(oldp+1639,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [4U] >> 1U))));
            tracep->chgBit(oldp+1640,((1U & (~ (IData)(
                                                       (0xfffffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 2U)))))));
            tracep->chgBit(oldp+1641,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xfffffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 2U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xfffffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 2U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [4U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [4U]))));
            tracep->chgBit(oldp+1642,((1U & (IData)(
                                                    (0x7ffffffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 3U))))));
            tracep->chgBit(oldp+1643,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [5U])));
            tracep->chgBit(oldp+1644,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [5U] >> 1U))));
            tracep->chgBit(oldp+1645,((1U & (~ (IData)(
                                                       (0x7ffffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 3U)))))));
            tracep->chgBit(oldp+1646,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7ffffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 3U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7ffffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 3U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [5U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [5U]))));
            tracep->chgBit(oldp+1647,((1U & (IData)(
                                                    (0x3ffffffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 4U))))));
            tracep->chgBit(oldp+1648,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [6U])));
            tracep->chgBit(oldp+1649,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [6U] >> 1U))));
            tracep->chgBit(oldp+1650,((1U & (~ (IData)(
                                                       (0x3ffffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 4U)))))));
            tracep->chgBit(oldp+1651,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3ffffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 4U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3ffffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 4U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [6U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [6U]))));
            tracep->chgBit(oldp+1652,((1U & (IData)(
                                                    (0x1ffffffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 5U))))));
            tracep->chgBit(oldp+1653,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [7U])));
            tracep->chgBit(oldp+1654,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [7U] >> 1U))));
            tracep->chgBit(oldp+1655,((1U & (~ (IData)(
                                                       (0x1ffffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 5U)))))));
            tracep->chgBit(oldp+1656,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1ffffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 5U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1ffffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 5U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [7U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [7U]))));
            tracep->chgBit(oldp+1657,((1U & (IData)(
                                                    (0xffffffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 6U))))));
            tracep->chgBit(oldp+1658,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [8U])));
            tracep->chgBit(oldp+1659,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [8U] >> 1U))));
            tracep->chgBit(oldp+1660,((1U & (~ (IData)(
                                                       (0xffffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 6U)))))));
            tracep->chgBit(oldp+1661,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 6U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xffffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 6U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [8U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [8U]))));
            tracep->chgBit(oldp+1662,((1U & (IData)(
                                                    (0x7fffffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 7U))))));
            tracep->chgBit(oldp+1663,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [9U])));
            tracep->chgBit(oldp+1664,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [9U] >> 1U))));
            tracep->chgBit(oldp+1665,((1U & (~ (IData)(
                                                       (0x7fffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 7U)))))));
            tracep->chgBit(oldp+1666,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 7U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7fffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 7U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [9U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [9U]))));
            tracep->chgBit(oldp+1667,((1U & (IData)(
                                                    (0x3fffffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 8U))))));
            tracep->chgBit(oldp+1668,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0xaU])));
            tracep->chgBit(oldp+1669,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0xaU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1670,((1U & (~ (IData)(
                                                       (0x3fffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 8U)))))));
            tracep->chgBit(oldp+1671,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 8U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3fffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 8U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0xaU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0xaU]))));
            tracep->chgBit(oldp+1672,((1U & (IData)(
                                                    (0x1fffffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 9U))))));
            tracep->chgBit(oldp+1673,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0xbU])));
            tracep->chgBit(oldp+1674,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0xbU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1675,((1U & (~ (IData)(
                                                       (0x1fffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 9U)))))));
            tracep->chgBit(oldp+1676,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 9U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1fffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 9U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0xbU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0xbU]))));
            tracep->chgBit(oldp+1677,((1U & (IData)(
                                                    (0xfffffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xaU))))));
            tracep->chgBit(oldp+1678,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0xcU])));
            tracep->chgBit(oldp+1679,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0xcU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1680,((1U & (~ (IData)(
                                                       (0xfffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xaU)))))));
            tracep->chgBit(oldp+1681,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xfffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xaU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xfffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xaU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0xcU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0xcU]))));
            tracep->chgBit(oldp+1682,((1U & (IData)(
                                                    (0x7ffffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xbU))))));
            tracep->chgBit(oldp+1683,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0xdU])));
            tracep->chgBit(oldp+1684,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0xdU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1685,((1U & (~ (IData)(
                                                       (0x7ffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xbU)))))));
            tracep->chgBit(oldp+1686,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7ffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xbU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7ffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xbU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0xdU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0xdU]))));
            tracep->chgBit(oldp+1687,((1U & (IData)(
                                                    (0x3ffffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xcU))))));
            tracep->chgBit(oldp+1688,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0xeU])));
            tracep->chgBit(oldp+1689,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0xeU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1690,((1U & (~ (IData)(
                                                       (0x3ffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xcU)))))));
            tracep->chgBit(oldp+1691,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3ffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xcU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3ffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xcU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0xeU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0xeU]))));
            tracep->chgBit(oldp+1692,((1U & (IData)(
                                                    (0x1ffffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xdU))))));
            tracep->chgBit(oldp+1693,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0xfU])));
            tracep->chgBit(oldp+1694,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0xfU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1695,((1U & (~ (IData)(
                                                       (0x1ffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xdU)))))));
            tracep->chgBit(oldp+1696,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1ffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xdU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1ffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xdU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0xfU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0xfU]))));
            tracep->chgBit(oldp+1697,((1U & (IData)(
                                                    (0xffffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xeU))))));
            tracep->chgBit(oldp+1698,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x10U])));
            tracep->chgBit(oldp+1699,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x10U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1700,((1U & (~ (IData)(
                                                       (0xffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xeU)))))));
            tracep->chgBit(oldp+1701,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xeU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xeU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x10U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x10U]))));
            tracep->chgBit(oldp+1702,((1U & (IData)(
                                                    (0x7fffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xfU))))));
            tracep->chgBit(oldp+1703,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x11U])));
            tracep->chgBit(oldp+1704,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x11U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1705,((1U & (~ (IData)(
                                                       (0x7fffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xfU)))))));
            tracep->chgBit(oldp+1706,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xfU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7fffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xfU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x11U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x11U]))));
            tracep->chgBit(oldp+1707,((1U & (IData)(
                                                    (0x3fffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x10U))))));
            tracep->chgBit(oldp+1708,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x12U])));
            tracep->chgBit(oldp+1709,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x12U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1710,((1U & (~ (IData)(
                                                       (0x3fffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x10U)))))));
            tracep->chgBit(oldp+1711,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x10U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3fffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x10U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x12U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x12U]))));
            tracep->chgBit(oldp+1712,((1U & (IData)(
                                                    (0x1fffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x11U))))));
            tracep->chgBit(oldp+1713,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x13U])));
            tracep->chgBit(oldp+1714,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x13U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1715,((1U & (~ (IData)(
                                                       (0x1fffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x11U)))))));
            tracep->chgBit(oldp+1716,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x11U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1fffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x11U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x13U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x13U]))));
            tracep->chgBit(oldp+1717,((1U & (IData)(
                                                    (0xfffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x12U))))));
            tracep->chgBit(oldp+1718,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x14U])));
            tracep->chgBit(oldp+1719,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x14U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1720,((1U & (~ (IData)(
                                                       (0xfffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x12U)))))));
            tracep->chgBit(oldp+1721,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xfffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x12U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xfffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x12U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x14U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x14U]))));
            tracep->chgBit(oldp+1722,((1U & (IData)(
                                                    (0x7ffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x13U))))));
            tracep->chgBit(oldp+1723,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x15U])));
            tracep->chgBit(oldp+1724,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x15U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1725,((1U & (~ (IData)(
                                                       (0x7ffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x13U)))))));
            tracep->chgBit(oldp+1726,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7ffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x13U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7ffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x13U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x15U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x15U]))));
            tracep->chgBit(oldp+1727,((1U & (IData)(
                                                    (0x3ffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x14U))))));
            tracep->chgBit(oldp+1728,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x16U])));
            tracep->chgBit(oldp+1729,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x16U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1730,((1U & (~ (IData)(
                                                       (0x3ffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x14U)))))));
            tracep->chgBit(oldp+1731,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3ffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x14U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3ffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x14U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x16U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x16U]))));
            tracep->chgBit(oldp+1732,((1U & (IData)(
                                                    (0x1ffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x15U))))));
            tracep->chgBit(oldp+1733,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x17U])));
            tracep->chgBit(oldp+1734,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x17U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1735,((1U & (~ (IData)(
                                                       (0x1ffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x15U)))))));
            tracep->chgBit(oldp+1736,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1ffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x15U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1ffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x15U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x17U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x17U]))));
            tracep->chgBit(oldp+1737,((1U & (IData)(
                                                    (0xffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x16U))))));
            tracep->chgBit(oldp+1738,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x18U])));
            tracep->chgBit(oldp+1739,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x18U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1740,((1U & (~ (IData)(
                                                       (0xffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x16U)))))));
            tracep->chgBit(oldp+1741,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x16U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x16U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x18U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x18U]))));
            tracep->chgBit(oldp+1742,((1U & (IData)(
                                                    (0x7fffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x17U))))));
            tracep->chgBit(oldp+1743,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x19U])));
            tracep->chgBit(oldp+1744,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x19U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1745,((1U & (~ (IData)(
                                                       (0x7fffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x17U)))))));
            tracep->chgBit(oldp+1746,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x17U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7fffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x17U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x19U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x19U]))));
            tracep->chgBit(oldp+1747,((1U & (IData)(
                                                    (0x3fffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x18U))))));
            tracep->chgBit(oldp+1748,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x1aU])));
            tracep->chgBit(oldp+1749,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x1aU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1750,((1U & (~ (IData)(
                                                       (0x3fffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x18U)))))));
            tracep->chgBit(oldp+1751,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x18U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3fffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x18U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x1aU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x1aU]))));
            tracep->chgBit(oldp+1752,((1U & (IData)(
                                                    (0x1fffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x19U))))));
            tracep->chgBit(oldp+1753,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x1bU])));
            tracep->chgBit(oldp+1754,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x1bU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1755,((1U & (~ (IData)(
                                                       (0x1fffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x19U)))))));
            tracep->chgBit(oldp+1756,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x19U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1fffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x19U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x1bU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x1bU]))));
            tracep->chgBit(oldp+1757,((1U & (IData)(
                                                    (0xfffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1aU))))));
            tracep->chgBit(oldp+1758,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x1cU])));
            tracep->chgBit(oldp+1759,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x1cU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1760,((1U & (~ (IData)(
                                                       (0xfffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x1aU)))))));
            tracep->chgBit(oldp+1761,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xfffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x1aU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xfffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1aU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x1cU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x1cU]))));
            tracep->chgBit(oldp+1762,((1U & (IData)(
                                                    (0x7ffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1bU))))));
            tracep->chgBit(oldp+1763,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x1dU])));
            tracep->chgBit(oldp+1764,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x1dU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1765,((1U & (~ (IData)(
                                                       (0x7ffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x1bU)))))));
            tracep->chgBit(oldp+1766,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7ffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x1bU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7ffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1bU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x1dU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x1dU]))));
            tracep->chgBit(oldp+1767,((1U & (IData)(
                                                    (0x3ffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1cU))))));
            tracep->chgBit(oldp+1768,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x1eU])));
            tracep->chgBit(oldp+1769,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x1eU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1770,((1U & (~ (IData)(
                                                       (0x3ffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x1cU)))))));
            tracep->chgBit(oldp+1771,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3ffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x1cU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3ffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1cU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x1eU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x1eU]))));
            tracep->chgBit(oldp+1772,((1U & (IData)(
                                                    (0x1ffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1dU))))));
            tracep->chgBit(oldp+1773,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x1fU])));
            tracep->chgBit(oldp+1774,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x1fU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1775,((1U & (~ (IData)(
                                                       (0x1ffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x1dU)))))));
            tracep->chgBit(oldp+1776,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1ffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x1dU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1ffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1dU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x1fU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x1fU]))));
            tracep->chgBit(oldp+1777,((1U & (IData)(
                                                    (0xffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1eU))))));
            tracep->chgBit(oldp+1778,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x20U])));
            tracep->chgBit(oldp+1779,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x20U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1780,((1U & (~ (IData)(
                                                       (0xffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x1eU)))))));
            tracep->chgBit(oldp+1781,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x1eU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1eU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x20U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x20U]))));
            tracep->chgBit(oldp+1782,((1U & (IData)(
                                                    (0x7fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1fU))))));
            tracep->chgBit(oldp+1783,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x21U])));
            tracep->chgBit(oldp+1784,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x21U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1785,((1U & (~ (IData)(
                                                       (0x7fffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x1fU)))))));
            tracep->chgBit(oldp+1786,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x1fU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7fffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1fU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x21U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x21U]))));
            tracep->chgBit(oldp+1787,((1U & (IData)(
                                                    (0x3fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x20U))))));
            tracep->chgBit(oldp+1788,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x22U])));
            tracep->chgBit(oldp+1789,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x22U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1790,((1U & (~ (IData)(
                                                       (0x3fffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x20U)))))));
            tracep->chgBit(oldp+1791,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x20U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3fffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x20U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x22U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x22U]))));
            tracep->chgBit(oldp+1792,((1U & (IData)(
                                                    (0x1fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x21U))))));
            tracep->chgBit(oldp+1793,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x23U])));
            tracep->chgBit(oldp+1794,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x23U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1795,((1U & (~ (IData)(
                                                       (0x1fffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x21U)))))));
            tracep->chgBit(oldp+1796,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x21U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1fffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x21U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x23U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x23U]))));
            tracep->chgBit(oldp+1797,((1U & (IData)(
                                                    (0xfffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x22U))))));
            tracep->chgBit(oldp+1798,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x24U])));
            tracep->chgBit(oldp+1799,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x24U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1800,((1U & (~ (IData)(
                                                       (0xfffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x22U)))))));
            tracep->chgBit(oldp+1801,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xfffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x22U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xfffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x22U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x24U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x24U]))));
            tracep->chgBit(oldp+1802,((1U & (IData)(
                                                    (0x7ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x23U))))));
            tracep->chgBit(oldp+1803,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x25U])));
            tracep->chgBit(oldp+1804,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x25U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1805,((1U & (~ (IData)(
                                                       (0x7ffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x23U)))))));
            tracep->chgBit(oldp+1806,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7ffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x23U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7ffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x23U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x25U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x25U]))));
            tracep->chgBit(oldp+1807,((1U & (IData)(
                                                    (0x3ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x24U))))));
            tracep->chgBit(oldp+1808,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x26U])));
            tracep->chgBit(oldp+1809,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x26U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1810,((1U & (~ (IData)(
                                                       (0x3ffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x24U)))))));
            tracep->chgBit(oldp+1811,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3ffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x24U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3ffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x24U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x26U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x26U]))));
            tracep->chgBit(oldp+1812,((1U & (IData)(
                                                    (0x1ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x25U))))));
            tracep->chgBit(oldp+1813,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x27U])));
            tracep->chgBit(oldp+1814,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x27U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1815,((1U & (~ (IData)(
                                                       (0x1ffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x25U)))))));
            tracep->chgBit(oldp+1816,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1ffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x25U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1ffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x25U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x27U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x27U]))));
            tracep->chgBit(oldp+1817,((1U & (IData)(
                                                    (0xffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x26U))))));
            tracep->chgBit(oldp+1818,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x28U])));
            tracep->chgBit(oldp+1819,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x28U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1820,((1U & (~ (IData)(
                                                       (0xffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x26U)))))));
            tracep->chgBit(oldp+1821,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x26U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x26U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x28U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x28U]))));
            tracep->chgBit(oldp+1822,((1U & (IData)(
                                                    (0x7fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x27U))))));
            tracep->chgBit(oldp+1823,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x29U])));
            tracep->chgBit(oldp+1824,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x29U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1825,((1U & (~ (IData)(
                                                       (0x7fffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x27U)))))));
            tracep->chgBit(oldp+1826,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x27U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7fffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x27U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x29U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x29U]))));
            tracep->chgBit(oldp+1827,((1U & (IData)(
                                                    (0x3fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x28U))))));
            tracep->chgBit(oldp+1828,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x2aU])));
            tracep->chgBit(oldp+1829,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x2aU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1830,((1U & (~ (IData)(
                                                       (0x3fffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x28U)))))));
            tracep->chgBit(oldp+1831,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x28U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3fffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x28U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x2aU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x2aU]))));
            tracep->chgBit(oldp+1832,((1U & (IData)(
                                                    (0x1fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x29U))))));
            tracep->chgBit(oldp+1833,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x2bU])));
            tracep->chgBit(oldp+1834,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x2bU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1835,((1U & (~ (IData)(
                                                       (0x1fffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x29U)))))));
            tracep->chgBit(oldp+1836,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x29U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1fffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x29U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x2bU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x2bU]))));
            tracep->chgBit(oldp+1837,((1U & (IData)(
                                                    (0xfffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2aU))))));
            tracep->chgBit(oldp+1838,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x2cU])));
            tracep->chgBit(oldp+1839,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x2cU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1840,((1U & (~ (IData)(
                                                       (0xfffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x2aU)))))));
            tracep->chgBit(oldp+1841,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xfffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x2aU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xfffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x2aU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x2cU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x2cU]))));
            tracep->chgBit(oldp+1842,((1U & (IData)(
                                                    (0x7ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2bU))))));
            tracep->chgBit(oldp+1843,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x2dU])));
            tracep->chgBit(oldp+1844,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x2dU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1845,((1U & (~ (IData)(
                                                       (0x7ffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x2bU)))))));
            tracep->chgBit(oldp+1846,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7ffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x2bU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7ffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x2bU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x2dU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x2dU]))));
            tracep->chgBit(oldp+1847,((1U & (IData)(
                                                    (0x3ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2cU))))));
            tracep->chgBit(oldp+1848,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x2eU])));
            tracep->chgBit(oldp+1849,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x2eU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1850,((1U & (~ (IData)(
                                                       (0x3ffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x2cU)))))));
            tracep->chgBit(oldp+1851,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3ffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x2cU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3ffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x2cU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x2eU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x2eU]))));
            tracep->chgBit(oldp+1852,((1U & (IData)(
                                                    (0x1ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2dU))))));
            tracep->chgBit(oldp+1853,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x2fU])));
            tracep->chgBit(oldp+1854,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x2fU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1855,((1U & (~ (IData)(
                                                       (0x1ffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x2dU)))))));
            tracep->chgBit(oldp+1856,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1ffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x2dU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1ffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x2dU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x2fU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x2fU]))));
            tracep->chgBit(oldp+1857,((1U & (IData)(
                                                    (0xffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2eU))))));
            tracep->chgBit(oldp+1858,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x30U])));
            tracep->chgBit(oldp+1859,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x30U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1860,((1U & (~ (IData)(
                                                       (0xffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x2eU)))))));
            tracep->chgBit(oldp+1861,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x2eU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x2eU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x30U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x30U]))));
            tracep->chgBit(oldp+1862,((1U & (IData)(
                                                    (0x7fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2fU))))));
            tracep->chgBit(oldp+1863,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x31U])));
            tracep->chgBit(oldp+1864,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x31U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1865,((1U & (~ (IData)(
                                                       (0x7fffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x2fU)))))));
            tracep->chgBit(oldp+1866,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x2fU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7fffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x2fU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x31U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x31U]))));
            tracep->chgBit(oldp+1867,((1U & (IData)(
                                                    (0x3fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x30U))))));
            tracep->chgBit(oldp+1868,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x32U])));
            tracep->chgBit(oldp+1869,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x32U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1870,((1U & (~ (IData)(
                                                       (0x3fffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x30U)))))));
            tracep->chgBit(oldp+1871,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x30U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3fffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x30U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x32U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x32U]))));
            tracep->chgBit(oldp+1872,((1U & (IData)(
                                                    (0x1fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x31U))))));
            tracep->chgBit(oldp+1873,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x33U])));
            tracep->chgBit(oldp+1874,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x33U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1875,((1U & (~ (IData)(
                                                       (0x1fffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x31U)))))));
            tracep->chgBit(oldp+1876,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x31U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1fffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x31U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x33U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x33U]))));
            tracep->chgBit(oldp+1877,((1U & (IData)(
                                                    (0xfffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x32U))))));
            tracep->chgBit(oldp+1878,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x34U])));
            tracep->chgBit(oldp+1879,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x34U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1880,((1U & (~ (IData)(
                                                       (0xfffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x32U)))))));
            tracep->chgBit(oldp+1881,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xfffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x32U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xfffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x32U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x34U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x34U]))));
            tracep->chgBit(oldp+1882,((1U & (IData)(
                                                    (0x7ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x33U))))));
            tracep->chgBit(oldp+1883,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x35U])));
            tracep->chgBit(oldp+1884,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x35U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1885,((1U & (~ (IData)(
                                                       (0x7ffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x33U)))))));
            tracep->chgBit(oldp+1886,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7ffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x33U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7ffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x33U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x35U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x35U]))));
            tracep->chgBit(oldp+1887,((1U & (IData)(
                                                    (0x3ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x34U))))));
            tracep->chgBit(oldp+1888,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x36U])));
            tracep->chgBit(oldp+1889,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x36U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1890,((1U & (~ (IData)(
                                                       (0x3ffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x34U)))))));
            tracep->chgBit(oldp+1891,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3ffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x34U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3ffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x34U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x36U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x36U]))));
            tracep->chgBit(oldp+1892,((1U & (IData)(
                                                    (0x1ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x35U))))));
            tracep->chgBit(oldp+1893,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x37U])));
            tracep->chgBit(oldp+1894,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x37U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1895,((1U & (~ (IData)(
                                                       (0x1ffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x35U)))))));
            tracep->chgBit(oldp+1896,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1ffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x35U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1ffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x35U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x37U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x37U]))));
            tracep->chgBit(oldp+1897,((1U & (IData)(
                                                    (0xffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x36U))))));
            tracep->chgBit(oldp+1898,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x38U])));
            tracep->chgBit(oldp+1899,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x38U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1900,((1U & (~ (IData)(
                                                       (0xffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x36U)))))));
            tracep->chgBit(oldp+1901,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x36U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x36U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x38U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x38U]))));
            tracep->chgBit(oldp+1902,((1U & (IData)(
                                                    (0x7fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x37U))))));
            tracep->chgBit(oldp+1903,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x39U])));
            tracep->chgBit(oldp+1904,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x39U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1905,((1U & (~ (IData)(
                                                       (0x7fULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x37U)))))));
            tracep->chgBit(oldp+1906,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x37U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7fULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x37U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x39U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x39U]))));
            tracep->chgBit(oldp+1907,((1U & (IData)(
                                                    (0x3fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x38U))))));
            tracep->chgBit(oldp+1908,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x3aU])));
            tracep->chgBit(oldp+1909,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x3aU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1910,((1U & (~ (IData)(
                                                       (0x3fULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x38U)))))));
            tracep->chgBit(oldp+1911,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x38U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3fULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x38U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x3aU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x3aU]))));
            tracep->chgBit(oldp+1912,((1U & (IData)(
                                                    (0x1fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x39U))))));
            tracep->chgBit(oldp+1913,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x3bU])));
            tracep->chgBit(oldp+1914,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x3bU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1915,((1U & (~ (IData)(
                                                       (0x1fULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x39U)))))));
            tracep->chgBit(oldp+1916,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x39U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1fULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x39U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x3bU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x3bU]))));
            tracep->chgBit(oldp+1917,((1U & (IData)(
                                                    (0xfULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x3aU))))));
            tracep->chgBit(oldp+1918,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x3cU])));
            tracep->chgBit(oldp+1919,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x3cU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1920,((1U & (~ (IData)(
                                                       (0xfULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x3aU)))))));
            tracep->chgBit(oldp+1921,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xfULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x3aU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xfULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x3aU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x3cU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x3cU]))));
            tracep->chgBit(oldp+1922,((1U & (IData)(
                                                    (7ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x3bU))))));
            tracep->chgBit(oldp+1923,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x3dU])));
            tracep->chgBit(oldp+1924,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x3dU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1925,((1U & (~ (IData)(
                                                       (7ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x3bU)))))));
            tracep->chgBit(oldp+1926,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (7ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x3bU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (7ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x3bU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x3dU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x3dU]))));
            tracep->chgBit(oldp+1927,((1U & (IData)(
                                                    (3ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x3cU))))));
            tracep->chgBit(oldp+1928,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x3eU])));
            tracep->chgBit(oldp+1929,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x3eU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1930,((1U & (~ (IData)(
                                                       (3ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x3cU)))))));
            tracep->chgBit(oldp+1931,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (3ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x3cU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (3ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x3cU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x3eU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x3eU]))));
            tracep->chgBit(oldp+1932,((1U & (IData)(
                                                    (1ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x3dU))))));
            tracep->chgBit(oldp+1933,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                       [0x3fU])));
            tracep->chgBit(oldp+1934,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                             [0x3fU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1935,((1U & (~ (IData)(
                                                       (1ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x3dU)))))));
            tracep->chgBit(oldp+1936,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (1ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x3dU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (1ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x3dU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                              [0x3fU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig
                                          [0x3fU]))));
            tracep->chgCData(oldp+1937,((7U & (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                       >> 3U)))),3);
            tracep->chgQData(oldp+1938,((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                         << 4U)),64);
            tracep->chgQData(oldp+1940,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__4__KET____DOT__ai__OutX),64);
            tracep->chgBit(oldp+1942,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                       | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x))));
            tracep->chgBit(oldp+1943,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx));
            tracep->chgBit(oldp+1944,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x));
            tracep->chgBit(oldp+1945,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x));
            tracep->chgBit(oldp+1946,((1U & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                     >> 5U)))));
            tracep->chgBit(oldp+1947,((1U & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY 
                                                     >> 4U)))));
            tracep->chgBit(oldp+1948,((1U & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                     << 4U)))));
            tracep->chgBit(oldp+1949,((1U & (~ (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 4U))))));
            tracep->chgBit(oldp+1950,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                         & (~ (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                       << 4U)))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                           & (IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                      << 4U)))) 
                                       | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x))));
            tracep->chgBit(oldp+1951,((1U & (IData)(
                                                    (0x7ffffffffffffff8ULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 3U))))));
            tracep->chgBit(oldp+1952,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [1U])));
            tracep->chgBit(oldp+1953,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [1U] >> 1U))));
            tracep->chgBit(oldp+1954,((1U & (~ (IData)(
                                                       (0x7ffffffffffffff8ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 3U)))))));
            tracep->chgBit(oldp+1955,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7ffffffffffffff8ULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 3U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7ffffffffffffff8ULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 3U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [1U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [1U]))));
            tracep->chgBit(oldp+1956,((1U & (IData)(
                                                    (0x3ffffffffffffffcULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 2U))))));
            tracep->chgBit(oldp+1957,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [2U])));
            tracep->chgBit(oldp+1958,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [2U] >> 1U))));
            tracep->chgBit(oldp+1959,((1U & (~ (IData)(
                                                       (0x3ffffffffffffffcULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 2U)))))));
            tracep->chgBit(oldp+1960,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3ffffffffffffffcULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 2U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3ffffffffffffffcULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 2U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [2U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [2U]))));
            tracep->chgBit(oldp+1961,((1U & (IData)(
                                                    (0x1ffffffffffffffeULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        << 1U))))));
            tracep->chgBit(oldp+1962,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [3U])));
            tracep->chgBit(oldp+1963,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [3U] >> 1U))));
            tracep->chgBit(oldp+1964,((1U & (~ (IData)(
                                                       (0x1ffffffffffffffeULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 1U)))))));
            tracep->chgBit(oldp+1965,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1ffffffffffffffeULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           << 1U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1ffffffffffffffeULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          << 1U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [3U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [3U]))));
            tracep->chgBit(oldp+1966,((1U & (IData)(
                                                    (0xfffffffffffffffULL 
                                                     & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))));
            tracep->chgBit(oldp+1967,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [4U])));
            tracep->chgBit(oldp+1968,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [4U] >> 1U))));
            tracep->chgBit(oldp+1969,((1U & (~ (IData)(
                                                       (0xfffffffffffffffULL 
                                                        & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX))))));
            tracep->chgBit(oldp+1970,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xfffffffffffffffULL 
                                                        & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xfffffffffffffffULL 
                                                       & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX)))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [4U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [4U]))));
            tracep->chgBit(oldp+1971,((1U & (IData)(
                                                    (0x7ffffffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 1U))))));
            tracep->chgBit(oldp+1972,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [5U])));
            tracep->chgBit(oldp+1973,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [5U] >> 1U))));
            tracep->chgBit(oldp+1974,((1U & (~ (IData)(
                                                       (0x7ffffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 1U)))))));
            tracep->chgBit(oldp+1975,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7ffffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 1U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7ffffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 1U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [5U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [5U]))));
            tracep->chgBit(oldp+1976,((1U & (IData)(
                                                    (0x3ffffffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 2U))))));
            tracep->chgBit(oldp+1977,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [6U])));
            tracep->chgBit(oldp+1978,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [6U] >> 1U))));
            tracep->chgBit(oldp+1979,((1U & (~ (IData)(
                                                       (0x3ffffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 2U)))))));
            tracep->chgBit(oldp+1980,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3ffffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 2U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3ffffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 2U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [6U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [6U]))));
            tracep->chgBit(oldp+1981,((1U & (IData)(
                                                    (0x1ffffffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 3U))))));
            tracep->chgBit(oldp+1982,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [7U])));
            tracep->chgBit(oldp+1983,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [7U] >> 1U))));
            tracep->chgBit(oldp+1984,((1U & (~ (IData)(
                                                       (0x1ffffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 3U)))))));
            tracep->chgBit(oldp+1985,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1ffffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 3U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1ffffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 3U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [7U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [7U]))));
            tracep->chgBit(oldp+1986,((1U & (IData)(
                                                    (0xffffffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 4U))))));
            tracep->chgBit(oldp+1987,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [8U])));
            tracep->chgBit(oldp+1988,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [8U] >> 1U))));
            tracep->chgBit(oldp+1989,((1U & (~ (IData)(
                                                       (0xffffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 4U)))))));
            tracep->chgBit(oldp+1990,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 4U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xffffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 4U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [8U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [8U]))));
            tracep->chgBit(oldp+1991,((1U & (IData)(
                                                    (0x7fffffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 5U))))));
            tracep->chgBit(oldp+1992,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [9U])));
            tracep->chgBit(oldp+1993,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [9U] >> 1U))));
            tracep->chgBit(oldp+1994,((1U & (~ (IData)(
                                                       (0x7fffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 5U)))))));
            tracep->chgBit(oldp+1995,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 5U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7fffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 5U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [9U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [9U]))));
            tracep->chgBit(oldp+1996,((1U & (IData)(
                                                    (0x3fffffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 6U))))));
            tracep->chgBit(oldp+1997,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0xaU])));
            tracep->chgBit(oldp+1998,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0xaU] 
                                             >> 1U))));
            tracep->chgBit(oldp+1999,((1U & (~ (IData)(
                                                       (0x3fffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 6U)))))));
            tracep->chgBit(oldp+2000,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 6U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3fffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 6U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0xaU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0xaU]))));
            tracep->chgBit(oldp+2001,((1U & (IData)(
                                                    (0x1fffffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 7U))))));
            tracep->chgBit(oldp+2002,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0xbU])));
            tracep->chgBit(oldp+2003,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0xbU] 
                                             >> 1U))));
            tracep->chgBit(oldp+2004,((1U & (~ (IData)(
                                                       (0x1fffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 7U)))))));
            tracep->chgBit(oldp+2005,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 7U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1fffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 7U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0xbU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0xbU]))));
            tracep->chgBit(oldp+2006,((1U & (IData)(
                                                    (0xfffffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 8U))))));
            tracep->chgBit(oldp+2007,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0xcU])));
            tracep->chgBit(oldp+2008,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0xcU] 
                                             >> 1U))));
            tracep->chgBit(oldp+2009,((1U & (~ (IData)(
                                                       (0xfffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 8U)))))));
            tracep->chgBit(oldp+2010,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xfffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 8U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xfffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 8U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0xcU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0xcU]))));
            tracep->chgBit(oldp+2011,((1U & (IData)(
                                                    (0x7ffffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 9U))))));
            tracep->chgBit(oldp+2012,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0xdU])));
            tracep->chgBit(oldp+2013,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0xdU] 
                                             >> 1U))));
            tracep->chgBit(oldp+2014,((1U & (~ (IData)(
                                                       (0x7ffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 9U)))))));
            tracep->chgBit(oldp+2015,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7ffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 9U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7ffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 9U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0xdU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0xdU]))));
            tracep->chgBit(oldp+2016,((1U & (IData)(
                                                    (0x3ffffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xaU))))));
            tracep->chgBit(oldp+2017,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0xeU])));
            tracep->chgBit(oldp+2018,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0xeU] 
                                             >> 1U))));
            tracep->chgBit(oldp+2019,((1U & (~ (IData)(
                                                       (0x3ffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xaU)))))));
            tracep->chgBit(oldp+2020,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3ffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xaU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3ffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xaU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0xeU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0xeU]))));
            tracep->chgBit(oldp+2021,((1U & (IData)(
                                                    (0x1ffffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xbU))))));
            tracep->chgBit(oldp+2022,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0xfU])));
            tracep->chgBit(oldp+2023,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0xfU] 
                                             >> 1U))));
            tracep->chgBit(oldp+2024,((1U & (~ (IData)(
                                                       (0x1ffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xbU)))))));
            tracep->chgBit(oldp+2025,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1ffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xbU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1ffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xbU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0xfU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0xfU]))));
            tracep->chgBit(oldp+2026,((1U & (IData)(
                                                    (0xffffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xcU))))));
            tracep->chgBit(oldp+2027,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x10U])));
            tracep->chgBit(oldp+2028,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x10U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2029,((1U & (~ (IData)(
                                                       (0xffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xcU)))))));
            tracep->chgBit(oldp+2030,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xcU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xffffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xcU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x10U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x10U]))));
            tracep->chgBit(oldp+2031,((1U & (IData)(
                                                    (0x7fffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xdU))))));
            tracep->chgBit(oldp+2032,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x11U])));
            tracep->chgBit(oldp+2033,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x11U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2034,((1U & (~ (IData)(
                                                       (0x7fffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xdU)))))));
            tracep->chgBit(oldp+2035,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xdU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7fffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xdU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x11U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x11U]))));
            tracep->chgBit(oldp+2036,((1U & (IData)(
                                                    (0x3fffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xeU))))));
            tracep->chgBit(oldp+2037,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x12U])));
            tracep->chgBit(oldp+2038,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x12U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2039,((1U & (~ (IData)(
                                                       (0x3fffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xeU)))))));
            tracep->chgBit(oldp+2040,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xeU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3fffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xeU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x12U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x12U]))));
            tracep->chgBit(oldp+2041,((1U & (IData)(
                                                    (0x1fffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0xfU))))));
            tracep->chgBit(oldp+2042,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x13U])));
            tracep->chgBit(oldp+2043,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x13U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2044,((1U & (~ (IData)(
                                                       (0x1fffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xfU)))))));
            tracep->chgBit(oldp+2045,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0xfU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1fffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0xfU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x13U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x13U]))));
            tracep->chgBit(oldp+2046,((1U & (IData)(
                                                    (0xfffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x10U))))));
            tracep->chgBit(oldp+2047,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x14U])));
            tracep->chgBit(oldp+2048,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x14U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2049,((1U & (~ (IData)(
                                                       (0xfffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x10U)))))));
            tracep->chgBit(oldp+2050,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xfffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x10U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xfffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x10U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x14U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x14U]))));
            tracep->chgBit(oldp+2051,((1U & (IData)(
                                                    (0x7ffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x11U))))));
            tracep->chgBit(oldp+2052,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x15U])));
            tracep->chgBit(oldp+2053,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x15U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2054,((1U & (~ (IData)(
                                                       (0x7ffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x11U)))))));
            tracep->chgBit(oldp+2055,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7ffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x11U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7ffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x11U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x15U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x15U]))));
            tracep->chgBit(oldp+2056,((1U & (IData)(
                                                    (0x3ffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x12U))))));
            tracep->chgBit(oldp+2057,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x16U])));
            tracep->chgBit(oldp+2058,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x16U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2059,((1U & (~ (IData)(
                                                       (0x3ffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x12U)))))));
            tracep->chgBit(oldp+2060,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3ffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x12U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3ffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x12U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x16U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x16U]))));
            tracep->chgBit(oldp+2061,((1U & (IData)(
                                                    (0x1ffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x13U))))));
            tracep->chgBit(oldp+2062,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x17U])));
            tracep->chgBit(oldp+2063,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x17U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2064,((1U & (~ (IData)(
                                                       (0x1ffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x13U)))))));
            tracep->chgBit(oldp+2065,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1ffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x13U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1ffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x13U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x17U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x17U]))));
            tracep->chgBit(oldp+2066,((1U & (IData)(
                                                    (0xffffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x14U))))));
            tracep->chgBit(oldp+2067,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x18U])));
            tracep->chgBit(oldp+2068,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x18U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2069,((1U & (~ (IData)(
                                                       (0xffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x14U)))))));
            tracep->chgBit(oldp+2070,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x14U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xffffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x14U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x18U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x18U]))));
            tracep->chgBit(oldp+2071,((1U & (IData)(
                                                    (0x7fffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x15U))))));
            tracep->chgBit(oldp+2072,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x19U])));
            tracep->chgBit(oldp+2073,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x19U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2074,((1U & (~ (IData)(
                                                       (0x7fffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x15U)))))));
            tracep->chgBit(oldp+2075,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x15U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7fffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x15U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x19U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x19U]))));
            tracep->chgBit(oldp+2076,((1U & (IData)(
                                                    (0x3fffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x16U))))));
            tracep->chgBit(oldp+2077,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x1aU])));
            tracep->chgBit(oldp+2078,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x1aU] 
                                             >> 1U))));
            tracep->chgBit(oldp+2079,((1U & (~ (IData)(
                                                       (0x3fffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x16U)))))));
            tracep->chgBit(oldp+2080,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x16U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3fffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x16U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x1aU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x1aU]))));
            tracep->chgBit(oldp+2081,((1U & (IData)(
                                                    (0x1fffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x17U))))));
            tracep->chgBit(oldp+2082,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x1bU])));
            tracep->chgBit(oldp+2083,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x1bU] 
                                             >> 1U))));
            tracep->chgBit(oldp+2084,((1U & (~ (IData)(
                                                       (0x1fffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x17U)))))));
            tracep->chgBit(oldp+2085,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x17U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1fffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x17U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x1bU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x1bU]))));
            tracep->chgBit(oldp+2086,((1U & (IData)(
                                                    (0xfffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x18U))))));
            tracep->chgBit(oldp+2087,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x1cU])));
            tracep->chgBit(oldp+2088,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x1cU] 
                                             >> 1U))));
            tracep->chgBit(oldp+2089,((1U & (~ (IData)(
                                                       (0xfffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x18U)))))));
            tracep->chgBit(oldp+2090,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xfffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x18U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xfffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x18U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x1cU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x1cU]))));
            tracep->chgBit(oldp+2091,((1U & (IData)(
                                                    (0x7ffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x19U))))));
            tracep->chgBit(oldp+2092,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x1dU])));
            tracep->chgBit(oldp+2093,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x1dU] 
                                             >> 1U))));
            tracep->chgBit(oldp+2094,((1U & (~ (IData)(
                                                       (0x7ffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x19U)))))));
            tracep->chgBit(oldp+2095,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7ffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x19U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7ffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x19U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x1dU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x1dU]))));
            tracep->chgBit(oldp+2096,((1U & (IData)(
                                                    (0x3ffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1aU))))));
            tracep->chgBit(oldp+2097,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x1eU])));
            tracep->chgBit(oldp+2098,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x1eU] 
                                             >> 1U))));
            tracep->chgBit(oldp+2099,((1U & (~ (IData)(
                                                       (0x3ffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x1aU)))))));
            tracep->chgBit(oldp+2100,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3ffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x1aU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3ffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1aU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x1eU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x1eU]))));
            tracep->chgBit(oldp+2101,((1U & (IData)(
                                                    (0x1ffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1bU))))));
            tracep->chgBit(oldp+2102,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x1fU])));
            tracep->chgBit(oldp+2103,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x1fU] 
                                             >> 1U))));
            tracep->chgBit(oldp+2104,((1U & (~ (IData)(
                                                       (0x1ffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x1bU)))))));
            tracep->chgBit(oldp+2105,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1ffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x1bU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1ffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1bU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x1fU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x1fU]))));
            tracep->chgBit(oldp+2106,((1U & (IData)(
                                                    (0xffffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1cU))))));
            tracep->chgBit(oldp+2107,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x20U])));
            tracep->chgBit(oldp+2108,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x20U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2109,((1U & (~ (IData)(
                                                       (0xffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x1cU)))))));
            tracep->chgBit(oldp+2110,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x1cU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xffffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1cU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x20U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x20U]))));
            tracep->chgBit(oldp+2111,((1U & (IData)(
                                                    (0x7fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1dU))))));
            tracep->chgBit(oldp+2112,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x21U])));
            tracep->chgBit(oldp+2113,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x21U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2114,((1U & (~ (IData)(
                                                       (0x7fffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x1dU)))))));
            tracep->chgBit(oldp+2115,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x1dU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7fffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1dU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x21U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x21U]))));
            tracep->chgBit(oldp+2116,((1U & (IData)(
                                                    (0x3fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1eU))))));
            tracep->chgBit(oldp+2117,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x22U])));
            tracep->chgBit(oldp+2118,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x22U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2119,((1U & (~ (IData)(
                                                       (0x3fffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x1eU)))))));
            tracep->chgBit(oldp+2120,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x1eU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3fffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1eU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x22U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x22U]))));
            tracep->chgBit(oldp+2121,((1U & (IData)(
                                                    (0x1fffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x1fU))))));
            tracep->chgBit(oldp+2122,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x23U])));
            tracep->chgBit(oldp+2123,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x23U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2124,((1U & (~ (IData)(
                                                       (0x1fffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x1fU)))))));
            tracep->chgBit(oldp+2125,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x1fU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1fffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x1fU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x23U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x23U]))));
            tracep->chgBit(oldp+2126,((1U & (IData)(
                                                    (0xfffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x20U))))));
            tracep->chgBit(oldp+2127,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x24U])));
            tracep->chgBit(oldp+2128,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x24U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2129,((1U & (~ (IData)(
                                                       (0xfffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x20U)))))));
            tracep->chgBit(oldp+2130,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xfffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x20U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xfffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x20U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x24U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x24U]))));
            tracep->chgBit(oldp+2131,((1U & (IData)(
                                                    (0x7ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x21U))))));
            tracep->chgBit(oldp+2132,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x25U])));
            tracep->chgBit(oldp+2133,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x25U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2134,((1U & (~ (IData)(
                                                       (0x7ffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x21U)))))));
            tracep->chgBit(oldp+2135,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7ffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x21U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7ffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x21U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x25U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x25U]))));
            tracep->chgBit(oldp+2136,((1U & (IData)(
                                                    (0x3ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x22U))))));
            tracep->chgBit(oldp+2137,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x26U])));
            tracep->chgBit(oldp+2138,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x26U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2139,((1U & (~ (IData)(
                                                       (0x3ffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x22U)))))));
            tracep->chgBit(oldp+2140,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3ffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x22U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3ffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x22U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x26U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x26U]))));
            tracep->chgBit(oldp+2141,((1U & (IData)(
                                                    (0x1ffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x23U))))));
            tracep->chgBit(oldp+2142,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x27U])));
            tracep->chgBit(oldp+2143,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x27U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2144,((1U & (~ (IData)(
                                                       (0x1ffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x23U)))))));
            tracep->chgBit(oldp+2145,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1ffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x23U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1ffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x23U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x27U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x27U]))));
            tracep->chgBit(oldp+2146,((1U & (IData)(
                                                    (0xffffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x24U))))));
            tracep->chgBit(oldp+2147,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x28U])));
            tracep->chgBit(oldp+2148,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x28U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2149,((1U & (~ (IData)(
                                                       (0xffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x24U)))))));
            tracep->chgBit(oldp+2150,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x24U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xffffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x24U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x28U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x28U]))));
            tracep->chgBit(oldp+2151,((1U & (IData)(
                                                    (0x7fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x25U))))));
            tracep->chgBit(oldp+2152,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x29U])));
            tracep->chgBit(oldp+2153,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x29U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2154,((1U & (~ (IData)(
                                                       (0x7fffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x25U)))))));
            tracep->chgBit(oldp+2155,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x25U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7fffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x25U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x29U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x29U]))));
            tracep->chgBit(oldp+2156,((1U & (IData)(
                                                    (0x3fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x26U))))));
            tracep->chgBit(oldp+2157,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x2aU])));
            tracep->chgBit(oldp+2158,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x2aU] 
                                             >> 1U))));
            tracep->chgBit(oldp+2159,((1U & (~ (IData)(
                                                       (0x3fffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x26U)))))));
            tracep->chgBit(oldp+2160,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x26U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3fffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x26U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x2aU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x2aU]))));
            tracep->chgBit(oldp+2161,((1U & (IData)(
                                                    (0x1fffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x27U))))));
            tracep->chgBit(oldp+2162,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x2bU])));
            tracep->chgBit(oldp+2163,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x2bU] 
                                             >> 1U))));
            tracep->chgBit(oldp+2164,((1U & (~ (IData)(
                                                       (0x1fffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x27U)))))));
            tracep->chgBit(oldp+2165,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x27U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1fffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x27U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x2bU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x2bU]))));
            tracep->chgBit(oldp+2166,((1U & (IData)(
                                                    (0xfffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x28U))))));
            tracep->chgBit(oldp+2167,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x2cU])));
            tracep->chgBit(oldp+2168,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x2cU] 
                                             >> 1U))));
            tracep->chgBit(oldp+2169,((1U & (~ (IData)(
                                                       (0xfffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x28U)))))));
            tracep->chgBit(oldp+2170,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xfffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x28U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xfffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x28U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x2cU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x2cU]))));
            tracep->chgBit(oldp+2171,((1U & (IData)(
                                                    (0x7ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x29U))))));
            tracep->chgBit(oldp+2172,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x2dU])));
            tracep->chgBit(oldp+2173,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x2dU] 
                                             >> 1U))));
            tracep->chgBit(oldp+2174,((1U & (~ (IData)(
                                                       (0x7ffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x29U)))))));
            tracep->chgBit(oldp+2175,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7ffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x29U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7ffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x29U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x2dU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x2dU]))));
            tracep->chgBit(oldp+2176,((1U & (IData)(
                                                    (0x3ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2aU))))));
            tracep->chgBit(oldp+2177,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x2eU])));
            tracep->chgBit(oldp+2178,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x2eU] 
                                             >> 1U))));
            tracep->chgBit(oldp+2179,((1U & (~ (IData)(
                                                       (0x3ffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x2aU)))))));
            tracep->chgBit(oldp+2180,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3ffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x2aU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3ffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x2aU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x2eU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x2eU]))));
            tracep->chgBit(oldp+2181,((1U & (IData)(
                                                    (0x1ffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2bU))))));
            tracep->chgBit(oldp+2182,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x2fU])));
            tracep->chgBit(oldp+2183,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x2fU] 
                                             >> 1U))));
            tracep->chgBit(oldp+2184,((1U & (~ (IData)(
                                                       (0x1ffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x2bU)))))));
            tracep->chgBit(oldp+2185,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1ffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x2bU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1ffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x2bU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x2fU] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x2fU]))));
            tracep->chgBit(oldp+2186,((1U & (IData)(
                                                    (0xffffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2cU))))));
            tracep->chgBit(oldp+2187,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x30U])));
            tracep->chgBit(oldp+2188,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x30U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2189,((1U & (~ (IData)(
                                                       (0xffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x2cU)))))));
            tracep->chgBit(oldp+2190,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x2cU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xffffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x2cU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x30U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x30U]))));
            tracep->chgBit(oldp+2191,((1U & (IData)(
                                                    (0x7fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2dU))))));
            tracep->chgBit(oldp+2192,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x31U])));
            tracep->chgBit(oldp+2193,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x31U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2194,((1U & (~ (IData)(
                                                       (0x7fffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x2dU)))))));
            tracep->chgBit(oldp+2195,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x2dU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7fffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x2dU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x31U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x31U]))));
            tracep->chgBit(oldp+2196,((1U & (IData)(
                                                    (0x3fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2eU))))));
            tracep->chgBit(oldp+2197,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x32U])));
            tracep->chgBit(oldp+2198,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x32U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2199,((1U & (~ (IData)(
                                                       (0x3fffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x2eU)))))));
            tracep->chgBit(oldp+2200,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3fffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x2eU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3fffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x2eU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x32U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x32U]))));
            tracep->chgBit(oldp+2201,((1U & (IData)(
                                                    (0x1fffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x2fU))))));
            tracep->chgBit(oldp+2202,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x33U])));
            tracep->chgBit(oldp+2203,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x33U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2204,((1U & (~ (IData)(
                                                       (0x1fffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x2fU)))))));
            tracep->chgBit(oldp+2205,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1fffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x2fU))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1fffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x2fU))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x33U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x33U]))));
            tracep->chgBit(oldp+2206,((1U & (IData)(
                                                    (0xfffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x30U))))));
            tracep->chgBit(oldp+2207,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x34U])));
            tracep->chgBit(oldp+2208,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x34U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2209,((1U & (~ (IData)(
                                                       (0xfffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x30U)))))));
            tracep->chgBit(oldp+2210,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xfffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x30U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xfffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x30U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x34U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x34U]))));
            tracep->chgBit(oldp+2211,((1U & (IData)(
                                                    (0x7ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x31U))))));
            tracep->chgBit(oldp+2212,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x35U])));
            tracep->chgBit(oldp+2213,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x35U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2214,((1U & (~ (IData)(
                                                       (0x7ffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x31U)))))));
            tracep->chgBit(oldp+2215,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7ffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x31U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7ffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x31U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x35U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x35U]))));
            tracep->chgBit(oldp+2216,((1U & (IData)(
                                                    (0x3ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x32U))))));
            tracep->chgBit(oldp+2217,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x36U])));
            tracep->chgBit(oldp+2218,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x36U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2219,((1U & (~ (IData)(
                                                       (0x3ffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x32U)))))));
            tracep->chgBit(oldp+2220,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x3ffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x32U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x3ffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x32U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x36U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x36U]))));
            tracep->chgBit(oldp+2221,((1U & (IData)(
                                                    (0x1ffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x33U))))));
            tracep->chgBit(oldp+2222,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x37U])));
            tracep->chgBit(oldp+2223,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x37U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2224,((1U & (~ (IData)(
                                                       (0x1ffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x33U)))))));
            tracep->chgBit(oldp+2225,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x1ffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x33U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x1ffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x33U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x37U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x37U]))));
            tracep->chgBit(oldp+2226,((1U & (IData)(
                                                    (0xffULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x34U))))));
            tracep->chgBit(oldp+2227,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x38U])));
            tracep->chgBit(oldp+2228,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x38U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2229,((1U & (~ (IData)(
                                                       (0xffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x34U)))))));
            tracep->chgBit(oldp+2230,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0xffULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x34U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0xffULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x34U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x38U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x38U]))));
            tracep->chgBit(oldp+2231,((1U & (IData)(
                                                    (0x7fULL 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                        >> 0x35U))))));
            tracep->chgBit(oldp+2232,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                       [0x39U])));
            tracep->chgBit(oldp+2233,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                             [0x39U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2234,((1U & (~ (IData)(
                                                       (0x7fULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x35U)))))));
            tracep->chgBit(oldp+2235,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx) 
                                          & (~ (IData)(
                                                       (0x7fULL 
                                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                           >> 0x35U))))) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x) 
                                            & (IData)(
                                                      (0x7fULL 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX 
                                                          >> 0x35U))))) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                              [0x39U] 
                                              >> 1U))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig
                                          [0x39U]))));
        }
    }
}
