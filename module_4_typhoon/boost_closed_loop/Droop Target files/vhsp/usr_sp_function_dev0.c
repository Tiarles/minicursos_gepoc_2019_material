// generated using template: cop_main.template---------------------------------------------
/******************************************************************************************
**
**  Module Name: cop_main.c
**  NOTE: Automatically generated file. DO NOT MODIFY!
**  Description:
**            Main file
**
******************************************************************************************/
// generated using template: arm/custom_include.template-----------------------------------

// x86 libraries:
#include "../include/sp_functions_dev0.h"

// H files from Advanced C Function components
//#include "example_dll.h"

// Header files from additional sources (Advanced C Function)
// ----------------------------------------------------------------------------------------
// generated using template: VirtualHIL/custom_defines.template----------------------------

typedef unsigned char X_UnInt8;
typedef char X_Int8;
typedef signed short X_Int16;
typedef unsigned short X_UnInt16;
typedef int X_Int32;
typedef unsigned int X_UnInt32;
typedef unsigned int uint;
typedef double real;

// ----------------------------------------------------------------------------------------
// generated using template: custom_consts.template----------------------------------------

// arithmetic constants
#define C_SQRT_2                    1.4142135623730950488016887242097f
#define C_SQRT_3                    1.7320508075688772935274463415059f
#define C_PI                        3.1415926535897932384626433832795f
#define C_E                         2.7182818284590452353602874713527f
#define C_2PI                       6.283185307179586476925286766559f

//@cmp.def.start
//component defines





































//@cmp.def.end


//-----------------------------------------------------------------------------------------
// generated using template: common_variables.template-------------------------------------
// true global variables


//@cmp.var.start
// variables
double _vb3_va1__out;
double _vb1_va1__out;
double _i1_ia1__out;
double _vb2_va1__out;
double _vload_va1__out;
double _i3_ia1__out;
double _i2_ia1__out;
X_UnInt32 _single_phase_inverter2_pwm_modulator__channels[2] = {0, 1};
double _single_phase_inverter2_pwm_modulator__limited_in[2];
X_UnInt32 _single_phase_inverter2_pwm_modulator__update_mask;
X_UnInt32 _single_phase_inverter2_pwm_modulator__sig_dir[2];

double _constant2__out = 6.666666666666667e-05;
double _constant4__out = 138.0;
X_UnInt32 _single_phase_inverter1_pwm_modulator__channels[2] = {2, 3};
double _single_phase_inverter1_pwm_modulator__limited_in[2];
X_UnInt32 _single_phase_inverter1_pwm_modulator__update_mask;
X_UnInt32 _single_phase_inverter1_pwm_modulator__sig_dir[2];

double _constant1__out = 6.666666666666667e-05;
X_UnInt32 _single_phase_inverter3_pwm_modulator__channels[2] = {4, 5};
double _single_phase_inverter3_pwm_modulator__limited_in[2];
X_UnInt32 _single_phase_inverter3_pwm_modulator__update_mask;
X_UnInt32 _single_phase_inverter3_pwm_modulator__sig_dir[2];

double _chave_s_80l__out;
double _constant3__out = 138.0;
double _constant5__out = 6.666666666666667e-05;
double _chave_s_75nl__out;
double _c_function2__Tr;
double _c_function2__vag;
double _c_function2__i_d;
double _c_function2__i_q;
double _c_function2__vb_d;
double _c_function2__vb_q;
double _c_function2__vb_D;
double _c_function2__vb_Q;
double _c_function2__vi_d;
double _c_function2__vi_q;
double _c_function2__teta_i;
double _c_function2__teta_b;
double _c_function2__delta;
double _c_function2__seno;
double _c_function2__cosseno;
X_Int32 _c_function2__t1;
double _c_function2__np;
double _c_function2__p;
double _c_function2__q;
double _c_function2__V;
double _c_function2__wi;
double _c_function2__pf;
double _c_function2__qf;
double _c_function2__S_nom;
double _c_function2__V_nom;
double _c_function2__p_ref;
double _c_function2__q_ref;
double _c_function2__mp;
double _c_function2__mq;
double _c_function2__erro_w;
double _c_function2__v;
double _c_function2__teta;
double _c_function2__w;
double _c_function2__pi;
double _c_function2__vi;
double _c_function2__R2;
double _c_function2__freq;
double _c_function2__vbg;
double _c_function2__Rv;
double _c_function2__i_alfa;
double _c_function2__i_beta;
double _c_function2__i_alfa_ant;
double _c_function2__i_beta_ant;
double _c_function2__vb_alfa;
double _c_function2__vb_beta;
double _c_function2__vb_alfa_ant;
double _c_function2__vb_beta_ant;
double _c_function2__vi_alfa;
double _c_function2__vi_beta;
double _c_function2__vi_alfa_ant;
double _c_function2__vi_beta_ant;
double _c_function2__w_PLL;
double _c_function2__a1;
double _c_function2__a2;
double _c_function2__x_PLL;
double _c_function2__erro_PLL;
double _c_function2__wbp;
double _c_function2__Ts;
double _c_function2__i;
double _c_function2__vb;


double _c_function2__PWMa1;
double _c_function2__PWMa2;
double _c_function2__P_;
double _c_function2__Q_;
double _c_function2__V_;
double _c_function2__freq_;
X_Int32 _c_function2__hab_inv;
double _c_function1__Tr;
double _c_function1__vag;
double _c_function1__i_d;
double _c_function1__i_q;
double _c_function1__vb_d;
double _c_function1__vb_q;
double _c_function1__vb_D;
double _c_function1__vb_Q;
double _c_function1__vi_d;
double _c_function1__vi_q;
double _c_function1__teta_i;
double _c_function1__teta_b;
double _c_function1__delta;
double _c_function1__seno;
double _c_function1__cosseno;
X_Int32 _c_function1__t1;
double _c_function1__np;
double _c_function1__p;
double _c_function1__q;
double _c_function1__V;
double _c_function1__wi;
double _c_function1__pf;
double _c_function1__qf;
double _c_function1__S_nom;
double _c_function1__V_nom;
double _c_function1__p_ref;
double _c_function1__q_ref;
double _c_function1__mp;
double _c_function1__mq;
double _c_function1__erro_w;
double _c_function1__v;
double _c_function1__teta;
double _c_function1__w;
double _c_function1__pi;
double _c_function1__vi;
double _c_function1__R2;
double _c_function1__freq;
double _c_function1__vbg;
double _c_function1__Rv;
double _c_function1__i_alfa;
double _c_function1__i_beta;
double _c_function1__i_alfa_ant;
double _c_function1__i_beta_ant;
double _c_function1__vb_alfa;
double _c_function1__vb_beta;
double _c_function1__vb_alfa_ant;
double _c_function1__vb_beta_ant;
double _c_function1__vi_alfa;
double _c_function1__vi_beta;
double _c_function1__vi_alfa_ant;
double _c_function1__vi_beta_ant;
double _c_function1__wbp;
double _c_function1__Ts;
double _c_function1__i;
double _c_function1__vb;


double _c_function1__PWMa1;
double _c_function1__PWMa2;
double _c_function1__P_;
double _c_function1__Q_;
double _c_function1__V_;
double _c_function1__freq_;
X_Int32 _c_function1__hab_inv;
X_Int32 _c_function3__flag1;
X_Int32 _c_function3__flag2;
double _c_function3__antVload;
double _c_function3__antantVload;
double _c_function3__Vload_abs;
double _c_function3__Vload;
double _c_function3__Vpeak;
X_Int32 _c_function3__in;


double _c_function3__out;
double _c_function5__Tr;
double _c_function5__vag;
double _c_function5__i_d;
double _c_function5__i_q;
double _c_function5__vb_d;
double _c_function5__vb_q;
double _c_function5__vb_D;
double _c_function5__vb_Q;
double _c_function5__vi_d;
double _c_function5__vi_q;
double _c_function5__teta_i;
double _c_function5__teta_b;
double _c_function5__delta;
double _c_function5__seno;
double _c_function5__cosseno;
X_Int32 _c_function5__t1;
double _c_function5__np;
double _c_function5__p;
double _c_function5__q;
double _c_function5__V;
double _c_function5__wi;
double _c_function5__pf;
double _c_function5__qf;
double _c_function5__S_nom;
double _c_function5__V_nom;
double _c_function5__p_ref;
double _c_function5__q_ref;
double _c_function5__mp;
double _c_function5__mq;
double _c_function5__erro_w;
double _c_function5__v;
double _c_function5__teta;
double _c_function5__w;
double _c_function5__pi;
double _c_function5__vi;
double _c_function5__R2;
double _c_function5__freq;
double _c_function5__vbg;
double _c_function5__Rv;
double _c_function5__i_alfa;
double _c_function5__i_beta;
double _c_function5__i_alfa_ant;
double _c_function5__i_beta_ant;
double _c_function5__vb_alfa;
double _c_function5__vb_beta;
double _c_function5__vb_alfa_ant;
double _c_function5__vb_beta_ant;
double _c_function5__vi_alfa;
double _c_function5__vi_beta;
double _c_function5__vi_alfa_ant;
double _c_function5__vi_beta_ant;
double _c_function5__w_PLL;
double _c_function5__a1;
double _c_function5__a2;
double _c_function5__x_PLL;
double _c_function5__erro_PLL;
double _c_function5__wbp;
double _c_function5__Ts;
double _c_function5__i;
double _c_function5__vb;


double _c_function5__PWMa1;
double _c_function5__PWMa2;
double _c_function5__P_;
double _c_function5__Q_;
double _c_function5__V_;
double _c_function5__freq_;
X_Int32 _c_function5__hab_inv;
X_Int32 _c_function4__flag1;
X_Int32 _c_function4__flag2;
double _c_function4__antVload;
double _c_function4__antantVload;
double _c_function4__Vload_abs;
double _c_function4__Vload;
double _c_function4__Vpeak;
X_Int32 _c_function4__in;


double _c_function4__out;
//@cmp.var.end

//@cmp.svar.start
// state variables
//@cmp.svar.end
// generated using template: virtual_hil/custom_functions.template---------------------------------
void ReInit_user_sp_cpu_dev0() {
#if DEBUG_MODE
    printf("\n\rReInitTimer");
#endif
    //@cmp.init.block.start
    HIL_OutAO(0x4002, 0.0f);
    HIL_OutAO(0x4001, 0.0f);
    _single_phase_inverter2_pwm_modulator__update_mask = 3;
    HIL_OutInt32(0x2000080 + _single_phase_inverter2_pwm_modulator__channels[0], 1666);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _single_phase_inverter2_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000080 + _single_phase_inverter2_pwm_modulator__channels[1], 1666);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _single_phase_inverter2_pwm_modulator__channels[1], 0);
    HIL_OutInt32(0x20001c0 + _single_phase_inverter2_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _single_phase_inverter2_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x20001c0 + _single_phase_inverter2_pwm_modulator__channels[1], 0);
    HIL_OutInt32(0x2000200 + _single_phase_inverter2_pwm_modulator__channels[1], 0);
    HIL_OutInt32(0x2000240 + _single_phase_inverter2_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _single_phase_inverter2_pwm_modulator__channels[1], 0);
    HIL_OutInt32(0x2000140, _single_phase_inverter2_pwm_modulator__update_mask);
    HIL_OutAO(0x4006, 0.0f);
    _single_phase_inverter1_pwm_modulator__update_mask = 12;
    HIL_OutInt32(0x2000080 + _single_phase_inverter1_pwm_modulator__channels[0], 1666);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _single_phase_inverter1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000080 + _single_phase_inverter1_pwm_modulator__channels[1], 1666);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _single_phase_inverter1_pwm_modulator__channels[1], 0);
    HIL_OutInt32(0x20001c0 + _single_phase_inverter1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _single_phase_inverter1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x20001c0 + _single_phase_inverter1_pwm_modulator__channels[1], 0);
    HIL_OutInt32(0x2000200 + _single_phase_inverter1_pwm_modulator__channels[1], 0);
    HIL_OutInt32(0x2000240 + _single_phase_inverter1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _single_phase_inverter1_pwm_modulator__channels[1], 0);
    HIL_OutInt32(0x2000140, _single_phase_inverter1_pwm_modulator__update_mask);
    HIL_OutAO(0x400c, 0.0f);
    HIL_OutAO(0x400a, 0.0f);
    _single_phase_inverter3_pwm_modulator__update_mask = 48;
    HIL_OutInt32(0x2000080 + _single_phase_inverter3_pwm_modulator__channels[0], 1666);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _single_phase_inverter3_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000080 + _single_phase_inverter3_pwm_modulator__channels[1], 1666);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _single_phase_inverter3_pwm_modulator__channels[1], 0);
    HIL_OutInt32(0x20001c0 + _single_phase_inverter3_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _single_phase_inverter3_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x20001c0 + _single_phase_inverter3_pwm_modulator__channels[1], 0);
    HIL_OutInt32(0x2000200 + _single_phase_inverter3_pwm_modulator__channels[1], 0);
    HIL_OutInt32(0x2000240 + _single_phase_inverter3_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _single_phase_inverter3_pwm_modulator__channels[1], 0);
    HIL_OutInt32(0x2000140, _single_phase_inverter3_pwm_modulator__update_mask);
    HIL_OutAO(0x4007, 0.0f);
    HIL_OutAO(0x4005, 0.0f);
    HIL_OutAO(0x4008, 0.0f);
    HIL_OutAO(0x400b, 0.0f);
    HIL_OutAO(0x4004, 0.0f);
    HIL_OutAO(0x4003, 0.0f);
    HIL_OutAO(0x4009, 0.0f);
    _c_function2__Rv = 0.5;
    _c_function2__R2 = 1.4142135623730950488016887242097;
    _c_function2__pi = 3.1415926535897932384626433832795;
    _c_function2__hab_inv = 1;
    _c_function2__w = 6.2831853071795864769 * 60;
    _c_function2__Tr = 1 / 60;
    _c_function2__freq = 0;
    _c_function2__i_d = 0.;
    _c_function2__i_q = 0;
    _c_function2__vb_d = 0.;
    _c_function2__vb_q = 0.;
    _c_function2__vb_D = 0.;
    _c_function2__vb_Q = 0.;
    _c_function2__vi_d = 0.;
    _c_function2__vi_q = 0.;
    _c_function2__i_alfa = 0;
    _c_function2__i_beta = 0;
    _c_function2__w_PLL = 0;
    _c_function2__a1 = 0.1;
    _c_function2__a2 = 20;
    _c_function2__x_PLL = 0;
    _c_function2__erro_PLL = 0;
    _c_function2__seno = 0., _c_function2__cosseno = 0.;
    _c_function2__t1 = 0;
    _c_function2__np = 200;
    _c_function2__p = 0;
    _c_function2__q = 0.;
    _c_function2__V = 0.;
    _c_function2__wi = _c_function2__w;
    _c_function2__pf = 0;
    _c_function2__qf = 0;
    _c_function2__S_nom = 750.;
    _c_function2__V_nom = 120.;
    _c_function2__p_ref = 0.;
    _c_function2__q_ref = 0.;
    _c_function2__mp = 0.004188790204;
    _c_function2__mq = 0.008;
    _c_function2__erro_w = 0.;
    _c_function2__v = 0.;
    _c_function2__teta = 0.;
    _c_function2__wbp = 2 * _c_function2__pi * 6;
    _c_function1__Rv = 0.5;
    _c_function1__R2 = 1.4142135623730950488016887242097;
    _c_function1__pi = 3.1415926535897932384626433832795;
    _c_function1__hab_inv = 1;
    _c_function1__w = 6.2831853071795864769 * 60;
    _c_function1__Tr = 1 / 60;
    _c_function1__freq = 0;
    _c_function1__i_d = 0.;
    _c_function1__i_q = 0;
    _c_function1__vb_d = 0.;
    _c_function1__vb_q = 0.;
    _c_function1__vb_D = 0.;
    _c_function1__vb_Q = 0.;
    _c_function1__vi_d = 0.;
    _c_function1__vi_q = 0.;
    _c_function1__i_alfa = 0;
    _c_function1__i_beta = 0;
    _c_function1__seno = 0., _c_function1__cosseno = 0.;
    _c_function1__t1 = 0;
    _c_function1__np = 200;
    _c_function1__p = 0;
    _c_function1__q = 0.;
    _c_function1__V = 0.;
    _c_function1__wi = _c_function1__w;
    _c_function1__pf = 0;
    _c_function1__qf = 0;
    _c_function1__S_nom = 750.;
    _c_function1__V_nom = 120.;
    _c_function1__p_ref = 0.;
    _c_function1__q_ref = 0.;
    _c_function1__mp = 0.004188790204;
    _c_function1__mq = 0.008;
    _c_function1__erro_w = 0.;
    _c_function1__v = 0.;
    _c_function1__teta = 0.;
    _c_function1__wbp = 2 * _c_function1__pi * 6;
    _c_function3__out = 0;
    _c_function3__flag1 = 1;
    _c_function3__flag2 = 1;
    if (_c_function3__Vload < 0) {
        _c_function3__Vload_abs = -_c_function3__Vload;
    }
    else {
        _c_function3__Vload_abs = _c_function3__Vload;
    }
    _c_function3__antVload = _c_function3__Vload_abs;
    _c_function3__antantVload = _c_function3__Vload_abs;
    _c_function5__Rv = 0.5;
    _c_function5__R2 = 1.4142135623730950488016887242097;
    _c_function5__pi = 3.1415926535897932384626433832795;
    _c_function5__hab_inv = 1;
    _c_function5__w = 6.2831853071795864769 * 60;
    _c_function5__Tr = 1 / 60;
    _c_function5__freq = 0;
    _c_function5__i_d = 0.;
    _c_function5__i_q = 0;
    _c_function5__vb_d = 0.;
    _c_function5__vb_q = 0.;
    _c_function5__vb_D = 0.;
    _c_function5__vb_Q = 0.;
    _c_function5__vi_d = 0.;
    _c_function5__vi_q = 0.;
    _c_function5__i_alfa = 0;
    _c_function5__i_beta = 0;
    _c_function5__w_PLL = 0;
    _c_function5__a1 = 0.1;
    _c_function5__a2 = 20;
    _c_function5__x_PLL = 0;
    _c_function5__erro_PLL = 0;
    _c_function5__seno = 0., _c_function5__cosseno = 0.;
    _c_function5__t1 = 0;
    _c_function5__np = 200;
    _c_function5__p = 0;
    _c_function5__q = 0.;
    _c_function5__V = 0.;
    _c_function5__wi = _c_function5__w;
    _c_function5__pf = 0;
    _c_function5__qf = 0;
    _c_function5__S_nom = 750.;
    _c_function5__V_nom = 120.;
    _c_function5__p_ref = 0.;
    _c_function5__q_ref = 0.;
    _c_function5__mp = 0.004188790204;
    _c_function5__mq = 0.008;
    _c_function5__erro_w = 0.;
    _c_function5__v = 0.;
    _c_function5__teta = 0.;
    _c_function5__wbp = 2 * _c_function5__pi * 6;
    _c_function4__out = 0;
    _c_function4__flag1 = 1;
    _c_function4__flag2 = 1;
    if (_c_function4__Vload < 0) {
        _c_function4__Vload_abs = -_c_function4__Vload;
    }
    else {
        _c_function4__Vload_abs = _c_function4__Vload;
    }
    _c_function4__antVload = _c_function4__Vload_abs;
    _c_function4__antantVload = _c_function4__Vload_abs;
    //@cmp.init.block.end
}

void ReInit_sp_scope_user_sp_cpu_dev0() {
    // initialise SP Scope buffer pointer
}
// generated using template: common_timer_counter_handler.template-------------------------

/*****************************************************************************************/
/**
* This function is the handler which performs processing for the timer counter.
* It is called from an interrupt context such that the amount of processing
* performed should be minimized.  It is called when the timer counter expires
* if interrupts are enabled.
*
*
* @param    None
*
* @return   None
*
* @note     None
*
*****************************************************************************************/

void TimerCounterHandler_0_user_sp_cpu_dev0() {
#if DEBUG_MODE
    printf("\n\rTimerCounterHandler_0");
#endif
    //////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: vb3.Va1
    _vb3_va1__out = HIL_InAO(0x20b);
    // Generated from the component: vb1.Va1
    _vb1_va1__out = HIL_InAO(0x209);
    // Generated from the component: i1.Ia1
    _i1_ia1__out = HIL_InAO(0x210);
    // Generated from the component: vb2.Va1
    _vb2_va1__out = HIL_InAO(0x20a);
    // Generated from the component: Vload.Va1
    _vload_va1__out = HIL_InAO(0x208);
    // Generated from the component: i3.Ia1
    _i3_ia1__out = HIL_InAO(0x212);
    // Generated from the component: i2.Ia1
    _i2_ia1__out = HIL_InAO(0x211);
    // Generated from the component: P_2
    HIL_OutAO(0x4002, (float)_c_function2__P_);
    // Generated from the component: P_1
    HIL_OutAO(0x4001, (float)_c_function1__P_);
    // Generated from the component: Single Phase Inverter2.PWM_Modulator
    if (_c_function2__PWMa1 < 0.0)
        _single_phase_inverter2_pwm_modulator__limited_in[0] = 0.0;
    else if (_c_function2__PWMa1 > 1.0)
        _single_phase_inverter2_pwm_modulator__limited_in[0] = 1.0;
    else
        _single_phase_inverter2_pwm_modulator__limited_in[0] = _c_function2__PWMa1;
    HIL_OutInt32(0x2000040 + _single_phase_inverter2_pwm_modulator__channels[0], ((unsigned)((_single_phase_inverter2_pwm_modulator__limited_in[0] - (0.0)) * 1666.0)));
    if (_c_function2__PWMa2 < 0.0)
        _single_phase_inverter2_pwm_modulator__limited_in[1] = 0.0;
    else if (_c_function2__PWMa2 > 1.0)
        _single_phase_inverter2_pwm_modulator__limited_in[1] = 1.0;
    else
        _single_phase_inverter2_pwm_modulator__limited_in[1] = _c_function2__PWMa2;
    HIL_OutInt32(0x2000040 + _single_phase_inverter2_pwm_modulator__channels[1], ((unsigned)((_single_phase_inverter2_pwm_modulator__limited_in[1] - (0.0)) * 1666.0)));
    if (_c_function2__hab_inv == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _single_phase_inverter2_pwm_modulator__channels[0], 0x0);
        HIL_OutInt32(0x2000000 + _single_phase_inverter2_pwm_modulator__channels[1], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _single_phase_inverter2_pwm_modulator__channels[0], 0x1);
        HIL_OutInt32(0x2000000 + _single_phase_inverter2_pwm_modulator__channels[1], 0x1);
    }
    HIL_OutInt32(0x2000140, _single_phase_inverter2_pwm_modulator__update_mask);
    // Generated from the component: Constant2
    // Generated from the component: Constant4
    // Generated from the component: Q_3
    HIL_OutAO(0x4006, (float)_c_function5__Q_);
    // Generated from the component: Single Phase Inverter1.PWM_Modulator
    if (_c_function1__PWMa1 < 0.0)
        _single_phase_inverter1_pwm_modulator__limited_in[0] = 0.0;
    else if (_c_function1__PWMa1 > 1.0)
        _single_phase_inverter1_pwm_modulator__limited_in[0] = 1.0;
    else
        _single_phase_inverter1_pwm_modulator__limited_in[0] = _c_function1__PWMa1;
    HIL_OutInt32(0x2000040 + _single_phase_inverter1_pwm_modulator__channels[0], ((unsigned)((_single_phase_inverter1_pwm_modulator__limited_in[0] - (0.0)) * 1666.0)));
    if (_c_function1__PWMa2 < 0.0)
        _single_phase_inverter1_pwm_modulator__limited_in[1] = 0.0;
    else if (_c_function1__PWMa2 > 1.0)
        _single_phase_inverter1_pwm_modulator__limited_in[1] = 1.0;
    else
        _single_phase_inverter1_pwm_modulator__limited_in[1] = _c_function1__PWMa2;
    HIL_OutInt32(0x2000040 + _single_phase_inverter1_pwm_modulator__channels[1], ((unsigned)((_single_phase_inverter1_pwm_modulator__limited_in[1] - (0.0)) * 1666.0)));
    if (_c_function1__hab_inv == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _single_phase_inverter1_pwm_modulator__channels[0], 0x0);
        HIL_OutInt32(0x2000000 + _single_phase_inverter1_pwm_modulator__channels[1], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _single_phase_inverter1_pwm_modulator__channels[0], 0x1);
        HIL_OutInt32(0x2000000 + _single_phase_inverter1_pwm_modulator__channels[1], 0x1);
    }
    HIL_OutInt32(0x2000140, _single_phase_inverter1_pwm_modulator__update_mask);
    // Generated from the component: Constant1
    // Generated from the component: freq_3
    HIL_OutAO(0x400c, (float)_c_function5__freq_);
    // Generated from the component: freq_1
    HIL_OutAO(0x400a, (float)_c_function1__freq_);
    // Generated from the component: Single Phase Inverter3.PWM_Modulator
    if (_c_function5__PWMa1 < 0.0)
        _single_phase_inverter3_pwm_modulator__limited_in[0] = 0.0;
    else if (_c_function5__PWMa1 > 1.0)
        _single_phase_inverter3_pwm_modulator__limited_in[0] = 1.0;
    else
        _single_phase_inverter3_pwm_modulator__limited_in[0] = _c_function5__PWMa1;
    HIL_OutInt32(0x2000040 + _single_phase_inverter3_pwm_modulator__channels[0], ((unsigned)((_single_phase_inverter3_pwm_modulator__limited_in[0] - (0.0)) * 1666.0)));
    if (_c_function5__PWMa2 < 0.0)
        _single_phase_inverter3_pwm_modulator__limited_in[1] = 0.0;
    else if (_c_function5__PWMa2 > 1.0)
        _single_phase_inverter3_pwm_modulator__limited_in[1] = 1.0;
    else
        _single_phase_inverter3_pwm_modulator__limited_in[1] = _c_function5__PWMa2;
    HIL_OutInt32(0x2000040 + _single_phase_inverter3_pwm_modulator__channels[1], ((unsigned)((_single_phase_inverter3_pwm_modulator__limited_in[1] - (0.0)) * 1666.0)));
    if (_c_function5__hab_inv == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _single_phase_inverter3_pwm_modulator__channels[0], 0x0);
        HIL_OutInt32(0x2000000 + _single_phase_inverter3_pwm_modulator__channels[1], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _single_phase_inverter3_pwm_modulator__channels[0], 0x1);
        HIL_OutInt32(0x2000000 + _single_phase_inverter3_pwm_modulator__channels[1], 0x1);
    }
    HIL_OutInt32(0x2000140, _single_phase_inverter3_pwm_modulator__update_mask);
    // Generated from the component: V_1
    HIL_OutAO(0x4007, (float)_c_function1__V_);
    // Generated from the component: Q_2
    HIL_OutAO(0x4005, (float)_c_function2__Q_);
    // Generated from the component: Chave_S_80L
    _chave_s_80l__out = XIo_InFloat(0x55000104);
    // Generated from the component: Constant3
    // Generated from the component: V_2
    HIL_OutAO(0x4008, (float)_c_function2__V_);
    // Generated from the component: freq_2
    HIL_OutAO(0x400b, (float)_c_function2__freq_);
    // Generated from the component: Q_1
    HIL_OutAO(0x4004, (float)_c_function1__Q_);
    // Generated from the component: P_3
    HIL_OutAO(0x4003, (float)_c_function5__P_);
    // Generated from the component: V_3
    HIL_OutAO(0x4009, (float)_c_function5__V_);
    // Generated from the component: Constant5
    // Generated from the component: Chave_S_75NL
    _chave_s_75nl__out = XIo_InFloat(0x55000100);
    // Generated from the component: C function2
    _c_function2__Ts = _constant2__out;
    _c_function2__i = _i2_ia1__out;
    _c_function2__vb = _vb2_va1__out;
    _c_function2__vi = _c_function2__v;
    _c_function2__i_alfa_ant = _c_function2__i_alfa;
    _c_function2__i_beta_ant = _c_function2__i_beta;
    _c_function2__i_alfa = _c_function2__i_alfa_ant - _c_function2__wi * _c_function2__i_alfa * _c_function2__Ts - _c_function2__wi * _c_function2__i_beta_ant * _c_function2__Ts + _c_function2__wi * _c_function2__i * _c_function2__Ts;
    _c_function2__i_beta = _c_function2__i_beta_ant + _c_function2__wi * _c_function2__i_alfa * _c_function2__Ts;
    _c_function2__vb_alfa_ant = _c_function2__vb_alfa;
    _c_function2__vb_beta_ant = _c_function2__vb_beta;
    _c_function2__vb_alfa = _c_function2__vb_alfa_ant - _c_function2__wi * _c_function2__vb_alfa * _c_function2__Ts - _c_function2__wi * _c_function2__vb_beta_ant * _c_function2__Ts + _c_function2__wi * _c_function2__vb * _c_function2__Ts;
    _c_function2__vb_beta = _c_function2__vb_beta_ant + _c_function2__wi * _c_function2__vb_alfa * _c_function2__Ts;
    _c_function2__p = (_c_function2__vb_alfa * _c_function2__i_alfa + _c_function2__vb_beta * _c_function2__i_beta) / 2.;
    _c_function2__q = (_c_function2__vb_beta * _c_function2__i_alfa - _c_function2__vb_alfa * _c_function2__i_beta) / 2.;
    _c_function2__pf = _c_function2__pf * (1 - _c_function2__wbp * _c_function2__Ts) + _c_function2__wbp * _c_function2__Ts * _c_function2__p;
    _c_function2__qf = _c_function2__qf * (1 - _c_function2__wbp * _c_function2__Ts) + _c_function2__wbp * _c_function2__Ts * _c_function2__q;
    _c_function2__V = _c_function2__V_nom - _c_function2__mp * _c_function2__pf;
    _c_function2__wi = _c_function2__w + _c_function2__mq * _c_function2__qf;
    _c_function2__teta = _c_function2__teta + _c_function2__Ts * (_c_function2__erro_w);
    _c_function2__erro_w = _c_function2__wi;
    if (_c_function2__teta > (2 * _c_function2__pi))_c_function2__teta = _c_function2__teta - 2 * _c_function2__pi;
    _c_function2__v = _c_function2__R2 * _c_function2__V * cos(_c_function2__teta);
    _c_function2__v = _c_function2__v - 0.5 * _c_function2__i;
    if (_c_function2__v > 220.)_c_function2__v = 220.;
    if (_c_function2__v < -220.)_c_function2__v = -220.;
    _c_function2__vag = _c_function2__v / 2. + 110.;
    _c_function2__vbg = -_c_function2__v / 2. + 110;
    _c_function2__PWMa1 = _c_function2__vag / 220.;
    _c_function2__PWMa2 = _c_function2__vbg / 220.;
    _c_function2__freq = _c_function2__wi / (2 * _c_function2__pi);
    _c_function2__V_ = _c_function2__V;
    _c_function2__freq_ = _c_function2__freq;
    _c_function2__P_ = _c_function2__pf;
    _c_function2__Q_ = _c_function2__qf;
    // Generated from the component: C function1
    _c_function1__Ts = _constant1__out;
    _c_function1__i = _i1_ia1__out;
    _c_function1__vb = _vb1_va1__out;
    _c_function1__vi = _c_function1__v;
    _c_function1__i_alfa_ant = _c_function1__i_alfa;
    _c_function1__i_beta_ant = _c_function1__i_beta;
    _c_function1__i_alfa = _c_function1__i_alfa_ant - _c_function1__wi * _c_function1__i_alfa * _c_function1__Ts - _c_function1__wi * _c_function1__i_beta_ant * _c_function1__Ts + _c_function1__wi * _c_function1__i * _c_function1__Ts;
    _c_function1__i_beta = _c_function1__i_beta_ant + _c_function1__wi * _c_function1__i_alfa * _c_function1__Ts;
    _c_function1__vb_alfa_ant = _c_function1__vb_alfa;
    _c_function1__vb_beta_ant = _c_function1__vb_beta;
    _c_function1__vb_alfa = _c_function1__vb_alfa_ant - _c_function1__wi * _c_function1__vb_alfa * _c_function1__Ts - _c_function1__wi * _c_function1__vb_beta_ant * _c_function1__Ts + _c_function1__wi * _c_function1__vb * _c_function1__Ts;
    _c_function1__vb_beta = _c_function1__vb_beta_ant + _c_function1__wi * _c_function1__vb_alfa * _c_function1__Ts;
    _c_function1__p = (_c_function1__vb_alfa * _c_function1__i_alfa + _c_function1__vb_beta * _c_function1__i_beta) / 2.;
    _c_function1__q = (_c_function1__vb_beta * _c_function1__i_alfa - _c_function1__vb_alfa * _c_function1__i_beta) / 2.;
    _c_function1__pf = _c_function1__pf * (1 - _c_function1__wbp * _c_function1__Ts) + _c_function1__wbp * _c_function1__Ts * _c_function1__p;
    _c_function1__qf = _c_function1__qf * (1 - _c_function1__wbp * _c_function1__Ts) + _c_function1__wbp * _c_function1__Ts * _c_function1__q;
    _c_function1__V = _c_function1__V_nom - _c_function1__mp * _c_function1__pf;
    _c_function1__wi = _c_function1__w + _c_function1__mq * _c_function1__qf;
    _c_function1__freq = _c_function1__wi / (2 * _c_function1__pi);
    _c_function1__teta = _c_function1__teta + _c_function1__Ts * (_c_function1__erro_w);
    _c_function1__erro_w = _c_function1__wi;
    if (_c_function1__teta > (2 * _c_function1__pi))_c_function1__teta = _c_function1__teta - 2 * _c_function1__pi;
    _c_function1__v = _c_function1__R2 * _c_function1__V * cos(_c_function1__teta);
    _c_function1__v = _c_function1__v - 0.5 * _c_function1__i;
    if (_c_function1__v > 220.)_c_function1__v = 220.;
    if (_c_function1__v < -220.)_c_function1__v = -220.;
    _c_function1__vag = _c_function1__v / 2. + 110.;
    _c_function1__vbg = -_c_function1__v / 2. + 110;
    _c_function1__PWMa1 = _c_function1__vag / 220.;
    _c_function1__PWMa2 = _c_function1__vbg / 220.;
    _c_function1__V_ = _c_function1__V;
    _c_function1__freq_ = _c_function1__freq;
    _c_function1__P_ = _c_function1__pf;
    _c_function1__Q_ = _c_function1__qf;
    // Generated from the component: C function3
    _c_function3__Vload = _vload_va1__out;
    _c_function3__Vpeak = _constant3__out;
    _c_function3__in = _chave_s_80l__out;
    if (_c_function3__Vload < 0) {
        _c_function3__Vload_abs = -_c_function3__Vload;
    }
    else {
        _c_function3__Vload_abs = _c_function3__Vload;
    }
    if (_c_function3__in == 0) {
        _c_function3__out = 0;
        _c_function3__flag1 = 1;
        _c_function3__flag2 = 1;
    }
    else if (_c_function3__in == 1 && _c_function3__antantVload < _c_function3__antVload && _c_function3__antVload > _c_function3__Vload_abs && _c_function3__flag1 == 1) {
        _c_function3__out = 1;
        _c_function3__flag1 = 0;
    }
    else if (_c_function3__in == 2 && _c_function3__antantVload < _c_function3__antVload && _c_function3__antVload > _c_function3__Vload_abs && _c_function3__flag2 == 1) {
        _c_function3__out = 0;
        _c_function3__flag2 = 0;
    }
    else {
        _c_function3__out = _c_function3__out;
    }
    // Generated from the component: C function5
    _c_function5__Ts = _constant5__out;
    _c_function5__i = _i3_ia1__out;
    _c_function5__vb = _vb3_va1__out;
    _c_function5__vi = _c_function5__v;
    _c_function5__i_alfa_ant = _c_function5__i_alfa;
    _c_function5__i_beta_ant = _c_function5__i_beta;
    _c_function5__i_alfa = _c_function5__i_alfa_ant - _c_function5__wi * _c_function5__i_alfa * _c_function5__Ts - _c_function5__wi * _c_function5__i_beta_ant * _c_function5__Ts + _c_function5__wi * _c_function5__i * _c_function5__Ts;
    _c_function5__i_beta = _c_function5__i_beta_ant + _c_function5__wi * _c_function5__i_alfa * _c_function5__Ts;
    _c_function5__vb_alfa_ant = _c_function5__vb_alfa;
    _c_function5__vb_beta_ant = _c_function5__vb_beta;
    _c_function5__vb_alfa = _c_function5__vb_alfa_ant - _c_function5__wi * _c_function5__vb_alfa * _c_function5__Ts - _c_function5__wi * _c_function5__vb_beta_ant * _c_function5__Ts + _c_function5__wi * _c_function5__vb * _c_function5__Ts;
    _c_function5__vb_beta = _c_function5__vb_beta_ant + _c_function5__wi * _c_function5__vb_alfa * _c_function5__Ts;
    _c_function5__p = (_c_function5__vb_alfa * _c_function5__i_alfa + _c_function5__vb_beta * _c_function5__i_beta) / 2.;
    _c_function5__q = (_c_function5__vb_beta * _c_function5__i_alfa - _c_function5__vb_alfa * _c_function5__i_beta) / 2.;
    _c_function5__pf = _c_function5__pf * (1 - _c_function5__wbp * _c_function5__Ts) + _c_function5__wbp * _c_function5__Ts * _c_function5__p;
    _c_function5__qf = _c_function5__qf * (1 - _c_function5__wbp * _c_function5__Ts) + _c_function5__wbp * _c_function5__Ts * _c_function5__q;
    _c_function5__V = _c_function5__V_nom - _c_function5__mp * _c_function5__pf;
    _c_function5__wi = _c_function5__w + _c_function5__mq * _c_function5__qf;
    _c_function5__teta = _c_function5__teta + _c_function5__Ts * (_c_function5__erro_w);
    _c_function5__erro_w = _c_function5__wi;
    if (_c_function5__teta > (2 * _c_function5__pi))_c_function5__teta = _c_function5__teta - 2 * _c_function5__pi;
    _c_function5__v = _c_function5__R2 * _c_function5__V * cos(_c_function5__teta);
    _c_function5__v = _c_function5__v - 0.5 * _c_function5__i;
    if (_c_function5__v > 220.)_c_function5__v = 220.;
    if (_c_function5__v < -220.)_c_function5__v = -220.;
    _c_function5__vag = _c_function5__v / 2. + 110.;
    _c_function5__vbg = -_c_function5__v / 2. + 110;
    _c_function5__PWMa1 = _c_function5__vag / 220.;
    _c_function5__PWMa2 = _c_function5__vbg / 220.;
    _c_function5__freq = _c_function5__wi / (2 * _c_function5__pi);
    _c_function5__V_ = _c_function5__V;
    _c_function5__freq_ = _c_function5__freq;
    _c_function5__P_ = _c_function5__pf;
    _c_function5__Q_ = _c_function5__qf;
    // Generated from the component: C function4
    _c_function4__Vload = _vload_va1__out;
    _c_function4__Vpeak = _constant4__out;
    _c_function4__in = _chave_s_75nl__out;
    if (_c_function4__Vload < 0) {
        _c_function4__Vload_abs = -_c_function4__Vload;
    }
    else {
        _c_function4__Vload_abs = _c_function4__Vload;
    }
    if (_c_function4__in == 0) {
        _c_function4__out = 0;
        _c_function4__flag1 = 1;
        _c_function4__flag2 = 1;
    }
    else if (_c_function4__in == 1 && _c_function4__antantVload < _c_function4__antVload && _c_function4__antVload > _c_function4__Vload_abs && _c_function4__flag1 == 1) {
        _c_function4__out = 1;
        _c_function4__flag1 = 0;
    }
    else if (_c_function4__in == 2 && _c_function4__antantVload < _c_function4__antVload && _c_function4__antVload > _c_function4__Vload_abs && _c_function4__flag2 == 1) {
        _c_function4__out = 0;
        _c_function4__flag2 = 0;
    }
    else {
        _c_function4__out = _c_function4__out;
    }
    // Generated from the component: S_20L.CTC_Wrapper
    if (_c_function3__out == 0x0) {
        HIL_OutInt32(0x8240480, 0x0);
    }
    else {
        HIL_OutInt32(0x8240480, 0x1);
    }
    // Generated from the component: S_80L.CTC_Wrapper
    if (_c_function3__out == 0x0) {
        HIL_OutInt32(0x8240483, 0x0);
    }
    else {
        HIL_OutInt32(0x8240483, 0x1);
    }
    // Generated from the component: S_75NL.CTC_Wrapper
    if (_c_function4__out == 0x0) {
        HIL_OutInt32(0x8240482, 0x0);
    }
    else {
        HIL_OutInt32(0x8240482, 0x1);
    }
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: C function2
    // Generated from the component: C function1
    // Generated from the component: C function3
    _c_function3__antantVload = _c_function3__antVload;
    _c_function3__antVload = _c_function3__Vload_abs;
    // Generated from the component: C function5
    // Generated from the component: C function4
    _c_function4__antantVload = _c_function4__antVload;
    _c_function4__antVload = _c_function4__Vload_abs;
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------  //-----------------------------------------------------------------------------------------