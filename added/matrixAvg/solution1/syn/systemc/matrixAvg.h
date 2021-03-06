// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.2
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _matrixAvg_HH_
#define _matrixAvg_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "matrixAvg_mul_32seOg.h"
#include "matrixAvg_mac_mulfYi.h"
#include "matrixAvg_red.h"
#include "matrixAvg_cell_avbkb.h"

namespace ap_rtl {

struct matrixAvg : public sc_module {
    // Port declarations 20
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst_n;
    sc_in< sc_lv<32> > mat_in_TDATA;
    sc_in< sc_logic > mat_in_TVALID;
    sc_out< sc_logic > mat_in_TREADY;
    sc_in< sc_lv<4> > mat_in_TKEEP;
    sc_in< sc_lv<4> > mat_in_TSTRB;
    sc_in< sc_lv<1> > mat_in_TUSER;
    sc_in< sc_lv<1> > mat_in_TLAST;
    sc_in< sc_lv<1> > mat_in_TID;
    sc_in< sc_lv<1> > mat_in_TDEST;
    sc_out< sc_lv<32> > mat_out_TDATA;
    sc_out< sc_logic > mat_out_TVALID;
    sc_in< sc_logic > mat_out_TREADY;
    sc_out< sc_lv<4> > mat_out_TKEEP;
    sc_out< sc_lv<4> > mat_out_TSTRB;
    sc_out< sc_lv<1> > mat_out_TUSER;
    sc_out< sc_lv<1> > mat_out_TLAST;
    sc_out< sc_lv<1> > mat_out_TID;
    sc_out< sc_lv<1> > mat_out_TDEST;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    matrixAvg(sc_module_name name);
    SC_HAS_PROCESS(matrixAvg);

    ~matrixAvg();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    matrixAvg_red* red_U;
    matrixAvg_red* green_U;
    matrixAvg_red* blue_U;
    matrixAvg_cell_avbkb* cell_avg_red_U;
    matrixAvg_cell_avbkb* cell_avg_blue_U;
    matrixAvg_cell_avbkb* cell_avg_green_U;
    matrixAvg_cell_avbkb* sum_red_U;
    matrixAvg_cell_avbkb* sum_blue_U;
    matrixAvg_cell_avbkb* sum_green_U;
    matrixAvg_mul_32seOg<1,2,32,34,65>* matrixAvg_mul_32seOg_U1;
    matrixAvg_mul_32seOg<1,2,32,34,65>* matrixAvg_mul_32seOg_U2;
    matrixAvg_mul_32seOg<1,2,32,34,65>* matrixAvg_mul_32seOg_U3;
    matrixAvg_mac_mulfYi<1,1,4,8,7,10>* matrixAvg_mac_mulfYi_U4;
    sc_signal< sc_logic > ap_rst_n_inv;
    sc_signal< sc_lv<32> > mat_in_V_data_V_0_data_out;
    sc_signal< sc_logic > mat_in_V_data_V_0_vld_in;
    sc_signal< sc_logic > mat_in_V_data_V_0_vld_out;
    sc_signal< sc_logic > mat_in_V_data_V_0_ack_in;
    sc_signal< sc_logic > mat_in_V_data_V_0_ack_out;
    sc_signal< sc_lv<32> > mat_in_V_data_V_0_payload_A;
    sc_signal< sc_lv<32> > mat_in_V_data_V_0_payload_B;
    sc_signal< sc_logic > mat_in_V_data_V_0_sel_rd;
    sc_signal< sc_logic > mat_in_V_data_V_0_sel_wr;
    sc_signal< sc_logic > mat_in_V_data_V_0_sel;
    sc_signal< sc_logic > mat_in_V_data_V_0_load_A;
    sc_signal< sc_logic > mat_in_V_data_V_0_load_B;
    sc_signal< sc_lv<2> > mat_in_V_data_V_0_state;
    sc_signal< sc_logic > mat_in_V_data_V_0_state_cmp_full;
    sc_signal< sc_logic > mat_in_V_dest_V_0_vld_in;
    sc_signal< sc_logic > mat_in_V_dest_V_0_ack_out;
    sc_signal< sc_lv<2> > mat_in_V_dest_V_0_state;
    sc_signal< sc_lv<32> > mat_out_V_data_V_1_data_in;
    sc_signal< sc_lv<32> > mat_out_V_data_V_1_data_out;
    sc_signal< sc_logic > mat_out_V_data_V_1_vld_in;
    sc_signal< sc_logic > mat_out_V_data_V_1_vld_out;
    sc_signal< sc_logic > mat_out_V_data_V_1_ack_in;
    sc_signal< sc_logic > mat_out_V_data_V_1_ack_out;
    sc_signal< sc_lv<32> > mat_out_V_data_V_1_payload_A;
    sc_signal< sc_lv<32> > mat_out_V_data_V_1_payload_B;
    sc_signal< sc_logic > mat_out_V_data_V_1_sel_rd;
    sc_signal< sc_logic > mat_out_V_data_V_1_sel_wr;
    sc_signal< sc_logic > mat_out_V_data_V_1_sel;
    sc_signal< sc_logic > mat_out_V_data_V_1_load_A;
    sc_signal< sc_logic > mat_out_V_data_V_1_load_B;
    sc_signal< sc_lv<2> > mat_out_V_data_V_1_state;
    sc_signal< sc_logic > mat_out_V_data_V_1_state_cmp_full;
    sc_signal< sc_lv<4> > mat_out_V_keep_V_1_data_out;
    sc_signal< sc_logic > mat_out_V_keep_V_1_vld_in;
    sc_signal< sc_logic > mat_out_V_keep_V_1_vld_out;
    sc_signal< sc_logic > mat_out_V_keep_V_1_ack_in;
    sc_signal< sc_logic > mat_out_V_keep_V_1_ack_out;
    sc_signal< sc_logic > mat_out_V_keep_V_1_sel_rd;
    sc_signal< sc_logic > mat_out_V_keep_V_1_sel;
    sc_signal< sc_lv<2> > mat_out_V_keep_V_1_state;
    sc_signal< sc_lv<4> > mat_out_V_strb_V_1_data_out;
    sc_signal< sc_logic > mat_out_V_strb_V_1_vld_in;
    sc_signal< sc_logic > mat_out_V_strb_V_1_vld_out;
    sc_signal< sc_logic > mat_out_V_strb_V_1_ack_in;
    sc_signal< sc_logic > mat_out_V_strb_V_1_ack_out;
    sc_signal< sc_logic > mat_out_V_strb_V_1_sel_rd;
    sc_signal< sc_logic > mat_out_V_strb_V_1_sel;
    sc_signal< sc_lv<2> > mat_out_V_strb_V_1_state;
    sc_signal< sc_lv<1> > mat_out_V_user_V_1_data_out;
    sc_signal< sc_logic > mat_out_V_user_V_1_vld_in;
    sc_signal< sc_logic > mat_out_V_user_V_1_vld_out;
    sc_signal< sc_logic > mat_out_V_user_V_1_ack_in;
    sc_signal< sc_logic > mat_out_V_user_V_1_ack_out;
    sc_signal< sc_logic > mat_out_V_user_V_1_sel_rd;
    sc_signal< sc_logic > mat_out_V_user_V_1_sel;
    sc_signal< sc_lv<2> > mat_out_V_user_V_1_state;
    sc_signal< sc_lv<1> > mat_out_V_last_V_1_data_in;
    sc_signal< sc_lv<1> > mat_out_V_last_V_1_data_out;
    sc_signal< sc_logic > mat_out_V_last_V_1_vld_in;
    sc_signal< sc_logic > mat_out_V_last_V_1_vld_out;
    sc_signal< sc_logic > mat_out_V_last_V_1_ack_in;
    sc_signal< sc_logic > mat_out_V_last_V_1_ack_out;
    sc_signal< sc_lv<1> > mat_out_V_last_V_1_payload_A;
    sc_signal< sc_lv<1> > mat_out_V_last_V_1_payload_B;
    sc_signal< sc_logic > mat_out_V_last_V_1_sel_rd;
    sc_signal< sc_logic > mat_out_V_last_V_1_sel_wr;
    sc_signal< sc_logic > mat_out_V_last_V_1_sel;
    sc_signal< sc_logic > mat_out_V_last_V_1_load_A;
    sc_signal< sc_logic > mat_out_V_last_V_1_load_B;
    sc_signal< sc_lv<2> > mat_out_V_last_V_1_state;
    sc_signal< sc_logic > mat_out_V_last_V_1_state_cmp_full;
    sc_signal< sc_lv<1> > mat_out_V_id_V_1_data_out;
    sc_signal< sc_logic > mat_out_V_id_V_1_vld_in;
    sc_signal< sc_logic > mat_out_V_id_V_1_vld_out;
    sc_signal< sc_logic > mat_out_V_id_V_1_ack_in;
    sc_signal< sc_logic > mat_out_V_id_V_1_ack_out;
    sc_signal< sc_logic > mat_out_V_id_V_1_sel_rd;
    sc_signal< sc_logic > mat_out_V_id_V_1_sel;
    sc_signal< sc_lv<2> > mat_out_V_id_V_1_state;
    sc_signal< sc_lv<1> > mat_out_V_dest_V_1_data_out;
    sc_signal< sc_logic > mat_out_V_dest_V_1_vld_in;
    sc_signal< sc_logic > mat_out_V_dest_V_1_vld_out;
    sc_signal< sc_logic > mat_out_V_dest_V_1_ack_in;
    sc_signal< sc_logic > mat_out_V_dest_V_1_ack_out;
    sc_signal< sc_logic > mat_out_V_dest_V_1_sel_rd;
    sc_signal< sc_logic > mat_out_V_dest_V_1_sel;
    sc_signal< sc_lv<2> > mat_out_V_dest_V_1_state;
    sc_signal< sc_logic > mat_in_TDATA_blk_n;
    sc_signal< sc_lv<26> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_logic > mat_out_TDATA_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_state20;
    sc_signal< sc_logic > ap_CS_fsm_state21;
    sc_signal< sc_logic > ap_CS_fsm_state23;
    sc_signal< sc_logic > ap_CS_fsm_state24;
    sc_signal< sc_logic > ap_CS_fsm_state26;
    sc_signal< sc_logic > ap_CS_fsm_state27;
    sc_signal< sc_lv<10> > indvar_flatten_reg_431;
    sc_signal< sc_lv<4> > j_reg_442;
    sc_signal< sc_lv<7> > i_4_reg_453;
    sc_signal< sc_lv<10> > i_6_fu_521_p2;
    sc_signal< sc_lv<10> > i_6_reg_957;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<10> > i_7_fu_538_p2;
    sc_signal< sc_lv<10> > i_7_reg_965;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<10> > i_8_fu_555_p2;
    sc_signal< sc_lv<10> > i_8_reg_973;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<1> > tmp_8_fu_549_p2;
    sc_signal< sc_lv<1> > tmp_1_fu_566_p2;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<4> > i_9_fu_572_p2;
    sc_signal< sc_lv<1> > exitcond_flatten_fu_578_p2;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_1002;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< bool > ap_block_state9_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state11_pp0_stage0_iter1;
    sc_signal< bool > ap_block_pp0_stage0_flag00011001;
    sc_signal< sc_lv<10> > indvar_flatten_next_fu_584_p2;
    sc_signal< sc_lv<10> > indvar_flatten_next_reg_1006;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<7> > i_4_mid2_fu_596_p3;
    sc_signal< sc_lv<7> > i_4_mid2_reg_1011;
    sc_signal< sc_lv<4> > tmp_3_mid2_v_v_fu_610_p3;
    sc_signal< sc_lv<4> > tmp_3_mid2_v_v_reg_1017;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage1;
    sc_signal< bool > ap_block_state10_pp0_stage1_iter0;
    sc_signal< bool > ap_block_pp0_stage1_flag00011001;
    sc_signal< sc_lv<4> > sum_red_addr_1_reg_1029;
    sc_signal< sc_lv<4> > sum_green_addr_1_reg_1039;
    sc_signal< sc_lv<4> > sum_blue_addr_1_reg_1049;
    sc_signal< sc_lv<7> > i_10_fu_636_p2;
    sc_signal< sc_lv<7> > i_10_reg_1054;
    sc_signal< sc_lv<4> > i_11_fu_668_p2;
    sc_signal< sc_lv<4> > i_11_reg_1062;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_lv<64> > tmp_10_fu_674_p1;
    sc_signal< sc_lv<64> > tmp_10_reg_1067;
    sc_signal< sc_lv<1> > tmp_7_fu_662_p2;
    sc_signal< sc_lv<32> > sum_red_q0;
    sc_signal< sc_lv<32> > sum_red_load_reg_1089;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_lv<1> > tmp_30_reg_1094;
    sc_signal< sc_lv<32> > sum_green_q0;
    sc_signal< sc_lv<32> > sum_green_load_reg_1100;
    sc_signal< sc_lv<1> > tmp_33_reg_1105;
    sc_signal< sc_lv<32> > sum_blue_q0;
    sc_signal< sc_lv<32> > sum_blue_load_reg_1111;
    sc_signal< sc_lv<1> > tmp_36_reg_1116;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_lv<65> > grp_fu_708_p2;
    sc_signal< sc_lv<65> > mul1_reg_1137;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_lv<26> > tmp_32_reg_1142;
    sc_signal< sc_lv<65> > grp_fu_717_p2;
    sc_signal< sc_lv<65> > mul9_reg_1147;
    sc_signal< sc_lv<26> > tmp_35_reg_1152;
    sc_signal< sc_lv<65> > grp_fu_726_p2;
    sc_signal< sc_lv<65> > mul_reg_1157;
    sc_signal< sc_lv<26> > tmp_38_reg_1162;
    sc_signal< sc_lv<32> > tmp_11_fu_797_p3;
    sc_signal< sc_lv<32> > tmp_11_reg_1167;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_lv<32> > tmp_12_fu_839_p3;
    sc_signal< sc_lv<32> > tmp_12_reg_1172;
    sc_signal< sc_lv<32> > tmp_13_fu_881_p3;
    sc_signal< sc_lv<32> > tmp_13_reg_1177;
    sc_signal< sc_lv<4> > i_12_fu_894_p2;
    sc_signal< sc_lv<4> > i_12_reg_1185;
    sc_signal< sc_logic > ap_CS_fsm_state19;
    sc_signal< sc_lv<1> > exitcond2_fu_888_p2;
    sc_signal< sc_lv<32> > cell_avg_red_q0;
    sc_signal< sc_lv<4> > i_13_fu_911_p2;
    sc_signal< sc_lv<4> > i_13_reg_1203;
    sc_signal< sc_logic > ap_CS_fsm_state22;
    sc_signal< sc_lv<1> > exitcond3_fu_905_p2;
    sc_signal< sc_lv<32> > cell_avg_green_q0;
    sc_signal< sc_lv<4> > i_14_fu_928_p2;
    sc_signal< sc_lv<4> > i_14_reg_1221;
    sc_signal< sc_logic > ap_CS_fsm_state25;
    sc_signal< bool > ap_block_state25;
    sc_signal< sc_lv<1> > exitcond_fu_922_p2;
    sc_signal< sc_lv<1> > tmp_last_V_fu_939_p2;
    sc_signal< sc_lv<1> > tmp_last_V_reg_1231;
    sc_signal< sc_lv<32> > cell_avg_blue_q0;
    sc_signal< bool > ap_block_pp0_stage0_flag00011011;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state9;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_pp0_stage1_flag00011011;
    sc_signal< sc_lv<10> > red_address0;
    sc_signal< sc_logic > red_ce0;
    sc_signal< sc_logic > red_we0;
    sc_signal< sc_lv<32> > red_q0;
    sc_signal< sc_lv<10> > green_address0;
    sc_signal< sc_logic > green_ce0;
    sc_signal< sc_logic > green_we0;
    sc_signal< sc_lv<32> > green_q0;
    sc_signal< sc_lv<10> > blue_address0;
    sc_signal< sc_logic > blue_ce0;
    sc_signal< sc_logic > blue_we0;
    sc_signal< sc_lv<32> > blue_q0;
    sc_signal< sc_lv<4> > cell_avg_red_address0;
    sc_signal< sc_logic > cell_avg_red_ce0;
    sc_signal< sc_logic > cell_avg_red_we0;
    sc_signal< sc_lv<4> > cell_avg_blue_address0;
    sc_signal< sc_logic > cell_avg_blue_ce0;
    sc_signal< sc_logic > cell_avg_blue_we0;
    sc_signal< sc_lv<4> > cell_avg_green_address0;
    sc_signal< sc_logic > cell_avg_green_ce0;
    sc_signal< sc_logic > cell_avg_green_we0;
    sc_signal< sc_lv<4> > sum_red_address0;
    sc_signal< sc_logic > sum_red_ce0;
    sc_signal< sc_logic > sum_red_we0;
    sc_signal< sc_lv<32> > sum_red_d0;
    sc_signal< sc_lv<4> > sum_blue_address0;
    sc_signal< sc_logic > sum_blue_ce0;
    sc_signal< sc_logic > sum_blue_we0;
    sc_signal< sc_lv<32> > sum_blue_d0;
    sc_signal< sc_lv<4> > sum_green_address0;
    sc_signal< sc_logic > sum_green_ce0;
    sc_signal< sc_logic > sum_green_we0;
    sc_signal< sc_lv<32> > sum_green_d0;
    sc_signal< sc_lv<10> > i_reg_384;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<10> > i_1_reg_396;
    sc_signal< sc_lv<1> > tmp_fu_515_p2;
    sc_signal< sc_lv<10> > i_2_reg_408;
    sc_signal< sc_lv<1> > tmp_4_fu_532_p2;
    sc_signal< sc_lv<4> > i_3_reg_420;
    sc_signal< sc_lv<10> > indvar_flatten_phi_fu_435_p4;
    sc_signal< bool > ap_block_pp0_stage0_flag00000000;
    sc_signal< sc_lv<4> > j_phi_fu_446_p4;
    sc_signal< sc_lv<7> > i_4_phi_fu_457_p4;
    sc_signal< sc_lv<4> > i_5_reg_464;
    sc_signal< sc_logic > ap_CS_fsm_state18;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_lv<4> > i3_reg_475;
    sc_signal< sc_lv<4> > i4_reg_486;
    sc_signal< sc_lv<4> > i6_reg_497;
    sc_signal< sc_lv<64> > tmp_2_fu_527_p1;
    sc_signal< sc_lv<64> > tmp_6_fu_544_p1;
    sc_signal< sc_lv<64> > tmp_s_fu_561_p1;
    sc_signal< sc_lv<64> > tmp_14_fu_630_p1;
    sc_signal< bool > ap_block_pp0_stage1_flag00000000;
    sc_signal< sc_lv<64> > tmp_5_mid2_fu_621_p1;
    sc_signal< sc_lv<64> > tmp_19_fu_900_p1;
    sc_signal< sc_lv<64> > tmp_20_fu_917_p1;
    sc_signal< sc_lv<64> > tmp_21_fu_934_p1;
    sc_signal< sc_lv<32> > tmp_15_fu_641_p2;
    sc_signal< sc_lv<32> > tmp_17_fu_655_p2;
    sc_signal< sc_lv<32> > tmp_16_fu_648_p2;
    sc_signal< sc_lv<1> > tmp_9_fu_590_p2;
    sc_signal< sc_lv<4> > j_s_fu_604_p2;
    sc_signal< sc_lv<10> > grp_fu_945_p3;
    sc_signal< sc_lv<34> > grp_fu_708_p1;
    sc_signal< sc_lv<34> > grp_fu_717_p1;
    sc_signal< sc_lv<34> > grp_fu_726_p1;
    sc_signal< sc_lv<65> > neg_mul1_fu_762_p2;
    sc_signal< sc_lv<26> > tmp_31_fu_767_p4;
    sc_signal< sc_lv<32> > tmp_18_fu_777_p1;
    sc_signal< sc_lv<32> > tmp_22_fu_781_p1;
    sc_signal< sc_lv<32> > tmp_23_fu_784_p3;
    sc_signal< sc_lv<32> > neg_ti1_fu_791_p2;
    sc_signal< sc_lv<65> > neg_mul2_fu_804_p2;
    sc_signal< sc_lv<26> > tmp_34_fu_809_p4;
    sc_signal< sc_lv<32> > tmp_24_fu_819_p1;
    sc_signal< sc_lv<32> > tmp_25_fu_823_p1;
    sc_signal< sc_lv<32> > tmp_26_fu_826_p3;
    sc_signal< sc_lv<32> > neg_ti2_fu_833_p2;
    sc_signal< sc_lv<65> > neg_mul_fu_846_p2;
    sc_signal< sc_lv<26> > tmp_37_fu_851_p4;
    sc_signal< sc_lv<32> > tmp_27_fu_861_p1;
    sc_signal< sc_lv<32> > tmp_28_fu_865_p1;
    sc_signal< sc_lv<32> > tmp_29_fu_868_p3;
    sc_signal< sc_lv<32> > neg_ti_fu_875_p2;
    sc_signal< sc_lv<4> > grp_fu_945_p0;
    sc_signal< sc_lv<8> > grp_fu_945_p1;
    sc_signal< sc_lv<7> > grp_fu_945_p2;
    sc_signal< sc_lv<26> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< sc_lv<10> > grp_fu_945_p00;
    sc_signal< sc_lv<10> > grp_fu_945_p20;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<26> ap_ST_fsm_state1;
    static const sc_lv<26> ap_ST_fsm_state2;
    static const sc_lv<26> ap_ST_fsm_state3;
    static const sc_lv<26> ap_ST_fsm_state4;
    static const sc_lv<26> ap_ST_fsm_state5;
    static const sc_lv<26> ap_ST_fsm_state6;
    static const sc_lv<26> ap_ST_fsm_state7;
    static const sc_lv<26> ap_ST_fsm_state8;
    static const sc_lv<26> ap_ST_fsm_pp0_stage0;
    static const sc_lv<26> ap_ST_fsm_pp0_stage1;
    static const sc_lv<26> ap_ST_fsm_state12;
    static const sc_lv<26> ap_ST_fsm_state13;
    static const sc_lv<26> ap_ST_fsm_state14;
    static const sc_lv<26> ap_ST_fsm_state15;
    static const sc_lv<26> ap_ST_fsm_state16;
    static const sc_lv<26> ap_ST_fsm_state17;
    static const sc_lv<26> ap_ST_fsm_state18;
    static const sc_lv<26> ap_ST_fsm_state19;
    static const sc_lv<26> ap_ST_fsm_state20;
    static const sc_lv<26> ap_ST_fsm_state21;
    static const sc_lv<26> ap_ST_fsm_state22;
    static const sc_lv<26> ap_ST_fsm_state23;
    static const sc_lv<26> ap_ST_fsm_state24;
    static const sc_lv<26> ap_ST_fsm_state25;
    static const sc_lv<26> ap_ST_fsm_state26;
    static const sc_lv<26> ap_ST_fsm_state27;
    static const bool ap_const_boolean_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<2> ap_const_lv2_2;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<32> ap_const_lv32_16;
    static const sc_lv<32> ap_const_lv32_18;
    static const sc_lv<32> ap_const_lv32_19;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_8;
    static const bool ap_const_boolean_0;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<32> ap_const_lv32_14;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<4> ap_const_lv4_F;
    static const sc_lv<10> ap_const_lv10_384;
    static const sc_lv<10> ap_const_lv10_1;
    static const sc_lv<4> ap_const_lv4_9;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<7> ap_const_lv7_64;
    static const sc_lv<7> ap_const_lv7_1;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<65> ap_const_lv65_147AE147B;
    static const sc_lv<32> ap_const_lv32_27;
    static const sc_lv<32> ap_const_lv32_40;
    static const sc_lv<65> ap_const_lv65_0;
    static const sc_lv<4> ap_const_lv4_8;
    static const sc_lv<10> ap_const_lv10_64;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_pp0_stage1();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state12();
    void thread_ap_CS_fsm_state13();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state15();
    void thread_ap_CS_fsm_state16();
    void thread_ap_CS_fsm_state17();
    void thread_ap_CS_fsm_state18();
    void thread_ap_CS_fsm_state19();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state20();
    void thread_ap_CS_fsm_state21();
    void thread_ap_CS_fsm_state22();
    void thread_ap_CS_fsm_state23();
    void thread_ap_CS_fsm_state24();
    void thread_ap_CS_fsm_state25();
    void thread_ap_CS_fsm_state26();
    void thread_ap_CS_fsm_state27();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_block_pp0_stage0_flag00000000();
    void thread_ap_block_pp0_stage0_flag00011001();
    void thread_ap_block_pp0_stage0_flag00011011();
    void thread_ap_block_pp0_stage1_flag00000000();
    void thread_ap_block_pp0_stage1_flag00011001();
    void thread_ap_block_pp0_stage1_flag00011011();
    void thread_ap_block_state10_pp0_stage1_iter0();
    void thread_ap_block_state11_pp0_stage0_iter1();
    void thread_ap_block_state25();
    void thread_ap_block_state9_pp0_stage0_iter0();
    void thread_ap_condition_pp0_exit_iter0_state9();
    void thread_ap_enable_pp0();
    void thread_ap_idle_pp0();
    void thread_ap_rst_n_inv();
    void thread_blue_address0();
    void thread_blue_ce0();
    void thread_blue_we0();
    void thread_cell_avg_blue_address0();
    void thread_cell_avg_blue_ce0();
    void thread_cell_avg_blue_we0();
    void thread_cell_avg_green_address0();
    void thread_cell_avg_green_ce0();
    void thread_cell_avg_green_we0();
    void thread_cell_avg_red_address0();
    void thread_cell_avg_red_ce0();
    void thread_cell_avg_red_we0();
    void thread_exitcond2_fu_888_p2();
    void thread_exitcond3_fu_905_p2();
    void thread_exitcond_flatten_fu_578_p2();
    void thread_exitcond_fu_922_p2();
    void thread_green_address0();
    void thread_green_ce0();
    void thread_green_we0();
    void thread_grp_fu_708_p1();
    void thread_grp_fu_717_p1();
    void thread_grp_fu_726_p1();
    void thread_grp_fu_945_p0();
    void thread_grp_fu_945_p00();
    void thread_grp_fu_945_p1();
    void thread_grp_fu_945_p2();
    void thread_grp_fu_945_p20();
    void thread_i_10_fu_636_p2();
    void thread_i_11_fu_668_p2();
    void thread_i_12_fu_894_p2();
    void thread_i_13_fu_911_p2();
    void thread_i_14_fu_928_p2();
    void thread_i_4_mid2_fu_596_p3();
    void thread_i_4_phi_fu_457_p4();
    void thread_i_6_fu_521_p2();
    void thread_i_7_fu_538_p2();
    void thread_i_8_fu_555_p2();
    void thread_i_9_fu_572_p2();
    void thread_indvar_flatten_next_fu_584_p2();
    void thread_indvar_flatten_phi_fu_435_p4();
    void thread_j_phi_fu_446_p4();
    void thread_j_s_fu_604_p2();
    void thread_mat_in_TDATA_blk_n();
    void thread_mat_in_TREADY();
    void thread_mat_in_V_data_V_0_ack_in();
    void thread_mat_in_V_data_V_0_ack_out();
    void thread_mat_in_V_data_V_0_data_out();
    void thread_mat_in_V_data_V_0_load_A();
    void thread_mat_in_V_data_V_0_load_B();
    void thread_mat_in_V_data_V_0_sel();
    void thread_mat_in_V_data_V_0_state_cmp_full();
    void thread_mat_in_V_data_V_0_vld_in();
    void thread_mat_in_V_data_V_0_vld_out();
    void thread_mat_in_V_dest_V_0_ack_out();
    void thread_mat_in_V_dest_V_0_vld_in();
    void thread_mat_out_TDATA();
    void thread_mat_out_TDATA_blk_n();
    void thread_mat_out_TDEST();
    void thread_mat_out_TID();
    void thread_mat_out_TKEEP();
    void thread_mat_out_TLAST();
    void thread_mat_out_TSTRB();
    void thread_mat_out_TUSER();
    void thread_mat_out_TVALID();
    void thread_mat_out_V_data_V_1_ack_in();
    void thread_mat_out_V_data_V_1_ack_out();
    void thread_mat_out_V_data_V_1_data_in();
    void thread_mat_out_V_data_V_1_data_out();
    void thread_mat_out_V_data_V_1_load_A();
    void thread_mat_out_V_data_V_1_load_B();
    void thread_mat_out_V_data_V_1_sel();
    void thread_mat_out_V_data_V_1_state_cmp_full();
    void thread_mat_out_V_data_V_1_vld_in();
    void thread_mat_out_V_data_V_1_vld_out();
    void thread_mat_out_V_dest_V_1_ack_in();
    void thread_mat_out_V_dest_V_1_ack_out();
    void thread_mat_out_V_dest_V_1_data_out();
    void thread_mat_out_V_dest_V_1_sel();
    void thread_mat_out_V_dest_V_1_vld_in();
    void thread_mat_out_V_dest_V_1_vld_out();
    void thread_mat_out_V_id_V_1_ack_in();
    void thread_mat_out_V_id_V_1_ack_out();
    void thread_mat_out_V_id_V_1_data_out();
    void thread_mat_out_V_id_V_1_sel();
    void thread_mat_out_V_id_V_1_vld_in();
    void thread_mat_out_V_id_V_1_vld_out();
    void thread_mat_out_V_keep_V_1_ack_in();
    void thread_mat_out_V_keep_V_1_ack_out();
    void thread_mat_out_V_keep_V_1_data_out();
    void thread_mat_out_V_keep_V_1_sel();
    void thread_mat_out_V_keep_V_1_vld_in();
    void thread_mat_out_V_keep_V_1_vld_out();
    void thread_mat_out_V_last_V_1_ack_in();
    void thread_mat_out_V_last_V_1_ack_out();
    void thread_mat_out_V_last_V_1_data_in();
    void thread_mat_out_V_last_V_1_data_out();
    void thread_mat_out_V_last_V_1_load_A();
    void thread_mat_out_V_last_V_1_load_B();
    void thread_mat_out_V_last_V_1_sel();
    void thread_mat_out_V_last_V_1_state_cmp_full();
    void thread_mat_out_V_last_V_1_vld_in();
    void thread_mat_out_V_last_V_1_vld_out();
    void thread_mat_out_V_strb_V_1_ack_in();
    void thread_mat_out_V_strb_V_1_ack_out();
    void thread_mat_out_V_strb_V_1_data_out();
    void thread_mat_out_V_strb_V_1_sel();
    void thread_mat_out_V_strb_V_1_vld_in();
    void thread_mat_out_V_strb_V_1_vld_out();
    void thread_mat_out_V_user_V_1_ack_in();
    void thread_mat_out_V_user_V_1_ack_out();
    void thread_mat_out_V_user_V_1_data_out();
    void thread_mat_out_V_user_V_1_sel();
    void thread_mat_out_V_user_V_1_vld_in();
    void thread_mat_out_V_user_V_1_vld_out();
    void thread_neg_mul1_fu_762_p2();
    void thread_neg_mul2_fu_804_p2();
    void thread_neg_mul_fu_846_p2();
    void thread_neg_ti1_fu_791_p2();
    void thread_neg_ti2_fu_833_p2();
    void thread_neg_ti_fu_875_p2();
    void thread_red_address0();
    void thread_red_ce0();
    void thread_red_we0();
    void thread_sum_blue_address0();
    void thread_sum_blue_ce0();
    void thread_sum_blue_d0();
    void thread_sum_blue_we0();
    void thread_sum_green_address0();
    void thread_sum_green_ce0();
    void thread_sum_green_d0();
    void thread_sum_green_we0();
    void thread_sum_red_address0();
    void thread_sum_red_ce0();
    void thread_sum_red_d0();
    void thread_sum_red_we0();
    void thread_tmp_10_fu_674_p1();
    void thread_tmp_11_fu_797_p3();
    void thread_tmp_12_fu_839_p3();
    void thread_tmp_13_fu_881_p3();
    void thread_tmp_14_fu_630_p1();
    void thread_tmp_15_fu_641_p2();
    void thread_tmp_16_fu_648_p2();
    void thread_tmp_17_fu_655_p2();
    void thread_tmp_18_fu_777_p1();
    void thread_tmp_19_fu_900_p1();
    void thread_tmp_1_fu_566_p2();
    void thread_tmp_20_fu_917_p1();
    void thread_tmp_21_fu_934_p1();
    void thread_tmp_22_fu_781_p1();
    void thread_tmp_23_fu_784_p3();
    void thread_tmp_24_fu_819_p1();
    void thread_tmp_25_fu_823_p1();
    void thread_tmp_26_fu_826_p3();
    void thread_tmp_27_fu_861_p1();
    void thread_tmp_28_fu_865_p1();
    void thread_tmp_29_fu_868_p3();
    void thread_tmp_2_fu_527_p1();
    void thread_tmp_31_fu_767_p4();
    void thread_tmp_34_fu_809_p4();
    void thread_tmp_37_fu_851_p4();
    void thread_tmp_3_mid2_v_v_fu_610_p3();
    void thread_tmp_4_fu_532_p2();
    void thread_tmp_5_mid2_fu_621_p1();
    void thread_tmp_6_fu_544_p1();
    void thread_tmp_7_fu_662_p2();
    void thread_tmp_8_fu_549_p2();
    void thread_tmp_9_fu_590_p2();
    void thread_tmp_fu_515_p2();
    void thread_tmp_last_V_fu_939_p2();
    void thread_tmp_s_fu_561_p1();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
