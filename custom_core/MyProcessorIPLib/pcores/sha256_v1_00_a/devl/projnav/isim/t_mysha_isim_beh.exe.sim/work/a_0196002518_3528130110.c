/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/arlininger/FPGA/ZYBO/custom_core/MyProcessorIPLib/pcores/sha256_v1_00_a/devl/projnav/c4b.vhd";



static void work_a_0196002518_3528130110_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(42, ng0);

LAB3:    t1 = (t0 + 4000);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)0;
    xsi_driver_first_trans_delta(t1, 3U, 1, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0196002518_3528130110_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned char t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;

LAB0:    xsi_set_current_line(43, ng0);

LAB3:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = (3 - 2);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 6594);
    t8 = xsi_vhdl_bitvec_and(t8, t1, 3U, t6, 3U);
    t9 = (t0 + 1512U);
    t10 = *((char **)t9);
    t11 = (3 - 2);
    t12 = (t11 * 1U);
    t13 = (0 + t12);
    t9 = (t10 + t13);
    t14 = (t0 + 1672U);
    t15 = *((char **)t14);
    t16 = (3 - 2);
    t17 = (t16 * 1U);
    t18 = (0 + t17);
    t14 = (t15 + t18);
    t19 = xsi_vhdl_bitvec_and(t19, t9, 3U, t14, 3U);
    t20 = xsi_vhdl_bitvec_or(t20, t8, 3U, t19, 3U);
    t21 = (t0 + 6597);
    t23 = (t0 + 1672U);
    t24 = *((char **)t23);
    t25 = (3 - 2);
    t26 = (t25 * 1U);
    t27 = (0 + t26);
    t23 = (t24 + t27);
    t28 = xsi_vhdl_bitvec_and(t28, t21, 3U, t23, 3U);
    t29 = xsi_vhdl_bitvec_or(t29, t20, 3U, t28, 3U);
    t30 = (3U != 3U);
    if (t30 == 1)
        goto LAB5;

LAB6:    t31 = (t0 + 4064);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memcpy(t35, t29, 3U);
    xsi_driver_first_trans_delta(t31, 0U, 3U, 0LL);

LAB2:    t36 = (t0 + 3888);
    *((int *)t36) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(3U, 3U, 0);
    goto LAB6;

}

static void work_a_0196002518_3528130110_p_2(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)1);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 3904);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(47, ng0);
    t7 = (t0 + 1352U);
    t8 = *((char **)t7);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)1);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 6604);
    t8 = xsi_vhdl_bitvec_xor(t8, t3, 4U, t2, 4U);
    t11 = (t0 + 1672U);
    t12 = *((char **)t11);
    t11 = xsi_vhdl_bitvec_xor(t11, t8, 4U, t12, 4U);
    t1 = (4U != 4U);
    if (t1 == 1)
        goto LAB11;

LAB12:    t13 = (t0 + 4128);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t11, 4U);
    xsi_driver_first_trans_fast(t13);

LAB9:    goto LAB3;

LAB5:    t2 = (t0 + 1152U);
    t6 = xsi_signal_has_event(t2);
    t1 = t6;
    goto LAB7;

LAB8:    xsi_set_current_line(48, ng0);
    t7 = (t0 + 6600);
    t12 = (t0 + 4128);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t7, 4U);
    xsi_driver_first_trans_fast(t12);
    goto LAB9;

LAB11:    xsi_size_not_matching(4U, 4U, 0);
    goto LAB12;

}

static void work_a_0196002518_3528130110_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(54, ng0);

LAB3:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 4192);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 3920);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_0196002518_3528130110_init()
{
	static char *pe[] = {(void *)work_a_0196002518_3528130110_p_0,(void *)work_a_0196002518_3528130110_p_1,(void *)work_a_0196002518_3528130110_p_2,(void *)work_a_0196002518_3528130110_p_3};
	xsi_register_didat("work_a_0196002518_3528130110", "isim/t_mysha_isim_beh.exe.sim/work/a_0196002518_3528130110.didat");
	xsi_register_executes(pe);
}
