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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/IT CITY/Documents/CAD/Project/Project/PE.vhd";



static void work_a_0095154033_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    int t8;
    char *t9;
    char *t10;
    double t11;
    char *t12;
    int t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    int t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    double t25;
    char *t26;
    char *t27;
    int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    double t40;
    double t41;
    double t42;
    char *t43;
    char *t44;
    unsigned char t45;
    unsigned char t46;
    unsigned char t47;

LAB0:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 4928);
    *((int *)t1) = 0;
    t2 = (t0 + 4932);
    *((int *)t2) = 2;
    t3 = 0;
    t4 = 2;

LAB2:    if (t3 <= t4)
        goto LAB3;

LAB5:    xsi_set_current_line(54, ng0);
    t1 = (t0 + 1648U);
    t2 = *((char **)t1);
    t11 = *((double *)t2);
    t45 = (t11 >= 0);
    if (t45 == 1)
        goto LAB15;

LAB16:    t40 = (t11 - 0.50000000000000000);
    t3 = ((int)(t40));

LAB17:    t47 = (t3 < 0);
    if (t47 != 0)
        goto LAB12;

LAB14:
LAB13:    xsi_set_current_line(57, ng0);
    t1 = (t0 + 1648U);
    t2 = *((char **)t1);
    t11 = *((double *)t2);
    t1 = (t0 + 3032);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    *((double *)t10) = t11;
    xsi_driver_first_trans_fast_port(t1);
    t1 = (t0 + 2952);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(50, ng0);
    t5 = (t0 + 4936);
    *((int *)t5) = 0;
    t6 = (t0 + 4940);
    *((int *)t6) = 2;
    t7 = 0;
    t8 = 2;

LAB6:    if (t7 <= t8)
        goto LAB7;

LAB9:
LAB4:    t1 = (t0 + 4928);
    t3 = *((int *)t1);
    t2 = (t0 + 4932);
    t4 = *((int *)t2);
    if (t3 == t4)
        goto LAB5;

LAB11:    t7 = (t3 + 1);
    t3 = t7;
    t5 = (t0 + 4928);
    *((int *)t5) = t3;
    goto LAB2;

LAB7:    xsi_set_current_line(51, ng0);
    t9 = (t0 + 1648U);
    t10 = *((char **)t9);
    t11 = *((double *)t10);
    t9 = (t0 + 1032U);
    t12 = *((char **)t9);
    t9 = (t0 + 4928);
    t13 = *((int *)t9);
    t14 = (t13 - 0);
    t15 = (t14 * 1);
    xsi_vhdl_check_range_of_index(0, 2, 1, *((int *)t9));
    t16 = (t15 * 3U);
    t17 = (t0 + 4936);
    t18 = *((int *)t17);
    t19 = (t18 - 0);
    t20 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 2, 1, *((int *)t17));
    t21 = (t16 + t20);
    t22 = (8U * t21);
    t23 = (0 + t22);
    t24 = (t12 + t23);
    t25 = *((double *)t24);
    t26 = (t0 + 1192U);
    t27 = *((char **)t26);
    t26 = (t0 + 4928);
    t28 = *((int *)t26);
    t29 = (t28 - 0);
    t30 = (t29 * 1);
    xsi_vhdl_check_range_of_index(0, 2, 1, *((int *)t26));
    t31 = (t30 * 3U);
    t32 = (t0 + 4936);
    t33 = *((int *)t32);
    t34 = (t33 - 0);
    t35 = (t34 * 1);
    xsi_vhdl_check_range_of_index(0, 2, 1, *((int *)t32));
    t36 = (t31 + t35);
    t37 = (8U * t36);
    t38 = (0 + t37);
    t39 = (t27 + t38);
    t40 = *((double *)t39);
    t41 = (t25 * t40);
    t42 = (t11 + t41);
    t43 = (t0 + 1648U);
    t44 = *((char **)t43);
    t43 = (t44 + 0);
    *((double *)t43) = t42;

LAB8:    t1 = (t0 + 4936);
    t7 = *((int *)t1);
    t2 = (t0 + 4940);
    t8 = *((int *)t2);
    if (t7 == t8)
        goto LAB9;

LAB10:    t13 = (t7 + 1);
    t7 = t13;
    t5 = (t0 + 4936);
    *((int *)t5) = t7;
    goto LAB6;

LAB12:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 1648U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((double *)t1) = 0.00000000000000000;
    goto LAB13;

LAB15:    t46 = (t11 >= 2147483647);
    if (t46 == 1)
        goto LAB18;

LAB19:    t25 = (t11 + 0.50000000000000000);
    t3 = ((int)(t25));
    goto LAB17;

LAB18:    t3 = 2147483647;
    goto LAB17;

}


extern void work_a_0095154033_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0095154033_3212880686_p_0};
	xsi_register_didat("work_a_0095154033_3212880686", "isim/testbench_isim_beh.exe.sim/work/a_0095154033_3212880686.didat");
	xsi_register_executes(pe);
}
