#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "LastWorkingModel_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 19
#endif
#ifndef SS_INT64
#define SS_INT64 20
#endif
#else
#include "builtin_typeid_types.h"
#include "LastWorkingModel.h"
#include "LastWorkingModel_capi.h"
#include "LastWorkingModel_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"LastWorkingModel/Chart/is_active_c3_LastWorkingModel" ) , TARGET_STRING (
"is_active_c3_LastWorkingModel" ) , 0 , 0 , 0 , 0 , 0 } , { 1 , 0 ,
TARGET_STRING ( "LastWorkingModel/Chart/is_c3_LastWorkingModel" ) ,
TARGET_STRING ( "is_c3_LastWorkingModel" ) , 0 , 1 , 0 , 0 , 0 } , { 2 , 0 ,
TARGET_STRING ( "LastWorkingModel/Abs" ) , TARGET_STRING ( "" ) , 0 , 2 , 0 ,
0 , 0 } , { 3 , 0 , TARGET_STRING ( "LastWorkingModel/Gain4" ) ,
TARGET_STRING ( "" ) , 0 , 2 , 0 , 0 , 0 } , { 4 , 0 , TARGET_STRING (
"LastWorkingModel/Saturation1" ) , TARGET_STRING ( "" ) , 0 , 2 , 0 , 0 , 0 }
, { 5 , 0 , TARGET_STRING ( "LastWorkingModel/Saturation2" ) , TARGET_STRING
( "" ) , 0 , 2 , 0 , 0 , 0 } , { 6 , 0 , TARGET_STRING (
"LastWorkingModel/Switch1" ) , TARGET_STRING ( "control action" ) , 0 , 2 , 0
, 0 , 0 } , { 7 , 0 , TARGET_STRING (
"LastWorkingModel/Discrete Derivative/Diff" ) , TARGET_STRING ( "" ) , 0 , 2
, 0 , 0 , 0 } , { 8 , 0 , TARGET_STRING (
"LastWorkingModel/Discrete Derivative/TSamp" ) , TARGET_STRING ( "" ) , 0 , 2
, 0 , 0 , 0 } , { 9 , 0 , TARGET_STRING (
"LastWorkingModel/Discrete Derivative1/Diff" ) , TARGET_STRING ( "" ) , 0 , 2
, 0 , 0 , 0 } , { 10 , 0 , TARGET_STRING (
"LastWorkingModel/Discrete Derivative1/TSamp" ) , TARGET_STRING ( "" ) , 0 ,
2 , 0 , 0 , 0 } , { 11 , 0 , TARGET_STRING (
"LastWorkingModel/wraping angle/Rem" ) , TARGET_STRING ( "" ) , 0 , 2 , 0 , 0
, 0 } , { 12 , 0 , TARGET_STRING ( "LastWorkingModel/wraping angle/Switch" )
, TARGET_STRING ( "" ) , 0 , 2 , 0 , 0 , 0 } , { 13 , 0 , TARGET_STRING (
"LastWorkingModel/wraping angle1/Switch" ) , TARGET_STRING ( "" ) , 0 , 2 , 0
, 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static
const rtwCAPI_BlockParameters rtBlockParameters [ ] = { { 14 , TARGET_STRING
( "LastWorkingModel/Discrete Derivative" ) , TARGET_STRING (
"ICPrevScaledInput" ) , 2 , 0 , 0 } , { 15 , TARGET_STRING (
"LastWorkingModel/Discrete Derivative1" ) , TARGET_STRING (
"ICPrevScaledInput" ) , 2 , 0 , 0 } , { 16 , TARGET_STRING (
"LastWorkingModel/Constant" ) , TARGET_STRING ( "Value" ) , 2 , 0 , 0 } , {
17 , TARGET_STRING ( "LastWorkingModel/Constant1" ) , TARGET_STRING ( "Value"
) , 2 , 0 , 0 } , { 18 , TARGET_STRING ( "LastWorkingModel/Constant2" ) ,
TARGET_STRING ( "Value" ) , 2 , 0 , 0 } , { 19 , TARGET_STRING (
"LastWorkingModel/Constant4" ) , TARGET_STRING ( "Value" ) , 2 , 0 , 0 } , {
20 , TARGET_STRING ( "LastWorkingModel/Constant5" ) , TARGET_STRING ( "Value"
) , 2 , 0 , 0 } , { 21 , TARGET_STRING ( "LastWorkingModel/Gain" ) ,
TARGET_STRING ( "Gain" ) , 2 , 0 , 0 } , { 22 , TARGET_STRING (
"LastWorkingModel/Gain1" ) , TARGET_STRING ( "Gain" ) , 2 , 0 , 0 } , { 23 ,
TARGET_STRING ( "LastWorkingModel/Gain5" ) , TARGET_STRING ( "Gain" ) , 2 , 0
, 0 } , { 24 , TARGET_STRING ( "LastWorkingModel/Saturation1" ) ,
TARGET_STRING ( "LowerLimit" ) , 2 , 0 , 0 } , { 25 , TARGET_STRING (
"LastWorkingModel/Saturation2" ) , TARGET_STRING ( "LowerLimit" ) , 2 , 0 , 0
} , { 26 , TARGET_STRING ( "LastWorkingModel/Switch" ) , TARGET_STRING (
"Threshold" ) , 2 , 0 , 0 } , { 27 , TARGET_STRING (
"LastWorkingModel/Switch1" ) , TARGET_STRING ( "Threshold" ) , 2 , 0 , 0 } ,
{ 28 , TARGET_STRING ( "LastWorkingModel/Switch2" ) , TARGET_STRING (
"Threshold" ) , 2 , 0 , 0 } , { 29 , TARGET_STRING (
"LastWorkingModel/Switch3" ) , TARGET_STRING ( "Threshold" ) , 2 , 0 , 0 } ,
{ 30 , TARGET_STRING ( "LastWorkingModel/Manual Switch1" ) , TARGET_STRING (
"CurrentSetting" ) , 0 , 0 , 0 } , { 31 , TARGET_STRING (
"LastWorkingModel/Motor" ) , TARGET_STRING ( "SampleTime" ) , 2 , 0 , 0 } , {
32 , TARGET_STRING ( "LastWorkingModel/Pendl" ) , TARGET_STRING (
"SampleTime" ) , 2 , 0 , 0 } , { 33 , TARGET_STRING (
"LastWorkingModel/Discrete Derivative/TSamp" ) , TARGET_STRING ( "WtEt" ) , 2
, 0 , 0 } , { 34 , TARGET_STRING (
"LastWorkingModel/Discrete Derivative1/TSamp" ) , TARGET_STRING ( "WtEt" ) ,
2 , 0 , 0 } , { 35 , TARGET_STRING ( "LastWorkingModel/wraping angle/Bias" )
, TARGET_STRING ( "Bias" ) , 2 , 0 , 0 } , { 36 , TARGET_STRING (
"LastWorkingModel/wraping angle/Bias1" ) , TARGET_STRING ( "Bias" ) , 2 , 0 ,
0 } , { 37 , TARGET_STRING ( "LastWorkingModel/wraping angle/Bias2" ) ,
TARGET_STRING ( "Bias" ) , 2 , 0 , 0 } , { 38 , TARGET_STRING (
"LastWorkingModel/wraping angle/Bias3" ) , TARGET_STRING ( "Bias" ) , 2 , 0 ,
0 } , { 39 , TARGET_STRING ( "LastWorkingModel/wraping angle/Constant1" ) ,
TARGET_STRING ( "Value" ) , 2 , 0 , 0 } , { 40 , TARGET_STRING (
"LastWorkingModel/wraping angle/Constant2" ) , TARGET_STRING ( "Value" ) , 2
, 0 , 0 } , { 41 , TARGET_STRING ( "LastWorkingModel/wraping angle/Switch" )
, TARGET_STRING ( "Threshold" ) , 2 , 0 , 0 } , { 42 , TARGET_STRING (
"LastWorkingModel/wraping angle1/Bias" ) , TARGET_STRING ( "Bias" ) , 2 , 0 ,
0 } , { 43 , TARGET_STRING ( "LastWorkingModel/wraping angle1/Bias1" ) ,
TARGET_STRING ( "Bias" ) , 2 , 0 , 0 } , { 44 , TARGET_STRING (
"LastWorkingModel/wraping angle1/Bias2" ) , TARGET_STRING ( "Bias" ) , 2 , 0
, 0 } , { 45 , TARGET_STRING ( "LastWorkingModel/wraping angle1/Bias3" ) ,
TARGET_STRING ( "Bias" ) , 2 , 0 , 0 } , { 46 , TARGET_STRING (
"LastWorkingModel/wraping angle1/Constant1" ) , TARGET_STRING ( "Value" ) , 2
, 0 , 0 } , { 47 , TARGET_STRING (
"LastWorkingModel/wraping angle1/Constant2" ) , TARGET_STRING ( "Value" ) , 2
, 0 , 0 } , { 48 , TARGET_STRING ( "LastWorkingModel/wraping angle1/Switch" )
, TARGET_STRING ( "Threshold" ) , 2 , 0 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0
, 0 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { - 1 } ; static const
rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 ,
0 , 0 , 0 } } ; static const rtwCAPI_Signals rtRootOutputs [ ] = { { 0 , 0 ,
( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const
rtwCAPI_ModelParameters rtModelParameters [ ] = { { 49 , TARGET_STRING ( "K"
) , 2 , 1 , 0 } , { 50 , TARGET_STRING ( "PWMBias" ) , 2 , 0 , 0 } , { 51 ,
TARGET_STRING ( "PWMSat" ) , 2 , 0 , 0 } , { 0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtDW . mjig2r4xke , & rtDW . n1sqhllhhp
, & rtB . l02auf01ni , & rtB . lru21bjfh3 , & rtB . jbbkhmvmsd , & rtB .
l4qnrhjdgn , & rtB . lqrhujqows , & rtB . glwh1vdjb3 , & rtB . p34oop0fw5 , &
rtB . k1bgjgeexn , & rtB . gvkyghrlov , & rtB . cdxko25rmp , & rtB .
odty5b0iz3 , & rtB . mri5etxg1q , & rtP .
DiscreteDerivative_ICPrevScaledInput , & rtP .
DiscreteDerivative1_ICPrevScaledInput , & rtP . Constant_Value , & rtP .
Constant1_Value , & rtP . Constant2_Value , & rtP . Constant4_Value , & rtP .
Constant5_Value , & rtP . Gain_Gain , & rtP . Gain1_Gain , & rtP . Gain5_Gain
, & rtP . Saturation1_LowerSat , & rtP . Saturation2_LowerSat , & rtP .
Switch_Threshold , & rtP . Switch1_Threshold , & rtP . Switch2_Threshold , &
rtP . Switch3_Threshold , & rtP . ManualSwitch1_CurrentSetting , & rtP .
Motor_SampleTime , & rtP . Pendl_SampleTime , & rtP . TSamp_WtEt_npvhmoc2vw ,
& rtP . TSamp_WtEt , & rtP . Bias_Bias_oc40hpifet , & rtP . Bias1_Bias , &
rtP . Bias2_Bias , & rtP . Bias3_Bias , & rtP . Constant1_Value_flqgqjzvjr ,
& rtP . Constant2_Value_lmgoi5as0n , & rtP . Switch_Threshold_kwx3tjqbzf , &
rtP . Bias_Bias , & rtP . Bias1_Bias_g5eh1qx5er , & rtP .
Bias2_Bias_klsi24i15u , & rtP . Bias3_Bias_cskdv3ksjd , & rtP .
Constant1_Value_dovcbbjwsu , & rtP . Constant2_Value_obzhygnvxx , & rtP .
Switch_Threshold_cnqu1f005b , & rtP . K [ 0 ] , & rtP . PWMBias , & rtP .
PWMSat , } ; static int32_T * rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { {
"unsigned char" , "uint8_T" , 0 , 0 , sizeof ( uint8_T ) , ( uint8_T )
SS_UINT8 , 0 , 0 , 0 } , { "unsigned int" , "uint32_T" , 0 , 0 , sizeof (
uint32_T ) , ( uint8_T ) SS_UINT32 , 0 , 0 , 0 } , { "double" , "real_T" , 0
, 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } } ; static
const uint_T rtDimensionArray [ ] = { 1 , 1 , 1 , 4 } ; static const real_T
rtcapiStoredFloats [ ] = { 0.01 , 0.0 } ; static const rtwCAPI_FixPtMap
rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , (
boolean_T ) 0 } , } ; static const rtwCAPI_SampleTimeMap rtSampleTimeMap [ ]
= { { ( const void * ) & rtcapiStoredFloats [ 0 ] , ( const void * ) &
rtcapiStoredFloats [ 1 ] , ( int8_T ) 0 , ( uint8_T ) 0 } } ; static
rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 14 ,
rtRootInputs , 0 , rtRootOutputs , 0 } , { rtBlockParameters , 35 ,
rtModelParameters , 3 } , { ( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap
, rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float"
, { 4119914760U , 1858297268U , 4245137094U , 634058354U } , ( NULL ) , 0 , (
boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * LastWorkingModel_GetCAPIStaticMap ( void ) {
return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void LastWorkingModel_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( (
* rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void LastWorkingModel_host_InitializeDataMapInfo (
LastWorkingModel_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) )
; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap ->
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
