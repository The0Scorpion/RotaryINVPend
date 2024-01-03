#ifndef RTW_HEADER_LastWorkingModel_h_
#define RTW_HEADER_LastWorkingModel_h_
#ifndef LastWorkingModel_COMMON_INCLUDES_
#define LastWorkingModel_COMMON_INCLUDES_
#include <stdlib.h>
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "dt_info.h"
#include "ext_work.h"
#include "MW_ArduinoEncoder.h"
#include "MW_PWM.h"
#endif
#include "LastWorkingModel_types.h"
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include <string.h>
#include "rt_nonfinite.h"
#define MODEL_NAME LastWorkingModel
#define NSAMPLE_TIMES (2) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (13) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (0)   
#elif NCSTATES != 0
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T mri5etxg1q ; real_T cdxko25rmp ; real_T odty5b0iz3 ;
real_T gvkyghrlov ; real_T k1bgjgeexn ; real_T p34oop0fw5 ; real_T glwh1vdjb3
; real_T lru21bjfh3 ; real_T l02auf01ni ; real_T lqrhujqows ; real_T
jbbkhmvmsd ; real_T l4qnrhjdgn ; } B ; typedef struct { ebnzslhowi le3tic5sxu
; ebnzslhowi nli1g1zzdv ; adto1kdx4k g2idhzgh3e ; adto1kdx4k lzzkdhymwk ;
real_T jj0wuetk4s ; real_T dlwqbnllkb ; struct { void * LoggedData [ 4 ] ; }
eflm0lv3cg ; struct { void * AQHandles ; } nht1kqakrh ; struct { void *
AQHandles ; } hpgkuna5lh ; struct { void * AQHandles ; } gkskfgxx0t ; struct
{ void * AQHandles ; } cbuc1d2dw4 ; struct { void * LoggedData ; } cgaxpiampl
; int32_T hiwfvilozr ; uint32_T n1sqhllhhp ; uint8_T mjig2r4xke ; uint8_T
o4rmpztr3v ; boolean_T flqnkxdpup ; boolean_T kpsdtquxpa ; boolean_T
hddkodoopj ; boolean_T jso3apv43c ; } DW ; typedef struct {
rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ { real_T K [ 4 ] ;
real_T PWMBias ; real_T PWMSat ; real_T DiscreteDerivative1_ICPrevScaledInput
; real_T DiscreteDerivative_ICPrevScaledInput ; real_T Motor_SampleTime ;
real_T Pendl_SampleTime ; real_T Gain5_Gain ; real_T Switch_Threshold ;
real_T Bias1_Bias ; real_T Bias2_Bias ; real_T Bias3_Bias ; real_T Bias_Bias
; real_T Bias1_Bias_g5eh1qx5er ; real_T Bias2_Bias_klsi24i15u ; real_T
Bias3_Bias_cskdv3ksjd ; real_T Gain1_Gain ; real_T
Switch_Threshold_cnqu1f005b ; real_T Gain_Gain ; real_T Bias_Bias_oc40hpifet
; real_T Switch_Threshold_kwx3tjqbzf ; real_T TSamp_WtEt ; real_T
TSamp_WtEt_npvhmoc2vw ; real_T Switch1_Threshold ; real_T Switch2_Threshold ;
real_T Saturation1_LowerSat ; real_T Switch3_Threshold ; real_T
Saturation2_LowerSat ; real_T Constant_Value ; real_T Constant1_Value ;
real_T Constant2_Value ; real_T Constant4_Value ; real_T Constant5_Value ;
real_T Constant1_Value_flqgqjzvjr ; real_T Constant2_Value_lmgoi5as0n ;
real_T Constant1_Value_dovcbbjwsu ; real_T Constant2_Value_obzhygnvxx ;
uint8_T ManualSwitch1_CurrentSetting ; } ; extern const char_T *
RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern DW rtDW ; extern P rtP ;
extern mxArray * mr_LastWorkingModel_GetDWork ( ) ; extern void
mr_LastWorkingModel_SetDWork ( const mxArray * ssDW ) ; extern mxArray *
mr_LastWorkingModel_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * LastWorkingModel_GetCAPIStaticMap ( void ) ;
extern SimStruct * const rtS ; extern DataMapInfo * rt_dataMapInfoPtr ;
extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ; void MdlOutputs (
int_T tid ) ; void MdlOutputsParameterSampleTime ( int_T tid ) ; void
MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) ;
#endif
