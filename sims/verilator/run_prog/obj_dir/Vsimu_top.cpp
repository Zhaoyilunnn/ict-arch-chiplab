// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimu_top.h for the primary calling header

#include "Vsimu_top.h"
#include "Vsimu_top__Syms.h"

#include "verilated_dpi.h"

//==========

void Vsimu_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsimu_top::eval\n"); );
    Vsimu_top__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vsimu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("../testbench/simu_top.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vsimu_top::_eval_initial_loop(Vsimu_top__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("../testbench/simu_top.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vsimu_top::_sequent__TOP__15(Vsimu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top::_sequent__TOP__15\n"); );
    Vsimu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    CData/*4:0*/ __Vtableidx5;
    // Body
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv__DOT__mem_reg__v0 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv__DOT__mem_reg__v0 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_tagv__DOT__mem_reg__v0 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_tagv__DOT__mem_reg__v0 = 0U;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__count 
        = vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__count;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__state_count 
        = vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state_count;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r1 
        = vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r1;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__fcsr 
        = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__fcsr;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr 
        = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr 
        = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_pnd 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_pnd;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_pnd 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_pnd;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_pnd 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_pnd;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_pnd 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_pnd;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__step1_count 
        = vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__step1_count;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__step0_count 
        = vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__step0_count;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__key_count 
        = vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__key_count;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur 
        = vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur 
        = vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_pnd 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_pnd;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__timer_64 
        = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__timer_64;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v0 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v1 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v2 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v3 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v0 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v1 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v2 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v3 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v0 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v1 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v2 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v3 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v0 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v1 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v2 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v3 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v0 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v1 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v2 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v3 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v0 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v1 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v2 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v3 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v0 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v1 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v2 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v3 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v0 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v1 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v2 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v3 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v0 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v1 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v2 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v3 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v0 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v1 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v2 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v3 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v0 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v1 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v2 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v3 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v0 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v1 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v2 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v3 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v0 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v1 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v2 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v3 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v0 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v1 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v2 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v3 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v0 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v1 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v2 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v3 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v0 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v1 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v2 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v3 = 0U;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr 
        = vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr 
        = vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_respond_state 
        = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_respond_state;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_req_state 
        = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_req_state;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v1 = 0U;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__br_target_inst_req_state 
        = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__br_target_inst_req_state;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ERASE_SERIAL 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ERASE_SERIAL;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_xor 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_xor;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0U;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__branch_slot_cancel 
        = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__branch_slot_cancel;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog 
        = vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v19 = 0U;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf__v0 = 0U;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__read_respond_state 
        = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__read_respond_state;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__tmp_r 
        = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__tmp_r;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignS 
        = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignS;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__count 
        = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__count;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state 
        = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_icacop 
        = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_icacop;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__read_requst_state 
        = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__read_requst_state;
    if ((1U & (~ (IData)(vlTOPp->aresetn)))) {
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__i = 2U;
    }
    if ((1U & (~ (IData)(vlTOPp->aresetn)))) {
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__i = 2U;
    }
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__data_wr_req 
        = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_req;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_uncache_en 
        = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_uncache_en;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state 
        = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_dcacop 
        = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_dcacop;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v1 = 0U;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_state 
        = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_state;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[0U] 
        = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[0U];
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[1U] 
        = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[1U];
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[2U] 
        = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[2U];
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[3U] 
        = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data[3U];
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu_wlast 
        = vlTOPp->simu_top__DOT__soc__DOT__cpu_wlast;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state 
        = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__timer 
        = vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__timer;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_num 
        = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_num;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc__v0 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras__v0 = 0U;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr 
        = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__apb_s_bvalid 
        = vlTOPp->simu_top__DOT__soc__DOT__apb_s_bvalid;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__apb_s_rvalid 
        = vlTOPp->simu_top__DOT__soc__DOT__apb_s_rvalid;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr7 
        = vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__cr7;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr5 
        = vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__cr5;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr4 
        = vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__cr4;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr3 
        = vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__cr3;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr2 
        = vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__cr2;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr1 
        = vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__cr1;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr6 
        = vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__cr6;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr0 
        = vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__cr0;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target__v0 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target__v1 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter__v0 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter__v1 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter__v2 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter__v3 = 0U;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__commit_inst_counter 
        = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__commit_inst_counter;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
        = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1__v0 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1__v0 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0__v0 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0__v0 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1__v0 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0__v0 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0__v0 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1__v0 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0__v0 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1__v0 = 0U;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__dcache_miss_counter 
        = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__dcache_miss_counter;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__icache_miss_counter 
        = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__icache_miss_counter;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__br_inst_counter 
        = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__br_inst_counter;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__mem_inst_counter 
        = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__mem_inst_counter;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__br_pre_counter 
        = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__br_pre_counter;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__br_pre_error_counter 
        = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__br_pre_error_counter;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__instrCnt 
        = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__instrCnt;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cycleCnt 
        = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cycleCnt;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__trap 
        = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__trap;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps__v0 = 0U;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_llbctl 
        = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_llbctl;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tval 
        = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tval;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__timer_en 
        = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__timer_en;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g__v0 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid__v0 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn__v0 = 0U;
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
        = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v0 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v1 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v2 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v3 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v4 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v5 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v6 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v7 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v8 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v9 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v10 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v11 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v12 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v13 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v14 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v15 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v16 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v17 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v18 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v19 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v20 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v21 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v22 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v23 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v24 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v25 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v26 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v27 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v28 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v29 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v30 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v31 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v32 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v33 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v34 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v35 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v36 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v37 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v38 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v39 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v40 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v41 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v42 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v43 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v44 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v45 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v46 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v47 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v48 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v49 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v50 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v51 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v52 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v53 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v54 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v55 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v56 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v57 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v58 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v59 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v60 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v61 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v62 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v63 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v64 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v65 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v66 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v67 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v68 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v69 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v70 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v71 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v72 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v73 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v74 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v75 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v76 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v77 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v78 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v79 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v80 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v81 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v82 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v83 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v84 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v85 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v86 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v87 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v88 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v89 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v90 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v91 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v92 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v93 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v94 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v95 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v96 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v97 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v98 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v99 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v100 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v101 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v102 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v103 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v104 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v105 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v106 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v107 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v108 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v109 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v110 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v111 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v112 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v113 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v114 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v115 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v116 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v117 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v118 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v119 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v120 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v121 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v122 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v123 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v124 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v125 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v126 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v127 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v128 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v129 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v130 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v131 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v132 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v133 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v134 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v135 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v136 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v137 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v138 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v139 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v140 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v141 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v142 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v143 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v144 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v145 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v146 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v147 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v148 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v149 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v150 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v151 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v152 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v153 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v154 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v155 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v156 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v157 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v158 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v159 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v160 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v161 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v162 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v163 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v164 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v165 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v166 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v167 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v168 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v169 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v170 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v171 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v172 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v173 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v174 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v175 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v176 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v177 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v178 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v179 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v180 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v181 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v182 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v183 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v184 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v185 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v186 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v187 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v188 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v189 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v190 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v191 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v192 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v193 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v194 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v195 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v196 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v197 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v198 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v199 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v200 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v201 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v202 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v203 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v204 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v205 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v206 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v207 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v208 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v209 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v210 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v211 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v212 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v213 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v214 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v215 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v216 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v217 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v218 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v219 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v220 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v221 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v222 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v223 = 0U;
    if ((1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset)))) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__p = 0x11U;
    }
    vlSymsp->TOP____024unit.__Vdpiimwrap_v_difftest_GRegState_TOP____024unit(0U, 0ULL, (QData)((IData)(
                                                                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [1U])), (QData)((IData)(
                                                                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [2U])), (QData)((IData)(
                                                                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [3U])), (QData)((IData)(
                                                                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [4U])), (QData)((IData)(
                                                                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [5U])), (QData)((IData)(
                                                                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [6U])), (QData)((IData)(
                                                                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [7U])), (QData)((IData)(
                                                                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [8U])), (QData)((IData)(
                                                                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [9U])), (QData)((IData)(
                                                                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [0xaU])), (QData)((IData)(
                                                                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [0xbU])), (QData)((IData)(
                                                                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [0xcU])), (QData)((IData)(
                                                                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [0xdU])), (QData)((IData)(
                                                                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [0xeU])), (QData)((IData)(
                                                                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [0xfU])), (QData)((IData)(
                                                                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [0x10U])), (QData)((IData)(
                                                                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [0x11U])), (QData)((IData)(
                                                                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [0x12U])), (QData)((IData)(
                                                                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [0x13U])), (QData)((IData)(
                                                                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [0x14U])), (QData)((IData)(
                                                                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [0x15U])), (QData)((IData)(
                                                                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [0x16U])), (QData)((IData)(
                                                                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [0x17U])), (QData)((IData)(
                                                                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [0x18U])), (QData)((IData)(
                                                                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [0x19U])), (QData)((IData)(
                                                                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [0x1aU])), (QData)((IData)(
                                                                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [0x1bU])), (QData)((IData)(
                                                                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [0x1cU])), (QData)((IData)(
                                                                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [0x1dU])), (QData)((IData)(
                                                                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [0x1eU])), (QData)((IData)(
                                                                                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                                                [0x1fU])));
    vlSymsp->TOP____024unit.__Vdpiimwrap_v_difftest_TrapEvent_TOP____024unit(0U, (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__trap), 
                                                                             (7U 
                                                                              & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__trap_code)), (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cmt_pc)), vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cycleCnt, vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__instrCnt);
    vlSymsp->TOP____024unit.__Vdpiimwrap_v_difftest_LoadEvent_TOP____024unit(0U, 0U, (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cmt_inst_ld_en), (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cmt_ld_paddr)), (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cmt_ld_vaddr)));
    vlSymsp->TOP____024unit.__Vdpiimwrap_v_difftest_StoreEvent_TOP____024unit(0U, 0U, (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cmt_inst_st_en), (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cmt_st_paddr)), (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cmt_st_vaddr)), (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cmt_st_data)));
    vlSymsp->TOP____024unit.__Vdpiimwrap_v_difftest_ExcpEvent_TOP____024unit(0U, (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cmt_excp_flush), vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cmt_ertn, 
                                                                             (0x7ffU 
                                                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat 
                                                                                >> 2U)), (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cmt_csr_ecode), (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cmt_pc)), vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cmt_inst);
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cmt_valid) {
        vlSymsp->TOP____024unit.__Vdpiimwrap_v_difftest_InstrCommit_TOP____024unit(0U, 0U, (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cmt_valid), (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cmt_pc)), vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cmt_inst, 0U, (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cmt_tlbfill_en), vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cmt_rand_index, (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cmt_cnt_inst), vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cmt_timer_64, (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cmt_wen), vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cmt_wdest, (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cmt_wdata)), vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cmt_csr_rstat_en, vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cmt_csr_data);
    }
    vlSymsp->TOP____024unit.__Vdpiimwrap_v_difftest_CSRRegState_TOP____024unit(0U, (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd)), (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_prmd)), 0ULL, (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_ectl)), (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat)), (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_era)), (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_badv)), (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_eentry)), (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)), (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbehi)), (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo0)), (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo1)), (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid)), (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_pgdl)), (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_pgdh)), (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save0)), (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save1)), (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save2)), (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save3)), (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tid)), (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tcfg)), (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tval)), (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_ticlr)), (QData)((IData)(
                                                                                ((0xfffffffeU 
                                                                                & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_llbctl) 
                                                                                | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__llbit)))), (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbrentry)), (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw0)), (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw1)));
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v0 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v1 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v2 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v3 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v4 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v5 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v6 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v7 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v8 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v9 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v10 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v11 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v12 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v13 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v14 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v15 = 0U;
    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v16 = 0U;
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__tagv_ena) {
        if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv_wea) {
            vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv__DOT__mem_reg__v0 
                = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__tagv_dina;
            vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv__DOT__mem_reg__v0 = 1U;
            vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv__DOT__mem_reg__v0 
                = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__tagv_addra;
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__tagv_ena) {
        if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv_wea) {
            vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv__DOT__mem_reg__v0 
                = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__tagv_dina;
            vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv__DOT__mem_reg__v0 = 1U;
            vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv__DOT__mem_reg__v0 
                = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__tagv_addra;
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__tagv_ena) {
        if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_tagv_wea) {
            vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_tagv__DOT__mem_reg__v0 
                = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__tagv_dina;
            vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_tagv__DOT__mem_reg__v0 = 1U;
            vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_tagv__DOT__mem_reg__v0 
                = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__tagv_addra;
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__tagv_ena) {
        if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_tagv_wea) {
            vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_tagv__DOT__mem_reg__v0 
                = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__tagv_dina;
            vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_tagv__DOT__mem_reg__v0 = 1U;
            vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_tagv__DOT__mem_reg__v0 
                = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__tagv_addra;
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_ena) {
        if ((1U & (~ (IData)((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3_wea)))))) {
            vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__output_buffer 
                = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg
                [vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_addra];
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_ena) {
        if ((1U & (~ (IData)((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2_wea)))))) {
            vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__output_buffer 
                = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg
                [vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_addra];
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_ena) {
        if ((1U & (~ (IData)((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1_wea)))))) {
            vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__output_buffer 
                = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg
                [vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_addra];
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_ena) {
        if ((1U & (~ (IData)((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0_wea)))))) {
            vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__output_buffer 
                = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg
                [vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_addra];
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_ena) {
        if ((1U & (~ (IData)((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3_wea)))))) {
            vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__output_buffer 
                = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg
                [vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_addra];
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_ena) {
        if ((1U & (~ (IData)((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2_wea)))))) {
            vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__output_buffer 
                = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg
                [vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_addra];
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_ena) {
        if ((1U & (~ (IData)((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1_wea)))))) {
            vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__output_buffer 
                = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg
                [vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_addra];
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_ena) {
        if ((1U & (~ (IData)((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_wea)))))) {
            vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__output_buffer 
                = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg
                [vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_addra];
        }
    }
    if ((1U & (~ (IData)(vlTOPp->aresetn)))) {
        vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rbit_in = 0U;
    }
    if (vlTOPp->aresetn) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__count 
            = (0xfffffU & ((IData)(1U) + vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__count));
        vlTOPp->num_csn = ((0x80000U & vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__count)
                            ? ((0x40000U & vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__count)
                                ? ((0x20000U & vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__count)
                                    ? 0xfeU : 0xfdU)
                                : ((0x20000U & vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__count)
                                    ? 0xfbU : 0xf7U))
                            : ((0x40000U & vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__count)
                                ? ((0x20000U & vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__count)
                                    ? 0xefU : 0xdfU)
                                : ((0x20000U & vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__count)
                                    ? 0xbfU : 0x7fU)));
    } else {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__count = 0U;
        vlTOPp->num_csn = 0xffU;
    }
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__state_count 
        = ((1U & ((~ (IData)(vlTOPp->aresetn)) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state_count) 
                                                  >> 3U)))
            ? 0U : (0xfU & ((IData)(1U) + (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state_count))));
    if ((1U & ((~ (IData)(vlTOPp->aresetn)) | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NANDtag))))) {
        vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ACK = 0U;
    }
    if (vlTOPp->aresetn) {
        if (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset) {
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset = 0U;
        } else {
            if (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr_read) {
                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset = 1U;
            }
        }
    } else {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset = 1U;
    }
    if (vlTOPp->aresetn) {
        if (vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__write_uart_valid) {
            vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__confreg_uart_valid 
                = vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__write_uart_valid;
        }
    } else {
        vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__confreg_uart_valid = 0U;
    }
    if (vlTOPp->aresetn) {
        if (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_in) {
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b 
                = (0xffU & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value) 
                            >> 2U));
        } else {
            if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____Vcellinp__receiver__enable) 
                 & (0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b)))) {
                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b 
                    = (0xffU & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b) 
                                - (IData)(1U)));
            }
        }
    } else {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b = 0x9fU;
    }
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_d 
        = ((IData)(vlTOPp->aresetn) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_condition));
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r1 
        = vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r2;
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__data8_out 
        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
        [vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom];
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_int 
        = ((IData)(vlTOPp->aresetn) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE) 
                                       & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                          >> 0xdU)));
    if (vlTOPp->aresetn) {
        if ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_push_pulse) 
              | (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop)) 
             | (0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count)))) {
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t 
                = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value;
        } else {
            if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____Vcellinp__receiver__enable) 
                 & (0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t)))) {
                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t 
                    = (0x3ffU & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t) 
                                 - (IData)(1U)));
            }
        }
    } else {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t = 0x27fU;
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_wr_req = 0U;
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__fcsr = 0x22U;
    } else {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__fcsr 
            = ((0x3eU & (IData)(vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__fcsr)) 
               | (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__fcsr) 
                        >> 5U)));
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__fcsr 
            = ((0x3dU & (IData)(vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__fcsr)) 
               | (2U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__fcsr) 
                        << 1U)));
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__fcsr 
            = ((0x3bU & (IData)(vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__fcsr)) 
               | (4U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__fcsr) 
                        << 1U)));
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__fcsr 
            = ((0x37U & (IData)(vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__fcsr)) 
               | (8U & ((0xfffffff8U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__fcsr) 
                                        << 1U)) ^ (0x3ffffff8U 
                                                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__fcsr) 
                                                      >> 2U)))));
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__fcsr 
            = ((0x2fU & (IData)(vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__fcsr)) 
               | (0x10U & ((0xfffffff0U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__fcsr) 
                                           << 1U)) 
                           ^ (0x7ffffff0U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__fcsr) 
                                             >> 1U)))));
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__fcsr 
            = ((0x1fU & (IData)(vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__fcsr)) 
               | (0x20U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__fcsr) 
                           << 1U)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr = 1U;
    } else {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr 
            = ((0xfeU & (IData)(vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr)) 
               | (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr) 
                        >> 7U)));
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr 
            = ((0xfdU & (IData)(vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr)) 
               | (2U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr) 
                        << 1U)));
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr 
            = ((0xfbU & (IData)(vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr)) 
               | (4U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr) 
                        << 1U)));
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr 
            = ((0xf7U & (IData)(vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr)) 
               | (8U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr) 
                        << 1U)));
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr 
            = ((0xefU & (IData)(vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr)) 
               | (0x10U & ((0xfffffff0U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr) 
                                           << 1U)) 
                           ^ (0x1ffffff0U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr) 
                                             >> 3U)))));
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr 
            = ((0xdfU & (IData)(vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr)) 
               | (0x20U & ((0xffffffe0U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr) 
                                           << 1U)) 
                           ^ (0x3fffffe0U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr) 
                                             >> 2U)))));
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr 
            = ((0xbfU & (IData)(vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr)) 
               | (0x40U & ((0xffffffc0U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr) 
                                           << 1U)) 
                           ^ (0x7fffffc0U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr) 
                                             >> 1U)))));
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr 
            = ((0x7fU & (IData)(vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr)) 
               | (0x80U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr) 
                           << 1U)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr = 1U;
    } else {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr 
            = ((0xfeU & (IData)(vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr)) 
               | (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr) 
                        >> 7U)));
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr 
            = ((0xfdU & (IData)(vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr)) 
               | (2U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr) 
                        << 1U)));
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr 
            = ((0xfbU & (IData)(vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr)) 
               | (4U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr) 
                        << 1U)));
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr 
            = ((0xf7U & (IData)(vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr)) 
               | (8U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr) 
                        << 1U)));
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr 
            = ((0xefU & (IData)(vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr)) 
               | (0x10U & ((0xfffffff0U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr) 
                                           << 1U)) 
                           ^ (0x1ffffff0U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr) 
                                             >> 3U)))));
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr 
            = ((0xdfU & (IData)(vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr)) 
               | (0x20U & ((0xffffffe0U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr) 
                                           << 1U)) 
                           ^ (0x3fffffe0U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr) 
                                             >> 2U)))));
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr 
            = ((0xbfU & (IData)(vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr)) 
               | (0x40U & ((0xffffffc0U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr) 
                                           << 1U)) 
                           ^ (0x7fffffc0U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr) 
                                             >> 1U)))));
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr 
            = ((0x7fU & (IData)(vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr)) 
               | (0x80U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr) 
                           << 1U)));
    }
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_pnd 
        = ((IData)(vlTOPp->aresetn) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fifo_read)
                                        ? 0U : (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int) 
                                                 & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_d)))
                                                 ? 1U
                                                 : 
                                                ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_pnd) 
                                                 & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier)))));
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_pnd 
        = ((IData)(vlTOPp->aresetn) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask)
                                        ? 0U : (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int) 
                                                 & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_d)))
                                                 ? 1U
                                                 : 
                                                ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_pnd) 
                                                 & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier) 
                                                    >> 2U)))));
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_pnd 
        = ((IData)(vlTOPp->aresetn) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr_read)
                                        ? 0U : (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int) 
                                                 & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_d)))
                                                 ? 1U
                                                 : 
                                                ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_pnd) 
                                                 & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier) 
                                                    >> 3U)))));
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_pnd 
        = ((IData)(vlTOPp->aresetn) & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count) 
                                         == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__trigger_level)) 
                                        & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__d1_fifo_read))
                                        ? 0U : (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int) 
                                                 & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_d)))
                                                 ? 1U
                                                 : 
                                                ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_pnd) 
                                                 & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier)))));
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__step1_count 
        = ((1U & ((~ (IData)(vlTOPp->aresetn)) | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__step1_flag))))
            ? 0U : (0xfffffU & ((IData)(1U) + vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__step1_count)));
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__step0_count 
        = ((1U & ((~ (IData)(vlTOPp->aresetn)) | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__step0_flag))))
            ? 0U : (0xfffffU & ((IData)(1U) + vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__step0_count)));
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__key_count 
        = ((1U & ((~ (IData)(vlTOPp->aresetn)) | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__key_flag))))
            ? 0U : (0xfffffU & ((IData)(1U) + vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__key_count)));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__srx_pad 
        = (1U & ((~ (IData)(vlTOPp->aresetn)) | (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__i_uart_sync_flops__DOT__flop_0)));
    if ((1U & ((~ (IData)(vlTOPp->aresetn)) | (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop)))) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur = 0U;
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en) {
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur 
                = (0xfU & ((IData)(1U) + (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur)));
        }
    }
    if ((1U & ((~ (IData)(vlTOPp->aresetn)) | (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop)))) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur = 0U;
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_en) {
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur 
                = (0xfU & ((IData)(1U) + (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur)));
        }
    }
    if (vlTOPp->aresetn) {
        if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_wvalid) 
             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_wready))) {
            vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_w_disable = 0U;
        } else {
            if (vlTOPp->simu_top__DOT__soc__DOT__m0_wvalid) {
                vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_w_disable = 1U;
            }
        }
    } else {
        vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_w_disable = 0U;
    }
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7r 
        = ((IData)(vlTOPp->aresetn) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask)
                                        ? 0U : ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7r) 
                                                | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7) 
                                                   & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7_d))))));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6r 
        = (1U & ((~ (IData)(vlTOPp->aresetn)) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6r) 
                                                  | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6) 
                                                     & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6_d)))))));
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r 
        = (1U & ((~ (IData)(vlTOPp->aresetn)) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r) 
                                                  | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5) 
                                                     & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5_d)))))));
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_pnd 
        = ((IData)(vlTOPp->aresetn) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push) 
                                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir_read) 
                                            & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir))) 
                                           & (1U == 
                                              (7U & 
                                               ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir) 
                                                >> 1U)))))
                                        ? 0U : (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int) 
                                                 & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_d)))
                                                 ? 1U
                                                 : 
                                                ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_pnd) 
                                                 & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier) 
                                                    >> 1U)))));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr4r 
        = ((IData)(vlTOPp->aresetn) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask)
                                        ? 0U : (1U 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr4r) 
                                                   | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_data_out) 
                                                       >> 2U) 
                                                      & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr4_d)))))));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr3r 
        = ((IData)(vlTOPp->aresetn) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask)
                                        ? 0U : (1U 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr3r) 
                                                   | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_data_out) 
                                                      & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr3_d)))))));
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr2r 
        = ((IData)(vlTOPp->aresetn) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask)
                                        ? 0U : (1U 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr2r) 
                                                   | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_data_out) 
                                                       >> 1U) 
                                                      & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr2_d)))))));
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_cpuid = 0U;
    }
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__timer_64 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset)
            ? 0ULL : (1ULL + vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__timer_64));
    if (vlTOPp->aresetn) {
        if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw) 
             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT10))) {
            vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map0 
                = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_datai;
        }
    } else {
        vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map0 = 0U;
    }
    if (vlTOPp->aresetn) {
        vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map1 
            = (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw) 
                & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT11))
                ? vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_datai
                : (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT) 
                    << 0x10U) | (0xffffU & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)));
        vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map1 
            = (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw) 
                & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT9))
                ? vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_datai
                : (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT) 
                    << 0x10U) | (0xffffU & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)));
    } else {
        vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map1 = 0U;
        vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map1 = 0U;
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_ena) {
        if ((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3_wea))) {
            if ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v0 
                    = (0xffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_dina);
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v0 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v0 = 0U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v0 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3_addra;
            }
            if ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v1 
                    = (0xffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_dina 
                                >> 8U));
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v1 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v1 = 8U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v1 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3_addra;
            }
            if ((4U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v2 
                    = (0xffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_dina 
                                >> 0x10U));
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v2 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v2 = 0x10U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v2 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3_addra;
            }
            if ((8U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v3 
                    = (0xffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_dina 
                                >> 0x18U));
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v3 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v3 = 0x18U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v3 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3_addra;
            }
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_ena) {
        if ((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2_wea))) {
            if ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v0 
                    = (0xffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_dina);
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v0 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v0 = 0U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v0 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2_addra;
            }
            if ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v1 
                    = (0xffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_dina 
                                >> 8U));
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v1 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v1 = 8U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v1 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2_addra;
            }
            if ((4U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v2 
                    = (0xffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_dina 
                                >> 0x10U));
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v2 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v2 = 0x10U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v2 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2_addra;
            }
            if ((8U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v3 
                    = (0xffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_dina 
                                >> 0x18U));
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v3 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v3 = 0x18U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v3 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2_addra;
            }
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_ena) {
        if ((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1_wea))) {
            if ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v0 
                    = (0xffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_dina);
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v0 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v0 = 0U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v0 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1_addra;
            }
            if ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v1 
                    = (0xffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_dina 
                                >> 8U));
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v1 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v1 = 8U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v1 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1_addra;
            }
            if ((4U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v2 
                    = (0xffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_dina 
                                >> 0x10U));
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v2 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v2 = 0x10U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v2 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1_addra;
            }
            if ((8U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v3 
                    = (0xffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_dina 
                                >> 0x18U));
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v3 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v3 = 0x18U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v3 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1_addra;
            }
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_ena) {
        if ((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0_wea))) {
            if ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v0 
                    = (0xffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_dina);
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v0 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v0 = 0U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v0 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0_addra;
            }
            if ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v1 
                    = (0xffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_dina 
                                >> 8U));
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v1 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v1 = 8U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v1 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0_addra;
            }
            if ((4U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v2 
                    = (0xffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_dina 
                                >> 0x10U));
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v2 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v2 = 0x10U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v2 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0_addra;
            }
            if ((8U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v3 
                    = (0xffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_dina 
                                >> 0x18U));
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v3 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v3 = 0x18U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v3 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0_addra;
            }
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_ena) {
        if ((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3_wea))) {
            if ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v0 
                    = (0xffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_dina);
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v0 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v0 = 0U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v0 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3_addra;
            }
            if ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v1 
                    = (0xffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_dina 
                                >> 8U));
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v1 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v1 = 8U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v1 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3_addra;
            }
            if ((4U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v2 
                    = (0xffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_dina 
                                >> 0x10U));
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v2 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v2 = 0x10U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v2 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3_addra;
            }
            if ((8U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v3 
                    = (0xffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_dina 
                                >> 0x18U));
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v3 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v3 = 0x18U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v3 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3_addra;
            }
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_ena) {
        if ((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2_wea))) {
            if ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v0 
                    = (0xffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_dina);
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v0 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v0 = 0U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v0 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2_addra;
            }
            if ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v1 
                    = (0xffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_dina 
                                >> 8U));
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v1 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v1 = 8U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v1 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2_addra;
            }
            if ((4U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v2 
                    = (0xffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_dina 
                                >> 0x10U));
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v2 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v2 = 0x10U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v2 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2_addra;
            }
            if ((8U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v3 
                    = (0xffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_dina 
                                >> 0x18U));
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v3 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v3 = 0x18U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v3 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2_addra;
            }
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_ena) {
        if ((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1_wea))) {
            if ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v0 
                    = (0xffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_dina);
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v0 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v0 = 0U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v0 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1_addra;
            }
            if ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v1 
                    = (0xffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_dina 
                                >> 8U));
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v1 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v1 = 8U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v1 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1_addra;
            }
            if ((4U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v2 
                    = (0xffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_dina 
                                >> 0x10U));
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v2 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v2 = 0x10U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v2 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1_addra;
            }
            if ((8U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v3 
                    = (0xffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_dina 
                                >> 0x18U));
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v3 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v3 = 0x18U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v3 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1_addra;
            }
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_ena) {
        if ((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_wea))) {
            if ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v0 
                    = (0xffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_dina);
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v0 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v0 = 0U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v0 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_addra;
            }
            if ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v1 
                    = (0xffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_dina 
                                >> 8U));
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v1 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v1 = 8U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v1 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_addra;
            }
            if ((4U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v2 
                    = (0xffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_dina 
                                >> 0x10U));
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v2 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v2 = 0x10U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v2 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_addra;
            }
            if ((8U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v3 
                    = (0xffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_dina 
                                >> 0x18U));
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v3 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v3 = 0x18U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v3 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_addra;
            }
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_ena) {
        if ((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3_wea))) {
            if ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v0 
                    = (0xffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_dina);
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v0 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v0 = 0U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v0 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_addra;
            }
            if ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v1 
                    = (0xffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_dina 
                                >> 8U));
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v1 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v1 = 8U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v1 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_addra;
            }
            if ((4U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v2 
                    = (0xffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_dina 
                                >> 0x10U));
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v2 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v2 = 0x10U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v2 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_addra;
            }
            if ((8U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v3 
                    = (0xffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_dina 
                                >> 0x18U));
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v3 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v3 = 0x18U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v3 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_addra;
            }
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_ena) {
        if ((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2_wea))) {
            if ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v0 
                    = (0xffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_dina);
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v0 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v0 = 0U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v0 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_addra;
            }
            if ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v1 
                    = (0xffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_dina 
                                >> 8U));
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v1 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v1 = 8U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v1 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_addra;
            }
            if ((4U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v2 
                    = (0xffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_dina 
                                >> 0x10U));
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v2 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v2 = 0x10U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v2 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_addra;
            }
            if ((8U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v3 
                    = (0xffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_dina 
                                >> 0x18U));
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v3 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v3 = 0x18U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v3 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_addra;
            }
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_ena) {
        if ((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1_wea))) {
            if ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v0 
                    = (0xffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_dina);
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v0 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v0 = 0U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v0 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_addra;
            }
            if ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v1 
                    = (0xffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_dina 
                                >> 8U));
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v1 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v1 = 8U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v1 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_addra;
            }
            if ((4U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v2 
                    = (0xffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_dina 
                                >> 0x10U));
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v2 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v2 = 0x10U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v2 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_addra;
            }
            if ((8U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v3 
                    = (0xffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_dina 
                                >> 0x18U));
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v3 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v3 = 0x18U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v3 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_addra;
            }
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_ena) {
        if ((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0_wea))) {
            if ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v0 
                    = (0xffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_dina);
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v0 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v0 = 0U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v0 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_addra;
            }
            if ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v1 
                    = (0xffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_dina 
                                >> 8U));
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v1 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v1 = 8U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v1 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_addra;
            }
            if ((4U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v2 
                    = (0xffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_dina 
                                >> 0x10U));
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v2 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v2 = 0x10U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v2 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_addra;
            }
            if ((8U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v3 
                    = (0xffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_dina 
                                >> 0x18U));
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v3 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v3 = 0x18U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v3 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_addra;
            }
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_ena) {
        if ((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3_wea))) {
            if ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v0 
                    = (0xffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_dina);
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v0 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v0 = 0U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v0 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_addra;
            }
            if ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v1 
                    = (0xffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_dina 
                                >> 8U));
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v1 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v1 = 8U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v1 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_addra;
            }
            if ((4U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v2 
                    = (0xffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_dina 
                                >> 0x10U));
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v2 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v2 = 0x10U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v2 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_addra;
            }
            if ((8U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v3 
                    = (0xffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_dina 
                                >> 0x18U));
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v3 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v3 = 0x18U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v3 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_addra;
            }
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_ena) {
        if ((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2_wea))) {
            if ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v0 
                    = (0xffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_dina);
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v0 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v0 = 0U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v0 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_addra;
            }
            if ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v1 
                    = (0xffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_dina 
                                >> 8U));
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v1 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v1 = 8U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v1 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_addra;
            }
            if ((4U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v2 
                    = (0xffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_dina 
                                >> 0x10U));
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v2 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v2 = 0x10U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v2 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_addra;
            }
            if ((8U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v3 
                    = (0xffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_dina 
                                >> 0x18U));
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v3 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v3 = 0x18U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v3 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_addra;
            }
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_ena) {
        if ((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1_wea))) {
            if ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v0 
                    = (0xffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_dina);
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v0 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v0 = 0U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v0 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_addra;
            }
            if ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v1 
                    = (0xffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_dina 
                                >> 8U));
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v1 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v1 = 8U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v1 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_addra;
            }
            if ((4U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v2 
                    = (0xffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_dina 
                                >> 0x10U));
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v2 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v2 = 0x10U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v2 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_addra;
            }
            if ((8U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v3 
                    = (0xffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_dina 
                                >> 0x18U));
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v3 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v3 = 0x18U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v3 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_addra;
            }
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_ena) {
        if ((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_wea))) {
            if ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v0 
                    = (0xffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_dina);
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v0 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v0 = 0U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v0 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_addra;
            }
            if ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v1 
                    = (0xffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_dina 
                                >> 8U));
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v1 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v1 = 8U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v1 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_addra;
            }
            if ((4U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v2 
                    = (0xffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_dina 
                                >> 0x10U));
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v2 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v2 = 0x10U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v2 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_addra;
            }
            if ((8U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_wea))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v3 
                    = (0xffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_dina 
                                >> 0x18U));
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v3 = 1U;
                vlTOPp->__Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v3 = 0x18U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v3 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_addra;
            }
        }
    }
    if (vlTOPp->aresetn) {
        if (vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_go) {
            vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wvalid = 1U;
        } else {
            if (vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en) {
                vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wvalid = 0U;
            }
        }
    } else {
        vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wvalid = 0U;
    }
    if (vlTOPp->aresetn) {
        if (vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push) {
            vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_valid = 1U;
        } else {
            if (vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop) {
                vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_valid 
                    = vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid;
            }
        }
    } else {
        vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_valid = 0U;
    }
    if (vlTOPp->aresetn) {
        if (vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_push) {
            vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid = 1U;
        } else {
            if (vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop) {
                vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid 
                    = vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid;
            }
        }
    } else {
        vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid = 0U;
    }
    if (vlTOPp->aresetn) {
        if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw) 
             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT8))) {
            vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0 
                = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_datai;
        }
    } else {
        vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0 = 0U;
    }
    if (vlTOPp->aresetn) {
        if (vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_go) {
            vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wvalid = 1U;
        } else {
            if (vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en) {
                vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wvalid = 0U;
            }
        }
    } else {
        vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wvalid = 0U;
    }
    if (vlTOPp->aresetn) {
        if (vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_push) {
            vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_valid = 1U;
        } else {
            if (vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) {
                vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_valid 
                    = vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid;
            }
        }
    } else {
        vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_valid = 0U;
    }
    if (vlTOPp->aresetn) {
        if (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)) 
             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_dir_ins))) {
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr)));
        }
    } else {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr = 0U;
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en) {
        vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rlast 
            = vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen_last;
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_en) {
        vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rlast 
            = vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last;
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp = 0U;
    } else {
        if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__to_fs_valid) 
             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_allowin) 
                | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_go_dirt)))) {
            vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp 
                = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__pfs_excp_adef;
        }
    }
    if (vlTOPp->aresetn) {
        if (vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_push) {
            vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_valid = 1U;
        } else {
            if (vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) {
                vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_valid 
                    = vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid;
            }
        }
    } else {
        vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_valid = 0U;
    }
    if (vlTOPp->aresetn) {
        if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_awvalid) 
             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_awready))) {
            vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_aw_disable = 0U;
        } else {
            if (vlTOPp->simu_top__DOT__soc__DOT__m0_awvalid) {
                vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_aw_disable = 1U;
            }
        }
    } else {
        vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_aw_disable = 0U;
    }
    if (vlTOPp->aresetn) {
        if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_arvalid) 
             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_arready))) {
            vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_ar_disable = 0U;
        } else {
            if (vlTOPp->simu_top__DOT__soc__DOT__m0_arvalid) {
                vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_ar_disable = 1U;
            }
        }
    } else {
        vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_ar_disable = 0U;
    }
    if (vlTOPp->aresetn) {
        if (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)) 
             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_dir_ins))) {
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr)));
        }
    } else {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr = 0U;
    }
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_number 
        = ((IData)(vlTOPp->aresetn) ? (3U & ((0x800U 
                                              & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                              ? ((0x400U 
                                                  & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                                  ? 
                                                 ((0x200U 
                                                   & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                                   ? 0U
                                                   : 
                                                  ((0x100U 
                                                    & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                                    ? 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                                    >> 0x12U)
                                                    : 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                                    >> 0x11U)))
                                                  : 
                                                 ((0x200U 
                                                   & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                                   ? 
                                                  ((0x100U 
                                                    & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                                    ? 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                                    >> 0x10U)
                                                    : 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                                    >> 0xfU))
                                                   : 
                                                  ((0x100U 
                                                    & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                                    ? 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                                    >> 0xeU)
                                                    : 0U)))
                                              : ((0x400U 
                                                  & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                                  ? 
                                                 ((0x200U 
                                                   & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                                   ? 
                                                  ((0x100U 
                                                    & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                                    ? 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                                    >> 0x15U)
                                                    : 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                                    >> 0x14U))
                                                   : 
                                                  ((0x100U 
                                                    & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                                    ? 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                                    >> 0x13U)
                                                    : 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                                    >> 0x13U)))
                                                  : 
                                                 ((0x200U 
                                                   & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                                   ? 
                                                  ((0x100U 
                                                    & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                                    ? 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                                    >> 0x13U)
                                                    : 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                                    >> 0x12U))
                                                   : 
                                                  ((0x100U 
                                                    & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                                    ? 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                                    >> 0x11U)
                                                    : 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r 
                                                    >> 0x10U))))))
            : 0U);
    if (vlTOPp->aresetn) {
        if (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty)) 
             & ((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty)) 
                  & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_wvalid)) 
                 & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_wready)) 
                & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu_wlast)))) {
            vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr)));
        }
    } else {
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr = 0U;
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_respond_state = 0U;
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_respond_state) {
            if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_respond_state) {
                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_respond_state = 0U;
            }
        } else {
            if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu_bvalid) 
                 & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu_bready))) {
                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_respond_state = 1U;
            }
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_req_state = 0U;
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_req_state) {
            if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_req_state) {
                if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__pfs_ready_go) {
                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_req_state = 0U;
                } else {
                    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_sign) {
                        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_req_buffer 
                            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__nextpc;
                    }
                }
            }
        } else {
            if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_delay) {
                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_req_buffer 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__nextpc;
                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_req_state = 1U;
            }
        }
    }
    if (vlTOPp->aresetn) {
        if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_dir_ins) 
             & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full)))) {
            vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v0 
                = vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir;
            vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v0 = 1U;
            vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v0 
                = (1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr));
        }
    } else {
        vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v1 = 1U;
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_buffer 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras
            [(7U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr) 
                    - (IData)(1U)))];
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lookup_way0_hit_buffer = 0U;
    } else {
        if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode2) 
             & (2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)))) {
            vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lookup_way0_hit_buffer 
                = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_hit;
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lookup_way1_hit_buffer = 0U;
    } else {
        if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode2) 
             & (2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)))) {
            vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lookup_way1_hit_buffer 
                = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_hit;
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__tagv_ena) {
        if ((1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_tagv_wea)))) {
            vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_tagv__DOT__output_buffer 
                = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_tagv__DOT__mem_reg
                [vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__tagv_addra];
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__tagv_ena) {
        if ((1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_tagv_wea)))) {
            vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_tagv__DOT__output_buffer 
                = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_tagv__DOT__mem_reg
                [vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__tagv_addra];
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__br_target_inst_req_state = 1U;
    } else {
        if ((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__br_target_inst_req_state))) {
            if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_sign) {
                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__br_target_inst_req_state = 1U;
            } else {
                if ((1U & (((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__br_bus 
                                     >> 0x20U)) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_valid))) 
                           & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_addr_ok))))) {
                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__br_target_inst_req_state = 2U;
                    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__br_target_inst_req_buffer 
                        = (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__br_bus);
                } else {
                    if (((((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__br_bus 
                                    >> 0x20U)) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_addr_ok))) 
                          & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_valid)) 
                         | (((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__br_bus 
                                      >> 0x20U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_addr_ok)) 
                            & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_valid))))) {
                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__br_target_inst_req_state = 4U;
                        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__br_target_inst_req_buffer 
                            = (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__br_bus);
                    }
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__br_target_inst_req_state))) {
                if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_sign) {
                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__br_target_inst_req_state = 1U;
                } else {
                    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__pfs_ready_go) {
                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__br_target_inst_req_state = 4U;
                    }
                }
            } else {
                if ((4U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__br_target_inst_req_state))) {
                    if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__pfs_ready_go) 
                         | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_sign))) {
                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__br_target_inst_req_state = 1U;
                    }
                } else {
                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__br_target_inst_req_state = 1U;
                }
            }
        }
    }
    if ((1U & ((~ (IData)(vlTOPp->aresetn)) | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NANDtag))))) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half = 0U;
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob = 0U;
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x55U;
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count = 0U;
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR = 0ULL;
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
        if ((1U & (~ (IData)(vlTOPp->aresetn)))) {
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status = 0U;
        }
        if ((1U & (~ (IData)(vlTOPp->aresetn)))) {
            vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM = 0ULL;
        }
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM = 0x14U;
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM = 4U;
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0U;
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer = 0U;
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ERASE_SERIAL = 0U;
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM = 0U;
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT = 0U;
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT = 0U;
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT = 0U;
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = 0U;
        vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_I_WR = 0U;
        vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD = 0x12345678U;
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM = 4U;
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
    } else {
        if ((0x10U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
            if ((8U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                if ((4U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
                } else {
                    if ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                        if ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                            if (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY) {
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x1bU;
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                            } else {
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x1bU;
                            }
                        } else {
                            if (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY) {
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x1aU;
                            } else {
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x1bU;
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x1aU;
                            }
                        }
                    } else {
                        if ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
                        } else {
                            if (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY) {
                                if ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY) 
                                      & (1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE))) 
                                     & (0x60U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x17U;
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x18U;
                                } else {
                                    if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY) 
                                         & (0xd0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                            = (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                               - (IData)(1U));
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 1U;
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x18U;
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x70U;
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                            = (0xffU 
                                               & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                                    } else {
                                        if ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY) 
                                              & (1U 
                                                 == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE))) 
                                             & (0x70U 
                                                == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x15U;
                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x18U;
                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                                = (0xffU 
                                                   & ((IData)(3U) 
                                                      + (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
                                        } else {
                                            if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY) 
                                                 & (0x15U 
                                                    == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)))) {
                                                if (
                                                    (1U 
                                                     & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status)) 
                                                        & ((0U 
                                                            == vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM) 
                                                           | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ERASE_SERIAL)))))) {
                                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
                                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
                                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR = 0ULL;
                                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ERASE_SERIAL = 0U;
                                                } else {
                                                    if (
                                                        ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status)) 
                                                         & (0U 
                                                            != vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))) {
                                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                            = 
                                                            ((0x800U 
                                                              & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)
                                                              ? 
                                                             ((0x3ff0003fffULL 
                                                               & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                                                              | ((QData)((IData)(
                                                                                (0x3fffU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(
                                                                                (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                                >> 0xeU)))))) 
                                                                 << 0xeU))
                                                              : 
                                                             ((((1U 
                                                                 == 
                                                                 (0xfU 
                                                                  & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                                     >> 8U))) 
                                                                | (2U 
                                                                   == 
                                                                   (0xfU 
                                                                    & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                                       >> 8U)))) 
                                                               | (3U 
                                                                  == 
                                                                  (0xfU 
                                                                   & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                                      >> 8U))))
                                                               ? 
                                                              ((0x30003fffffULL 
                                                                & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                                                               | ((QData)((IData)(
                                                                                (0x3fffU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(
                                                                                (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                                >> 0x16U)))))) 
                                                                  << 0x16U))
                                                               : 
                                                              ((4U 
                                                                == 
                                                                (0xfU 
                                                                 & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                                    >> 8U)))
                                                                ? 
                                                               ((0x3c003fffffULL 
                                                                 & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                                                                | ((QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(
                                                                                (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                                >> 0x16U)))))) 
                                                                   << 0x16U))
                                                                : 
                                                               ((5U 
                                                                 == 
                                                                 (0xfU 
                                                                  & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                                     >> 8U)))
                                                                 ? 
                                                                ((0x3c00ffffffULL 
                                                                  & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                                                                 | ((QData)((IData)(
                                                                                (0x3ffU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(
                                                                                (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                                >> 0x18U)))))) 
                                                                    << 0x18U))
                                                                 : 
                                                                ((0x3001ffffffULL 
                                                                  & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                                                                 | ((QData)((IData)(
                                                                                (0x7ffU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(
                                                                                (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                                >> 0x19U)))))) 
                                                                    << 0x19U))))));
                                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 1U;
                                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x18U;
                                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x60U;
                                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
                                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                                            = 
                                                            (0xffU 
                                                             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                                                    } else {
                                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x19U;
                                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
                                                    }
                                                }
                                            } else {
                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x18U;
                            }
                        }
                    }
                }
            } else {
                if ((4U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                    if ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                        if ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                            if (((0xaU != (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                                 & (0x60U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0xaU;
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x17U;
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                    = (0xffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT 
                                    = (((((9U == (0xfU 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                     >> 8U))) 
                                          | (0xaU == 
                                             (0xfU 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                 >> 8U)))) 
                                         | (0xbU == 
                                            (0xfU & 
                                             (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                              >> 8U)))) 
                                        | (0U == (0xfU 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                     >> 8U))))
                                        ? 2U : 3U);
                            } else {
                                if (((1U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                                     & (0x60U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 1U;
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x17U;
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0xd0U;
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                        = (0xffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                                } else {
                                    if (((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                                         & (0xd0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE 
                                            = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY)
                                                ? 0x17U
                                                : 0x18U);
                                    }
                                }
                            }
                        } else {
                            if ((0x15U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE))) {
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x15U;
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x16U;
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                    = (0xffU & ((IData)(3U) 
                                                + (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
                            } else {
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
                            }
                        }
                    } else {
                        if ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                            if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                 >= (0xffU & ((IData)(1U) 
                                              + ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing) 
                                                 - (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM)))))) {
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                    = (0xffU & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                                - (IData)(1U)));
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x15U;
                            } else {
                                if (((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM)) 
                                     & (1U < (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM)))) {
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                        = (0xffU & 
                                           ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                            - (IData)(1U)));
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x15U;
                                } else {
                                    if ((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM))) {
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                            = (0xffU 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                                  - (IData)(1U)));
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x15U;
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status = 0U;
                                    } else {
                                        if ((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM))) {
                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE 
                                                = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE;
                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                                = (0xffU 
                                                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                                            if ((1U 
                                                 == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE))) {
                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
                                            }
                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x15U;
                                        } else {
                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                                = (0xffU 
                                                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                                      - (IData)(1U)));
                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x15U;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (((0xaU != (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                                 & (0x90U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0xaU;
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x14U;
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                    = (0xffU & ((IData)(1U) 
                                                + (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM 
                                    = (7U & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                             >> 0xcU));
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT = 1U;
                            } else {
                                if ((0x70U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) {
                                    if ((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM))) {
                                        if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                             > (0xffU 
                                                & (((IData)(1U) 
                                                    + (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)) 
                                                   - (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM))))) {
                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                                = (0xffU 
                                                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                                      - (IData)(1U)));
                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x14U;
                                        } else {
                                            if ((1U 
                                                 < (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM))) {
                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                                    = 
                                                    (0xffU 
                                                     & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                                        - (IData)(1U)));
                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x14U;
                                            } else {
                                                if (
                                                    (1U 
                                                     == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM))) {
                                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM 
                                                        = 
                                                        (7U 
                                                         & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM) 
                                                            - (IData)(1U)));
                                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x14U;
                                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                                        = 
                                                        (0xffU 
                                                         & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                                                    if (
                                                        (1U 
                                                         == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM))) {
                                                        vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM 
                                                            = 
                                                            (0xffffffffff00ULL 
                                                             & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM);
                                                    } else {
                                                        if (
                                                            (2U 
                                                             == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM))) {
                                                            vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM 
                                                                = 
                                                                (0xffffffff00ffULL 
                                                                 & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM);
                                                        } else {
                                                            if (
                                                                (3U 
                                                                 == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM))) {
                                                                vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM 
                                                                    = 
                                                                    (0xffffff00ffffULL 
                                                                     & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM);
                                                            } else {
                                                                if (
                                                                    (4U 
                                                                     == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM))) {
                                                                    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM 
                                                                        = 
                                                                        (0xffff00ffffffULL 
                                                                         & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM);
                                                                } else {
                                                                    if (
                                                                        (5U 
                                                                         == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM))) {
                                                                        vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM 
                                                                            = 
                                                                            (0xff00ffffffffULL 
                                                                             & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM);
                                                                    } else {
                                                                        if (
                                                                            (6U 
                                                                             == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM))) {
                                                                            vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM 
                                                                                = 
                                                                                (0xffffffffffULL 
                                                                                & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 1U;
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x14U;
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x70U;
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                            = (0xffU 
                                               & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                                    }
                                } else {
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x16U;
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x14U;
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x70U;
                                }
                            }
                        }
                    }
                } else {
                    if ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                        if ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
                        } else {
                            if (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY) {
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x12U;
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x11U;
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = 0U;
                            } else {
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x12U;
                            }
                        }
                    } else {
                        if ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                            if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count) 
                                 != (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT))) {
                                if ((1U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE)) 
                                           & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT))))) {
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 1U;
                                } else {
                                    if ((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE) 
                                            & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT))) 
                                           & (3U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer))) 
                                          & (2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM))) 
                                         & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count) 
                                            < (0x3fffU 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT) 
                                                  - (IData)(4U)))))) {
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 1U;
                                    } else {
                                        if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ) 
                                             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT))) {
                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer = 0U;
                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = 1U;
                                            vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_I_WR 
                                                = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_datai;
                                        }
                                    }
                                }
                                if ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                      > (0xffU & ((IData)(1U) 
                                                  + 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing) 
                                                   - (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM))))) 
                                     & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE) 
                                        | (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT)))) {
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                        = (0xffU & 
                                           ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                            - (IData)(1U)));
                                } else {
                                    if (((1U < (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM)) 
                                         & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE))) {
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                            = (0xffU 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                                  - (IData)(1U)));
                                    } else {
                                        if (((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM)) 
                                             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE))) {
                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer 
                                                = (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer)));
                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                                = (0xffU 
                                                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                                            if ((3U 
                                                 == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer))) {
                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                    = 
                                                    ((4U 
                                                      <= vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                                      ? 
                                                     (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                      - (IData)(4U))
                                                      : 0U);
                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count 
                                                    = 
                                                    (0x3fffU 
                                                     & ((4U 
                                                         == vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                                         ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT)
                                                         : 
                                                        ((IData)(4U) 
                                                         + (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count))));
                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = 0U;
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (((1U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                                     & (0x80U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 1U;
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x11U;
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x10U;
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = 0U;
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                        = (0xffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                                } else {
                                    if (((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                                         & (0x10U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE 
                                            = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY)
                                                ? 0x11U
                                                : 0x12U);
                                    } else {
                                        if (((0x12U 
                                              == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                                             & (0x10U 
                                                == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 1U;
                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x11U;
                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x70U;
                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                                = (0xffU 
                                                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                                        } else {
                                            if (((1U 
                                                  == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                                                 & (0x70U 
                                                    == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x15U;
                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x11U;
                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                                    = 
                                                    (0xffU 
                                                     & ((IData)(3U) 
                                                        + (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
                                            } else {
                                                if (
                                                    (0x15U 
                                                     == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE))) {
                                                    if (
                                                        ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status)) 
                                                         & (0U 
                                                            == vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))) {
                                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
                                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
                                                    } else {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status))) {
                                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x13U;
                                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
                                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
                                                        } else {
                                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
                                                        }
                                                    }
                                                } else {
                                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
                                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if (((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                                 & (0x80U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                    = (0xffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x10U;
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 1U;
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x80U;
                            } else {
                                if ((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE))) {
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                        = (0xffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0x10U;
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 2U;
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT 
                                        = ((((9U == 
                                              (0xfU 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 8U))) 
                                             | (0xaU 
                                                == 
                                                (0xfU 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                    >> 8U)))) 
                                            | (0xbU 
                                               == (0xfU 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 8U))))
                                            ? 3U : 
                                           ((((0U == 
                                               (0xfU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                   >> 8U))) 
                                              | (0xcU 
                                                 == 
                                                 (0xfU 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                     >> 8U)))) 
                                             | (0xdU 
                                                == 
                                                (0xfU 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                    >> 8U))))
                                             ? 4U : 5U));
                                } else {
                                    if ((2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE))) {
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer = 0U;
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count = 0U;
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                            = (0xffU 
                                               & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x11U;
                                        if ((0x800U 
                                             & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                                            if ((0x400U 
                                                 & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                         >> 9U)))) {
                                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                        = 
                                                        (0x3fffffff00ULL 
                                                         & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR);
                                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                        = 
                                                        ((0x3f800000ffULL 
                                                          & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                                                         | ((QData)((IData)(
                                                                            (0x7fffffU 
                                                                             & ((1U 
                                                                                & ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                                                >> 9U) 
                                                                                & (~ 
                                                                                (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                                                >> 8U))))
                                                                                 ? 
                                                                                ((IData)(2U) 
                                                                                + (IData)(
                                                                                (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                                >> 8U)))
                                                                                 : 
                                                                                ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half)
                                                                                 ? (IData)(
                                                                                (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                                >> 8U))
                                                                                 : 
                                                                                ((IData)(1U) 
                                                                                + (IData)(
                                                                                (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                                >> 8U)))))))) 
                                                            << 8U));
                                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT 
                                                        = 
                                                        (0x3fffU 
                                                         & ((1U 
                                                             & (((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                                  >> 9U) 
                                                                 & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                                    >> 8U)) 
                                                                & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob))))
                                                             ? 
                                                            ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                              > 
                                                              ((IData)(0x100U) 
                                                               - 
                                                               (0xffU 
                                                                & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                              ? 
                                                             ((IData)(0x100U) 
                                                              - 
                                                              (0xffU 
                                                               & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                              : vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                                             : 
                                                            ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob)
                                                              ? 
                                                             ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                               > 
                                                               ((IData)(0x10U) 
                                                                - 
                                                                (0xfU 
                                                                 & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                               ? 
                                                              ((IData)(0x10U) 
                                                               - 
                                                               (0xfU 
                                                                & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                               : vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                                              : 
                                                             ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                               > 
                                                               ((IData)(0x100U) 
                                                                - 
                                                                (0xffU 
                                                                 & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                               ? 
                                                              ((IData)(0x100U) 
                                                               - 
                                                               (0xffU 
                                                                & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                               : vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                                                }
                                            } else {
                                                if (
                                                    (0x200U 
                                                     & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                        = 
                                                        (0x3fffffff00ULL 
                                                         & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR);
                                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                        = 
                                                        ((0x3f800000ffULL 
                                                          & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                                                         | ((QData)((IData)(
                                                                            (0x7fffffU 
                                                                             & ((1U 
                                                                                & ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                                                >> 9U) 
                                                                                & (~ 
                                                                                (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                                                >> 8U))))
                                                                                 ? 
                                                                                ((IData)(2U) 
                                                                                + (IData)(
                                                                                (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                                >> 8U)))
                                                                                 : 
                                                                                ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half)
                                                                                 ? (IData)(
                                                                                (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                                >> 8U))
                                                                                 : 
                                                                                ((IData)(1U) 
                                                                                + (IData)(
                                                                                (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                                >> 8U)))))))) 
                                                            << 8U));
                                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT 
                                                        = 
                                                        (0x3fffU 
                                                         & ((1U 
                                                             & (((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                                  >> 9U) 
                                                                 & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                                    >> 8U)) 
                                                                & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob))))
                                                             ? 
                                                            ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                              > 
                                                              ((IData)(0x100U) 
                                                               - 
                                                               (0xffU 
                                                                & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                              ? 
                                                             ((IData)(0x100U) 
                                                              - 
                                                              (0xffU 
                                                               & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                              : vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                                             : 
                                                            ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob)
                                                              ? 
                                                             ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                               > 
                                                               ((IData)(0x10U) 
                                                                - 
                                                                (0xfU 
                                                                 & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                               ? 
                                                              ((IData)(0x10U) 
                                                               - 
                                                               (0xfU 
                                                                & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                               : vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                                              : 
                                                             ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                               > 
                                                               ((IData)(0x100U) 
                                                                - 
                                                                (0xffU 
                                                                 & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                               ? 
                                                              ((IData)(0x100U) 
                                                               - 
                                                               (0xffU 
                                                                & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                               : vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                                                } else {
                                                    if (
                                                        (0x100U 
                                                         & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                            = 
                                                            (0x3fffffff00ULL 
                                                             & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR);
                                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                            = 
                                                            ((0x3f800000ffULL 
                                                              & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                                                             | ((QData)((IData)(
                                                                                (0x7fffffU 
                                                                                & ((1U 
                                                                                & ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                                                >> 9U) 
                                                                                & (~ 
                                                                                (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                                                >> 8U))))
                                                                                 ? 
                                                                                ((IData)(2U) 
                                                                                + (IData)(
                                                                                (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                                >> 8U)))
                                                                                 : 
                                                                                ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half)
                                                                                 ? (IData)(
                                                                                (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                                >> 8U))
                                                                                 : 
                                                                                ((IData)(1U) 
                                                                                + (IData)(
                                                                                (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                                >> 8U)))))))) 
                                                                << 8U));
                                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT 
                                                            = 
                                                            (0x3fffU 
                                                             & ((1U 
                                                                 & (((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                                      >> 9U) 
                                                                     & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                                        >> 8U)) 
                                                                    & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob))))
                                                                 ? 
                                                                ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                                  > 
                                                                  ((IData)(0x100U) 
                                                                   - 
                                                                   (0xffU 
                                                                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                                  ? 
                                                                 ((IData)(0x100U) 
                                                                  - 
                                                                  (0xffU 
                                                                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                                  : vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                                                 : 
                                                                ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob)
                                                                  ? 
                                                                 ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                                   > 
                                                                   ((IData)(0x10U) 
                                                                    - 
                                                                    (0xfU 
                                                                     & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                                   ? 
                                                                  ((IData)(0x10U) 
                                                                   - 
                                                                   (0xfU 
                                                                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                                   : vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                                                  : 
                                                                 ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                                   > 
                                                                   ((IData)(0x100U) 
                                                                    - 
                                                                    (0xffU 
                                                                     & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                                   ? 
                                                                  ((IData)(0x100U) 
                                                                   - 
                                                                   (0xffU 
                                                                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                                   : vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((0x400U 
                                                 & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                                                if (
                                                    (0x200U 
                                                     & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                        = 
                                                        (0x3fffffe000ULL 
                                                         & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR);
                                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                        = 
                                                        ((0x3fffffdfffULL 
                                                          & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                                                         | ((QData)((IData)(
                                                                            (1U 
                                                                             & ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                                                >> 9U) 
                                                                                & (~ 
                                                                                (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                                                >> 8U)))))) 
                                                            << 0xdU));
                                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                        = 
                                                        ((0x300000ffffULL 
                                                          & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                                                         | ((QData)((IData)(
                                                                            (0xfffffU 
                                                                             & ((IData)(1U) 
                                                                                + (IData)(
                                                                                (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                                >> 0x10U)))))) 
                                                            << 0x10U));
                                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT 
                                                        = 
                                                        (0x3fffU 
                                                         & ((1U 
                                                             & ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                                 >> 9U) 
                                                                & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                                   >> 8U)))
                                                             ? 
                                                            ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                              > 
                                                              ((0x3fffU 
                                                                & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                                   >> 0x10U)) 
                                                               - 
                                                               (0x3fffU 
                                                                & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                              ? 
                                                             ((0x3fffU 
                                                               & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                                  >> 0x10U)) 
                                                              - 
                                                              (0x3fffU 
                                                               & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                              : vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                                             : 
                                                            ((0x200U 
                                                              & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)
                                                              ? 
                                                             ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                               > 
                                                               ((0x3fffU 
                                                                 & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                                    >> 0x10U)) 
                                                                - 
                                                                (0xffU 
                                                                 & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                               ? 
                                                              ((0x3fffU 
                                                                & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                                   >> 0x10U)) 
                                                               - 
                                                               (0xffU 
                                                                & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                               : vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                                              : 
                                                             ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                               > 
                                                               ((0x3fffU 
                                                                 & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                                    >> 0x10U)) 
                                                                - 
                                                                (0x1fffU 
                                                                 & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                               ? 
                                                              ((0x3fffU 
                                                                & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                                   >> 0x10U)) 
                                                               - 
                                                               (0x1fffU 
                                                                & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                               : vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                                                } else {
                                                    if (
                                                        (0x100U 
                                                         & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                            = 
                                                            (0x3fffffe000ULL 
                                                             & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR);
                                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                            = 
                                                            ((0x3fffffdfffULL 
                                                              & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                                                             | ((QData)((IData)(
                                                                                (1U 
                                                                                & ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                                                >> 9U) 
                                                                                & (~ 
                                                                                (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                                                >> 8U)))))) 
                                                                << 0xdU));
                                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                            = 
                                                            ((0x300000ffffULL 
                                                              & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                                                             | ((QData)((IData)(
                                                                                (0xfffffU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(
                                                                                (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                                >> 0x10U)))))) 
                                                                << 0x10U));
                                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT 
                                                            = 
                                                            (0x3fffU 
                                                             & ((1U 
                                                                 & ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                                     >> 9U) 
                                                                    & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                                       >> 8U)))
                                                                 ? 
                                                                ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                                  > 
                                                                  ((0x3fffU 
                                                                    & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                                       >> 0x10U)) 
                                                                   - 
                                                                   (0x3fffU 
                                                                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                                  ? 
                                                                 ((0x3fffU 
                                                                   & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                                      >> 0x10U)) 
                                                                  - 
                                                                  (0x3fffU 
                                                                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                                  : vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                                                 : 
                                                                ((0x200U 
                                                                  & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)
                                                                  ? 
                                                                 ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                                   > 
                                                                   ((0x3fffU 
                                                                     & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                                        >> 0x10U)) 
                                                                    - 
                                                                    (0xffU 
                                                                     & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                                   ? 
                                                                  ((0x3fffU 
                                                                    & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                                       >> 0x10U)) 
                                                                   - 
                                                                   (0xffU 
                                                                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                                   : vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                                                  : 
                                                                 ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                                   > 
                                                                   ((0x3fffU 
                                                                     & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                                        >> 0x10U)) 
                                                                    - 
                                                                    (0x1fffU 
                                                                     & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                                   ? 
                                                                  ((0x3fffU 
                                                                    & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                                       >> 0x10U)) 
                                                                   - 
                                                                   (0x1fffU 
                                                                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                                   : vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                                                    } else {
                                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                            = 
                                                            (0x3ffffff000ULL 
                                                             & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR);
                                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                            = 
                                                            ((0x3fffffefffULL 
                                                              & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                                                             | ((QData)((IData)(
                                                                                (1U 
                                                                                & ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                                                >> 9U) 
                                                                                & (~ 
                                                                                (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                                                >> 8U)))))) 
                                                                << 0xcU));
                                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                            = 
                                                            ((0x300000ffffULL 
                                                              & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                                                             | ((QData)((IData)(
                                                                                (0xfffffU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(
                                                                                (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                                >> 0x10U)))))) 
                                                                << 0x10U));
                                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT 
                                                            = 
                                                            (0x3fffU 
                                                             & ((1U 
                                                                 & ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                                     >> 9U) 
                                                                    & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                                       >> 8U)))
                                                                 ? 
                                                                ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                                  > 
                                                                  ((0x3fffU 
                                                                    & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                                       >> 0x10U)) 
                                                                   - 
                                                                   (0x1fffU 
                                                                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                                  ? 
                                                                 ((0x3fffU 
                                                                   & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                                      >> 0x10U)) 
                                                                  - 
                                                                  (0x1fffU 
                                                                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                                  : vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                                                 : 
                                                                ((0x200U 
                                                                  & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)
                                                                  ? 
                                                                 ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                                   > 
                                                                   ((0x3fffU 
                                                                     & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                                        >> 0x10U)) 
                                                                    - 
                                                                    (0x7fU 
                                                                     & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                                   ? 
                                                                  ((0x3fffU 
                                                                    & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                                       >> 0x10U)) 
                                                                   - 
                                                                   (0x7fU 
                                                                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                                   : vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                                                  : 
                                                                 ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                                   > 
                                                                   ((0x3fffU 
                                                                     & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                                        >> 0x10U)) 
                                                                    - 
                                                                    (0xfffU 
                                                                     & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                                   ? 
                                                                  ((0x3fffU 
                                                                    & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                                       >> 0x10U)) 
                                                                   - 
                                                                   (0xfffU 
                                                                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                                   : vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                                                    }
                                                }
                                            } else {
                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                    = 
                                                    (0x3ffffff800ULL 
                                                     & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR);
                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                    = 
                                                    ((0x3ffffff7ffULL 
                                                      & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                                                     | ((QData)((IData)(
                                                                        (1U 
                                                                         & ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                                             >> 9U) 
                                                                            & (~ 
                                                                               (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                                                >> 8U)))))) 
                                                        << 0xbU));
                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                    = 
                                                    ((0x300000ffffULL 
                                                      & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                                                     | ((QData)((IData)(
                                                                        (0xfffffU 
                                                                         & ((IData)(1U) 
                                                                            + (IData)(
                                                                                (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                                >> 0x10U)))))) 
                                                        << 0x10U));
                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT 
                                                    = 
                                                    (0x3fffU 
                                                     & ((1U 
                                                         & ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                             >> 9U) 
                                                            & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                               >> 8U)))
                                                         ? 
                                                        ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                          > 
                                                          ((0x3fffU 
                                                            & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                               >> 0x10U)) 
                                                           - 
                                                           (0xfffU 
                                                            & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                          ? 
                                                         ((0x3fffU 
                                                           & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                              >> 0x10U)) 
                                                          - 
                                                          (0xfffU 
                                                           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                          : vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                                         : 
                                                        ((0x200U 
                                                          & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)
                                                          ? 
                                                         ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                           > 
                                                           ((0x3fffU 
                                                             & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                                >> 0x10U)) 
                                                            - 
                                                            (0x3fU 
                                                             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                           ? 
                                                          ((0x3fffU 
                                                            & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                               >> 0x10U)) 
                                                           - 
                                                           (0x3fU 
                                                            & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                           : vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                                          : 
                                                         ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                           > 
                                                           ((0x3fffU 
                                                             & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                                >> 0x10U)) 
                                                            - 
                                                            (0x7ffU 
                                                             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                           ? 
                                                          ((0x3fffU 
                                                            & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                               >> 0x10U)) 
                                                           - 
                                                           (0x7ffU 
                                                            & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                           : vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((8U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                if ((4U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
                } else {
                    if ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                        if ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
                        } else {
                            if ((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT))) {
                                if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                     > (0xffU & ((IData)(1U) 
                                                 + 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing) 
                                                  - (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM)))))) {
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                        = (0xffU & 
                                           ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                            - (IData)(1U)));
                                } else {
                                    if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                         > (0xffU & 
                                            ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing) 
                                             - (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM))))) {
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                            = (0xffU 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                                  - (IData)(1U)));
                                    } else {
                                        if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                             >= (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM))) {
                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                                = (0xffU 
                                                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                                      - (IData)(1U)));
                                        } else {
                                            if ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                                  < (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM)) 
                                                 & (0U 
                                                    != (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM)))) {
                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                                    = 
                                                    (0xffU 
                                                     & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                                        - (IData)(1U)));
                                            } else {
                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT 
                                                    = 
                                                    (7U 
                                                     & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT) 
                                                        - (IData)(1U)));
                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                                    = 
                                                    (0xffU 
                                                     & ((IData)(2U) 
                                                        + (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE 
                                    = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE;
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                    = (0xffU & ((IData)(1U) 
                                                + (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0xaU;
                            }
                        }
                    } else {
                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
                    }
                }
            } else {
                if ((4U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                    if ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                        if ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                            if (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY) {
                                if ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count) 
                                      != (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT)) 
                                     & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_)))) {
                                    if ((1U & (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE)) 
                                                | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE) 
                                                     & (3U 
                                                        == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer))) 
                                                    & (2U 
                                                       == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM))) 
                                                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count) 
                                                      < 
                                                      (0x3fffU 
                                                       & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT) 
                                                          - (IData)(4U)))))) 
                                               & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT))))) {
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 1U;
                                    } else {
                                        if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT) 
                                             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ))) {
                                            if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count) 
                                                 == 
                                                 (0x3fffU 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT) 
                                                     - (IData)(1U))))) {
                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count 
                                                    = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT;
                                            }
                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = 1U;
                                        }
                                    }
                                    if ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                          > (0xffU 
                                             & ((IData)(1U) 
                                                + ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing) 
                                                   - (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM))))) 
                                         & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE) 
                                            | (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT)))) {
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                            = (0xffU 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                                  - (IData)(1U)));
                                    } else {
                                        if (((1U < (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM)) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE) 
                                                & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ))))) {
                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                                = (0xffU 
                                                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                                      - (IData)(1U)));
                                        } else {
                                            if (((1U 
                                                  == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM)) 
                                                 & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE))) {
                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer 
                                                    = 
                                                    (3U 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer)));
                                                if (
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count) 
                                                     != 
                                                     (0x3fffU 
                                                      & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT) 
                                                         - (IData)(1U))))) {
                                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count 
                                                        = 
                                                        (0x3fffU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count)));
                                                }
                                                if (
                                                    (0U 
                                                     != vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)) {
                                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                        = 
                                                        (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                         - (IData)(1U));
                                                }
                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                                    = 
                                                    (0xffU 
                                                     & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                                                if (
                                                    (0U 
                                                     == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer))) {
                                                    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD 
                                                        = 
                                                        (0xffffff00U 
                                                         & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD);
                                                } else {
                                                    if (
                                                        (1U 
                                                         == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer))) {
                                                        vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD 
                                                            = 
                                                            (0xffff00ffU 
                                                             & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD);
                                                    } else {
                                                        if (
                                                            (2U 
                                                             == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer))) {
                                                            vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD 
                                                                = 
                                                                (0xff00ffffU 
                                                                 & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD);
                                                        } else {
                                                            if (
                                                                (3U 
                                                                 == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer))) {
                                                                vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD 
                                                                    = 
                                                                    (0xffffffU 
                                                                     & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD);
                                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = 0U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count = 0U;
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                        = (0xffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                                    if ((0U == vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)) {
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
                                    } else {
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 1U;
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                                    }
                                }
                            } else {
                                if ((1U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE)) 
                                           & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT))))) {
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 1U;
                                } else {
                                    if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ) 
                                         & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT))) {
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = 1U;
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer = 0U;
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                            = (0xffU 
                                               & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                                    }
                                }
                            }
                        } else {
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count = 0U;
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer = 0U;
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = 1U;
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 7U;
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                = (0xffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                            if ((0x800U & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                                if ((0x400U & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                                    if ((1U & (~ (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 9U)))) {
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                            = (0x3fffffff00ULL 
                                               & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR);
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                            = ((0x3f800000ffULL 
                                                & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                                               | ((QData)((IData)(
                                                                  (0x7fffffU 
                                                                   & ((1U 
                                                                       & ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                                           >> 9U) 
                                                                          & (~ 
                                                                             (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                                              >> 8U))))
                                                                       ? 
                                                                      ((IData)(2U) 
                                                                       + (IData)(
                                                                                (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                                >> 8U)))
                                                                       : 
                                                                      ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half)
                                                                        ? (IData)(
                                                                                (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                                >> 8U))
                                                                        : 
                                                                       ((IData)(1U) 
                                                                        + (IData)(
                                                                                (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                                >> 8U)))))))) 
                                                  << 8U));
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT 
                                            = (0x3fffU 
                                               & ((1U 
                                                   & (((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                        >> 9U) 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                          >> 8U)) 
                                                      & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob))))
                                                   ? 
                                                  ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                    > 
                                                    ((IData)(0x100U) 
                                                     - 
                                                     (0xffU 
                                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                    ? 
                                                   ((IData)(0x100U) 
                                                    - 
                                                    (0xffU 
                                                     & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                    : vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                                   : 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob)
                                                    ? 
                                                   ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                     > 
                                                     ((IData)(0x10U) 
                                                      - 
                                                      (0xfU 
                                                       & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                     ? 
                                                    ((IData)(0x10U) 
                                                     - 
                                                     (0xfU 
                                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                     : vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                                    : 
                                                   ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                     > 
                                                     ((IData)(0x100U) 
                                                      - 
                                                      (0xffU 
                                                       & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                     ? 
                                                    ((IData)(0x100U) 
                                                     - 
                                                     (0xffU 
                                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                     : vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                                    }
                                } else {
                                    if ((0x200U & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                            = (0x3fffffff00ULL 
                                               & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR);
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                            = ((0x3f800000ffULL 
                                                & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                                               | ((QData)((IData)(
                                                                  (0x7fffffU 
                                                                   & ((1U 
                                                                       & ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                                           >> 9U) 
                                                                          & (~ 
                                                                             (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                                              >> 8U))))
                                                                       ? 
                                                                      ((IData)(2U) 
                                                                       + (IData)(
                                                                                (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                                >> 8U)))
                                                                       : 
                                                                      ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half)
                                                                        ? (IData)(
                                                                                (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                                >> 8U))
                                                                        : 
                                                                       ((IData)(1U) 
                                                                        + (IData)(
                                                                                (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                                >> 8U)))))))) 
                                                  << 8U));
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT 
                                            = (0x3fffU 
                                               & ((1U 
                                                   & (((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                        >> 9U) 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                          >> 8U)) 
                                                      & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob))))
                                                   ? 
                                                  ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                    > 
                                                    ((IData)(0x100U) 
                                                     - 
                                                     (0xffU 
                                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                    ? 
                                                   ((IData)(0x100U) 
                                                    - 
                                                    (0xffU 
                                                     & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                    : vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                                   : 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob)
                                                    ? 
                                                   ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                     > 
                                                     ((IData)(0x10U) 
                                                      - 
                                                      (0xfU 
                                                       & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                     ? 
                                                    ((IData)(0x10U) 
                                                     - 
                                                     (0xfU 
                                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                     : vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                                    : 
                                                   ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                     > 
                                                     ((IData)(0x100U) 
                                                      - 
                                                      (0xffU 
                                                       & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                     ? 
                                                    ((IData)(0x100U) 
                                                     - 
                                                     (0xffU 
                                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                     : vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                                    } else {
                                        if ((0x100U 
                                             & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                = (0x3fffffff00ULL 
                                                   & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR);
                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                = (
                                                   (0x3f800000ffULL 
                                                    & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                                                   | ((QData)((IData)(
                                                                      (0x7fffffU 
                                                                       & ((1U 
                                                                           & ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                                               >> 9U) 
                                                                              & (~ 
                                                                                (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                                                >> 8U))))
                                                                           ? 
                                                                          ((IData)(2U) 
                                                                           + (IData)(
                                                                                (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                                >> 8U)))
                                                                           : 
                                                                          ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half)
                                                                            ? (IData)(
                                                                                (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                                >> 8U))
                                                                            : 
                                                                           ((IData)(1U) 
                                                                            + (IData)(
                                                                                (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                                >> 8U)))))))) 
                                                      << 8U));
                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT 
                                                = (0x3fffU 
                                                   & ((1U 
                                                       & (((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                            >> 9U) 
                                                           & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                              >> 8U)) 
                                                          & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob))))
                                                       ? 
                                                      ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                        > 
                                                        ((IData)(0x100U) 
                                                         - 
                                                         (0xffU 
                                                          & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                        ? 
                                                       ((IData)(0x100U) 
                                                        - 
                                                        (0xffU 
                                                         & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                        : vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                                       : 
                                                      ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob)
                                                        ? 
                                                       ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                         > 
                                                         ((IData)(0x10U) 
                                                          - 
                                                          (0xfU 
                                                           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                         ? 
                                                        ((IData)(0x10U) 
                                                         - 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                         : vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                                        : 
                                                       ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                         > 
                                                         ((IData)(0x100U) 
                                                          - 
                                                          (0xffU 
                                                           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                         ? 
                                                        ((IData)(0x100U) 
                                                         - 
                                                         (0xffU 
                                                          & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                         : vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                                        }
                                    }
                                }
                            } else {
                                if ((0x400U & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                                    if ((0x200U & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                            = (0x3fffffe000ULL 
                                               & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR);
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                            = ((0x3fffffdfffULL 
                                                & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                                       >> 9U) 
                                                                      & (~ 
                                                                         (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                                          >> 8U)))))) 
                                                  << 0xdU));
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                            = ((0x300000ffffULL 
                                                & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                                               | ((QData)((IData)(
                                                                  (0xfffffU 
                                                                   & ((IData)(1U) 
                                                                      + (IData)(
                                                                                (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                                >> 0x10U)))))) 
                                                  << 0x10U));
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT 
                                            = (0x3fffU 
                                               & ((1U 
                                                   & ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                       >> 9U) 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                         >> 8U)))
                                                   ? 
                                                  ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                    > 
                                                    ((0x3fffU 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                         >> 0x10U)) 
                                                     - 
                                                     (0x3fffU 
                                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                    ? 
                                                   ((0x3fffU 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                        >> 0x10U)) 
                                                    - 
                                                    (0x3fffU 
                                                     & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                    : vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                                   : 
                                                  ((0x200U 
                                                    & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)
                                                    ? 
                                                   ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                     > 
                                                     ((0x3fffU 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                          >> 0x10U)) 
                                                      - 
                                                      (0xffU 
                                                       & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                     ? 
                                                    ((0x3fffU 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                         >> 0x10U)) 
                                                     - 
                                                     (0xffU 
                                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                     : vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                                    : 
                                                   ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                     > 
                                                     ((0x3fffU 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                          >> 0x10U)) 
                                                      - 
                                                      (0x1fffU 
                                                       & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                     ? 
                                                    ((0x3fffU 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                         >> 0x10U)) 
                                                     - 
                                                     (0x1fffU 
                                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                     : vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                                    } else {
                                        if ((0x100U 
                                             & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter)) {
                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                = (0x3fffffe000ULL 
                                                   & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR);
                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                = (
                                                   (0x3fffffdfffULL 
                                                    & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                                           >> 9U) 
                                                                          & (~ 
                                                                             (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                                              >> 8U)))))) 
                                                      << 0xdU));
                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                = (
                                                   (0x300000ffffULL 
                                                    & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                                                   | ((QData)((IData)(
                                                                      (0xfffffU 
                                                                       & ((IData)(1U) 
                                                                          + (IData)(
                                                                                (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                                >> 0x10U)))))) 
                                                      << 0x10U));
                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT 
                                                = (0x3fffU 
                                                   & ((1U 
                                                       & ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                           >> 9U) 
                                                          & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                             >> 8U)))
                                                       ? 
                                                      ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                        > 
                                                        ((0x3fffU 
                                                          & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                             >> 0x10U)) 
                                                         - 
                                                         (0x3fffU 
                                                          & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                        ? 
                                                       ((0x3fffU 
                                                         & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                            >> 0x10U)) 
                                                        - 
                                                        (0x3fffU 
                                                         & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                        : vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                                       : 
                                                      ((0x200U 
                                                        & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)
                                                        ? 
                                                       ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                         > 
                                                         ((0x3fffU 
                                                           & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                              >> 0x10U)) 
                                                          - 
                                                          (0xffU 
                                                           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                         ? 
                                                        ((0x3fffU 
                                                          & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                             >> 0x10U)) 
                                                         - 
                                                         (0xffU 
                                                          & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                         : vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                                        : 
                                                       ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                         > 
                                                         ((0x3fffU 
                                                           & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                              >> 0x10U)) 
                                                          - 
                                                          (0x1fffU 
                                                           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                         ? 
                                                        ((0x3fffU 
                                                          & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                             >> 0x10U)) 
                                                         - 
                                                         (0x1fffU 
                                                          & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                         : vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                                        } else {
                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                = (0x3ffffff000ULL 
                                                   & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR);
                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                = (
                                                   (0x3fffffefffULL 
                                                    & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                                           >> 9U) 
                                                                          & (~ 
                                                                             (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                                              >> 8U)))))) 
                                                      << 0xcU));
                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                = (
                                                   (0x300000ffffULL 
                                                    & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                                                   | ((QData)((IData)(
                                                                      (0xfffffU 
                                                                       & ((IData)(1U) 
                                                                          + (IData)(
                                                                                (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                                >> 0x10U)))))) 
                                                      << 0x10U));
                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT 
                                                = (0x3fffU 
                                                   & ((1U 
                                                       & ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                           >> 9U) 
                                                          & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                             >> 8U)))
                                                       ? 
                                                      ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                        > 
                                                        ((0x3fffU 
                                                          & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                             >> 0x10U)) 
                                                         - 
                                                         (0x1fffU 
                                                          & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                        ? 
                                                       ((0x3fffU 
                                                         & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                            >> 0x10U)) 
                                                        - 
                                                        (0x1fffU 
                                                         & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                        : vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                                       : 
                                                      ((0x200U 
                                                        & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)
                                                        ? 
                                                       ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                         > 
                                                         ((0x3fffU 
                                                           & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                              >> 0x10U)) 
                                                          - 
                                                          (0x7fU 
                                                           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                         ? 
                                                        ((0x3fffU 
                                                          & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                             >> 0x10U)) 
                                                         - 
                                                         (0x7fU 
                                                          & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                         : vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                                        : 
                                                       ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                         > 
                                                         ((0x3fffU 
                                                           & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                              >> 0x10U)) 
                                                          - 
                                                          (0xfffU 
                                                           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                         ? 
                                                        ((0x3fffU 
                                                          & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                             >> 0x10U)) 
                                                         - 
                                                         (0xfffU 
                                                          & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                         : vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                                        }
                                    }
                                } else {
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                        = (0x3ffffff800ULL 
                                           & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR);
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                        = ((0x3ffffff7ffULL 
                                            & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                                   >> 9U) 
                                                                  & (~ 
                                                                     (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                                      >> 8U)))))) 
                                              << 0xbU));
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                        = ((0x300000ffffULL 
                                            & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR) 
                                           | ((QData)((IData)(
                                                              (0xfffffU 
                                                               & ((IData)(1U) 
                                                                  + (IData)(
                                                                            (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                             >> 0x10U)))))) 
                                              << 0x10U));
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT 
                                        = (0x3fffU 
                                           & ((1U & 
                                               ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                 >> 9U) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                   >> 8U)))
                                               ? ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                   > 
                                                   ((0x3fffU 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                        >> 0x10U)) 
                                                    - 
                                                    (0xfffU 
                                                     & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                   ? 
                                                  ((0x3fffU 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                       >> 0x10U)) 
                                                   - 
                                                   (0xfffU 
                                                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                   : vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                               : ((0x200U 
                                                   & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)
                                                   ? 
                                                  ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                    > 
                                                    ((0x3fffU 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                         >> 0x10U)) 
                                                     - 
                                                     (0x3fU 
                                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                    ? 
                                                   ((0x3fffU 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                        >> 0x10U)) 
                                                    - 
                                                    (0x3fU 
                                                     & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                    : vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)
                                                   : 
                                                  ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                                    > 
                                                    ((0x3fffU 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                         >> 0x10U)) 
                                                     - 
                                                     (0x7ffU 
                                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR))))
                                                    ? 
                                                   ((0x3fffU 
                                                     & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                        >> 0x10U)) 
                                                    - 
                                                    (0x7ffU 
                                                     & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR)))
                                                    : vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM))));
                                }
                            }
                        }
                    } else {
                        if ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = 0U;
                        } else {
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE 
                                = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY)
                                    ? 6U : 4U);
                        }
                    }
                } else {
                    if ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                        if ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                            if ((((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                                  & (0x30U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) 
                                 | ((2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                                    & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                       >> 0xbU)))) {
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE 
                                    = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY)
                                        ? 3U : 4U);
                            } else {
                                if (((2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE)) 
                                     & (0x30U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                        = (0xffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 3U;
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 1U;
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x30U;
                                } else {
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                        = (0xffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 3U;
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 2U;
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT 
                                        = ((((9U == 
                                              (0xfU 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                  >> 8U))) 
                                             | (0xaU 
                                                == 
                                                (0xfU 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                    >> 8U)))) 
                                            | (0xbU 
                                               == (0xfU 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 8U))))
                                            ? 3U : 
                                           ((((0U == 
                                               (0xfU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                   >> 8U))) 
                                              | (0xcU 
                                                 == 
                                                 (0xfU 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                     >> 8U)))) 
                                             | (0xdU 
                                                == 
                                                (0xfU 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                    >> 8U))))
                                             ? 4U : 5U));
                                }
                            }
                        } else {
                            if ((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT))) {
                                if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                     > (0xffU & ((IData)(1U) 
                                                 + 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing) 
                                                  - (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM)))))) {
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                        = (0xffU & 
                                           ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                            - (IData)(1U)));
                                } else {
                                    if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                         > (0xffU & 
                                            ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing) 
                                             - (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM))))) {
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                            = (0xffU 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                                  - (IData)(1U)));
                                    } else {
                                        if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                             >= (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM))) {
                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                                = (0xffU 
                                                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                                      - (IData)(1U)));
                                        } else {
                                            if ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                                  < (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM)) 
                                                 & (0U 
                                                    != (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM)))) {
                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                                    = 
                                                    (0xffU 
                                                     & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                                        - (IData)(1U)));
                                            } else {
                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT 
                                                    = 
                                                    (7U 
                                                     & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT) 
                                                        - (IData)(1U)));
                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                                    = 
                                                    (0xffU 
                                                     & ((IData)(2U) 
                                                        + (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE 
                                    = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE;
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                    = (0xffU & ((IData)(1U) 
                                                + (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 2U;
                            }
                        }
                    } else {
                        if ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE))) {
                            if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                 == (0xffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)))) {
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                    = (0xffU & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                                - (IData)(1U)));
                            } else {
                                if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                     == ((0xffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)) 
                                         - (IData)(1U)))) {
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                        = (0xffU & 
                                           ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                            - (IData)(1U)));
                                } else {
                                    if ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                          < (0xffU 
                                             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing))) 
                                         & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                            > (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM)))) {
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                            = (0xffU 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                                  - (IData)(1U)));
                                    } else {
                                        if ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                              <= (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM)) 
                                             & (0U 
                                                != (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM)))) {
                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                                = (0xffU 
                                                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM) 
                                                      - (IData)(1U)));
                                        } else {
                                            if ((0U 
                                                 == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE))) {
                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 1U;
                                                if (
                                                    (((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                       >> 1U) 
                                                      | (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                         >> 2U)) 
                                                     & (((0U 
                                                          == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)) 
                                                         | (1U 
                                                            == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) 
                                                        | (0x50U 
                                                           == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))))) {
                                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE 
                                                        = 
                                                        ((2U 
                                                          & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)
                                                          ? 3U
                                                          : 0x10U);
                                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                                        = 
                                                        (0xffU 
                                                         & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                                                } else {
                                                    if (
                                                        ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                          >> 2U) 
                                                         & (0x80U 
                                                            == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)))) {
                                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x10U;
                                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                                            = 
                                                            (0xffU 
                                                             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                                                    } else {
                                                        if (
                                                            (0x60U 
                                                             == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) {
                                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x17U;
                                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 1U;
                                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                                                = 
                                                                (0xffU 
                                                                 & ((IData)(3U) 
                                                                    + (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
                                                        } else {
                                                            if (
                                                                (0x70U 
                                                                 == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) {
                                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x15U;
                                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                                                    = 
                                                                    (0xffU 
                                                                     & ((IData)(3U) 
                                                                        + (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
                                                            } else {
                                                                if (
                                                                    (0x90U 
                                                                     == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) {
                                                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x14U;
                                                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                                                        = 
                                                                        (0xffU 
                                                                         & ((IData)(3U) 
                                                                            + (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
                                                                } else {
                                                                    if (
                                                                        (0xffU 
                                                                         == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) {
                                                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0x1aU;
                                                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                                                            = 
                                                                            (0xffU 
                                                                             & ((IData)(3U) 
                                                                                + (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing)));
                                                                    } else {
                                                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                                                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM = 0U;
                                                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
                                                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 1U;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 1U;
                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE 
                                                    = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE;
                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                                    = 
                                                    (0xffU 
                                                     & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM 
                                = (0xffU & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing) 
                                            >> 8U));
                            if ((1U & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)) {
                                if (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_clr_ack) {
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
                                }
                                if ((0U == vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM)) {
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__addr_in_die;
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_op_num;
                                }
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = 0U;
                                if (((((((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                          >> 1U) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)) 
                                        & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE))) 
                                       & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                          >> 0xbU)) 
                                      & ((~ (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                             >> 8U)) 
                                         | (((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                              >> 8U) 
                                             & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                        >> 8U))) 
                                            & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half)))) 
                                     & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                        >> 9U))) {
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x50U;
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob = 1U;
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half = 0U;
                                } else {
                                    if ((((((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                             >> 1U) 
                                            & (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                       >> 8U))) 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                              >> 0xbU)) 
                                          & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)) 
                                         & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE)))) {
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 1U;
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob = 0U;
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half 
                                            = (1U & 
                                               ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                 >> 8U) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                   >> 9U)));
                                    } else {
                                        if ((((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                               >> 1U) 
                                              & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)) 
                                             & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE)))) {
                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0U;
                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob = 0U;
                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half = 0U;
                                        } else {
                                            if ((((
                                                   (((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                      >> 2U) 
                                                     & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)) 
                                                    & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE))) 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                      >> 0xbU)) 
                                                  & ((~ 
                                                      (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                       >> 8U)) 
                                                     | (((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                          >> 8U) 
                                                         & (IData)(
                                                                   (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                    >> 8U))) 
                                                        & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half)))) 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                    >> 9U))) {
                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x50U;
                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob = 1U;
                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half = 0U;
                                            } else {
                                                if (
                                                    (((((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                         >> 2U) 
                                                        & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)) 
                                                       & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE))) 
                                                      & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                         >> 0xbU)) 
                                                     & (IData)(
                                                               (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                >> 8U)))) {
                                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 1U;
                                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob = 0U;
                                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half 
                                                        = 
                                                        (1U 
                                                         & ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                             >> 8U) 
                                                            & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                               >> 9U)));
                                                } else {
                                                    if (
                                                        (((((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                             >> 2U) 
                                                            & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)) 
                                                           & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE))) 
                                                          & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                             >> 0xbU)) 
                                                         & (~ (IData)(
                                                                      (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                                                       >> 8U))))) {
                                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0U;
                                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob = 0U;
                                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half = 0U;
                                                    } else {
                                                        if (
                                                            (((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                               >> 2U) 
                                                              & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)) 
                                                             & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE)))) {
                                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x80U;
                                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                                                        } else {
                                                            if (
                                                                (((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                                   >> 3U) 
                                                                  & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)) 
                                                                 & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE)))) {
                                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x60U;
                                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ERASE_SERIAL 
                                                                    = 
                                                                    (1U 
                                                                     & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                                        >> 4U));
                                                            } else {
                                                                if (
                                                                    (((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                                       >> 5U) 
                                                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)) 
                                                                     & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE)))) {
                                                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x90U;
                                                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                                                                } else {
                                                                    if (
                                                                        (((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                                           >> 6U) 
                                                                          & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)) 
                                                                         & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE)))) {
                                                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0xffU;
                                                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                                                                    } else {
                                                                        if (
                                                                            (((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                                                               >> 7U) 
                                                                              & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)) 
                                                                             & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE)))) {
                                                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x70U;
                                                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = 0U;
                                                                        } else {
                                                                            if (
                                                                                (((((((((0U 
                                                                                == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND)) 
                                                                                | (0x70U 
                                                                                == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) 
                                                                                | (0x80U 
                                                                                == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) 
                                                                                | (1U 
                                                                                == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) 
                                                                                | (0x50U 
                                                                                == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) 
                                                                                | (0x60U 
                                                                                == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) 
                                                                                | (0x90U 
                                                                                == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) 
                                                                                | (0xffU 
                                                                                == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND))) 
                                                                                & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE)))) {
                                                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 1U;
                                                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = 0U;
                                                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM 
                                                                                = 
                                                                                (0xffU 
                                                                                & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing));
                                                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 0U;
                                                                            } else {
                                                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x55U;
                                                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO 
                                                                                = 
                                                                                (1U 
                                                                                & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE)) 
                                                                                & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command));
                                                                                if (
                                                                                (1U 
                                                                                & (~ vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command))) {
                                                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_clr_ack) {
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = 0U;
                                }
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = 0x55U;
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = 1U;
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = 0U;
                                if ((1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO)))) {
                                    if ((1U & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command)) {
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR 
                                            = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__addr_in_die;
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM 
                                            = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_op_num;
                                    } else {
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR = 0x3fffffffffULL;
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM = 0U;
                                    }
                                }
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO 
                                    = (1U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE)) 
                                             & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command));
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->aresetn) {
        if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we) 
             & (4U == (7U & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)))) {
            vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_pol 
                = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai) 
                         >> 6U));
        }
    } else {
        vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_pol = 0U;
    }
    if (vlTOPp->aresetn) {
        if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we) 
             & (4U == (7U & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)))) {
            vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__infrared 
                = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai) 
                         >> 7U));
        }
    } else {
        vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__infrared = 0U;
    }
    if (vlTOPp->aresetn) {
        vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr 
            = ((0xf0U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr)) 
               | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset)
                   ? 0U : (0xfU & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr) 
                                   | (((8U & ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                                  << 1U)) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  (0x7fffffffU 
                                                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI))) 
                                                 << 2U)) 
                                          | ((2U & 
                                              ((~ (0x3fffffffU 
                                                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                                      >> 1U))) 
                                               << 1U)) 
                                             | (1U 
                                                & (~ 
                                                   (0x1fffffffU 
                                                    & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                                       >> 2U))))))) 
                                      ^ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__delayed_modem_signals))))));
        vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr 
            = ((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr)) 
               | ((0x80U & (((0x10U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr))
                              ? ((0xcU & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                          << 2U)) | 
                                 ((2U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                         >> 1U)) | 
                                  (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                         >> 3U)))) : 
                             ((8U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                     << 1U)) | ((4U 
                                                 & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                                    << 1U)) 
                                                | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                                   << 1U)))) 
                            << 7U)) | ((0x40U & (((0x10U 
                                                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr))
                                                   ? 
                                                  ((0xcU 
                                                    & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                          >> 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                            >> 3U))))
                                                   : 
                                                  ((8U 
                                                    & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                                       << 1U)) 
                                                   | ((4U 
                                                       & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                                          << 1U)) 
                                                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                                         << 1U)))) 
                                                 << 5U)) 
                                       | ((0x20U & 
                                           (((0x10U 
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
                                            << 3U)) 
                                          | (0x10U 
                                             & (((0x10U 
                                                  & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr))
                                                  ? 
                                                 ((0xcU 
                                                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                         >> 1U)) 
                                                     | (1U 
                                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                           >> 3U))))
                                                  : 
                                                 ((8U 
                                                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                                      << 1U)) 
                                                  | ((4U 
                                                      & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                                         << 1U)) 
                                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                                        << 1U)))) 
                                                << 1U))))));
    } else {
        vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr = 0U;
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_push_pulse) {
        vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 
            = (0xffU & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_data_in) 
                        >> 3U));
        vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 
            = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top;
    }
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push_q 
        = ((IData)(vlTOPp->aresetn) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push));
    if (vlTOPp->aresetn) {
        if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_bvalid) 
             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_bready))) {
            vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_pre_sel 
                = vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel;
        }
    } else {
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_pre_sel = 0U;
    }
    if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) 
         | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__flush_sign))) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__branch_slot_cancel = 0U;
    } else {
        if ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__btb_pre_error_flush) 
              & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_allowin)) 
             & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fs_to_ds_valid)))) {
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__branch_slot_cancel = 1U;
        } else {
            if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__branch_slot_cancel) 
                 & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fs_to_ds_valid))) {
                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__branch_slot_cancel = 0U;
            }
        }
    }
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__tmp_data_offset 
        = (0xfU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr);
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__tmp_data_index 
        = (0xffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                    >> 4U));
    if (vlTOPp->aresetn) {
        if (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop) {
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop = 0U;
        } else {
            if ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__re) 
                  & (0U == (7U & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr))) 
                 & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                       >> 7U)))) {
                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop = 1U;
            }
        }
    } else {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop = 0U;
    }
    if (vlTOPp->aresetn) {
        if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we) 
             & (2U == (7U & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)))) {
            if ((1U & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                          >> 7U)))) {
                vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fcr 
                    = (3U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai) 
                             >> 6U));
            }
        }
    } else {
        vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fcr = 3U;
    }
    if (vlTOPp->aresetn) {
        if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tx_reset) 
             | (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask))) {
            vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_overrun = 0U;
        } else {
            if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push) 
                 & (0x10U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count)))) {
                vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_overrun = 1U;
            }
        }
    } else {
        vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_overrun = 0U;
    }
    if (vlTOPp->aresetn) {
        if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we) 
             & (1U == (7U & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)))) {
            if ((1U & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                          >> 7U)))) {
                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier 
                    = (0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai));
            }
        } else {
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier 
                = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier;
        }
    } else {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier = 0U;
    }
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0r 
        = ((IData)(vlTOPp->aresetn) & (((((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count)) 
                                          & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop)) 
                                         & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_push_pulse))) 
                                        | (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_reset))
                                        ? 0U : ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0r) 
                                                | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0) 
                                                   & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0_d))))));
    if ((1U & ((~ (IData)(vlTOPp->aresetn)) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_bvalid) 
                                               & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_bready))))) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog = 0U;
    } else {
        if (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog)) 
             & (0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid)))) {
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog = 1U;
        }
    }
    if (vlTOPp->aresetn) {
        if (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog)) 
             & (0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid)))) {
            vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel_reg 
                = vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel;
        }
    } else {
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel_reg = 0U;
    }
    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr1r 
        = ((IData)(vlTOPp->aresetn) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask)
                                        ? 0U : ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr1r) 
                                                | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_overrun) 
                                                   & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr1_d))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__inst_vaddr_buffer 
        = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc;
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__idle_lock = 0U;
    } else {
        if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__idle_flush) 
             & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__has_int)))) {
            vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__idle_lock = 1U;
        } else {
            if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__has_int) {
                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__idle_lock = 0U;
            }
        }
    }
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant 
        = ((IData)(vlTOPp->aresetn) & ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_cpu) 
                                           & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_dma)))) 
                                       & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_dma) 
                                           & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_cpu))) 
                                          | ((~ (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_cpu) 
                                                  & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_dma)) 
                                                 & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)))) 
                                             & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_cpu) 
                                                 & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_dma)) 
                                                & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant))))));
    if (vlTOPp->aresetn) {
        if ((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__start_dlc) 
                   | (~ (IData)((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc))))))) {
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc 
                = (0xffffU & ((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl 
                               - (IData)(1U)) + (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_toggle)));
            vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_cnt 
                = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_next;
        } else {
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc 
                = (0xffffU & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc) 
                              - (IData)(1U)));
        }
    } else {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc = 0U;
        vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_cnt = 0U;
    }
    if (vlTOPp->aresetn) {
        if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r) 
             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push))) {
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt 
                = (0xffU & ((2U == (3U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))
                             ? ((IData)(0x16U) + (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value))
                             : (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value)));
        } else {
            if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__enable) 
                 & (0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt)))) {
                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt 
                    = (0xffU & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt) 
                                - (IData)(1U)));
            }
        }
    } else {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt = 0U;
    }
    if (vlTOPp->aresetn) {
        if ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode) 
              & (1U < (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fi_di_reg))) 
             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_en_reg))) {
            if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count) 
                 == (0x7fU & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fi_di_reg) 
                              >> 1U)))) {
                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count 
                    = (0xffU & ((IData)(1U) + (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count)));
                vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_reg = 1U;
            } else {
                if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count) 
                     == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fi_di_reg))) {
                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count = 0U;
                    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_reg = 0U;
                } else {
                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count 
                        = (0xffU & ((IData)(1U) + (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count)));
                }
            }
        } else {
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count = 0U;
            vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_reg = 0U;
        }
    } else {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count = 0U;
        vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_reg = 0U;
    }
    if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) 
         | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__flush_sign))) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_valid = 0U;
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ds_allowin) {
            vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_valid 
                = ((~ (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__btb_pre_error_flush) 
                        & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_allowin)) 
                       | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__branch_slot_cancel))) 
                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fs_to_ds_valid));
        }
    }
    if (vlTOPp->aresetn) {
        if (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_reset) {
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count = 0U;
            vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 1U;
        } else {
            if ((2U == (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_push_pulse) 
                         << 1U) | (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop)))) {
                if ((0x10U > (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count))) {
                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count 
                        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count)));
                    vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 
                        = (7U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_data_in));
                    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 1U;
                    vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 
                        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top;
                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top 
                        = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1;
                }
            } else {
                if ((1U == (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_push_pulse) 
                             << 1U) | (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop)))) {
                    if ((0U < (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count))) {
                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count 
                            = (0x1fU & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count) 
                                        - (IData)(1U)));
                        vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17 = 1U;
                        vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17 
                            = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom)));
                    }
                } else {
                    if ((3U == (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_push_pulse) 
                                 << 1U) | (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop)))) {
                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom)));
                        vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 
                            = (7U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_data_in));
                        vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 = 1U;
                        vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 
                            = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top;
                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top 
                            = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1;
                    }
                }
            }
        }
    } else {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count = 0U;
        vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v19 = 1U;
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push) {
        vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 
            = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai;
        vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 
            = vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top;
    }
    if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) 
         | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__flush_sign))) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_valid = 0U;
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_allowin) {
            vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_valid 
                = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_valid;
        }
    }
    if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) 
         | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__flush_sign))) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_valid = 0U;
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_allowin) {
            vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_valid 
                = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ms_valid;
        }
    }
    if ((1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ws_to_rf_bus 
                       >> 0x25U)))) {
        vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf__v0 
            = (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ws_to_rf_bus);
        vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf__v0 = 1U;
        vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf__v0 
            = (0x1fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ws_to_rf_bus 
                                >> 0x20U)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__read_respond_state = 0U;
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__read_respond_state) {
            if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__read_respond_state) {
                if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_rlast) 
                     & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu_rvalid))) {
                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__read_respond_state = 0U;
                }
            }
        } else {
            if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu_rvalid) 
                 & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu_bready))) {
                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__read_respond_state = 1U;
            }
        }
    }
    if ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) 
          | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_ready_go)) 
         | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__flush_sign))) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__data_rd_buff = 0U;
    }
    if ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) 
          | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_ready_go)) 
         | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__flush_sign))) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__data_buff_enable = 0U;
    }
    if ((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) 
                | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_div_enable))) 
               | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__complete_delay)))) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__count = 0x20U;
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__tmp_r = 0ULL;
    } else {
        if ((0x80U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__count))) {
            vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignR 
                = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__tmp_r;
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__count = 0xf0U;
        } else {
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__count 
                = (0xffU & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__count) 
                            - (IData)(1U)));
            if ((1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__tmp_d 
                               >> 0x20U)))) {
                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignS 
                    = ((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignS)) 
                       << 1U);
                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__tmp_r 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__result_r;
            } else {
                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignS 
                    = (1ULL | ((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignS)) 
                               << 1U));
                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__tmp_r 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__tmp_d;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->aresetn)))) {
        vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_no_delay 
            = (0xffU == (0xffffU & vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_random));
        vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_short_delay 
            = (0xffU == (0xffU & vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_random));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lookup_way0_hit_buffer = 0U;
    } else {
        if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode2) 
             & (2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state)))) {
            vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lookup_way0_hit_buffer 
                = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_hit;
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lookup_way1_hit_buffer = 0U;
    } else {
        if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode2) 
             & (2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state)))) {
            vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lookup_way1_hit_buffer 
                = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_hit;
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_ena) {
        if ((1U & (~ (IData)((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3_wea)))))) {
            vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__output_buffer 
                = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg
                [vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3_addra];
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_ena) {
        if ((1U & (~ (IData)((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2_wea)))))) {
            vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__output_buffer 
                = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg
                [vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2_addra];
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_ena) {
        if ((1U & (~ (IData)((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1_wea)))))) {
            vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__output_buffer 
                = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg
                [vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1_addra];
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_ena) {
        if ((1U & (~ (IData)((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0_wea)))))) {
            vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__output_buffer 
                = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg
                [vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0_addra];
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_ena) {
        if ((1U & (~ (IData)((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3_wea)))))) {
            vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__output_buffer 
                = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg
                [vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3_addra];
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_ena) {
        if ((1U & (~ (IData)((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2_wea)))))) {
            vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__output_buffer 
                = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg
                [vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2_addra];
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_ena) {
        if ((1U & (~ (IData)((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1_wea)))))) {
            vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__output_buffer 
                = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg
                [vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1_addra];
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_ena) {
        if ((1U & (~ (IData)((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_wea)))))) {
            vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__output_buffer 
                = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg
                [vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_addra];
        }
    }
    if (vlTOPp->aresetn) {
        if (vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en) {
            vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rvalid = 1U;
        } else {
            if ((8U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready))) {
                vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rvalid = 0U;
            }
        }
    } else {
        vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rvalid = 0U;
    }
    if (vlTOPp->aresetn) {
        if (vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_en) {
            vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rvalid = 1U;
        } else {
            if ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready))) {
                vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rvalid = 0U;
            }
        }
    } else {
        vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rvalid = 0U;
    }
    if (vlTOPp->aresetn) {
        if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_rvalid) 
             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_rready))) {
            vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_pre_sel 
                = vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir;
        }
    } else {
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_pre_sel = 0U;
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__y_31_buffer = 0U;
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_div_enable) {
            vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__y_31_buffer 
                = (1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U] 
                         >> 0x1fU));
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__x_31_buffer = 0U;
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_div_enable) {
            vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__x_31_buffer 
                = (1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[2U] 
                         >> 0x1fU));
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__div_signed_buffer = 0U;
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_div_enable) {
            vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__div_signed_buffer 
                = (1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[4U] 
                         >> 0x19U));
        }
    }
    if (vlTOPp->aresetn) {
        if (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_empty)) 
             & ((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_empty)) 
                  & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_rvalid)) 
                 & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_rready)) 
                & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_rlast)))) {
            vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr)));
        }
    } else {
        vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr = 0U;
    }
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__data_vaddr_buffer 
        = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr;
    if (vlTOPp->aresetn) {
        if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_dir_ins) 
             & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full)))) {
            vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v0 
                = vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir;
            vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v0 = 1U;
            vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v0 
                = (1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr));
        }
    } else {
        vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v1 = 1U;
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_push) {
        vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst = 1U;
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop) {
            vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst 
                = (3U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                                 >> 0xbU)));
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_push) {
        vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst = 1U;
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop) {
            vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst 
                = (3U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas 
                                 >> 0xbU)));
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en) {
        vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rid 
            = vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arid;
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_en) {
        vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rid 
            = vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arid;
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_push) {
        vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arsize 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu_arsize;
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop) {
            vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arsize 
                = (7U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                                 >> 8U)));
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_push) {
        vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arsize 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu_arsize;
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop) {
            vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arsize 
                = (7U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas 
                                 >> 8U)));
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_push) {
        vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen 
            = (0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT____Vcellout__cpu__arlen));
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop) {
            vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen 
                = (0xfU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                                   >> 4U)));
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_push) {
        vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen 
            = (0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT____Vcellout__cpu__arlen));
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop) {
            vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen 
                = (0xfU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas 
                                   >> 4U)));
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_push) {
        vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu_araddr;
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop) {
            vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr 
                = (IData)((vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                           >> 0xdU));
        } else {
            if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_en) 
                 & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last)))) {
                vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr 
                    = vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_next;
            }
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_go) {
        vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wdata 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu_wdata;
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_go) {
        vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wstrb 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu_wstrb;
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_go) {
        vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wstrb 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu_wstrb;
    }
    if (vlTOPp->aresetn) {
        if (vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__write_uart_valid) {
            vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__confreg_uart_data 
                = (0xffU & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata);
        }
    } else {
        vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__confreg_uart_data = 0U;
    }
    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__timer 
        = ((IData)(vlTOPp->aresetn) ? (((IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r2) 
                                        & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r3)))
                                        ? vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r2
                                        : ((IData)(1U) 
                                           + vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__timer))
            : 0U);
    vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r3 
        = vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r2;
    if ((((0x10U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state)) 
          & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_valid) 
              & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_last)) 
             | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__rd_req_buffer)))) 
         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_uncache_en) 
               | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode0))))) {
        if ((1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_replace_way)))) {
            vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_d_reg[((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index) 
                                                                                >> 5U)] 
                = (((~ ((IData)(1U) << (0x1fU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index)))) 
                    & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_d_reg[
                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index) 
                     >> 5U)]) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_op) 
                                 << (0x1fU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index))));
        }
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_state) {
            if ((1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_way)))) {
                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_d_reg[((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_index) 
                                                                                >> 5U)] 
                    = (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_d_reg[
                       ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_index) 
                        >> 5U)] | ((IData)(1U) << (0x1fU 
                                                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_index))));
            }
        }
    }
    if ((((0x10U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state)) 
          & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_valid) 
              & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_last)) 
             | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__rd_req_buffer)))) 
         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_uncache_en) 
               | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode0))))) {
        if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_replace_way) {
            vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_d_reg[((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index) 
                                                                                >> 5U)] 
                = (((~ ((IData)(1U) << (0x1fU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index)))) 
                    & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_d_reg[
                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index) 
                     >> 5U)]) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_op) 
                                 << (0x1fU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index))));
        }
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_state) {
            if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_way) {
                vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_d_reg[((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_index) 
                                                                                >> 5U)] 
                    = (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_d_reg[
                       ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_index) 
                        >> 5U)] | ((IData)(1U) << (0x1fU 
                                                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_index))));
            }
        }
    }
    if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ms_valid) 
         & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_allowin))) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0U] 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ms_bus[0U];
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[1U] 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ms_bus[1U];
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ms_bus[2U];
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[3U] 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ms_bus[3U];
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ms_bus[4U];
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ms_bus[5U];
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[6U] 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ms_bus[6U];
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[7U] 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ms_bus[7U];
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[8U] 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ms_bus[8U];
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[9U] 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ms_bus[9U];
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0xaU] 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ms_bus[0xaU];
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0xbU] 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ms_bus[0xbU];
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0xcU] 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ms_bus[0xcU];
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0xdU] 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ms_bus[0xdU];
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_push) {
        vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst = 1U;
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) {
            vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst 
                = (3U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                 >> 0xbU)));
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_push) {
        vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst = 1U;
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) {
            vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst 
                = (3U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
                                 >> 0xbU)));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset)))) {
        if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb_operate_en) {
            if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb_add_entry) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc__v0 
                    = (0x3fffffffU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                       << 0x1eU) | 
                                      (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[0U] 
                                       >> 2U)));
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc__v0 = 1U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc__v0 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__add_entry_index;
            }
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr = 0U;
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb_operate_en) {
            if ((1U & ((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                >> 0x15U)) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_full))))) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras__v0 
                    = (0x3fffffffU & ((IData)(1U) + 
                                      ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                        << 0x1eU) | 
                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[0U] 
                                        >> 2U))));
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras__v0 = 1U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras__v0 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr;
                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr 
                    = (7U & ((IData)(1U) + (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)));
            } else {
                if ((1U & ((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                    >> 0x13U)) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_empty))))) {
                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr 
                        = (7U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_push) {
        vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awsize 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu_awsize;
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) {
            vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awsize 
                = (7U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                 >> 8U)));
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_push) {
        vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awsize 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu_awsize;
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) {
            vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awsize 
                = (7U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
                                 >> 8U)));
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_push) {
        vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen 
            = (0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT____Vcellout__cpu__awlen));
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) {
            vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen 
                = (0xfU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                   >> 4U)));
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_push) {
        vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awlen 
            = (0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT____Vcellout__cpu__awlen));
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) {
            vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awlen 
                = (0xfU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
                                   >> 4U)));
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_push) {
        vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu_awaddr;
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) {
            vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr 
                = (IData)((vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                           >> 0xdU));
        } else {
            if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en) 
                 & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wlast)))) {
                vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr 
                    = vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_next;
            }
        }
    }
    if (vlTOPp->aresetn) {
        if (((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                 >> 2U) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__apb_s_bvalid))) 
               & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd))) 
              & (1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm))) 
             & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)))) {
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr 
                = (0xfffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu_awaddr);
            vlTOPp->simu_top__DOT__soc__DOT__apb_s_awready = 1U;
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr = 1U;
            vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_wr_size 
                = vlTOPp->simu_top__DOT__soc__DOT__cpu_awsize;
        } else {
            if (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr) {
                vlTOPp->simu_top__DOT__soc__DOT__apb_s_awready = 0U;
                if ((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                            >> 2U) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__apb_s_wready))))) {
                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr 
                        = (0xfffffU & (((2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu_wstrb)) 
                                        & (0U == (3U 
                                                  & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr)))
                                        ? ((IData)(1U) 
                                           + vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr)
                                        : (((4U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu_wstrb)) 
                                            & (0U == 
                                               (3U 
                                                & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr)))
                                            ? ((IData)(2U) 
                                               + vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr)
                                            : (((8U 
                                                 == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu_wstrb)) 
                                                & (0U 
                                                   == 
                                                   (3U 
                                                    & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr)))
                                                ? ((IData)(3U) 
                                                   + vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr)
                                                : (
                                                   ((6U 
                                                     == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu_wstrb)) 
                                                    & (0U 
                                                       == 
                                                       (3U 
                                                        & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr)
                                                    : 
                                                   (((0xcU 
                                                      == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu_wstrb)) 
                                                     & (0U 
                                                        == 
                                                        (3U 
                                                         & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr)))
                                                     ? 
                                                    ((IData)(2U) 
                                                     + vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr)
                                                     : vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr))))));
                    vlTOPp->simu_top__DOT__soc__DOT__apb_s_wready = 1U;
                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 0U;
                    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
                    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_w_id = 1U;
                    if ((2U & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr)) {
                        if ((1U & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr)) {
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb 
                                = (1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu_wstrb) 
                                         >> 3U));
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 
                                = (0xffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu_wdata 
                                            >> 0x18U));
                        } else {
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb 
                                = (3U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu_wstrb) 
                                         >> 2U));
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 
                                = (0xffffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu_wdata 
                                              >> 0x10U));
                        }
                    } else {
                        if ((1U & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr)) {
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb 
                                = (7U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu_wstrb) 
                                         >> 1U));
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 
                                = (0xffffffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu_wdata 
                                                >> 8U));
                        } else {
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb 
                                = vlTOPp->simu_top__DOT__soc__DOT__cpu_wstrb;
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 
                                = vlTOPp->simu_top__DOT__soc__DOT__cpu_wdata;
                        }
                    }
                } else {
                    if (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu)) 
                         & (0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb)))) {
                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                        vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
                        vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datai_cpu 
                            = (0xffU & ((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb))
                                         ? vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32
                                         : ((2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb))
                                             ? (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 
                                                >> 8U)
                                             : ((6U 
                                                 == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb))
                                                 ? 
                                                (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 
                                                 >> 8U)
                                                 : 
                                                ((4U 
                                                  == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb))
                                                  ? 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 
                                                  >> 0x10U)
                                                  : 
                                                 ((8U 
                                                   == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb))
                                                   ? 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 
                                                   >> 0x18U)
                                                   : vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32))))));
                        if ((4U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready))) {
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__apb_s_bvalid = 0U;
                        }
                        vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_high_24b_wr 
                            = (0xffffffU & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 
                                            >> 8U));
                    } else {
                        if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_word_trans_cpu) 
                             & (0xfU == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb)))) {
                            if (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready) {
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 0U;
                                vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr = 0U;
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__apb_s_bvalid = 1U;
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb = 0U;
                            } else {
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                                vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 1U;
                            }
                            vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datai_cpu 
                                = (0xffU & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32);
                            vlTOPp->simu_top__DOT__soc__DOT__apb_s_wready = 0U;
                            vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_high_24b_wr 
                                = (0xffffffU & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 
                                                >> 8U));
                        } else {
                            if ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb))) {
                                if (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready) {
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr 
                                        = (0xfffffU 
                                           & ((IData)(1U) 
                                              + vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr));
                                    if ((0U == (7U 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb) 
                                                   >> 1U)))) {
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 0U;
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr = 0U;
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__apb_s_bvalid = 1U;
                                    } else {
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                                    }
                                    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
                                    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datai_cpu 
                                        = (0xffU & 
                                           (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 
                                            >> 8U));
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb 
                                        = (0xeU & (IData)(vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb));
                                } else {
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                                    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 1U;
                                    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datai_cpu 
                                        = (0xffU & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32);
                                }
                                vlTOPp->simu_top__DOT__soc__DOT__apb_s_wready = 0U;
                            } else {
                                if ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb))) {
                                    if (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready) {
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr 
                                            = (0xfffffU 
                                               & ((IData)(1U) 
                                                  + vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr));
                                        if ((0U == 
                                             (3U & 
                                              ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb) 
                                               >> 2U)))) {
                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 0U;
                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr = 0U;
                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__apb_s_bvalid = 1U;
                                        } else {
                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                                        }
                                        vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
                                        vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datai_cpu 
                                            = (0xffU 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 
                                                  >> 0x10U));
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb 
                                            = (0xdU 
                                               & (IData)(vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb));
                                    } else {
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                                        vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 1U;
                                    }
                                    vlTOPp->simu_top__DOT__soc__DOT__apb_s_wready = 0U;
                                } else {
                                    if ((4U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb))) {
                                        if (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready) {
                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr 
                                                = (0xfffffU 
                                                   & ((IData)(1U) 
                                                      + vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr));
                                            if ((8U 
                                                 & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb))) {
                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                                            } else {
                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 0U;
                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr = 0U;
                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__apb_s_bvalid = 1U;
                                            }
                                            vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
                                            vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datai_cpu 
                                                = (0xffU 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 
                                                      >> 0x18U));
                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb 
                                                = (0xbU 
                                                   & (IData)(vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb));
                                        } else {
                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                                            vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 1U;
                                        }
                                        vlTOPp->simu_top__DOT__soc__DOT__apb_s_wready = 0U;
                                    } else {
                                        if ((8U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb))) {
                                            if (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready) {
                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 0U;
                                                vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr = 0U;
                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__apb_s_bvalid = 1U;
                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb 
                                                    = 
                                                    (7U 
                                                     & (IData)(vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb));
                                            } else {
                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                                                vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 1U;
                                            }
                                            vlTOPp->simu_top__DOT__soc__DOT__apb_s_wready = 0U;
                                        } else {
                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 0U;
                                            vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
                                            vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datai_cpu = 0U;
                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb = 0U;
                                            vlTOPp->simu_top__DOT__soc__DOT__apb_s_wready = 0U;
                                            if ((1U 
                                                 == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm))) {
                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr = 0U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                         >> 2U) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__apb_s_arready))) 
                       & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__apb_s_bvalid))) 
                      & (1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm))) 
                     & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)))) {
                    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                    vlTOPp->simu_top__DOT__soc__DOT__apb_s_arready = 1U;
                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd = 1U;
                    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_r_id 
                        = vlTOPp->simu_top__DOT__soc__DOT__cpu_arid;
                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size 
                        = vlTOPp->simu_top__DOT__soc__DOT__cpu_arsize;
                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr 
                        = (0xfffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu_araddr);
                    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb 
                        = (0xfU & vlTOPp->simu_top__DOT__soc__DOT__cpu_araddr);
                    if ((2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu_arsize))) {
                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count = 4U;
                    } else {
                        if ((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu_arsize))) {
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count = 2U;
                        } else {
                            if ((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu_arsize))) {
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count = 1U;
                            }
                        }
                    }
                } else {
                    if (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd) {
                        vlTOPp->simu_top__DOT__soc__DOT__apb_s_arready = 0U;
                        if (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_word_trans_cpu) {
                            if (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready) {
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu 
                                    = (2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count));
                                vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
                                vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                                    = ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)
                                          ? 0U : ((0U 
                                                   != 
                                                   (0x3fU 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                       >> 0xeU)))
                                                   ? 
                                                  (0xffffffU 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__REG_DAT_T 
                                                      >> 8U))
                                                   : 0U)) 
                                        << 8U) | (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datao_cpu));
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count 
                                    = (7U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count) 
                                             - (IData)(1U)));
                                vlTOPp->simu_top__DOT__soc__DOT__apb_s_rlast 
                                    = ((2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size)) 
                                       | (1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count)));
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__apb_s_rvalid 
                                    = ((2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size)) 
                                       | (1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count)));
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd 
                                    = (2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count));
                            } else {
                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                                vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 1U;
                            }
                        } else {
                            if ((4U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count))) {
                                if (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready) {
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count 
                                        = (7U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count) 
                                                 - (IData)(1U)));
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr 
                                        = (0xfffffU 
                                           & ((IData)(1U) 
                                              + vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr));
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                                    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
                                    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                                        = ((0xffffff00U 
                                            & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32) 
                                           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datao_cpu));
                                } else {
                                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                                    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 1U;
                                }
                            } else {
                                if ((3U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count))) {
                                    if (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready) {
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count 
                                            = (7U & 
                                               ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count) 
                                                - (IData)(1U)));
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr 
                                            = (0xfffffU 
                                               & ((IData)(1U) 
                                                  + vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr));
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                                        vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
                                        vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                                            = ((0xffff00ffU 
                                                & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32) 
                                               | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datao_cpu) 
                                                  << 8U));
                                    } else {
                                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                                        vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 1U;
                                    }
                                } else {
                                    if ((2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count))) {
                                        if (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready) {
                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count 
                                                = (7U 
                                                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count) 
                                                      - (IData)(1U)));
                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr 
                                                = (0xfffffU 
                                                   & ((IData)(1U) 
                                                      + vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr));
                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                                            vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
                                            if ((2U 
                                                 == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size))) {
                                                vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                                                    = 
                                                    ((0xff00ffffU 
                                                      & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32) 
                                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datao_cpu) 
                                                        << 0x10U));
                                            } else {
                                                if (
                                                    (1U 
                                                     == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size))) {
                                                    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                                                        = 
                                                        ((0xffffff00U 
                                                          & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32) 
                                                         | (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datao_cpu));
                                                }
                                            }
                                        } else {
                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                                            vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 1U;
                                        }
                                    } else {
                                        if ((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count))) {
                                            if (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready) {
                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 0U;
                                                vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
                                                vlTOPp->simu_top__DOT__soc__DOT__apb_s_rlast = 1U;
                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__apb_s_rvalid = 1U;
                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd = 0U;
                                                if (
                                                    (2U 
                                                     == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size))) {
                                                    vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                                                        = 
                                                        ((0xffffffU 
                                                          & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32) 
                                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datao_cpu) 
                                                            << 0x18U));
                                                } else {
                                                    if (
                                                        (1U 
                                                         == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size))) {
                                                        vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                                                            = 
                                                            ((0xffff00ffU 
                                                              & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32) 
                                                             | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datao_cpu) 
                                                                << 8U));
                                                    } else {
                                                        if (
                                                            (0U 
                                                             == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size))) {
                                                            vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 
                                                                = 
                                                                ((0xffffff00U 
                                                                  & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32) 
                                                                 | (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datao_cpu));
                                                        }
                                                    }
                                                }
                                            } else {
                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 1U;
                                                vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 1U;
                                            }
                                        } else {
                                            vlTOPp->simu_top__DOT__soc__DOT__apb_s_arready = 0U;
                                            vlTOPp->simu_top__DOT__soc__DOT__apb_s_rlast = 1U;
                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 0U;
                                            vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
                                            if ((1U 
                                                 == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm))) {
                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd = 0U;
                                            }
                                            if ((4U 
                                                 & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready))) {
                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__apb_s_bvalid = 0U;
                                            }
                                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__apb_s_rvalid = 1U;
                                            if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__apb_s_rvalid) 
                                                 & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                                    >> 2U))) {
                                                vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 = 0U;
                                                vlTOPp->simu_top__DOT__soc__DOT__apb_s_rlast = 0U;
                                                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__apb_s_rvalid = 0U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 0U;
                        vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr = 0U;
                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd = 0U;
                        vlTOPp->simu_top__DOT__soc__DOT__apb_s_wready = 0U;
                        vlTOPp->simu_top__DOT__soc__DOT__apb_s_arready = 0U;
                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr = 0U;
                        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 = 0U;
                        if ((4U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready))) {
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__apb_s_bvalid = 0U;
                        }
                        if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__apb_s_rvalid) 
                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                >> 2U))) {
                            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__apb_s_rvalid = 0U;
                            vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 = 0U;
                            vlTOPp->simu_top__DOT__soc__DOT__apb_s_rlast = 0U;
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__apb_s_rvalid = 0U;
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 = 0U;
        vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 = 0U;
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr = 0U;
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb = 0U;
        vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb = 0U;
        vlTOPp->simu_top__DOT__soc__DOT__apb_s_wready = 0U;
        vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = 0U;
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = 0U;
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count = 0U;
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size = 0U;
        vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_wr_size = 0U;
        vlTOPp->simu_top__DOT__soc__DOT__apb_s_rlast = 0U;
        vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datai_cpu = 0U;
        vlTOPp->simu_top__DOT__soc__DOT__apb_s_awready = 0U;
        vlTOPp->simu_top__DOT__soc__DOT__apb_s_arready = 0U;
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__apb_s_bvalid = 0U;
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr = 0U;
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd = 0U;
        vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_w_id = 0U;
        vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_r_id = 0U;
        vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_high_24b_wr = 0U;
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xfffffffeU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (1U & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                         [0U]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                  >> 0xcU) : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                              >> 0x15U))));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xfffffffdU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (2U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                          [1U]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                   >> 0xcU) : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                               >> 0x15U)) 
                        << 1U)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xfffffffbU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (4U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                          [2U]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                   >> 0xcU) : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                               >> 0x15U)) 
                        << 2U)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xfffffff7U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (8U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                          [3U]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                   >> 0xcU) : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                               >> 0x15U)) 
                        << 3U)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xffffffefU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (0x10U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                             [4U]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                      >> 0xcU) : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                                  >> 0x15U)) 
                           << 4U)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xffffffdfU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (0x20U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                             [5U]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                      >> 0xcU) : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                                  >> 0x15U)) 
                           << 5U)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xffffffbfU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (0x40U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                             [6U]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                      >> 0xcU) : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                                  >> 0x15U)) 
                           << 6U)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xffffff7fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (0x80U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                             [7U]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                      >> 0xcU) : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                                  >> 0x15U)) 
                           << 7U)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xfffffeffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (0x100U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                              [8U]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                       >> 0xcU) : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                                   >> 0x15U)) 
                            << 8U)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xfffffdffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (0x200U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                              [9U]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                       >> 0xcU) : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                                   >> 0x15U)) 
                            << 9U)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xfffffbffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (0x400U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                              [0xaU]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                         >> 0xcU) : 
                             (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                              >> 0x15U)) << 0xaU)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xfffff7ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (0x800U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                              [0xbU]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                         >> 0xcU) : 
                             (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                              >> 0x15U)) << 0xbU)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xffffefffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (0x1000U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                               [0xcU]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                          >> 0xcU) : 
                              (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                               >> 0x15U)) << 0xcU)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xffffdfffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (0x2000U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                               [0xdU]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                          >> 0xcU) : 
                              (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                               >> 0x15U)) << 0xdU)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xffffbfffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (0x4000U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                               [0xeU]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                          >> 0xcU) : 
                              (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                               >> 0x15U)) << 0xeU)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xffff7fffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (0x8000U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                               [0xfU]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                          >> 0xcU) : 
                              (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                               >> 0x15U)) << 0xfU)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xfffeffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (0x10000U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x10U]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                            >> 0xcU)
                                : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                   >> 0x15U)) << 0x10U)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xfffdffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (0x20000U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x11U]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                            >> 0xcU)
                                : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                   >> 0x15U)) << 0x11U)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xfffbffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (0x40000U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x12U]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                            >> 0xcU)
                                : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                   >> 0x15U)) << 0x12U)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xfff7ffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (0x80000U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x13U]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                            >> 0xcU)
                                : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                   >> 0x15U)) << 0x13U)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xffefffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (0x100000U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                 [0x14U]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                             >> 0xcU)
                                 : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                    >> 0x15U)) << 0x14U)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xffdfffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (0x200000U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                 [0x15U]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                             >> 0xcU)
                                 : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                    >> 0x15U)) << 0x15U)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xffbfffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (0x400000U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                 [0x16U]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                             >> 0xcU)
                                 : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                    >> 0x15U)) << 0x16U)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xff7fffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (0x800000U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                 [0x17U]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                             >> 0xcU)
                                 : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                    >> 0x15U)) << 0x17U)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xfeffffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (0x1000000U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                  [0x18U]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                              >> 0xcU)
                                  : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                     >> 0x15U)) << 0x18U)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xfdffffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (0x2000000U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                  [0x19U]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                              >> 0xcU)
                                  : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                     >> 0x15U)) << 0x19U)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xfbffffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (0x4000000U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                  [0x1aU]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                              >> 0xcU)
                                  : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                     >> 0x15U)) << 0x1aU)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xf7ffffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (0x8000000U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                  [0x1bU]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                              >> 0xcU)
                                  : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                     >> 0x15U)) << 0x1bU)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xefffffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (0x10000000U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                   [0x1cU]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                               >> 0xcU)
                                   : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                      >> 0x15U)) << 0x1cU)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xdfffffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (0x20000000U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                   [0x1dU]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                               >> 0xcU)
                                   : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                      >> 0x15U)) << 0x1dU)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0xbfffffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (0x40000000U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                   [0x1eU]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                               >> 0xcU)
                                   : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                      >> 0x15U)) << 0x1eU)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer 
            = ((0x7fffffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer) 
               | (0x80000000U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                   [0x1fU]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                               >> 0xcU)
                                   : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                      >> 0x15U)) << 0x1fU)));
    }
    if (vlTOPp->aresetn) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr7 
            = (((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                & (0x8070U == (0xffffU & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))
                ? vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata
                : vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__cr7);
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr5 
            = (((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                & (0x8050U == (0xffffU & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))
                ? vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata
                : vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__cr5);
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr4 
            = (((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                & (0x8040U == (0xffffU & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))
                ? vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata
                : vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__cr4);
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr3 
            = (((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                & (0x8030U == (0xffffU & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))
                ? vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata
                : vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__cr3);
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr2 
            = (((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                & (0x8020U == (0xffffU & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))
                ? vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata
                : vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__cr2);
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr1 
            = (((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                & (0x8010U == (0xffffU & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))
                ? vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata
                : vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__cr1);
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr6 
            = (((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                & (0x8060U == (0xffffU & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))
                ? vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata
                : vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__cr6);
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr0 
            = (((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                & (0x8000U == (0xffffU & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))
                ? vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata
                : vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__cr0);
    } else {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr7 = 0U;
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr5 = 0U;
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr4 = 0U;
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr3 = 0U;
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr2 = 0U;
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr1 = 0U;
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr6 = 0U;
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr0 = 0U;
    }
    __Vtableidx5 = (((IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__scan_data) 
                     << 1U) | (IData)(vlTOPp->aresetn));
    vlTOPp->num_a_g = vlTOPp->__Vtable5_num_a_g[__Vtableidx5];
    if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) 
         & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop) 
            | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid))))) {
        vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_data 
            = vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awid;
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop) {
            vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_data 
                = vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_datas;
        }
    }
    if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) 
         & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop) 
            | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid))))) {
        vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_data 
            = vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awid;
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop) {
            vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_data 
                = vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_datas;
        }
    }
    if ((1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset)))) {
        if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb_operate_en) {
            if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb_add_entry) {
                vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target__v0 
                    = (0x3fffffffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_target 
                                      >> 2U));
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target__v0 = 1U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target__v0 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__add_entry_index;
            } else {
                if ((1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb_delete_entry)))) {
                    if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb_target_error) 
                         & (~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                       >> 0x13U))))) {
                        vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target__v1 
                            = (0x3fffffffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_target 
                                              >> 2U));
                        vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target__v1 = 1U;
                        vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target__v1 
                            = (0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[3U] 
                                         << 0x18U) 
                                        | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                           >> 8U)));
                    }
                }
            }
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xfffffffeU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (1U & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                         [0U]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                  >> 0xcU) : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                              >> 0x15U))));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xfffffffdU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (2U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                          [1U]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                   >> 0xcU) : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                               >> 0x15U)) 
                        << 1U)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xfffffffbU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (4U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                          [2U]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                   >> 0xcU) : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                               >> 0x15U)) 
                        << 2U)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xfffffff7U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (8U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                          [3U]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                   >> 0xcU) : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                               >> 0x15U)) 
                        << 3U)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xffffffefU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (0x10U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                             [4U]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                      >> 0xcU) : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                                  >> 0x15U)) 
                           << 4U)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xffffffdfU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (0x20U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                             [5U]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                      >> 0xcU) : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                                  >> 0x15U)) 
                           << 5U)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xffffffbfU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (0x40U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                             [6U]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                      >> 0xcU) : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                                  >> 0x15U)) 
                           << 6U)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xffffff7fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (0x80U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                             [7U]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                      >> 0xcU) : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                                  >> 0x15U)) 
                           << 7U)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xfffffeffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (0x100U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                              [8U]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                       >> 0xcU) : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                                   >> 0x15U)) 
                            << 8U)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xfffffdffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (0x200U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                              [9U]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                       >> 0xcU) : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                                   >> 0x15U)) 
                            << 9U)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xfffffbffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (0x400U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                              [0xaU]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                         >> 0xcU) : 
                             (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                              >> 0x15U)) << 0xaU)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xfffff7ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (0x800U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                              [0xbU]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                         >> 0xcU) : 
                             (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                              >> 0x15U)) << 0xbU)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xffffefffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (0x1000U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                               [0xcU]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                          >> 0xcU) : 
                              (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                               >> 0x15U)) << 0xcU)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xffffdfffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (0x2000U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                               [0xdU]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                          >> 0xcU) : 
                              (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                               >> 0x15U)) << 0xdU)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xffffbfffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (0x4000U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                               [0xeU]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                          >> 0xcU) : 
                              (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                               >> 0x15U)) << 0xeU)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xffff7fffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (0x8000U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                               [0xfU]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                          >> 0xcU) : 
                              (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                               >> 0x15U)) << 0xfU)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xfffeffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (0x10000U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x10U]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                            >> 0xcU)
                                : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                   >> 0x15U)) << 0x10U)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xfffdffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (0x20000U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x11U]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                            >> 0xcU)
                                : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                   >> 0x15U)) << 0x11U)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xfffbffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (0x40000U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x12U]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                            >> 0xcU)
                                : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                   >> 0x15U)) << 0x12U)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xfff7ffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (0x80000U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x13U]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                            >> 0xcU)
                                : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                   >> 0x15U)) << 0x13U)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xffefffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (0x100000U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                 [0x14U]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                             >> 0xcU)
                                 : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                    >> 0x15U)) << 0x14U)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xffdfffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (0x200000U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                 [0x15U]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                             >> 0xcU)
                                 : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                    >> 0x15U)) << 0x15U)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xffbfffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (0x400000U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                 [0x16U]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                             >> 0xcU)
                                 : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                    >> 0x15U)) << 0x16U)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xff7fffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (0x800000U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                 [0x17U]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                             >> 0xcU)
                                 : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                    >> 0x15U)) << 0x17U)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xfeffffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (0x1000000U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                  [0x18U]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                              >> 0xcU)
                                  : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                     >> 0x15U)) << 0x18U)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xfdffffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (0x2000000U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                  [0x19U]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                              >> 0xcU)
                                  : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                     >> 0x15U)) << 0x19U)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xfbffffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (0x4000000U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                  [0x1aU]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                              >> 0xcU)
                                  : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                     >> 0x15U)) << 0x1aU)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xf7ffffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (0x8000000U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                  [0x1bU]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                              >> 0xcU)
                                  : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                     >> 0x15U)) << 0x1bU)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xefffffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (0x10000000U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                   [0x1cU]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                               >> 0xcU)
                                   : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                      >> 0x15U)) << 0x1cU)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xdfffffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (0x20000000U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                   [0x1dU]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                               >> 0xcU)
                                   : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                      >> 0x15U)) << 0x1dU)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0xbfffffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (0x40000000U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                   [0x1eU]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                               >> 0xcU)
                                   : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                      >> 0x15U)) << 0x1eU)));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer 
            = ((0x7fffffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer) 
               | (0x80000000U & (((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                   [0x1fU]) ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                               >> 0xcU)
                                   : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                      >> 0x15U)) << 0x1fU)));
    }
    if ((1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset)))) {
        if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb_operate_en) {
            if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb_add_entry) {
                vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter__v0 = 1U;
                vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter__v0 
                    = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__add_entry_index;
            } else {
                if ((1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb_delete_entry)))) {
                    if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb_target_error) 
                         & (~ (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                       >> 0x13U))))) {
                        vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter__v1 = 1U;
                        vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter__v1 
                            = (0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[3U] 
                                         << 0x18U) 
                                        | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                           >> 8U)));
                    } else {
                        if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb_pre_error) 
                             | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_to_btb) 
                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                    >> 6U)) & (~ ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                   >> 7U) 
                                                  ^ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_taken)))))) {
                            if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_taken) {
                                if ((7U != vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter
                                     [(0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[3U] 
                                                 << 0x18U) 
                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                   >> 8U)))])) {
                                    vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter__v2 
                                        = (7U & ((IData)(1U) 
                                                 + 
                                                 vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter
                                                 [(0x1fU 
                                                   & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[3U] 
                                                       << 0x18U) 
                                                      | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                         >> 8U)))]));
                                    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter__v2 = 1U;
                                    vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter__v2 
                                        = (0x1fU & 
                                           ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[3U] 
                                             << 0x18U) 
                                            | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                               >> 8U)));
                                }
                            } else {
                                if ((0U != vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter
                                     [(0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[3U] 
                                                 << 0x18U) 
                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                   >> 8U)))])) {
                                    vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter__v3 
                                        = (7U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter
                                                 [(0x1fU 
                                                   & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[3U] 
                                                       << 0x18U) 
                                                      | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                         >> 8U)))] 
                                                 - (IData)(1U)));
                                    vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter__v3 = 1U;
                                    vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter__v3 
                                        = (0x1fU & 
                                           ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[3U] 
                                             << 0x18U) 
                                            | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                               >> 8U)));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->aresetn) {
        if (vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en) {
            vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__conf_rdata_reg 
                = ((0x8000U & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                    ? ((0x4000U & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                        ? ((0x2000U & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                            ? ((0x1000U & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                ? ((0x800U & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                    ? ((0x400U & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                        ? ((0x200U 
                                            & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                            ? ((0x100U 
                                                & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                ? (
                                                   (0x80U 
                                                    & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                    ? 0U
                                                    : 
                                                   ((0x40U 
                                                     & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                     ? 
                                                    ((0x20U 
                                                      & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                      ? 0U
                                                      : 
                                                     ((0x10U 
                                                       & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                       ? 0U
                                                       : 
                                                      ((8U 
                                                        & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                        ? 0U
                                                        : 
                                                       ((4U 
                                                         & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                         ? 0U
                                                         : 
                                                        ((2U 
                                                          & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                          ? 0U
                                                          : 
                                                         ((1U 
                                                           & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                           ? 0U
                                                           : (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__num_monitor)))))))
                                                     : 
                                                    ((0x20U 
                                                      & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                      ? 
                                                     ((0x10U 
                                                       & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                       ? 
                                                      ((8U 
                                                        & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                        ? 0U
                                                        : 
                                                       ((4U 
                                                         & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                         ? 0U
                                                         : 
                                                        ((2U 
                                                          & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                          ? 0U
                                                          : 
                                                         ((1U 
                                                           & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                           ? 0U
                                                           : (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__open_trace)))))
                                                       : 
                                                      ((8U 
                                                        & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                        ? 0U
                                                        : 
                                                       ((4U 
                                                         & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                         ? 0U
                                                         : 
                                                        ((2U 
                                                          & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                          ? 0U
                                                          : 
                                                         ((1U 
                                                           & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                           ? 0U
                                                           : vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__simu_flag)))))
                                                      : 
                                                     ((0x10U 
                                                       & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                       ? 
                                                      ((8U 
                                                        & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                        ? 0U
                                                        : 
                                                       ((4U 
                                                         & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                         ? 0U
                                                         : 
                                                        ((2U 
                                                          & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                          ? 0U
                                                          : 
                                                         ((1U 
                                                           & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                           ? 0U
                                                           : (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__virtual_uart_data)))))
                                                       : 
                                                      ((8U 
                                                        & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                        ? 0U
                                                        : 
                                                       ((4U 
                                                         & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                         ? 0U
                                                         : 
                                                        ((2U 
                                                          & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                          ? 0U
                                                          : 
                                                         ((1U 
                                                           & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                           ? 0U
                                                           : vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__io_simu))))))))
                                                : 0U)
                                            : 0U) : 0U)
                                    : ((0x400U & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                        ? 0U : ((0x200U 
                                                 & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                 ? 0U
                                                 : 
                                                ((0x100U 
                                                  & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                  ? 0U
                                                  : 
                                                 ((0x80U 
                                                   & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                   ? 
                                                  ((0x40U 
                                                    & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                    ? 0U
                                                    : 
                                                   ((0x20U 
                                                     & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                     ? 0U
                                                     : 
                                                    ((0x10U 
                                                      & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                      ? 
                                                     ((8U 
                                                       & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                          ? 0U
                                                          : 
                                                         ((0x8000U 
                                                           & ((IData)(vlTOPp->__SYM__switch) 
                                                              << 8U)) 
                                                          | ((0x2000U 
                                                              & ((IData)(vlTOPp->__SYM__switch) 
                                                                 << 7U)) 
                                                             | ((0x800U 
                                                                 & ((IData)(vlTOPp->__SYM__switch) 
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
                                                                                << 1U)))))))))))))
                                                      : 
                                                     ((8U 
                                                       & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                          ? 0U
                                                          : 
                                                         ((2U 
                                                           & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r)))))))))))
                                                   : 
                                                  ((0x40U 
                                                    & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                    ? 
                                                   ((0x20U 
                                                     & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                     ? 
                                                    ((0x10U 
                                                      & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                      ? 
                                                     ((8U 
                                                       & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                          ? 0U
                                                          : (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__btn_key_r)))))
                                                      : 
                                                     ((8U 
                                                       & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                          ? 0U
                                                          : (IData)(vlTOPp->__SYM__switch))))))
                                                     : 
                                                    ((0x10U 
                                                      & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                      ? 
                                                     ((8U 
                                                       & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                          ? 0U
                                                          : vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__num_data))))
                                                      : 
                                                     ((8U 
                                                       & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                          ? 0U
                                                          : vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__led_rg1_data))))))
                                                    : 
                                                   ((0x20U 
                                                     & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                     ? 
                                                    ((0x10U 
                                                      & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                      ? 
                                                     ((8U 
                                                       & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                          ? 0U
                                                          : vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__led_rg0_data))))
                                                      : 
                                                     ((8U 
                                                       & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                          ? 0U
                                                          : vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__led_data)))))
                                                     : 0U)))))))
                                : ((0x800U & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                    ? 0U : ((0x400U 
                                             & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                             ? 0U : 
                                            ((0x200U 
                                              & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                              ? 0U : 
                                             ((0x100U 
                                               & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                               ? 0U
                                               : ((0x80U 
                                                   & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                   ? 0U
                                                   : 
                                                  ((0x40U 
                                                    & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                    ? 0U
                                                    : 
                                                   ((0x20U 
                                                     & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                     ? 0U
                                                     : 
                                                    ((0x10U 
                                                      & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                          ? 0U
                                                          : vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__timer_r2)))))))))))))
                            : 0U) : ((0x2000U & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                      ? 0U : ((0x1000U 
                                               & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                               ? 0U
                                               : ((0x800U 
                                                   & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                   ? 0U
                                                   : 
                                                  ((0x400U 
                                                    & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                     ? 0U
                                                     : 
                                                    ((0x100U 
                                                      & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                      ? 0U
                                                      : 
                                                     ((0x80U 
                                                       & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                       ? 0U
                                                       : 
                                                      ((0x40U 
                                                        & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                        ? 
                                                       ((0x20U 
                                                         & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                         ? 
                                                        ((0x10U 
                                                          & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                          ? 
                                                         ((8U 
                                                           & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                           ? 0U
                                                           : 
                                                          ((4U 
                                                            & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                            ? 0U
                                                            : 
                                                           ((2U 
                                                             & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                             ? 0U
                                                             : 
                                                            ((1U 
                                                              & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__cr7))))
                                                          : 
                                                         ((8U 
                                                           & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                           ? 0U
                                                           : 
                                                          ((4U 
                                                            & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                            ? 0U
                                                            : 
                                                           ((2U 
                                                             & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                             ? 0U
                                                             : 
                                                            ((1U 
                                                              & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__cr6)))))
                                                         : 
                                                        ((0x10U 
                                                          & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                          ? 
                                                         ((8U 
                                                           & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                           ? 0U
                                                           : 
                                                          ((4U 
                                                            & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                            ? 0U
                                                            : 
                                                           ((2U 
                                                             & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                             ? 0U
                                                             : 
                                                            ((1U 
                                                              & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__cr5))))
                                                          : 
                                                         ((8U 
                                                           & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                           ? 0U
                                                           : 
                                                          ((4U 
                                                            & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                            ? 0U
                                                            : 
                                                           ((2U 
                                                             & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                             ? 0U
                                                             : 
                                                            ((1U 
                                                              & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__cr4))))))
                                                        : 
                                                       ((0x20U 
                                                         & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                         ? 
                                                        ((0x10U 
                                                          & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                          ? 
                                                         ((8U 
                                                           & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                           ? 0U
                                                           : 
                                                          ((4U 
                                                            & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                            ? 0U
                                                            : 
                                                           ((2U 
                                                             & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                             ? 0U
                                                             : 
                                                            ((1U 
                                                              & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__cr3))))
                                                          : 
                                                         ((8U 
                                                           & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                           ? 0U
                                                           : 
                                                          ((4U 
                                                            & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                            ? 0U
                                                            : 
                                                           ((2U 
                                                             & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                             ? 0U
                                                             : 
                                                            ((1U 
                                                              & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__cr2)))))
                                                         : 
                                                        ((0x10U 
                                                          & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                          ? 
                                                         ((8U 
                                                           & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                           ? 0U
                                                           : 
                                                          ((4U 
                                                            & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                            ? 0U
                                                            : 
                                                           ((2U 
                                                             & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                             ? 0U
                                                             : 
                                                            ((1U 
                                                              & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__cr1))))
                                                          : 
                                                         ((8U 
                                                           & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                           ? 0U
                                                           : 
                                                          ((4U 
                                                            & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                            ? 0U
                                                            : 
                                                           ((2U 
                                                             & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                             ? 0U
                                                             : 
                                                            ((1U 
                                                              & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)
                                                              ? 0U
                                                              : vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__cr0)))))))))))))))
                    : 0U);
        }
    } else {
        vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__conf_rdata_reg = 0U;
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__commit_inst_counter = 0U;
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__commit_inst) {
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__commit_inst_counter 
                = ((IData)(1U) + vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__commit_inst_counter);
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xfffffffeU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xfffffffeU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | ((((0x3fffffffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                        >> 2U)) == 
                        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                        [0U]) & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                      & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                            & (0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr))))));
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xfffffffdU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xfffffffdU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xfffffffeU & (((((0x3fffffffU 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                            >> 2U)) 
                                        == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [1U]) << 1U) 
                                      & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 1U) 
                                            & (0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 1U))));
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xfffffffbU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xfffffffbU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xfffffffcU & (((((0x3fffffffU 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                            >> 2U)) 
                                        == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [2U]) << 2U) 
                                      & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 2U) 
                                            & (0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 2U))));
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xfffffff7U & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xfffffff7U & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xfffffff8U & (((((0x3fffffffU 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                            >> 2U)) 
                                        == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [3U]) << 3U) 
                                      & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 3U) 
                                            & (0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 3U))));
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xffffffefU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xffffffefU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xfffffff0U & (((((0x3fffffffU 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                            >> 2U)) 
                                        == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [4U]) << 4U) 
                                      & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 4U) 
                                            & (0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 4U))));
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xffffffdfU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xffffffdfU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xffffffe0U & (((((0x3fffffffU 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                            >> 2U)) 
                                        == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [5U]) << 5U) 
                                      & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 5U) 
                                            & (0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 5U))));
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xffffffbfU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xffffffbfU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xffffffc0U & (((((0x3fffffffU 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                            >> 2U)) 
                                        == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [6U]) << 6U) 
                                      & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 6U) 
                                            & (0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 6U))));
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xffffff7fU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xffffff7fU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xffffff80U & (((((0x3fffffffU 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                            >> 2U)) 
                                        == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [7U]) << 7U) 
                                      & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 7U) 
                                            & (0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 7U))));
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xfffffeffU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xfffffeffU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xffffff00U & (((((0x3fffffffU 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                            >> 2U)) 
                                        == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [8U]) << 8U) 
                                      & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 8U) 
                                            & (0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 8U))));
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xfffffdffU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xfffffdffU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xfffffe00U & (((((0x3fffffffU 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                            >> 2U)) 
                                        == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [9U]) << 9U) 
                                      & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 9U) 
                                            & (0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 9U))));
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xfffffbffU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xfffffbffU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xfffffc00U & (((((0x3fffffffU 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                            >> 2U)) 
                                        == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [0xaU]) << 0xaU) 
                                      & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 0xaU) 
                                            & (0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 0xaU))));
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xfffff7ffU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xfffff7ffU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xfffff800U & (((((0x3fffffffU 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                            >> 2U)) 
                                        == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [0xbU]) << 0xbU) 
                                      & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 0xbU) 
                                            & (0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 0xbU))));
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xffffefffU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xffffefffU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xfffff000U & (((((0x3fffffffU 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                            >> 2U)) 
                                        == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [0xcU]) << 0xcU) 
                                      & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 0xcU) 
                                            & (0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 0xcU))));
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xffffdfffU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xffffdfffU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xffffe000U & (((((0x3fffffffU 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                            >> 2U)) 
                                        == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [0xdU]) << 0xdU) 
                                      & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 0xdU) 
                                            & (0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 0xdU))));
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xffffbfffU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xffffbfffU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xffffc000U & (((((0x3fffffffU 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                            >> 2U)) 
                                        == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [0xeU]) << 0xeU) 
                                      & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 0xeU) 
                                            & (0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 0xeU))));
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xffff7fffU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xffff7fffU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xffff8000U & (((((0x3fffffffU 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                            >> 2U)) 
                                        == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [0xfU]) << 0xfU) 
                                      & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 0xfU) 
                                            & (0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 0xfU))));
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xfffeffffU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xfffeffffU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xffff0000U & (((((0x3fffffffU 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                            >> 2U)) 
                                        == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [0x10U]) << 0x10U) 
                                      & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 0x10U) 
                                            & (0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 0x10U))));
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xfffdffffU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xfffdffffU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xfffe0000U & (((((0x3fffffffU 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                            >> 2U)) 
                                        == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [0x11U]) << 0x11U) 
                                      & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 0x11U) 
                                            & (0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 0x11U))));
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xfffbffffU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xfffbffffU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xfffc0000U & (((((0x3fffffffU 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                            >> 2U)) 
                                        == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [0x12U]) << 0x12U) 
                                      & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 0x12U) 
                                            & (0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 0x12U))));
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xfff7ffffU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xfff7ffffU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xfff80000U & (((((0x3fffffffU 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                            >> 2U)) 
                                        == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [0x13U]) << 0x13U) 
                                      & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 0x13U) 
                                            & (0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 0x13U))));
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xffefffffU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xffefffffU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xfff00000U & (((((0x3fffffffU 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                            >> 2U)) 
                                        == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [0x14U]) << 0x14U) 
                                      & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 0x14U) 
                                            & (0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 0x14U))));
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xffdfffffU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xffdfffffU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xffe00000U & (((((0x3fffffffU 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                            >> 2U)) 
                                        == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [0x15U]) << 0x15U) 
                                      & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 0x15U) 
                                            & (0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 0x15U))));
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xffbfffffU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xffbfffffU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xffc00000U & (((((0x3fffffffU 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                            >> 2U)) 
                                        == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [0x16U]) << 0x16U) 
                                      & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 0x16U) 
                                            & (0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 0x16U))));
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xff7fffffU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xff7fffffU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xff800000U & (((((0x3fffffffU 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                            >> 2U)) 
                                        == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [0x17U]) << 0x17U) 
                                      & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 0x17U) 
                                            & (0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 0x17U))));
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xfeffffffU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xfeffffffU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xff000000U & (((((0x3fffffffU 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                            >> 2U)) 
                                        == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [0x18U]) << 0x18U) 
                                      & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 0x18U) 
                                            & (0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 0x18U))));
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xfdffffffU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xfdffffffU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xfe000000U & (((((0x3fffffffU 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                            >> 2U)) 
                                        == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [0x19U]) << 0x19U) 
                                      & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 0x19U) 
                                            & (0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 0x19U))));
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xfbffffffU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xfbffffffU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xfc000000U & (((((0x3fffffffU 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                            >> 2U)) 
                                        == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [0x1aU]) << 0x1aU) 
                                      & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 0x1aU) 
                                            & (0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 0x1aU))));
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xf7ffffffU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xf7ffffffU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xf8000000U & (((((0x3fffffffU 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                            >> 2U)) 
                                        == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [0x1bU]) << 0x1bU) 
                                      & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 0x1bU) 
                                            & (0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 0x1bU))));
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xefffffffU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xefffffffU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xf0000000U & (((((0x3fffffffU 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                            >> 2U)) 
                                        == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [0x1cU]) << 0x1cU) 
                                      & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 0x1cU) 
                                            & (0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 0x1cU))));
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xdfffffffU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xdfffffffU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xe0000000U & (((((0x3fffffffU 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                            >> 2U)) 
                                        == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [0x1dU]) << 0x1dU) 
                                      & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 0x1dU) 
                                            & (0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 0x1dU))));
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0xbfffffffU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0xbfffffffU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0xc0000000U & (((((0x3fffffffU 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                            >> 2U)) 
                                        == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [0x1eU]) << 0x1eU) 
                                      & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 0x1eU) 
                                            & (0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 0x1eU))));
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
            = (0x7fffffffU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd);
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd 
                = ((0x7fffffffU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd) 
                   | (0x80000000U & (((((0x3fffffffU 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                            >> 2U)) 
                                        == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc
                                        [0x1fU]) << 0x1fU) 
                                      & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid) 
                                     & ((~ ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag 
                                             >> 0x1fU) 
                                            & (0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr)))) 
                                        << 0x1fU))));
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_brk = 0U;
    }
    if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
         & (0x100U == (0x3fffU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                   << 0x18U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                                >> 8U)))))) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_brk 
            = ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                << 0x18U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                             >> 8U));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_cntc = 0U;
    } else {
        if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
             & (0x43U == (0x3fffU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                      << 0x18U) | (
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                                   >> 8U)))))) {
            vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_cntc 
                = ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                    << 0x18U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                 >> 8U));
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_disable_cache = 0U;
    }
    if (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
         & (0x101U == (0x3fffU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                   << 0x18U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                                >> 8U)))))) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_disable_cache 
            = ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                << 0x18U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                             >> 8U));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__we) {
        vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1__v0 
            = (1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo1);
        vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1__v0 = 1U;
        vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1__v0 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index;
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__we) {
        vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1__v0 
            = (0xfffffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo1 
                           >> 8U));
        vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1__v0 = 1U;
        vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1__v0 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index;
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__we) {
        vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0__v0 
            = (0xfffffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo0 
                           >> 8U));
        vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0__v0 = 1U;
        vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0__v0 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index;
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__we) {
        vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0__v0 
            = (1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo0);
        vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0__v0 = 1U;
        vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0__v0 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index;
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__we) {
        vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1__v0 
            = (1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo1 
                     >> 1U));
        vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1__v0 = 1U;
        vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1__v0 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index;
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__we) {
        vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0__v0 
            = (1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo0 
                     >> 1U));
        vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0__v0 = 1U;
        vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0__v0 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index;
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__we) {
        vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0__v0 
            = (3U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo0 
                     >> 4U));
        vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0__v0 = 1U;
        vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0__v0 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index;
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__we) {
        vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1__v0 
            = (3U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo1 
                     >> 4U));
        vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1__v0 = 1U;
        vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1__v0 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index;
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__we) {
        vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0__v0 
            = (3U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo0 
                     >> 2U));
        vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0__v0 = 1U;
        vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0__v0 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index;
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__we) {
        vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1__v0 
            = (3U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo1 
                     >> 2U));
        vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1__v0 = 1U;
        vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1__v0 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index;
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__dcache_miss_counter = 0U;
    } else {
        if (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
              >> 0x16U) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__commit_inst))) {
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__dcache_miss_counter 
                = ((IData)(1U) + vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__dcache_miss_counter);
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__icache_miss_counter = 0U;
    } else {
        if (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
              >> 0x14U) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__commit_inst))) {
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__icache_miss_counter 
                = ((IData)(1U) + vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__icache_miss_counter);
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__br_inst_counter = 0U;
    } else {
        if (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
              >> 0x13U) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__commit_inst))) {
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__br_inst_counter 
                = ((IData)(1U) + vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__br_inst_counter);
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__mem_inst_counter = 0U;
    } else {
        if (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
              >> 0x15U) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__commit_inst))) {
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__mem_inst_counter 
                = ((IData)(1U) + vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__mem_inst_counter);
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__br_pre_counter = 0U;
    } else {
        if (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
              >> 0x17U) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__commit_inst))) {
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__br_pre_counter 
                = ((IData)(1U) + vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__br_pre_counter);
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__br_pre_error_counter = 0U;
    } else {
        if (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
              >> 0x18U) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__commit_inst))) {
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__br_pre_error_counter 
                = ((IData)(1U) + vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__br_pre_error_counter);
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__we) {
        vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps__v0 
            = (0x3fU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx 
                        >> 0x18U));
        vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps__v0 = 1U;
        vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps__v0 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index;
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__tcfg_wen) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tval 
            = (0xfffffffcU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                               << 0x18U) | (0xfffffcU 
                                            & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                               >> 8U))));
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__timer_en) {
            if ((0U != vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tval)) {
                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tval 
                    = (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tval 
                       - (IData)(1U));
            } else {
                if ((0U == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tval)) {
                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tval 
                        = ((2U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tcfg)
                            ? (0xfffffffcU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tcfg)
                            : 0xffffffffU);
                }
            }
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__we) {
        vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g__v0 
            = (1U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo0 
                      & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo1) 
                     >> 6U));
        vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g__v0 = 1U;
        vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g__v0 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index;
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__we) {
        vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid__v0 
            = (0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid);
        vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid__v0 = 1U;
        vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid__v0 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index;
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__we) {
        vlTOPp->__Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn__v0 
            = (0x7ffffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbehi 
                           >> 0xdU));
        vlTOPp->__Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn__v0 = 1U;
        vlTOPp->__Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn__v0 
            = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index;
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset) {
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
            = (0xfffffffcU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd);
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
            = (0xfffffffbU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd);
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
            = (8U | vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd);
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
            = (0xffffffefU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd);
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
            = (0xffffff9fU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd);
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
            = (0xfffffe7fU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd);
        vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
            = (0x1ffU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd);
    } else {
        if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__excp_flush) {
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
                = (0xfffffffcU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd);
            vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
                = (0xfffffffbU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd);
            if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__excp_tlbrefill) {
                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
                    = (8U | vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd);
                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
                    = (0xffffffefU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd);
            }
        } else {
            if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ertn_flush) {
                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
                    = ((0xfffffffcU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd) 
                       | (3U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_prmd));
                vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
                    = ((0xfffffffbU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd) 
                       | (4U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_prmd));
                if ((0x3fU == (0x3fU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat 
                                        >> 0x10U)))) {
                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
                        = (0xfffffff7U & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd);
                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
                        = (0x10U | vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd);
                }
            } else {
                if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__crmd_wen) {
                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
                        = ((0xfffffffcU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd) 
                           | (3U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                     << 0x18U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                                  >> 8U))));
                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
                        = ((0xfffffffbU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd) 
                           | (4U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                    >> 8U)));
                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
                        = ((0xfffffff7U & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd) 
                           | (8U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                    >> 8U)));
                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
                        = ((0xffffffefU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd) 
                           | (0x10U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                       >> 8U)));
                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
                        = ((0xffffff9fU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd) 
                           | (0x60U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                        << 0x18U) | 
                                       (0xffffe0U & 
                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                         >> 8U)))));
                    vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd 
                        = ((0xfffffe7fU & vlTOPp->__Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd) 
                           | (0x180U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                         << 0x18U) 
                                        | (0xffff80U 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                              >> 8U)))));
                }
            }
        }
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xfffffffeU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                   [0U] & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                            [0U]) ? ((0x7ffffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                                  >> 0xdU)) 
                                     == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                     [0U]) : ((0x3ffU 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                                  >> 0x16U)) 
                                              == (0x3ffU 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                     [0U] 
                                                     >> 9U))))) 
                  & (((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                      == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                      [0U]) | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                     [0U])));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xfffffffdU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [1U] & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                             [1U]) ? ((0x7ffffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                                   >> 0xdU)) 
                                      == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                      [1U]) : ((0x3ffU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                                   >> 0x16U)) 
                                               == (0x3ffU 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                      [1U] 
                                                      >> 9U))))) 
                   & (((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [1U]) | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [1U])) << 1U));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xfffffffbU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [2U] & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                             [2U]) ? ((0x7ffffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                                   >> 0xdU)) 
                                      == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                      [2U]) : ((0x3ffU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                                   >> 0x16U)) 
                                               == (0x3ffU 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                      [2U] 
                                                      >> 9U))))) 
                   & (((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [2U]) | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [2U])) << 2U));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xfffffff7U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [3U] & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                             [3U]) ? ((0x7ffffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                                   >> 0xdU)) 
                                      == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                      [3U]) : ((0x3ffU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                                   >> 0x16U)) 
                                               == (0x3ffU 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                      [3U] 
                                                      >> 9U))))) 
                   & (((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [3U]) | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [3U])) << 3U));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xffffffefU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [4U] & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                             [4U]) ? ((0x7ffffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                                   >> 0xdU)) 
                                      == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                      [4U]) : ((0x3ffU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                                   >> 0x16U)) 
                                               == (0x3ffU 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                      [4U] 
                                                      >> 9U))))) 
                   & (((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [4U]) | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [4U])) << 4U));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xffffffdfU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [5U] & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                             [5U]) ? ((0x7ffffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                                   >> 0xdU)) 
                                      == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                      [5U]) : ((0x3ffU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                                   >> 0x16U)) 
                                               == (0x3ffU 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                      [5U] 
                                                      >> 9U))))) 
                   & (((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [5U]) | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [5U])) << 5U));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xffffffbfU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [6U] & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                             [6U]) ? ((0x7ffffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                                   >> 0xdU)) 
                                      == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                      [6U]) : ((0x3ffU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                                   >> 0x16U)) 
                                               == (0x3ffU 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                      [6U] 
                                                      >> 9U))))) 
                   & (((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [6U]) | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [6U])) << 6U));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xffffff7fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [7U] & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                             [7U]) ? ((0x7ffffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                                   >> 0xdU)) 
                                      == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                      [7U]) : ((0x3ffU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                                   >> 0x16U)) 
                                               == (0x3ffU 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                      [7U] 
                                                      >> 9U))))) 
                   & (((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [7U]) | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [7U])) << 7U));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xfffffeffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [8U] & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                             [8U]) ? ((0x7ffffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                                   >> 0xdU)) 
                                      == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                      [8U]) : ((0x3ffU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                                   >> 0x16U)) 
                                               == (0x3ffU 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                      [8U] 
                                                      >> 9U))))) 
                   & (((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [8U]) | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [8U])) << 8U));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xfffffdffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [9U] & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                             [9U]) ? ((0x7ffffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                                   >> 0xdU)) 
                                      == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                      [9U]) : ((0x3ffU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                                   >> 0x16U)) 
                                               == (0x3ffU 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                      [9U] 
                                                      >> 9U))))) 
                   & (((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [9U]) | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [9U])) << 9U));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xfffffbffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0xaU] & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                               [0xaU]) ? ((0x7ffffU 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                              >> 0xdU)) 
                                          == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                          [0xaU]) : 
                              ((0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                          >> 0x16U)) 
                               == (0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                             [0xaU] 
                                             >> 9U))))) 
                   & (((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0xaU]) | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0xaU])) << 0xaU));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xfffff7ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0xbU] & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                               [0xbU]) ? ((0x7ffffU 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                              >> 0xdU)) 
                                          == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                          [0xbU]) : 
                              ((0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                          >> 0x16U)) 
                               == (0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                             [0xbU] 
                                             >> 9U))))) 
                   & (((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0xbU]) | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0xbU])) << 0xbU));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xffffefffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0xcU] & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                               [0xcU]) ? ((0x7ffffU 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                              >> 0xdU)) 
                                          == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                          [0xcU]) : 
                              ((0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                          >> 0x16U)) 
                               == (0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                             [0xcU] 
                                             >> 9U))))) 
                   & (((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0xcU]) | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0xcU])) << 0xcU));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xffffdfffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0xdU] & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                               [0xdU]) ? ((0x7ffffU 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                              >> 0xdU)) 
                                          == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                          [0xdU]) : 
                              ((0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                          >> 0x16U)) 
                               == (0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                             [0xdU] 
                                             >> 9U))))) 
                   & (((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0xdU]) | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0xdU])) << 0xdU));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xffffbfffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0xeU] & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                               [0xeU]) ? ((0x7ffffU 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                              >> 0xdU)) 
                                          == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                          [0xeU]) : 
                              ((0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                          >> 0x16U)) 
                               == (0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                             [0xeU] 
                                             >> 9U))))) 
                   & (((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0xeU]) | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0xeU])) << 0xeU));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xffff7fffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0xfU] & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                               [0xfU]) ? ((0x7ffffU 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                              >> 0xdU)) 
                                          == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                          [0xfU]) : 
                              ((0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                          >> 0x16U)) 
                               == (0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                             [0xfU] 
                                             >> 9U))))) 
                   & (((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0xfU]) | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0xfU])) << 0xfU));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xfffeffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0x10U] & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x10U]) ? ((0x7ffffU 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                                >> 0xdU)) 
                                            == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                            [0x10U])
                                : ((0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                              >> 0x16U)) 
                                   == (0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                 [0x10U] 
                                                 >> 9U))))) 
                   & (((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0x10U]) | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0x10U])) << 0x10U));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xfffdffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0x11U] & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x11U]) ? ((0x7ffffU 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                                >> 0xdU)) 
                                            == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                            [0x11U])
                                : ((0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                              >> 0x16U)) 
                                   == (0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                 [0x11U] 
                                                 >> 9U))))) 
                   & (((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0x11U]) | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0x11U])) << 0x11U));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xfffbffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0x12U] & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x12U]) ? ((0x7ffffU 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                                >> 0xdU)) 
                                            == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                            [0x12U])
                                : ((0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                              >> 0x16U)) 
                                   == (0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                 [0x12U] 
                                                 >> 9U))))) 
                   & (((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0x12U]) | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0x12U])) << 0x12U));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xfff7ffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0x13U] & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x13U]) ? ((0x7ffffU 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                                >> 0xdU)) 
                                            == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                            [0x13U])
                                : ((0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                              >> 0x16U)) 
                                   == (0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                 [0x13U] 
                                                 >> 9U))))) 
                   & (((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0x13U]) | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0x13U])) << 0x13U));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xffefffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0x14U] & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x14U]) ? ((0x7ffffU 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                                >> 0xdU)) 
                                            == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                            [0x14U])
                                : ((0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                              >> 0x16U)) 
                                   == (0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                 [0x14U] 
                                                 >> 9U))))) 
                   & (((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0x14U]) | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0x14U])) << 0x14U));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xffdfffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0x15U] & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x15U]) ? ((0x7ffffU 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                                >> 0xdU)) 
                                            == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                            [0x15U])
                                : ((0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                              >> 0x16U)) 
                                   == (0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                 [0x15U] 
                                                 >> 9U))))) 
                   & (((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0x15U]) | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0x15U])) << 0x15U));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xffbfffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0x16U] & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x16U]) ? ((0x7ffffU 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                                >> 0xdU)) 
                                            == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                            [0x16U])
                                : ((0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                              >> 0x16U)) 
                                   == (0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                 [0x16U] 
                                                 >> 9U))))) 
                   & (((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0x16U]) | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0x16U])) << 0x16U));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xff7fffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0x17U] & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x17U]) ? ((0x7ffffU 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                                >> 0xdU)) 
                                            == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                            [0x17U])
                                : ((0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                              >> 0x16U)) 
                                   == (0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                 [0x17U] 
                                                 >> 9U))))) 
                   & (((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0x17U]) | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0x17U])) << 0x17U));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xfeffffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0x18U] & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x18U]) ? ((0x7ffffU 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                                >> 0xdU)) 
                                            == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                            [0x18U])
                                : ((0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                              >> 0x16U)) 
                                   == (0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                 [0x18U] 
                                                 >> 9U))))) 
                   & (((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0x18U]) | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0x18U])) << 0x18U));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xfdffffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0x19U] & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x19U]) ? ((0x7ffffU 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                                >> 0xdU)) 
                                            == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                            [0x19U])
                                : ((0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                              >> 0x16U)) 
                                   == (0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                 [0x19U] 
                                                 >> 9U))))) 
                   & (((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0x19U]) | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0x19U])) << 0x19U));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xfbffffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0x1aU] & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x1aU]) ? ((0x7ffffU 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                                >> 0xdU)) 
                                            == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                            [0x1aU])
                                : ((0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                              >> 0x16U)) 
                                   == (0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                 [0x1aU] 
                                                 >> 9U))))) 
                   & (((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0x1aU]) | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0x1aU])) << 0x1aU));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xf7ffffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0x1bU] & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x1bU]) ? ((0x7ffffU 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                                >> 0xdU)) 
                                            == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                            [0x1bU])
                                : ((0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                              >> 0x16U)) 
                                   == (0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                 [0x1bU] 
                                                 >> 9U))))) 
                   & (((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0x1bU]) | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0x1bU])) << 0x1bU));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xefffffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0x1cU] & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x1cU]) ? ((0x7ffffU 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                                >> 0xdU)) 
                                            == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                            [0x1cU])
                                : ((0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                              >> 0x16U)) 
                                   == (0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                 [0x1cU] 
                                                 >> 9U))))) 
                   & (((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0x1cU]) | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0x1cU])) << 0x1cU));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xdfffffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0x1dU] & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x1dU]) ? ((0x7ffffU 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                                >> 0xdU)) 
                                            == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                            [0x1dU])
                                : ((0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                              >> 0x16U)) 
                                   == (0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                 [0x1dU] 
                                                 >> 9U))))) 
                   & (((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0x1dU]) | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0x1dU])) << 0x1dU));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0xbfffffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0x1eU] & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x1eU]) ? ((0x7ffffU 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                                >> 0xdU)) 
                                            == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                            [0x1eU])
                                : ((0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                              >> 0x16U)) 
                                   == (0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                 [0x1eU] 
                                                 >> 9U))))) 
                   & (((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0x1eU]) | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0x1eU])) << 0x1eU));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 
            = ((0x7fffffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0) 
               | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0x1fU] & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x1fU]) ? ((0x7ffffU 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                                >> 0xdU)) 
                                            == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                            [0x1fU])
                                : ((0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                              >> 0x16U)) 
                                   == (0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                 [0x1fU] 
                                                 >> 9U))))) 
                   & (((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0x1fU]) | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0x1fU])) << 0x1fU));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 
            = ((0xfffffffeU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1) 
               | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                   [0U] & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                            [0U]) ? ((0x7ffffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                                  >> 0xdU)) 
                                     == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                     [0U]) : ((0x3ffU 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                                  >> 0x16U)) 
                                              == (0x3ffU 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                     [0U] 
                                                     >> 9U))))) 
                  & (((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                      == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                      [0U]) | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                     [0U])));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 
            = ((0xfffffffdU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1) 
               | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [1U] & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                             [1U]) ? ((0x7ffffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                                   >> 0xdU)) 
                                      == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                      [1U]) : ((0x3ffU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                                   >> 0x16U)) 
                                               == (0x3ffU 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                      [1U] 
                                                      >> 9U))))) 
                   & (((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [1U]) | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [1U])) << 1U));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 
            = ((0xfffffffbU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1) 
               | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [2U] & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                             [2U]) ? ((0x7ffffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                                   >> 0xdU)) 
                                      == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                      [2U]) : ((0x3ffU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                                   >> 0x16U)) 
                                               == (0x3ffU 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                      [2U] 
                                                      >> 9U))))) 
                   & (((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [2U]) | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [2U])) << 2U));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 
            = ((0xfffffff7U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1) 
               | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [3U] & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                             [3U]) ? ((0x7ffffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                                   >> 0xdU)) 
                                      == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                      [3U]) : ((0x3ffU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                                   >> 0x16U)) 
                                               == (0x3ffU 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                      [3U] 
                                                      >> 9U))))) 
                   & (((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [3U]) | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [3U])) << 3U));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 
            = ((0xffffffefU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1) 
               | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [4U] & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                             [4U]) ? ((0x7ffffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                                   >> 0xdU)) 
                                      == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                      [4U]) : ((0x3ffU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                                   >> 0x16U)) 
                                               == (0x3ffU 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                      [4U] 
                                                      >> 9U))))) 
                   & (((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [4U]) | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [4U])) << 4U));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 
            = ((0xffffffdfU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1) 
               | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [5U] & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                             [5U]) ? ((0x7ffffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                                   >> 0xdU)) 
                                      == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                      [5U]) : ((0x3ffU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                                   >> 0x16U)) 
                                               == (0x3ffU 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                      [5U] 
                                                      >> 9U))))) 
                   & (((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [5U]) | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [5U])) << 5U));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 
            = ((0xffffffbfU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1) 
               | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [6U] & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                             [6U]) ? ((0x7ffffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                                   >> 0xdU)) 
                                      == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                      [6U]) : ((0x3ffU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                                   >> 0x16U)) 
                                               == (0x3ffU 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                      [6U] 
                                                      >> 9U))))) 
                   & (((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [6U]) | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [6U])) << 6U));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 
            = ((0xffffff7fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1) 
               | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [7U] & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                             [7U]) ? ((0x7ffffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                                   >> 0xdU)) 
                                      == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                      [7U]) : ((0x3ffU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                                   >> 0x16U)) 
                                               == (0x3ffU 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                      [7U] 
                                                      >> 9U))))) 
                   & (((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [7U]) | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [7U])) << 7U));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 
            = ((0xfffffeffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1) 
               | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [8U] & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                             [8U]) ? ((0x7ffffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                                   >> 0xdU)) 
                                      == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                      [8U]) : ((0x3ffU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                                   >> 0x16U)) 
                                               == (0x3ffU 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                      [8U] 
                                                      >> 9U))))) 
                   & (((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [8U]) | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [8U])) << 8U));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 
            = ((0xfffffdffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1) 
               | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [9U] & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                             [9U]) ? ((0x7ffffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                                   >> 0xdU)) 
                                      == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                      [9U]) : ((0x3ffU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                                   >> 0x16U)) 
                                               == (0x3ffU 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                      [9U] 
                                                      >> 9U))))) 
                   & (((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [9U]) | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [9U])) << 9U));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 
            = ((0xfffffbffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1) 
               | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0xaU] & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                               [0xaU]) ? ((0x7ffffU 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                              >> 0xdU)) 
                                          == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                          [0xaU]) : 
                              ((0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                          >> 0x16U)) 
                               == (0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                             [0xaU] 
                                             >> 9U))))) 
                   & (((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0xaU]) | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0xaU])) << 0xaU));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 
            = ((0xfffff7ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1) 
               | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0xbU] & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                               [0xbU]) ? ((0x7ffffU 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                              >> 0xdU)) 
                                          == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                          [0xbU]) : 
                              ((0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                          >> 0x16U)) 
                               == (0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                             [0xbU] 
                                             >> 9U))))) 
                   & (((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0xbU]) | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0xbU])) << 0xbU));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 
            = ((0xffffefffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1) 
               | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0xcU] & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                               [0xcU]) ? ((0x7ffffU 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                              >> 0xdU)) 
                                          == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                          [0xcU]) : 
                              ((0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                          >> 0x16U)) 
                               == (0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                             [0xcU] 
                                             >> 9U))))) 
                   & (((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0xcU]) | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0xcU])) << 0xcU));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 
            = ((0xffffdfffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1) 
               | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0xdU] & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                               [0xdU]) ? ((0x7ffffU 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                              >> 0xdU)) 
                                          == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                          [0xdU]) : 
                              ((0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                          >> 0x16U)) 
                               == (0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                             [0xdU] 
                                             >> 9U))))) 
                   & (((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0xdU]) | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0xdU])) << 0xdU));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 
            = ((0xffffbfffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1) 
               | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0xeU] & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                               [0xeU]) ? ((0x7ffffU 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                              >> 0xdU)) 
                                          == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                          [0xeU]) : 
                              ((0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                          >> 0x16U)) 
                               == (0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                             [0xeU] 
                                             >> 9U))))) 
                   & (((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0xeU]) | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0xeU])) << 0xeU));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 
            = ((0xffff7fffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1) 
               | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0xfU] & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                               [0xfU]) ? ((0x7ffffU 
                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                              >> 0xdU)) 
                                          == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                          [0xfU]) : 
                              ((0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                          >> 0x16U)) 
                               == (0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                             [0xfU] 
                                             >> 9U))))) 
                   & (((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0xfU]) | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0xfU])) << 0xfU));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 
            = ((0xfffeffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1) 
               | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0x10U] & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x10U]) ? ((0x7ffffU 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                                >> 0xdU)) 
                                            == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                            [0x10U])
                                : ((0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                              >> 0x16U)) 
                                   == (0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                 [0x10U] 
                                                 >> 9U))))) 
                   & (((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0x10U]) | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0x10U])) << 0x10U));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 
            = ((0xfffdffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1) 
               | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0x11U] & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x11U]) ? ((0x7ffffU 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                                >> 0xdU)) 
                                            == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                            [0x11U])
                                : ((0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                              >> 0x16U)) 
                                   == (0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                 [0x11U] 
                                                 >> 9U))))) 
                   & (((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0x11U]) | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0x11U])) << 0x11U));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 
            = ((0xfffbffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1) 
               | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0x12U] & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x12U]) ? ((0x7ffffU 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                                >> 0xdU)) 
                                            == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                            [0x12U])
                                : ((0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                              >> 0x16U)) 
                                   == (0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                 [0x12U] 
                                                 >> 9U))))) 
                   & (((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0x12U]) | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0x12U])) << 0x12U));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 
            = ((0xfff7ffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1) 
               | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0x13U] & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x13U]) ? ((0x7ffffU 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                                >> 0xdU)) 
                                            == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                            [0x13U])
                                : ((0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                              >> 0x16U)) 
                                   == (0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                 [0x13U] 
                                                 >> 9U))))) 
                   & (((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0x13U]) | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0x13U])) << 0x13U));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 
            = ((0xffefffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1) 
               | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0x14U] & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x14U]) ? ((0x7ffffU 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                                >> 0xdU)) 
                                            == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                            [0x14U])
                                : ((0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                              >> 0x16U)) 
                                   == (0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                 [0x14U] 
                                                 >> 9U))))) 
                   & (((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0x14U]) | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0x14U])) << 0x14U));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 
            = ((0xffdfffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1) 
               | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0x15U] & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x15U]) ? ((0x7ffffU 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                                >> 0xdU)) 
                                            == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                            [0x15U])
                                : ((0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                              >> 0x16U)) 
                                   == (0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                 [0x15U] 
                                                 >> 9U))))) 
                   & (((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0x15U]) | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0x15U])) << 0x15U));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 
            = ((0xffbfffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1) 
               | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0x16U] & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x16U]) ? ((0x7ffffU 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                                >> 0xdU)) 
                                            == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                            [0x16U])
                                : ((0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                              >> 0x16U)) 
                                   == (0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                 [0x16U] 
                                                 >> 9U))))) 
                   & (((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0x16U]) | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0x16U])) << 0x16U));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 
            = ((0xff7fffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1) 
               | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0x17U] & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x17U]) ? ((0x7ffffU 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                                >> 0xdU)) 
                                            == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                            [0x17U])
                                : ((0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                              >> 0x16U)) 
                                   == (0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                 [0x17U] 
                                                 >> 9U))))) 
                   & (((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0x17U]) | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0x17U])) << 0x17U));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 
            = ((0xfeffffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1) 
               | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0x18U] & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x18U]) ? ((0x7ffffU 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                                >> 0xdU)) 
                                            == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                            [0x18U])
                                : ((0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                              >> 0x16U)) 
                                   == (0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                 [0x18U] 
                                                 >> 9U))))) 
                   & (((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0x18U]) | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0x18U])) << 0x18U));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 
            = ((0xfdffffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1) 
               | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0x19U] & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x19U]) ? ((0x7ffffU 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                                >> 0xdU)) 
                                            == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                            [0x19U])
                                : ((0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                              >> 0x16U)) 
                                   == (0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                 [0x19U] 
                                                 >> 9U))))) 
                   & (((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0x19U]) | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0x19U])) << 0x19U));
    }
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 
            = ((0xfbffffffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1) 
               | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                    [0x1aU] & ((0xcU == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                [0x1aU]) ? ((0x7ffffU 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                                >> 0xdU)) 
                                            == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                            [0x1aU])
                                : ((0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                              >> 0x16U)) 
                                   == (0x3ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                                 [0x1aU] 
                                                 >> 9U))))) 
                   & (((0x3ffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid) 
                       == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid
                       [0x1aU]) | vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g
                      [0x1aU])) << 0x1aU));
    }
}
