#include "LastWorkingModel.h"
#include "rtwtypes.h"
#include "mwmathutil.h"
#include "rt_logging_mmi.h"
#include "LastWorkingModel_capi.h"
#include "LastWorkingModel_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; extern ssExecutionInfo gblExecutionInfo ; RTWExtModeInfo *
gblRTWExtModeInfo = NULL ; void raccelForceExtModeShutdown ( boolean_T
extModeStartPktReceived ) { if ( ! extModeStartPktReceived ) { boolean_T
stopRequested = false ; rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 1 , &
stopRequested ) ; } rtExtModeShutdown ( 1 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
#include "slsa_sim_engine.h"
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 2 ; const char_T
* gbl_raccel_Version = "23.2 (R2023b) 01-Aug-2023" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; int_T enableFcnCallFlag [ ] = { 1 , 1 } ; const char
* raccelLoadInputsAndAperiodicHitTimes ( SimStruct * S , const char *
inportFileName , int * matFileFormat ) { return rt_RAccelReadInportsMatFile (
S , inportFileName , matFileFormat ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_sim_engine.h"
#include "simtarget/slSimTgtSLExecSimBridge.h"
#define aijyma53fl (-1)
#define g5kntqryvw ((uint8_T)0U)
#define khfzrm13pc (2U)
#define nj0zue2ief (1U)
B rtB ; DW rtDW ; static SimStruct model_S ; SimStruct * const rtS = &
model_S ; void MdlInitialize ( void ) { rtDW . jj0wuetk4s = rtP .
DiscreteDerivative1_ICPrevScaledInput ; rtDW . dlwqbnllkb = rtP .
DiscreteDerivative_ICPrevScaledInput ; rtDW . o4rmpztr3v = 0U ; rtDW .
hiwfvilozr = aijyma53fl ; rtDW . mjig2r4xke = 0U ; rtDW . n1sqhllhhp =
g5kntqryvw ; MW_EncoderReset ( rtDW . nli1g1zzdv . Index ) ; MW_EncoderReset
( rtDW . le3tic5sxu . Index ) ; } void MdlStart ( void ) { { bool
externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} { RTWLogSignalInfo rt_ScopeSignalInfo ; static int_T rt_ScopeSignalWidths [
] = { 1 , 1 , 1 , 1 } ; static int_T rt_ScopeSignalNumDimensions [ ] = { 2 ,
2 , 2 , 2 } ; static int_T rt_ScopeSignalDimensions [ ] = { 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 } ; static void * rt_ScopeCurrSigDims [ ] = { ( NULL ) , ( NULL )
, ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) } ; static
int_T rt_ScopeCurrSigDimsSize [ ] = { 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 } ;
static const char_T * rt_ScopeSignalLabels [ ] = { "theta 0" , "theta 1" ,
"theta0_dot" , "theta1_dot" } ; static char_T rt_ScopeSignalTitles [ ] =
"theta 0theta 1theta0_dottheta1_dot" ; static int_T
rt_ScopeSignalTitleLengths [ ] = { 7 , 7 , 10 , 10 } ; static boolean_T
rt_ScopeSignalIsVarDims [ ] = { 0 , 0 , 0 , 0 } ; static int_T
rt_ScopeSignalPlotStyles [ ] = { 1 , 1 , 1 , 1 } ; BuiltInDTypeId dTypes [ 4
] = { SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE } ; static char_T
rt_ScopeBlockName [ ] = "LastWorkingModel/Scope" ; static int_T
rt_ScopeFrameData [ ] = { 0 , 0 , 0 , 0 } ; static RTWPreprocessingFcnPtr
rt_ScopeSignalLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) } ;
rt_ScopeSignalInfo . numSignals = 4 ; rt_ScopeSignalInfo . numCols =
rt_ScopeSignalWidths ; rt_ScopeSignalInfo . numDims =
rt_ScopeSignalNumDimensions ; rt_ScopeSignalInfo . dims =
rt_ScopeSignalDimensions ; rt_ScopeSignalInfo . isVarDims =
rt_ScopeSignalIsVarDims ; rt_ScopeSignalInfo . currSigDims =
rt_ScopeCurrSigDims ; rt_ScopeSignalInfo . currSigDimsSize =
rt_ScopeCurrSigDimsSize ; rt_ScopeSignalInfo . dataTypes = dTypes ;
rt_ScopeSignalInfo . complexSignals = ( NULL ) ; rt_ScopeSignalInfo .
frameData = rt_ScopeFrameData ; rt_ScopeSignalInfo . preprocessingPtrs =
rt_ScopeSignalLoggingPreprocessingFcnPtrs ; rt_ScopeSignalInfo . labels .
cptr = rt_ScopeSignalLabels ; rt_ScopeSignalInfo . titles =
rt_ScopeSignalTitles ; rt_ScopeSignalInfo . titleLengths =
rt_ScopeSignalTitleLengths ; rt_ScopeSignalInfo . plotStyles =
rt_ScopeSignalPlotStyles ; rt_ScopeSignalInfo . blockNames . cptr = ( NULL )
; rt_ScopeSignalInfo . stateNames . cptr = ( NULL ) ; rt_ScopeSignalInfo .
crossMdlRef = ( NULL ) ; rt_ScopeSignalInfo . dataTypeConvert = ( NULL ) ;
rtDW . eflm0lv3cg . LoggedData [ 0 ] = rt_CreateStructLogVar (
ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , (
& ssGetErrorStatus ( rtS ) ) , "Scope1Data" , 1 , 50000 , 1 , 0.01 , &
rt_ScopeSignalInfo , rt_ScopeBlockName ) ; if ( rtDW . eflm0lv3cg .
LoggedData [ 0 ] == ( NULL ) ) return ; } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "theta0_dot" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "theta0_dot" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"LastWorkingModel/Discrete Derivative1" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "theta0_dot" )
; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
2 ] = { 1 , 1 } ; sigDims . nDims = 2 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . nht1kqakrh . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "b36d8511-0557-4137-91d0-5a85f1c32144" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . nht1kqakrh . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . nht1kqakrh . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . nht1kqakrh . AQHandles , "0.01" , 0.01
, ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . nht1kqakrh . AQHandles
, 0.0 ) ; sdiSetRunStartTime ( rtDW . nht1kqakrh . AQHandles , ssGetTaskTime
( rtS , 0 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . nht1kqakrh .
AQHandles , 1 , 50000 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . nht1kqakrh
. AQHandles , loggedName , origSigName , propName ) ; } sdiFreeLabel (
sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ;
sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel (
blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "theta1_dot" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "theta1_dot" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"LastWorkingModel/Discrete Derivative" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "theta1_dot" )
; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
2 ] = { 1 , 1 } ; sigDims . nDims = 2 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . hpgkuna5lh . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "8f9f05d1-3952-4ed1-b5d4-5e138464b092" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . hpgkuna5lh . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . hpgkuna5lh . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . hpgkuna5lh . AQHandles , "0.01" , 0.01
, ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . hpgkuna5lh . AQHandles
, 0.0 ) ; sdiSetRunStartTime ( rtDW . hpgkuna5lh . AQHandles , ssGetTaskTime
( rtS , 0 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . hpgkuna5lh .
AQHandles , 1 , 50000 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . hpgkuna5lh
. AQHandles , loggedName , origSigName , propName ) ; } sdiFreeLabel (
sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ;
sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel (
blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "theta 0" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "theta 0" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"LastWorkingModel/wraping angle1" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "theta 0" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
2 ] = { 1 , 1 } ; sigDims . nDims = 2 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . gkskfgxx0t . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "5b1d3be3-daf9-419c-b044-68efae6db8b9" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . gkskfgxx0t . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . gkskfgxx0t . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . gkskfgxx0t . AQHandles , "0.01" , 0.01
, ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . gkskfgxx0t . AQHandles
, 0.0 ) ; sdiSetRunStartTime ( rtDW . gkskfgxx0t . AQHandles , ssGetTaskTime
( rtS , 0 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . gkskfgxx0t .
AQHandles , 1 , 50000 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . gkskfgxx0t
. AQHandles , loggedName , origSigName , propName ) ; } sdiFreeLabel (
sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ;
sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel (
blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "theta 1" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "theta 1" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"LastWorkingModel/wraping angle" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "theta 1" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
2 ] = { 1 , 1 } ; sigDims . nDims = 2 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; rtDW . cbuc1d2dw4 . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "2e028e6f-2ed5-482a-9d7e-f8d6dfc4ce50" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( rtDW . cbuc1d2dw4 . AQHandles , hDT , &
srcInfo ) ; if ( rtDW . cbuc1d2dw4 . AQHandles ) {
sdiSetSignalSampleTimeString ( rtDW . cbuc1d2dw4 . AQHandles , "0.01" , 0.01
, ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( rtDW . cbuc1d2dw4 . AQHandles
, 0.0 ) ; sdiSetRunStartTime ( rtDW . cbuc1d2dw4 . AQHandles , ssGetTaskTime
( rtS , 0 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . cbuc1d2dw4 .
AQHandles , 1 , 50000 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . cbuc1d2dw4
. AQHandles , loggedName , origSigName , propName ) ; } sdiFreeLabel (
sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ;
sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel (
blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } rtDW . nli1g1zzdv . Index = 0U ;
rtDW . nli1g1zzdv . matlabCodegenIsDeleted = false ; rtDW . jso3apv43c = true
; rtDW . nli1g1zzdv . SampleTime = rtP . Motor_SampleTime ; rtDW . nli1g1zzdv
. isInitialized = 1 ; MW_EncoderSetup ( 13U , 14U , & rtDW . nli1g1zzdv .
Index ) ; rtDW . nli1g1zzdv . isSetupComplete = true ; rtDW . nli1g1zzdv .
TunablePropsChanged = false ; rtDW . le3tic5sxu . Index = 0U ; rtDW .
le3tic5sxu . matlabCodegenIsDeleted = false ; rtDW . flqnkxdpup = true ; rtDW
. le3tic5sxu . SampleTime = rtP . Pendl_SampleTime ; rtDW . le3tic5sxu .
isInitialized = 1 ; MW_EncoderSetup ( 19U , 18U , & rtDW . le3tic5sxu . Index
) ; rtDW . le3tic5sxu . isSetupComplete = true ; rtDW . le3tic5sxu .
TunablePropsChanged = false ; rtDW . lzzkdhymwk . matlabCodegenIsDeleted =
false ; rtDW . hddkodoopj = true ; rtDW . lzzkdhymwk . isInitialized = 1 ;
rtDW . lzzkdhymwk . PWMDriverObj . MW_PWM_HANDLE = MW_PWM_Open ( 21U , 0.0 ,
0.0 ) ; rtDW . lzzkdhymwk . isSetupComplete = true ; rtDW . g2idhzgh3e .
matlabCodegenIsDeleted = false ; rtDW . kpsdtquxpa = true ; rtDW . g2idhzgh3e
. isInitialized = 1 ; rtDW . g2idhzgh3e . PWMDriverObj . MW_PWM_HANDLE =
MW_PWM_Open ( 22U , 0.0 , 0.0 ) ; rtDW . g2idhzgh3e . isSetupComplete = true
; MdlInitialize ( ) ; } void MdlOutputs ( int_T tid ) { real_T ofl1btegvj ;
real_T hl2j5ma3so ; real_T jqowo2rvle ; real_T k13gtcz1om ; int32_T
avok3r5scc_p ; if ( rtP . ManualSwitch1_CurrentSetting == 1 ) { jqowo2rvle =
rtP . Constant4_Value ; } else { jqowo2rvle = rtP . Constant5_Value ; } if (
rtDW . nli1g1zzdv . SampleTime != rtP . Motor_SampleTime ) { rtDW .
nli1g1zzdv . SampleTime = rtP . Motor_SampleTime ; } if ( rtDW . nli1g1zzdv .
TunablePropsChanged ) { rtDW . nli1g1zzdv . TunablePropsChanged = false ; }
MW_EncoderRead ( rtDW . nli1g1zzdv . Index , & avok3r5scc_p ) ; if (
jqowo2rvle > 0.0 ) { MW_EncoderReset ( rtDW . nli1g1zzdv . Index ) ; }
k13gtcz1om = rtP . Gain1_Gain * ( real_T ) avok3r5scc_p ; if ( k13gtcz1om >
rtP . Switch_Threshold_cnqu1f005b ) { rtB . mri5etxg1q = muDoubleScalarRem (
k13gtcz1om + rtP . Bias_Bias , rtP . Constant1_Value_dovcbbjwsu ) + rtP .
Bias1_Bias_g5eh1qx5er ; } else { rtB . mri5etxg1q = muDoubleScalarRem (
k13gtcz1om + rtP . Bias2_Bias_klsi24i15u , rtP . Constant2_Value_obzhygnvxx )
+ rtP . Bias3_Bias_cskdv3ksjd ; } if ( rtDW . le3tic5sxu . SampleTime != rtP
. Pendl_SampleTime ) { rtDW . le3tic5sxu . SampleTime = rtP .
Pendl_SampleTime ; } if ( rtDW . le3tic5sxu . TunablePropsChanged ) { rtDW .
le3tic5sxu . TunablePropsChanged = false ; } MW_EncoderRead ( rtDW .
le3tic5sxu . Index , & avok3r5scc_p ) ; if ( jqowo2rvle > 0.0 ) {
MW_EncoderReset ( rtDW . le3tic5sxu . Index ) ; } jqowo2rvle = rtP .
Gain_Gain * ( real_T ) avok3r5scc_p + rtP . Constant_Value ; rtB . cdxko25rmp
= muDoubleScalarRem ( jqowo2rvle + rtP . Bias_Bias_oc40hpifet , rtP .
Constant1_Value_flqgqjzvjr ) ; if ( jqowo2rvle > rtP .
Switch_Threshold_kwx3tjqbzf ) { rtB . odty5b0iz3 = rtB . cdxko25rmp + rtP .
Bias1_Bias ; } else { rtB . odty5b0iz3 = muDoubleScalarRem ( jqowo2rvle + rtP
. Bias2_Bias , rtP . Constant2_Value_lmgoi5as0n ) + rtP . Bias3_Bias ; } rtB
. gvkyghrlov = k13gtcz1om * rtP . TSamp_WtEt ; ofl1btegvj = rtDW . jj0wuetk4s
; rtB . k1bgjgeexn = rtB . gvkyghrlov - ofl1btegvj ; rtB . p34oop0fw5 =
jqowo2rvle * rtP . TSamp_WtEt_npvhmoc2vw ; hl2j5ma3so = rtDW . dlwqbnllkb ;
rtB . glwh1vdjb3 = rtB . p34oop0fw5 - hl2j5ma3so ; rtB . lru21bjfh3 = ( ( -
rtP . K [ 0 ] * rtB . mri5etxg1q + - rtP . K [ 1 ] * rtB . odty5b0iz3 ) + -
rtP . K [ 2 ] * rtB . k1bgjgeexn ) + - rtP . K [ 3 ] * rtB . glwh1vdjb3 ; rtB
. l02auf01ni = muDoubleScalarAbs ( rtB . odty5b0iz3 ) ; if ( rtB . l02auf01ni
> rtP . Switch1_Threshold ) { if ( rtB . l02auf01ni > rtP . Switch_Threshold
) { rtB . lqrhujqows = rtP . Gain5_Gain * rtB . lru21bjfh3 ; } else { rtB .
lqrhujqows = rtP . Constant1_Value ; } } else { rtB . lqrhujqows = rtB .
lru21bjfh3 ; } if ( rtDW . o4rmpztr3v < 255U ) { rtDW . o4rmpztr3v ++ ; }
rtDW . hiwfvilozr = aijyma53fl ; if ( rtDW . mjig2r4xke == 0U ) { rtDW .
mjig2r4xke = 1U ; rtDW . n1sqhllhhp = nj0zue2ief ; jqowo2rvle = 255.0 ; }
else if ( rtDW . n1sqhllhhp == nj0zue2ief ) { if ( rtB . l02auf01ni < 2.0 ) {
rtDW . o4rmpztr3v = 0U ; rtDW . n1sqhllhhp = khfzrm13pc ; jqowo2rvle = rtB .
lqrhujqows ; } else { jqowo2rvle = 255.0 ; } } else if ( ( rtB . l02auf01ni >
2.0 ) && ( rtDW . o4rmpztr3v >= 200U ) ) { rtDW . n1sqhllhhp = nj0zue2ief ;
jqowo2rvle = 255.0 ; } else { jqowo2rvle = rtB . lqrhujqows ; } if (
jqowo2rvle > rtP . Switch2_Threshold ) { rtB . jbbkhmvmsd = muDoubleScalarAbs
( jqowo2rvle ) + rtP . PWMBias ; } else { rtB . jbbkhmvmsd = rtP .
Constant2_Value ; } if ( rtB . jbbkhmvmsd > rtP . PWMSat ) { rtB . jbbkhmvmsd
= rtP . PWMSat ; } else if ( rtB . jbbkhmvmsd < rtP . Saturation1_LowerSat )
{ rtB . jbbkhmvmsd = rtP . Saturation1_LowerSat ; } if ( jqowo2rvle > rtP .
Switch3_Threshold ) { rtB . l4qnrhjdgn = rtP . Constant2_Value ; } else { rtB
. l4qnrhjdgn = muDoubleScalarAbs ( jqowo2rvle ) + rtP . PWMBias ; } if ( rtB
. l4qnrhjdgn > rtP . PWMSat ) { rtB . l4qnrhjdgn = rtP . PWMSat ; } else if (
rtB . l4qnrhjdgn < rtP . Saturation2_LowerSat ) { rtB . l4qnrhjdgn = rtP .
Saturation2_LowerSat ; } rtDW . lzzkdhymwk . PWMDriverObj . MW_PWM_HANDLE =
MW_PWM_GetHandle ( 21U ) ; MW_PWM_SetDutyCycle ( rtDW . lzzkdhymwk .
PWMDriverObj . MW_PWM_HANDLE , muDoubleScalarMax ( muDoubleScalarMin ( rtB .
jbbkhmvmsd , 255.0 ) , 0.0 ) ) ; rtDW . g2idhzgh3e . PWMDriverObj .
MW_PWM_HANDLE = MW_PWM_GetHandle ( 22U ) ; MW_PWM_SetDutyCycle ( rtDW .
g2idhzgh3e . PWMDriverObj . MW_PWM_HANDLE , muDoubleScalarMax (
muDoubleScalarMin ( rtB . l4qnrhjdgn , 255.0 ) , 0.0 ) ) ; if (
ssGetLogOutput ( rtS ) ) { StructLogVar * svar = ( StructLogVar * ) rtDW .
eflm0lv3cg . LoggedData [ 0 ] ; LogVar * var = svar -> signals . values ; {
double locTime = ssGetTaskTime ( rtS , 0 ) ; rt_UpdateLogVar ( ( LogVar * )
svar -> time , & locTime , 0 ) ; } { real_T up0 [ 1 ] ; up0 [ 0 ] = rtB .
mri5etxg1q ; rt_UpdateLogVar ( ( LogVar * ) var , up0 , 0 ) ; var = var ->
next ; } { real_T up1 [ 1 ] ; up1 [ 0 ] = rtB . odty5b0iz3 ; rt_UpdateLogVar
( ( LogVar * ) var , up1 , 0 ) ; var = var -> next ; } { real_T up2 [ 1 ] ;
up2 [ 0 ] = rtB . k1bgjgeexn ; rt_UpdateLogVar ( ( LogVar * ) var , up2 , 0 )
; var = var -> next ; } { real_T up3 [ 1 ] ; up3 [ 0 ] = rtB . glwh1vdjb3 ;
rt_UpdateLogVar ( ( LogVar * ) var , up3 , 0 ) ; } } { if ( rtDW . nht1kqakrh
. AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . nht1kqakrh
. AQHandles , ssGetTaskTime ( rtS , 0 ) , ( char * ) & rtB . k1bgjgeexn + 0 )
; } } { if ( rtDW . hpgkuna5lh . AQHandles && ssGetLogOutput ( rtS ) ) {
sdiWriteSignal ( rtDW . hpgkuna5lh . AQHandles , ssGetTaskTime ( rtS , 0 ) ,
( char * ) & rtB . glwh1vdjb3 + 0 ) ; } } { if ( rtDW . gkskfgxx0t .
AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . gkskfgxx0t .
AQHandles , ssGetTaskTime ( rtS , 0 ) , ( char * ) & rtB . mri5etxg1q + 0 ) ;
} } { if ( rtDW . cbuc1d2dw4 . AQHandles && ssGetLogOutput ( rtS ) ) {
sdiWriteSignal ( rtDW . cbuc1d2dw4 . AQHandles , ssGetTaskTime ( rtS , 0 ) ,
( char * ) & rtB . odty5b0iz3 + 0 ) ; } } UNUSED_PARAMETER ( tid ) ; } void
MdlOutputsTID1 ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; } void MdlUpdate (
int_T tid ) { rtDW . jj0wuetk4s = rtB . gvkyghrlov ; rtDW . dlwqbnllkb = rtB
. p34oop0fw5 ; UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID1 ( int_T tid )
{ UNUSED_PARAMETER ( tid ) ; } void MdlTerminate ( void ) { if ( ! rtDW .
nli1g1zzdv . matlabCodegenIsDeleted ) { rtDW . nli1g1zzdv .
matlabCodegenIsDeleted = true ; if ( ( rtDW . nli1g1zzdv . isInitialized == 1
) && rtDW . nli1g1zzdv . isSetupComplete ) { MW_EncoderRelease ( ) ; } } if (
! rtDW . le3tic5sxu . matlabCodegenIsDeleted ) { rtDW . le3tic5sxu .
matlabCodegenIsDeleted = true ; if ( ( rtDW . le3tic5sxu . isInitialized == 1
) && rtDW . le3tic5sxu . isSetupComplete ) { MW_EncoderRelease ( ) ; } } if (
! rtDW . lzzkdhymwk . matlabCodegenIsDeleted ) { rtDW . lzzkdhymwk .
matlabCodegenIsDeleted = true ; if ( ( rtDW . lzzkdhymwk . isInitialized == 1
) && rtDW . lzzkdhymwk . isSetupComplete ) { rtDW . lzzkdhymwk . PWMDriverObj
. MW_PWM_HANDLE = MW_PWM_GetHandle ( 21U ) ; MW_PWM_SetDutyCycle ( rtDW .
lzzkdhymwk . PWMDriverObj . MW_PWM_HANDLE , 0.0 ) ; rtDW . lzzkdhymwk .
PWMDriverObj . MW_PWM_HANDLE = MW_PWM_GetHandle ( 21U ) ; MW_PWM_Close ( rtDW
. lzzkdhymwk . PWMDriverObj . MW_PWM_HANDLE ) ; } } if ( ! rtDW . g2idhzgh3e
. matlabCodegenIsDeleted ) { rtDW . g2idhzgh3e . matlabCodegenIsDeleted =
true ; if ( ( rtDW . g2idhzgh3e . isInitialized == 1 ) && rtDW . g2idhzgh3e .
isSetupComplete ) { rtDW . g2idhzgh3e . PWMDriverObj . MW_PWM_HANDLE =
MW_PWM_GetHandle ( 22U ) ; MW_PWM_SetDutyCycle ( rtDW . g2idhzgh3e .
PWMDriverObj . MW_PWM_HANDLE , 0.0 ) ; rtDW . g2idhzgh3e . PWMDriverObj .
MW_PWM_HANDLE = MW_PWM_GetHandle ( 22U ) ; MW_PWM_Close ( rtDW . g2idhzgh3e .
PWMDriverObj . MW_PWM_HANDLE ) ; } } { if ( rtDW . nht1kqakrh . AQHandles ) {
sdiTerminateStreaming ( & rtDW . nht1kqakrh . AQHandles ) ; } } { if ( rtDW .
hpgkuna5lh . AQHandles ) { sdiTerminateStreaming ( & rtDW . hpgkuna5lh .
AQHandles ) ; } } { if ( rtDW . gkskfgxx0t . AQHandles ) {
sdiTerminateStreaming ( & rtDW . gkskfgxx0t . AQHandles ) ; } } { if ( rtDW .
cbuc1d2dw4 . AQHandles ) { sdiTerminateStreaming ( & rtDW . cbuc1d2dw4 .
AQHandles ) ; } } } static void mr_LastWorkingModel_cacheDataAsMxArray (
mxArray * destArray , mwIndex i , int j , const void * srcData , size_t
numBytes ) ; static void mr_LastWorkingModel_cacheDataAsMxArray ( mxArray *
destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) {
mxArray * newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes ,
mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , (
const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i ,
j , newArray ) ; } static void mr_LastWorkingModel_restoreDataFromMxArray (
void * destData , const mxArray * srcArray , mwIndex i , int j , size_t
numBytes ) ; static void mr_LastWorkingModel_restoreDataFromMxArray ( void *
destData , const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) {
memcpy ( ( uint8_T * ) destData , ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) , numBytes ) ; } static void
mr_LastWorkingModel_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i
, int j , uint_T bitVal ) ; static void
mr_LastWorkingModel_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i
, int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_LastWorkingModel_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_LastWorkingModel_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_LastWorkingModel_cacheDataToMxArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes )
; static void mr_LastWorkingModel_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_LastWorkingModel_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) ; static void mr_LastWorkingModel_restoreDataFromMxArrayWithOffset
( void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex
offset , size_t numBytes ) { const uint8_T * varData = ( const uint8_T * )
mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T *
) destData , ( const uint8_T * ) & varData [ offset * numBytes ] , numBytes )
; } static void mr_LastWorkingModel_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
; static void mr_LastWorkingModel_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
{ mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( real_T ) fieldVal ) ) ; } static uint_T
mr_LastWorkingModel_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_LastWorkingModel_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_LastWorkingModel_GetDWork ( ) {
static const char_T * ssDWFieldNames [ 3 ] = { "rtB" , "rtDW" ,
"NULL_PrevZCX" , } ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 ,
ssDWFieldNames ) ; mr_LastWorkingModel_cacheDataAsMxArray ( ssDW , 0 , 0 , (
const void * ) & ( rtB ) , sizeof ( rtB ) ) ; { static const char_T *
rtdwDataFieldNames [ 14 ] = { "rtDW.le3tic5sxu" , "rtDW.nli1g1zzdv" ,
"rtDW.g2idhzgh3e" , "rtDW.lzzkdhymwk" , "rtDW.jj0wuetk4s" , "rtDW.dlwqbnllkb"
, "rtDW.hiwfvilozr" , "rtDW.n1sqhllhhp" , "rtDW.mjig2r4xke" ,
"rtDW.o4rmpztr3v" , "rtDW.flqnkxdpup" , "rtDW.kpsdtquxpa" , "rtDW.hddkodoopj"
, "rtDW.jso3apv43c" , } ; mxArray * rtdwData = mxCreateStructMatrix ( 1 , 1 ,
14 , rtdwDataFieldNames ) ; mr_LastWorkingModel_cacheDataAsMxArray ( rtdwData
, 0 , 0 , ( const void * ) & ( rtDW . le3tic5sxu ) , sizeof ( rtDW .
le3tic5sxu ) ) ; mr_LastWorkingModel_cacheDataAsMxArray ( rtdwData , 0 , 1 ,
( const void * ) & ( rtDW . nli1g1zzdv ) , sizeof ( rtDW . nli1g1zzdv ) ) ;
mr_LastWorkingModel_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const void * )
& ( rtDW . g2idhzgh3e ) , sizeof ( rtDW . g2idhzgh3e ) ) ;
mr_LastWorkingModel_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const void * )
& ( rtDW . lzzkdhymwk ) , sizeof ( rtDW . lzzkdhymwk ) ) ;
mr_LastWorkingModel_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const void * )
& ( rtDW . jj0wuetk4s ) , sizeof ( rtDW . jj0wuetk4s ) ) ;
mr_LastWorkingModel_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const void * )
& ( rtDW . dlwqbnllkb ) , sizeof ( rtDW . dlwqbnllkb ) ) ;
mr_LastWorkingModel_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const void * )
& ( rtDW . hiwfvilozr ) , sizeof ( rtDW . hiwfvilozr ) ) ;
mr_LastWorkingModel_cacheDataAsMxArray ( rtdwData , 0 , 7 , ( const void * )
& ( rtDW . n1sqhllhhp ) , sizeof ( rtDW . n1sqhllhhp ) ) ;
mr_LastWorkingModel_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const void * )
& ( rtDW . mjig2r4xke ) , sizeof ( rtDW . mjig2r4xke ) ) ;
mr_LastWorkingModel_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const void * )
& ( rtDW . o4rmpztr3v ) , sizeof ( rtDW . o4rmpztr3v ) ) ;
mr_LastWorkingModel_cacheDataAsMxArray ( rtdwData , 0 , 10 , ( const void * )
& ( rtDW . flqnkxdpup ) , sizeof ( rtDW . flqnkxdpup ) ) ;
mr_LastWorkingModel_cacheDataAsMxArray ( rtdwData , 0 , 11 , ( const void * )
& ( rtDW . kpsdtquxpa ) , sizeof ( rtDW . kpsdtquxpa ) ) ;
mr_LastWorkingModel_cacheDataAsMxArray ( rtdwData , 0 , 12 , ( const void * )
& ( rtDW . hddkodoopj ) , sizeof ( rtDW . hddkodoopj ) ) ;
mr_LastWorkingModel_cacheDataAsMxArray ( rtdwData , 0 , 13 , ( const void * )
& ( rtDW . jso3apv43c ) , sizeof ( rtDW . jso3apv43c ) ) ; mxSetFieldByNumber
( ssDW , 0 , 1 , rtdwData ) ; } return ssDW ; } void
mr_LastWorkingModel_SetDWork ( const mxArray * ssDW ) { ( void ) ssDW ;
mr_LastWorkingModel_restoreDataFromMxArray ( ( void * ) & ( rtB ) , ssDW , 0
, 0 , sizeof ( rtB ) ) ; { const mxArray * rtdwData = mxGetFieldByNumber (
ssDW , 0 , 1 ) ; mr_LastWorkingModel_restoreDataFromMxArray ( ( void * ) & (
rtDW . le3tic5sxu ) , rtdwData , 0 , 0 , sizeof ( rtDW . le3tic5sxu ) ) ;
mr_LastWorkingModel_restoreDataFromMxArray ( ( void * ) & ( rtDW . nli1g1zzdv
) , rtdwData , 0 , 1 , sizeof ( rtDW . nli1g1zzdv ) ) ;
mr_LastWorkingModel_restoreDataFromMxArray ( ( void * ) & ( rtDW . g2idhzgh3e
) , rtdwData , 0 , 2 , sizeof ( rtDW . g2idhzgh3e ) ) ;
mr_LastWorkingModel_restoreDataFromMxArray ( ( void * ) & ( rtDW . lzzkdhymwk
) , rtdwData , 0 , 3 , sizeof ( rtDW . lzzkdhymwk ) ) ;
mr_LastWorkingModel_restoreDataFromMxArray ( ( void * ) & ( rtDW . jj0wuetk4s
) , rtdwData , 0 , 4 , sizeof ( rtDW . jj0wuetk4s ) ) ;
mr_LastWorkingModel_restoreDataFromMxArray ( ( void * ) & ( rtDW . dlwqbnllkb
) , rtdwData , 0 , 5 , sizeof ( rtDW . dlwqbnllkb ) ) ;
mr_LastWorkingModel_restoreDataFromMxArray ( ( void * ) & ( rtDW . hiwfvilozr
) , rtdwData , 0 , 6 , sizeof ( rtDW . hiwfvilozr ) ) ;
mr_LastWorkingModel_restoreDataFromMxArray ( ( void * ) & ( rtDW . n1sqhllhhp
) , rtdwData , 0 , 7 , sizeof ( rtDW . n1sqhllhhp ) ) ;
mr_LastWorkingModel_restoreDataFromMxArray ( ( void * ) & ( rtDW . mjig2r4xke
) , rtdwData , 0 , 8 , sizeof ( rtDW . mjig2r4xke ) ) ;
mr_LastWorkingModel_restoreDataFromMxArray ( ( void * ) & ( rtDW . o4rmpztr3v
) , rtdwData , 0 , 9 , sizeof ( rtDW . o4rmpztr3v ) ) ;
mr_LastWorkingModel_restoreDataFromMxArray ( ( void * ) & ( rtDW . flqnkxdpup
) , rtdwData , 0 , 10 , sizeof ( rtDW . flqnkxdpup ) ) ;
mr_LastWorkingModel_restoreDataFromMxArray ( ( void * ) & ( rtDW . kpsdtquxpa
) , rtdwData , 0 , 11 , sizeof ( rtDW . kpsdtquxpa ) ) ;
mr_LastWorkingModel_restoreDataFromMxArray ( ( void * ) & ( rtDW . hddkodoopj
) , rtdwData , 0 , 12 , sizeof ( rtDW . hddkodoopj ) ) ;
mr_LastWorkingModel_restoreDataFromMxArray ( ( void * ) & ( rtDW . jso3apv43c
) , rtdwData , 0 , 13 , sizeof ( rtDW . jso3apv43c ) ) ; } } mxArray *
mr_LastWorkingModel_GetSimStateDisallowedBlocks ( ) { mxArray * data =
mxCreateCellMatrix ( 6 , 3 ) ; mwIndex subs [ 2 ] , offset ; { static const
char_T * blockType [ 6 ] = { "Scope" , "Scope" , "MATLABSystem" ,
"MATLABSystem" , "MATLABSystem" , "MATLABSystem" , } ; static const char_T *
blockPath [ 6 ] = { "LastWorkingModel/Scope" ,
"LastWorkingModel/wraping angle/Scope" , "LastWorkingModel/Motor" ,
"LastWorkingModel/PWM1" , "LastWorkingModel/PWM2" , "LastWorkingModel/Pendl"
, } ; static const int reason [ 6 ] = { 0 , 0 , 6 , 6 , 6 , 6 , } ; for (
subs [ 0 ] = 0 ; subs [ 0 ] < 6 ; ++ ( subs [ 0 ] ) ) { subs [ 1 ] = 0 ;
offset = mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data ,
offset , mxCreateString ( blockType [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 1 ;
offset = mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data ,
offset , mxCreateString ( blockPath [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 2 ;
offset = mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data ,
offset , mxCreateDoubleScalar ( ( real_T ) reason [ subs [ 0 ] ] ) ) ; } }
return data ; } void MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS ,
0 ) ; ssSetNumY ( rtS , 0 ) ; ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough
( rtS , 0 ) ; ssSetNumSampleTimes ( rtS , 1 ) ; ssSetNumBlocks ( rtS , 76 ) ;
ssSetNumBlockIO ( rtS , 13 ) ; ssSetNumBlockParams ( rtS , 41 ) ; } void
MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.01 ) ;
ssSetOffsetTime ( rtS , 0 , 0.0 ) ; } void raccel_set_checksum ( ) {
ssSetChecksumVal ( rtS , 0 , 4119914760U ) ; ssSetChecksumVal ( rtS , 1 ,
1858297268U ) ; ssSetChecksumVal ( rtS , 2 , 4245137094U ) ; ssSetChecksumVal
( rtS , 3 , 634058354U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) {
static struct _ssMdlInfo mdlInfo ; static struct _ssBlkInfo2 blkInfo2 ;
static struct _ssBlkInfoSLSize blkInfoSLSize ; rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; executionInfo -> gblObjects_ . numToFiles = 0 ;
executionInfo -> gblObjects_ . numFrFiles = 0 ; executionInfo -> gblObjects_
. numFrWksBlocks = 0 ; executionInfo -> gblObjects_ . numModelInputs = 0 ;
executionInfo -> gblObjects_ . numRootInportBlks = 0 ; executionInfo ->
gblObjects_ . inportDataTypeIdx = NULL ; executionInfo -> gblObjects_ .
inportDims = NULL ; executionInfo -> gblObjects_ . inportComplex = NULL ;
executionInfo -> gblObjects_ . inportInterpoFlag = NULL ; executionInfo ->
gblObjects_ . inportContinuous = NULL ; ( void ) memset ( ( char_T * ) rtS ,
0 , sizeof ( SimStruct ) ) ; ( void ) memset ( ( char_T * ) & mdlInfo , 0 ,
sizeof ( struct _ssMdlInfo ) ) ; ( void ) memset ( ( char_T * ) & blkInfo2 ,
0 , sizeof ( struct _ssBlkInfo2 ) ) ; ( void ) memset ( ( char_T * ) &
blkInfoSLSize , 0 , sizeof ( struct _ssBlkInfoSLSize ) ) ; ssSetBlkInfo2Ptr (
rtS , & blkInfo2 ) ; ssSetBlkInfoSLSizePtr ( rtS , & blkInfoSLSize ) ;
ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; ssSetExecutionInfo ( rtS ,
executionInfo ) ; slsaAllocOPModelData ( rtS ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & rtB ) ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof
( B ) ) ; } { void * dwork = ( void * ) & rtDW ; ssSetRootDWork ( rtS , dwork
) ; ( void ) memset ( dwork , 0 , sizeof ( DW ) ) ; } { static
DataTypeTransInfo dtInfo ; ( void ) memset ( ( char_T * ) & dtInfo , 0 ,
sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS , & dtInfo ) ; dtInfo .
numDataTypes = 25 ; dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ] ; dtInfo
. dataTypeNames = & rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = &
rtBTransTable ; dtInfo . PTransTable = & rtPTransTable ; dtInfo .
dataTypeInfoTable = rtDataTypeInfoTable ; }
LastWorkingModel_InitializeDataMapInfo ( ) ; ssSetIsRapidAcceleratorActive (
rtS , true ) ; ssSetRootSS ( rtS , rtS ) ; ssSetVersion ( rtS ,
SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS , "LastWorkingModel" ) ;
ssSetPath ( rtS , "LastWorkingModel" ) ; ssSetTStart ( rtS , 0.0 ) ;
ssSetTFinal ( rtS , rtInf ) ; ssSetStepSize ( rtS , 0.01 ) ;
ssSetFixedStepSize ( rtS , 0.01 ) ; { static RTWLogInfo rt_DataLoggingInfo ;
rt_DataLoggingInfo . loggingInterval = ( NULL ) ; ssSetRTWLogInfo ( rtS , &
rt_DataLoggingInfo ) ; } { { static int_T rt_LoggedStateWidths [ ] = { 1 , 1
} ; static int_T rt_LoggedStateNumDimensions [ ] = { 1 , 1 } ; static int_T
rt_LoggedStateDimensions [ ] = { 1 , 1 } ; static boolean_T
rt_LoggedStateIsVarDims [ ] = { 0 , 0 } ; static BuiltInDTypeId
rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE , SS_DOUBLE } ; static int_T
rt_LoggedStateComplexSignals [ ] = { 0 , 0 } ; static RTWPreprocessingFcnPtr
rt_LoggingStatePreprocessingFcnPtrs [ ] = { ( NULL ) , ( NULL ) } ; static
const char_T * rt_LoggedStateLabels [ ] = { "DSTATE" , "DSTATE" } ; static
const char_T * rt_LoggedStateBlockNames [ ] = {
"LastWorkingModel/Discrete Derivative1/UD" ,
"LastWorkingModel/Discrete Derivative/UD" } ; static const char_T *
rt_LoggedStateNames [ ] = { "DSTATE" , "DSTATE" } ; static boolean_T
rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 } ; static RTWLogDataTypeConvert
rt_RTWLogDataTypeConvert [ ] = { { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 ,
1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } }
; static int_T rt_LoggedStateIdxList [ ] = { 4 , 5 } ; static
RTWLogSignalInfo rt_LoggedStateSignalInfo = { 2 , rt_LoggedStateWidths ,
rt_LoggedStateNumDimensions , rt_LoggedStateDimensions ,
rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , rt_LoggingStatePreprocessingFcnPtrs
, { rt_LoggedStateLabels } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert , rt_LoggedStateIdxList
} ; static void * rt_LoggedStateSignalPtrs [ 2 ] ; rtliSetLogXSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtDW . jj0wuetk4s ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtDW . dlwqbnllkb ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) ,
"xFinal" ) ; rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 50000 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo (
rtS ) , 1 ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ;
rtliSetLogYSignalInfo ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static
ssSolverInfo slvrInfo ; ssSetNumNonContDerivSigInfos ( rtS , 0 ) ;
ssSetNonContDerivSigInfos ( rtS , ( NULL ) ) ; ssSetSolverInfo ( rtS , &
slvrInfo ) ; ssSetSolverName ( rtS , "FixedStepDiscrete" ) ;
ssSetVariableStepSolver ( rtS , 0 ) ; ssSetSolverConsistencyChecking ( rtS ,
0 ) ; ssSetSolverAdaptiveZcDetection ( rtS , 0 ) ;
ssSetSolverRobustResetMethod ( rtS , 0 ) ; ssSetSolverStateProjection ( rtS ,
0 ) ; ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetTNextTid ( rtS , INT_MIN ) ;
ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 0 ) ; } ssSetChecksumVal ( rtS , 0 ,
4119914760U ) ; ssSetChecksumVal ( rtS , 1 , 1858297268U ) ; ssSetChecksumVal
( rtS , 2 , 4245137094U ) ; ssSetChecksumVal ( rtS , 3 , 634058354U ) ; {
static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE ; static
RTWExtModeInfo rt_ExtModeInfo ; static const sysRanDType * systemRan [ 14 ] ;
gblRTWExtModeInfo = & rt_ExtModeInfo ; ssSetRTWExtModeInfo ( rtS , &
rt_ExtModeInfo ) ; rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo ,
systemRan ) ; systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = &
rtAlwaysEnabled ; systemRan [ 2 ] = & rtAlwaysEnabled ; systemRan [ 3 ] = &
rtAlwaysEnabled ; systemRan [ 4 ] = & rtAlwaysEnabled ; systemRan [ 5 ] = &
rtAlwaysEnabled ; systemRan [ 6 ] = & rtAlwaysEnabled ; systemRan [ 7 ] = &
rtAlwaysEnabled ; systemRan [ 8 ] = & rtAlwaysEnabled ; systemRan [ 9 ] = &
rtAlwaysEnabled ; systemRan [ 10 ] = & rtAlwaysEnabled ; systemRan [ 11 ] = &
rtAlwaysEnabled ; systemRan [ 12 ] = & rtAlwaysEnabled ; systemRan [ 13 ] = &
rtAlwaysEnabled ; rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) ,
& ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo
( rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS
) , ssGetTPtr ( rtS ) ) ; } slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_LastWorkingModel_GetSimStateDisallowedBlocks ) ;
slsaGetWorkFcnForSimTargetOP ( rtS , mr_LastWorkingModel_GetDWork ) ;
slsaSetWorkFcnForSimTargetOP ( rtS , mr_LastWorkingModel_SetDWork ) ;
rt_RapidReadMatFileAndUpdateParams ( rtS ) ; if ( ssGetErrorStatus ( rtS ) )
{ return rtS ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
void MdlOutputsParameterSampleTime ( int_T tid ) { MdlOutputsTID1 ( tid ) ; }
