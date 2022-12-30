#include "request_HRA_2.h"
#include "mwmathutil.h"
#include "rtwtypes.h"
#include "request_HRA_2_private.h"
#include "rt_logging_mmi.h"
#include "request_HRA_2_capi.h"
#include "request_HRA_2_dt.h"
#include "sfcn_loader_c_api.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; void
raccelForceExtModeShutdown ( boolean_T extModeStartPktReceived ) { if ( !
extModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 1 , & stopRequested ) ; }
rtExtModeShutdown ( 1 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
#include "slsa_sim_engine.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 2 ; const char_T
* gbl_raccel_Version = "9.8 (R2022b) 13-May-2022" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const int_T gblNumRootInportBlks = 0 ; const int_T
gblNumModelInputs = 0 ; extern const char * gblInportFileName ; extern
rtInportTUtable * gblInportTUtables ; const int_T gblInportDataTypeIdx [ ] =
{ - 1 } ; const int_T gblInportDims [ ] = { - 1 } ; const int_T
gblInportComplex [ ] = { - 1 } ; const int_T gblInportInterpoFlag [ ] = { - 1
} ; const int_T gblInportContinuous [ ] = { - 1 } ; int_T enableFcnCallFlag [
] = { 1 , 1 } ; const char * raccelLoadInputsAndAperiodicHitTimes ( SimStruct
* S , const char * inportFileName , int * matFileFormat ) { return
rt_RAccelReadInportsMatFile ( S , inportFileName , matFileFormat ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_sim_engine.h"
#include "simtarget/slSimTgtSLExecSimBridge.h"
B rtB ; X rtX ; DW rtDW ; static SimStruct model_S ; SimStruct * const rtS =
& model_S ; real_T look1_binlxpw ( real_T u0 , const real_T bp0 [ ] , const
real_T table [ ] , uint32_T maxIndex ) { real_T frac ; real_T yL_0d0 ;
uint32_T bpIdx ; uint32_T iLeft ; uint32_T iRght ; if ( u0 <= bp0 [ 0U ] ) {
iLeft = 0U ; frac = ( u0 - bp0 [ 0U ] ) / ( bp0 [ 1U ] - bp0 [ 0U ] ) ; }
else if ( u0 < bp0 [ maxIndex ] ) { bpIdx = maxIndex >> 1U ; iLeft = 0U ;
iRght = maxIndex ; while ( iRght - iLeft > 1U ) { if ( u0 < bp0 [ bpIdx ] ) {
iRght = bpIdx ; } else { iLeft = bpIdx ; } bpIdx = ( iRght + iLeft ) >> 1U ;
} frac = ( u0 - bp0 [ iLeft ] ) / ( bp0 [ iLeft + 1U ] - bp0 [ iLeft ] ) ; }
else { iLeft = maxIndex - 1U ; frac = ( u0 - bp0 [ maxIndex - 1U ] ) / ( bp0
[ maxIndex ] - bp0 [ maxIndex - 1U ] ) ; } yL_0d0 = table [ iLeft ] ; return
( table [ iLeft + 1U ] - yL_0d0 ) * frac + yL_0d0 ; } void MdlInitialize (
void ) { { SimStruct * rts = ssGetSFunction ( rtS , 0 ) ;
sfcnInitializeConditions ( rts ) ; if ( ssGetErrorStatus ( rts ) != ( NULL )
) return ; } rtX . bzykdqvykq = rtP .
PIDController1_InitialConditionForIntegrator ; rtX . mbavrff3lv = rtP .
PIDController1_InitialConditionForFilter ; rtX . gspeclp1m1 = rtP .
PIDController2_InitialConditionForIntegrator ; rtX . gi25nx43p4 = rtP .
PIDController2_InitialConditionForFilter ; } void MdlStart ( void ) { { bool
externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} rtB . k0h3i5nv5a = rtP . eee_Value ; rtB . d5rtwafbe0 = rtP .
DCVoltageSource_Amplitude ; { SimStruct * rts = ssGetSFunction ( rtS , 0 ) ;
sfcnStart ( rts ) ; if ( ssGetErrorStatus ( rts ) != ( NULL ) ) return ; }
MdlInitialize ( ) ; } void MdlOutputs ( int_T tid ) { { SimStruct * rts =
ssGetSFunction ( rtS , 0 ) ; sfcnOutputs ( rts , 0 ) ; } rtB . deubnzhi3h =
rtP . donotdeletethisgain_Gain * rtB . owzdk0illb [ 2 ] ; rtB . hwjl5eruit =
rtP . donotdeletethisgain_Gain_jsdwtssimh * rtB . owzdk0illb [ 0 ] ; rtB .
gwmbzbwk2y = rtP . Iref_Value - rtB . hwjl5eruit ; rtB . leb2el2gtw = rtP .
Vref_Value - rtB . deubnzhi3h ; rtB . dfkp4apu00 = rtP . PIDController1_P *
rtB . gwmbzbwk2y ; rtB . f10vyfjkrm = rtX . bzykdqvykq ; rtB . ksjtrywmna =
rtP . PIDController1_D * rtB . gwmbzbwk2y ; rtB . elk3ilbmav = rtX .
mbavrff3lv ; rtB . eqv1d3ta40 = rtB . ksjtrywmna - rtB . elk3ilbmav ; rtB .
oy4djh0koh = rtP . PIDController1_N * rtB . eqv1d3ta40 ; rtB . cmfb3ygnuq = (
rtB . dfkp4apu00 + rtB . f10vyfjkrm ) + rtB . oy4djh0koh ; if (
ssIsModeUpdateTimeStep ( rtS ) ) { rtDW . izb2kmgn0c = rtB . cmfb3ygnuq >=
rtP . Saturation_UpperSat ? 1 : rtB . cmfb3ygnuq > rtP . Saturation_LowerSat
? 0 : - 1 ; } rtB . cd0le2fmoz = rtDW . izb2kmgn0c == 1 ? rtP .
Saturation_UpperSat : rtDW . izb2kmgn0c == - 1 ? rtP . Saturation_LowerSat :
rtB . cmfb3ygnuq ; rtB . ixlfbkob4o = rtP . PIDController2_P * rtB .
leb2el2gtw ; rtB . evppity5rx = rtX . gspeclp1m1 ; rtB . cho0oeabrc = rtP .
PIDController2_D * rtB . leb2el2gtw ; rtB . dcdltlmiwd = rtX . gi25nx43p4 ;
rtB . h23hfdtqqg = rtB . cho0oeabrc - rtB . dcdltlmiwd ; rtB . d4jyoenzfl =
rtP . PIDController2_N * rtB . h23hfdtqqg ; rtB . ntaftztpcu = ( rtB .
ixlfbkob4o + rtB . evppity5rx ) + rtB . d4jyoenzfl ; if (
ssIsModeUpdateTimeStep ( rtS ) ) { rtDW . pto100u0i0 = rtB . ntaftztpcu >=
rtP . Saturation1_UpperSat ? 1 : rtB . ntaftztpcu > rtP .
Saturation1_LowerSat ? 0 : - 1 ; } rtB . i4xkh0crvp = rtDW . pto100u0i0 == 1
? rtP . Saturation1_UpperSat : rtDW . pto100u0i0 == - 1 ? rtP .
Saturation1_LowerSat : rtB . ntaftztpcu ; if ( ssIsModeUpdateTimeStep ( rtS )
) { rtB . bfek3s2pqq = rtB . cd0le2fmoz ; rtDW . gi0ldnstrz = 0 ; if ( ( rtB
. cd0le2fmoz != rtB . cd0le2fmoz ) || ( rtB . i4xkh0crvp < rtB . cd0le2fmoz )
) { rtB . bfek3s2pqq = rtB . i4xkh0crvp ; rtDW . gi0ldnstrz = 1 ; } } else {
rtB . bfek3s2pqq = rtB . cd0le2fmoz ; if ( rtDW . gi0ldnstrz == 1 ) { rtB .
bfek3s2pqq = rtB . i4xkh0crvp ; } } rtB . jkvhtq433b = ssGetT ( rtS ) - 0.0 ;
rtB . l0niisejas = rtB . bfek3s2pqq - look1_binlxpw ( muDoubleScalarRem ( rtB
. jkvhtq433b , rtP . Constant_Value ) , rtP . LookUpTable1_bp01Data , rtP .
RepeatingSequence_rep_seq_y , 1U ) ; rtB . p522ezegmf = rtP .
PIDController1_I * rtB . gwmbzbwk2y ; rtB . jo0kmcxnjz = rtP .
PIDController2_I * rtB . leb2el2gtw ; rtB . mygfhnueqq = rtP .
donotdeletethisgain_Gain_k14ykx3pkj * rtB . owzdk0illb [ 1 ] ;
UNUSED_PARAMETER ( tid ) ; } void MdlOutputsTID1 ( int_T tid ) { rtB .
hd3y3zrd2a = rtP . gate_Value ; rtB . k0h3i5nv5a = rtP . eee_Value ; rtB .
ch2i202eqg = rtP . gate_Value_graafvp4kv ; rtB . d5rtwafbe0 = rtP .
DCVoltageSource_Amplitude ; UNUSED_PARAMETER ( tid ) ; } void MdlUpdate (
int_T tid ) { { SimStruct * rts = ssGetSFunction ( rtS , 0 ) ; sfcnUpdate (
rts , 0 ) ; if ( ssGetErrorStatus ( rts ) != ( NULL ) ) return ; }
UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID1 ( int_T tid ) {
UNUSED_PARAMETER ( tid ) ; } void MdlDerivatives ( void ) { XDot * _rtXdot ;
_rtXdot = ( ( XDot * ) ssGetdX ( rtS ) ) ; { SimStruct * rts = ssGetSFunction
( rtS , 0 ) ; real_T * sfcndX_fx = ( real_T * ) & ( ( XDot * ) ssGetdX ( rtS
) ) -> dhld0jvdqi [ 0 ] ; ssSetdX ( rts , sfcndX_fx ) ; sfcnDerivatives ( rts
) ; if ( ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } _rtXdot ->
bzykdqvykq = rtB . p522ezegmf ; _rtXdot -> mbavrff3lv = rtB . oy4djh0koh ;
_rtXdot -> gspeclp1m1 = rtB . jo0kmcxnjz ; _rtXdot -> gi25nx43p4 = rtB .
d4jyoenzfl ; } void MdlProjection ( void ) { { SimStruct * rts =
ssGetSFunction ( rtS , 0 ) ; sfcnProjection ( rts ) ; if ( ssGetErrorStatus (
rts ) != ( NULL ) ) return ; } } void MdlZeroCrossings ( void ) { ZCV *
_rtZCSV ; _rtZCSV = ( ( ZCV * ) ssGetSolverZcSignalVector ( rtS ) ) ; {
SimStruct * rts = ssGetSFunction ( rtS , 0 ) ; ssSetNonsampledZCs ( rts , & (
( ( ZCV * ) ssGetSolverZcSignalVector ( rtS ) ) -> atye4nzux1 [ 0 ] ) ) ;
sfcnZeroCrossings ( rts ) ; if ( ssGetErrorStatus ( rts ) != ( NULL ) )
return ; } _rtZCSV -> d1ychsbzvg = rtB . cmfb3ygnuq - rtP .
Saturation_UpperSat ; _rtZCSV -> dbvomwymls = rtB . cmfb3ygnuq - rtP .
Saturation_LowerSat ; _rtZCSV -> kmti0drgmf = rtB . ntaftztpcu - rtP .
Saturation1_UpperSat ; _rtZCSV -> hwgkis5b24 = rtB . ntaftztpcu - rtP .
Saturation1_LowerSat ; if ( ( rtB . i4xkh0crvp != rtB . i4xkh0crvp ) || ( rtB
. cd0le2fmoz < rtB . i4xkh0crvp ) ) { if ( rtDW . gi0ldnstrz == 0 ) { _rtZCSV
-> gbmule2ud1 = rtB . cd0le2fmoz - rtB . cd0le2fmoz ; } else { _rtZCSV ->
gbmule2ud1 = rtB . cd0le2fmoz - rtB . i4xkh0crvp ; } } else if ( rtDW .
gi0ldnstrz == 0 ) { _rtZCSV -> gbmule2ud1 = rtB . i4xkh0crvp - rtB .
cd0le2fmoz ; } else { _rtZCSV -> gbmule2ud1 = rtB . i4xkh0crvp - rtB .
i4xkh0crvp ; } } void MdlTerminate ( void ) { { SimStruct * rts =
ssGetSFunction ( rtS , 0 ) ; sfcnTerminate ( rts ) ; } } static void
mr_request_HRA_2_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j
, const void * srcData , size_t numBytes ) ; static void
mr_request_HRA_2_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j
, const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_request_HRA_2_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_request_HRA_2_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_request_HRA_2_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i ,
int j , uint_T bitVal ) ; static void mr_request_HRA_2_cacheBitFieldToMxArray
( mxArray * destArray , mwIndex i , int j , uint_T bitVal ) {
mxSetFieldByNumber ( destArray , i , j , mxCreateDoubleScalar ( ( double )
bitVal ) ) ; } static uint_T mr_request_HRA_2_extractBitFieldFromMxArray (
const mxArray * srcArray , mwIndex i , int j , uint_T numBits ) ; static
uint_T mr_request_HRA_2_extractBitFieldFromMxArray ( const mxArray * srcArray
, mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_request_HRA_2_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex
i , int j , mwIndex offset , const void * srcData , size_t numBytes ) ;
static void mr_request_HRA_2_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_request_HRA_2_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) ; static void mr_request_HRA_2_restoreDataFromMxArrayWithOffset (
void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex
offset , size_t numBytes ) { const uint8_T * varData = ( const uint8_T * )
mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T *
) destData , ( const uint8_T * ) & varData [ offset * numBytes ] , numBytes )
; } static void mr_request_HRA_2_cacheBitFieldToCellArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static
void mr_request_HRA_2_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( double ) fieldVal ) ) ; } static uint_T
mr_request_HRA_2_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_request_HRA_2_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_request_HRA_2_GetDWork ( ) { static
const char * ssDWFieldNames [ 3 ] = { "rtB" , "rtDW" , "NULL_PrevZCX" , } ;
mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_request_HRA_2_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void * ) & ( rtB
) , sizeof ( rtB ) ) ; { static const char * rtdwDataFieldNames [ 6 ] = {
"rtDW.cxpfuvgpez" , "rtDW.cix3io0m5t" , "rtDW.ggcfliu0c2" , "rtDW.izb2kmgn0c"
, "rtDW.pto100u0i0" , "rtDW.gi0ldnstrz" , } ; mxArray * rtdwData =
mxCreateStructMatrix ( 1 , 1 , 6 , rtdwDataFieldNames ) ;
mr_request_HRA_2_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const void * ) & (
rtDW . cxpfuvgpez ) , sizeof ( rtDW . cxpfuvgpez ) ) ;
mr_request_HRA_2_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const void * ) & (
rtDW . cix3io0m5t ) , sizeof ( rtDW . cix3io0m5t ) ) ;
mr_request_HRA_2_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const void * ) & (
rtDW . ggcfliu0c2 ) , sizeof ( rtDW . ggcfliu0c2 ) ) ;
mr_request_HRA_2_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const void * ) & (
rtDW . izb2kmgn0c ) , sizeof ( rtDW . izb2kmgn0c ) ) ;
mr_request_HRA_2_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const void * ) & (
rtDW . pto100u0i0 ) , sizeof ( rtDW . pto100u0i0 ) ) ;
mr_request_HRA_2_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const void * ) & (
rtDW . gi0ldnstrz ) , sizeof ( rtDW . gi0ldnstrz ) ) ; mxSetFieldByNumber (
ssDW , 0 , 1 , rtdwData ) ; } return ssDW ; } void mr_request_HRA_2_SetDWork
( const mxArray * ssDW ) { ( void ) ssDW ;
mr_request_HRA_2_restoreDataFromMxArray ( ( void * ) & ( rtB ) , ssDW , 0 , 0
, sizeof ( rtB ) ) ; { const mxArray * rtdwData = mxGetFieldByNumber ( ssDW ,
0 , 1 ) ; mr_request_HRA_2_restoreDataFromMxArray ( ( void * ) & ( rtDW .
cxpfuvgpez ) , rtdwData , 0 , 0 , sizeof ( rtDW . cxpfuvgpez ) ) ;
mr_request_HRA_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . cix3io0m5t )
, rtdwData , 0 , 1 , sizeof ( rtDW . cix3io0m5t ) ) ;
mr_request_HRA_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . ggcfliu0c2 )
, rtdwData , 0 , 2 , sizeof ( rtDW . ggcfliu0c2 ) ) ;
mr_request_HRA_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . izb2kmgn0c )
, rtdwData , 0 , 3 , sizeof ( rtDW . izb2kmgn0c ) ) ;
mr_request_HRA_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . pto100u0i0 )
, rtdwData , 0 , 4 , sizeof ( rtDW . pto100u0i0 ) ) ;
mr_request_HRA_2_restoreDataFromMxArray ( ( void * ) & ( rtDW . gi0ldnstrz )
, rtdwData , 0 , 5 , sizeof ( rtDW . gi0ldnstrz ) ) ; } } mxArray *
mr_request_HRA_2_GetSimStateDisallowedBlocks ( ) { mxArray * data =
mxCreateCellMatrix ( 5 , 3 ) ; mwIndex subs [ 2 ] , offset ; { static const
char * blockType [ 5 ] = { "S-Function" , "Scope" , "Scope" , "Scope" ,
"S-Function" , } ; static const char * blockPath [ 5 ] = {
"request_HRA_2/powergui/EquivalentModel1/State-Space" , "request_HRA_2/Scope"
, "request_HRA_2/Scope1" , "request_HRA_2/Scope3" ,
"request_HRA_2/powergui/EquivalentModel1/State-Space" , } ; static const int
reason [ 5 ] = { 0 , 0 , 0 , 0 , 2 , } ; for ( subs [ 0 ] = 0 ; subs [ 0 ] <
5 ; ++ ( subs [ 0 ] ) ) { subs [ 1 ] = 0 ; offset = mxCalcSingleSubscript (
data , 2 , subs ) ; mxSetCell ( data , offset , mxCreateString ( blockType [
subs [ 0 ] ] ) ) ; subs [ 1 ] = 1 ; offset = mxCalcSingleSubscript ( data , 2
, subs ) ; mxSetCell ( data , offset , mxCreateString ( blockPath [ subs [ 0
] ] ) ) ; subs [ 1 ] = 2 ; offset = mxCalcSingleSubscript ( data , 2 , subs )
; mxSetCell ( data , offset , mxCreateDoubleScalar ( ( double ) reason [ subs
[ 0 ] ] ) ) ; } } return data ; } void MdlInitializeSizes ( void ) {
ssSetNumContStates ( rtS , 9 ) ; ssSetNumPeriodicContStates ( rtS , 0 ) ;
ssSetNumY ( rtS , 0 ) ; ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough ( rtS
, 0 ) ; ssSetNumSampleTimes ( rtS , 1 ) ; ssSetNumBlocks ( rtS , 72 ) ;
ssSetNumBlockIO ( rtS , 32 ) ; ssSetNumBlockParams ( rtS , 1090 ) ; } void
MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.0 ) ;
ssSetOffsetTime ( rtS , 0 , 0.0 ) ; } void raccel_set_checksum ( ) {
ssSetChecksumVal ( rtS , 0 , 3100114344U ) ; ssSetChecksumVal ( rtS , 1 ,
1106828568U ) ; ssSetChecksumVal ( rtS , 2 , 2429298084U ) ; ssSetChecksumVal
( rtS , 3 , 904046933U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) {
static struct _ssMdlInfo mdlInfo ; static struct _ssBlkInfo2 blkInfo2 ;
static struct _ssBlkInfoSLSize blkInfoSLSize ; ( void ) memset ( ( char * )
rtS , 0 , sizeof ( SimStruct ) ) ; ( void ) memset ( ( char * ) & mdlInfo , 0
, sizeof ( struct _ssMdlInfo ) ) ; ( void ) memset ( ( char * ) & blkInfo2 ,
0 , sizeof ( struct _ssBlkInfo2 ) ) ; ( void ) memset ( ( char * ) &
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
( B ) ) ; } { real_T * x = ( real_T * ) & rtX ; ssSetContStates ( rtS , x ) ;
( void ) memset ( ( void * ) x , 0 , sizeof ( X ) ) ; } { void * dwork = (
void * ) & rtDW ; ssSetRootDWork ( rtS , dwork ) ; ( void ) memset ( dwork ,
0 , sizeof ( DW ) ) ; } { static DataTypeTransInfo dtInfo ; ( void ) memset (
( char_T * ) & dtInfo , 0 , sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS
, & dtInfo ) ; dtInfo . numDataTypes = 23 ; dtInfo . dataTypeSizes = &
rtDataTypeSizes [ 0 ] ; dtInfo . dataTypeNames = & rtDataTypeNames [ 0 ] ;
dtInfo . BTransTable = & rtBTransTable ; dtInfo . PTransTable = &
rtPTransTable ; dtInfo . dataTypeInfoTable = rtDataTypeInfoTable ; }
request_HRA_2_InitializeDataMapInfo ( ) ; ssSetIsRapidAcceleratorActive ( rtS
, true ) ; ssSetRootSS ( rtS , rtS ) ; ssSetVersion ( rtS ,
SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS , "request_HRA_2" ) ;
ssSetPath ( rtS , "request_HRA_2" ) ; ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal
( rtS , 14400.0 ) ; { static RTWLogInfo rt_DataLoggingInfo ;
rt_DataLoggingInfo . loggingInterval = ( NULL ) ; ssSetRTWLogInfo ( rtS , &
rt_DataLoggingInfo ) ; } { { static int_T rt_LoggedStateWidths [ ] = { 5 , 1
, 1 , 1 , 1 } ; static int_T rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 ,
1 , 1 } ; static int_T rt_LoggedStateDimensions [ ] = { 5 , 1 , 1 , 1 , 1 } ;
static boolean_T rt_LoggedStateIsVarDims [ ] = { 0 , 0 , 0 , 0 , 0 } ; static
BuiltInDTypeId rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE } ; static int_T
rt_LoggedStateComplexSignals [ ] = { 0 , 0 , 0 , 0 , 0 } ; static
RTWPreprocessingFcnPtr rt_LoggingStatePreprocessingFcnPtrs [ ] = { ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) } ; static const char_T *
rt_LoggedStateLabels [ ] = { "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" } ; static const char_T * rt_LoggedStateBlockNames [ ] = {
"request_HRA_2/powergui/EquivalentModel1/State-Space" ,
"request_HRA_2/PID Controller1/Integrator/Continuous/Integrator" ,
"request_HRA_2/PID Controller1/Filter/Cont. Filter/Filter" ,
"request_HRA_2/PID Controller2/Integrator/Continuous/Integrator" ,
"request_HRA_2/PID Controller2/Filter/Cont. Filter/Filter" } ; static const
char_T * rt_LoggedStateNames [ ] = { "" , "" , "" , "" , "" } ; static
boolean_T rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 , 0 , 0 , 0 } ; static
RTWLogDataTypeConvert rt_RTWLogDataTypeConvert [ ] = { { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } } ; static int_T
rt_LoggedStateIdxList [ ] = { 0 , 1 , 2 , 3 , 4 } ; static RTWLogSignalInfo
rt_LoggedStateSignalInfo = { 5 , rt_LoggedStateWidths ,
rt_LoggedStateNumDimensions , rt_LoggedStateDimensions ,
rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , rt_LoggingStatePreprocessingFcnPtrs
, { rt_LoggedStateLabels } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert , rt_LoggedStateIdxList
} ; static void * rt_LoggedStateSignalPtrs [ 5 ] ; rtliSetLogXSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . dhld0jvdqi [ 0 ] ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . bzykdqvykq ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtX . mbavrff3lv ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtX . gspeclp1m1 ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtX . gi25nx43p4 ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) ,
"xFinal" ) ; rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ;
rtliSetLogYSignalInfo ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static
struct _ssStatesInfo2 statesInfo2 ; ssSetStatesInfo2 ( rtS , & statesInfo2 )
; } { static ssPeriodicStatesInfo periodicStatesInfo ;
ssSetPeriodicStatesInfo ( rtS , & periodicStatesInfo ) ; } { static
ssJacobianPerturbationBounds jacobianPerturbationBounds ;
ssSetJacobianPerturbationBounds ( rtS , & jacobianPerturbationBounds ) ; } {
static ssSolverInfo slvrInfo ; static struct _ssSFcnModelMethods3 mdlMethods3
; static struct _ssSFcnModelMethods2 mdlMethods2 ; static boolean_T
contStatesDisabled [ 9 ] ; static real_T absTol [ 9 ] = { 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 } ; static
uint8_T absTolControl [ 9 ] = { 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U }
; static real_T contStateJacPerturbBoundMinVec [ 9 ] ; static real_T
contStateJacPerturbBoundMaxVec [ 9 ] ; static uint8_T zcAttributes [ 9 ] = {
( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) } ; { int i ; for ( i = 0 ; i < 9 ; ++ i ) {
contStateJacPerturbBoundMinVec [ i ] = 0 ; contStateJacPerturbBoundMaxVec [ i
] = rtGetInf ( ) ; } } ssSetSolverRelTol ( rtS , 0.001 ) ; ssSetStepSize (
rtS , 0.0 ) ; ssSetMinStepSize ( rtS , 0.0 ) ; ssSetMaxNumMinSteps ( rtS , -
1 ) ; ssSetMinStepViolatedError ( rtS , 0 ) ; ssSetMaxStepSize ( rtS , 288.0
) ; ssSetSolverMaxOrder ( rtS , - 1 ) ; ssSetSolverRefineFactor ( rtS , 1 ) ;
ssSetOutputTimes ( rtS , ( NULL ) ) ; ssSetNumOutputTimes ( rtS , 0 ) ;
ssSetOutputTimesOnly ( rtS , 0 ) ; ssSetOutputTimesIndex ( rtS , 0 ) ;
ssSetZCCacheNeedsReset ( rtS , 0 ) ; ssSetDerivCacheNeedsReset ( rtS , 0 ) ;
ssSetNumNonContDerivSigInfos ( rtS , 0 ) ; ssSetNonContDerivSigInfos ( rtS ,
( NULL ) ) ; ssSetSolverInfo ( rtS , & slvrInfo ) ; ssSetSolverName ( rtS ,
"ode23tb" ) ; ssSetVariableStepSolver ( rtS , 1 ) ;
ssSetSolverConsistencyChecking ( rtS , 0 ) ; ssSetSolverAdaptiveZcDetection (
rtS , 1 ) ; ssSetSolverRobustResetMethod ( rtS , 0 ) ; ssSetAbsTolVector (
rtS , absTol ) ; ssSetAbsTolControlVector ( rtS , absTolControl ) ;
ssSetSolverAbsTol_Obsolete ( rtS , absTol ) ;
ssSetSolverAbsTolControl_Obsolete ( rtS , absTolControl ) ;
ssSetJacobianPerturbationBoundsMinVec ( rtS , contStateJacPerturbBoundMinVec
) ; ssSetJacobianPerturbationBoundsMaxVec ( rtS ,
contStateJacPerturbBoundMaxVec ) ; ssSetSolverStateProjection ( rtS , 1 ) ; (
void ) memset ( ( void * ) & mdlMethods2 , 0 , sizeof ( mdlMethods2 ) ) ;
ssSetModelMethods2 ( rtS , & mdlMethods2 ) ; ( void ) memset ( ( void * ) &
mdlMethods3 , 0 , sizeof ( mdlMethods3 ) ) ; ssSetModelMethods3 ( rtS , &
mdlMethods3 ) ; ssSetModelProjection ( rtS , MdlProjection ) ;
ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetModelDerivatives ( rtS ,
MdlDerivatives ) ; ssSetSolverZcSignalAttrib ( rtS , zcAttributes ) ;
ssSetSolverNumZcSignals ( rtS , 9 ) ; ssSetModelZeroCrossings ( rtS ,
MdlZeroCrossings ) ; ssSetSolverConsecutiveZCsStepRelTol ( rtS ,
2.8421709430404007E-13 ) ; ssSetSolverMaxConsecutiveZCs ( rtS , 1000 ) ;
ssSetSolverConsecutiveZCsError ( rtS , 2 ) ; ssSetSolverMaskedZcDiagnostic (
rtS , 1 ) ; ssSetSolverIgnoredZcDiagnostic ( rtS , 0 ) ;
ssSetSolverZcThreshold ( rtS , 0.001 ) ; ssSetSolverMaxConsecutiveMinStep (
rtS , 1 ) ; ssSetSolverShapePreserveControl ( rtS , 2 ) ; ssSetTNextTid ( rtS
, INT_MIN ) ; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS )
; ssSetNumNonsampledZCs ( rtS , 9 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ; }
ssSetChecksumVal ( rtS , 0 , 3100114344U ) ; ssSetChecksumVal ( rtS , 1 ,
1106828568U ) ; ssSetChecksumVal ( rtS , 2 , 2429298084U ) ; ssSetChecksumVal
( rtS , 3 , 904046933U ) ; { static const sysRanDType rtAlwaysEnabled =
SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo ; static const
sysRanDType * systemRan [ 1 ] ; gblRTWExtModeInfo = & rt_ExtModeInfo ;
ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo ) ;
rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; rteiSetModelMappingInfoPtr (
ssGetRTWExtModeInfo ( rtS ) , & ssGetModelMappingInfo ( rtS ) ) ;
rteiSetChecksumsPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetChecksums ( rtS ) )
; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetTPtr ( rtS ) ) ; }
slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_request_HRA_2_GetSimStateDisallowedBlocks ) ; slsaGetWorkFcnForSimTargetOP
( rtS , mr_request_HRA_2_GetDWork ) ; slsaSetWorkFcnForSimTargetOP ( rtS ,
mr_request_HRA_2_SetDWork ) ; rt_RapidReadMatFileAndUpdateParams ( rtS ) ; if
( ssGetErrorStatus ( rtS ) ) { return rtS ; } ssSetNumSFunctions ( rtS , 1 )
; { static SimStruct childSFunctions [ 1 ] ; static SimStruct *
childSFunctionPtrs [ 1 ] ; ( void ) memset ( ( void * ) & childSFunctions [ 0
] , 0 , sizeof ( childSFunctions ) ) ; ssSetSFunctions ( rtS , &
childSFunctionPtrs [ 0 ] ) ; ssSetSFunction ( rtS , 0 , & childSFunctions [ 0
] ) ; { SimStruct * rts = ssGetSFunction ( rtS , 0 ) ; static time_T
sfcnPeriod [ 1 ] ; static time_T sfcnOffset [ 1 ] ; static int_T sfcnTsMap [
1 ] ; ( void ) memset ( ( void * ) sfcnPeriod , 0 , sizeof ( time_T ) * 1 ) ;
( void ) memset ( ( void * ) sfcnOffset , 0 , sizeof ( time_T ) * 1 ) ;
ssSetSampleTimePtr ( rts , & sfcnPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rts ,
& sfcnOffset [ 0 ] ) ; ssSetSampleTimeTaskIDPtr ( rts , sfcnTsMap ) ; {
static struct _ssBlkInfo2 _blkInfo2 ; struct _ssBlkInfo2 * blkInfo2 = &
_blkInfo2 ; ssSetBlkInfo2Ptr ( rts , blkInfo2 ) ; } { static struct
_ssPortInfo2 _portInfo2 ; struct _ssPortInfo2 * portInfo2 = & _portInfo2 ;
_ssSetBlkInfo2PortInfo2Ptr ( rts , portInfo2 ) ; } ssSetMdlInfoPtr ( rts ,
ssGetMdlInfoPtr ( rtS ) ) ; { static struct _ssSFcnModelMethods2 methods2 ;
ssSetModelMethods2 ( rts , & methods2 ) ; } { static struct
_ssSFcnModelMethods3 methods3 ; ssSetModelMethods3 ( rts , & methods3 ) ; } {
static struct _ssSFcnModelMethods4 methods4 ; ssSetModelMethods4 ( rts , &
methods4 ) ; } { static struct _ssStatesInfo2 statesInfo2 ; static
ssPeriodicStatesInfo periodicStatesInfo ; static ssJacobianPerturbationBounds
jacPerturbationBounds ; ssSetStatesInfo2 ( rts , & statesInfo2 ) ;
ssSetPeriodicStatesInfo ( rts , & periodicStatesInfo ) ;
ssSetJacobianPerturbationBounds ( rts , & jacPerturbationBounds ) ;
ssSetAbsTolVector ( rts , ssGetAbsTolVector ( rtS ) + 0 ) ;
ssSetAbsTolControlVector ( rts , ssGetAbsTolControlVector ( rtS ) + 0 ) ; } {
_ssSetNumInputPorts ( rts , 2 ) ; static struct _ssPortInputs inputPortInfo [
2 ] ; ssSetPortInfoForInputs ( rts , & inputPortInfo [ 0 ] ) ; { static
struct _ssInPortUnit inputPortUnits [ 2 ] ; _ssSetPortInfo2ForInputUnits (
rts , & inputPortUnits [ 0 ] ) ; } ssSetInputPortUnit ( rts , 0 , 0 ) ;
ssSetInputPortUnit ( rts , 1 , 0 ) ; { static struct _ssInPortCoSimAttribute
inputPortCoSimAttribute [ 2 ] ; _ssSetPortInfo2ForInputCoSimAttribute ( rts ,
& inputPortCoSimAttribute [ 0 ] ) ; } ssSetInputPortIsContinuousQuantity (
rts , 0 , 0 ) ; ssSetInputPortIsContinuousQuantity ( rts , 1 , 0 ) ; { static
real_T const * sfcnUPtrs [ 2 ] ; sfcnUPtrs [ 0 ] = & rtB . d5rtwafbe0 ;
sfcnUPtrs [ 1 ] = & rtB . k0h3i5nv5a ; ssSetInputPortSignalPtrs ( rts , 0 , (
InputPtrsType ) & sfcnUPtrs [ 0 ] ) ; _ssSetInputPortNumDimensions ( rts , 0
, 1 ) ; ssSetInputPortWidthAsInt ( rts , 0 , 2 ) ; } { static real_T const *
sfcnUPtrs [ 3 ] ; sfcnUPtrs [ 0 ] = & rtB . l0niisejas ; sfcnUPtrs [ 1 ] = &
rtB . ch2i202eqg ; sfcnUPtrs [ 2 ] = & rtB . hd3y3zrd2a ;
ssSetInputPortSignalPtrs ( rts , 1 , ( InputPtrsType ) & sfcnUPtrs [ 0 ] ) ;
_ssSetInputPortNumDimensions ( rts , 1 , 1 ) ; ssSetInputPortWidthAsInt ( rts
, 1 , 3 ) ; } } { static struct _ssPortOutputs outputPortInfo [ 2 ] ;
ssSetPortInfoForOutputs ( rts , & outputPortInfo [ 0 ] ) ;
_ssSetNumOutputPorts ( rts , 2 ) ; { static struct _ssOutPortUnit
outputPortUnits [ 2 ] ; _ssSetPortInfo2ForOutputUnits ( rts , &
outputPortUnits [ 0 ] ) ; } ssSetOutputPortUnit ( rts , 0 , 0 ) ;
ssSetOutputPortUnit ( rts , 1 , 0 ) ; { static struct
_ssOutPortCoSimAttribute outputPortCoSimAttribute [ 2 ] ;
_ssSetPortInfo2ForOutputCoSimAttribute ( rts , & outputPortCoSimAttribute [ 0
] ) ; } ssSetOutputPortIsContinuousQuantity ( rts , 0 , 0 ) ;
ssSetOutputPortIsContinuousQuantity ( rts , 1 , 0 ) ; {
_ssSetOutputPortNumDimensions ( rts , 0 , 1 ) ; ssSetOutputPortWidthAsInt (
rts , 0 , 3 ) ; ssSetOutputPortSignal ( rts , 0 , ( ( real_T * ) rtB .
owzdk0illb ) ) ; } { _ssSetOutputPortNumDimensions ( rts , 1 , 1 ) ;
ssSetOutputPortWidthAsInt ( rts , 1 , 6 ) ; ssSetOutputPortSignal ( rts , 1 ,
( ( real_T * ) rtB . gamjmndv1b ) ) ; } } ssSetContStates ( rts , & rtX .
dhld0jvdqi [ 0 ] ) ; ssSetContStateDisabled ( rts , & ( ( XDis * )
ssGetContStateDisabled ( rtS ) ) -> dhld0jvdqi [ 0 ] ) ; { real_T * minVec =
& ( ( CXPtMin * ) ssGetJacobianPerturbationBoundsMinVec ( rtS ) ) ->
dhld0jvdqi [ 0 ] ; real_T * maxVec = & ( ( CXPtMax * )
ssGetJacobianPerturbationBoundsMaxVec ( rtS ) ) -> dhld0jvdqi [ 0 ] ;
ssSetJacobianPerturbationBoundsMinVec ( rts , minVec ) ;
ssSetJacobianPerturbationBoundsMaxVec ( rts , maxVec ) ; } ssSetModelName (
rts , "State-Space" ) ; ssSetPath ( rts ,
"request_HRA_2/powergui/EquivalentModel1/State-Space" ) ; if ( ssGetRTModel (
rtS ) == ( NULL ) ) { ssSetParentSS ( rts , rtS ) ; ssSetRootSS ( rts ,
ssGetRootSS ( rtS ) ) ; } else { ssSetRTModel ( rts , ssGetRTModel ( rtS ) )
; ssSetParentSS ( rts , ( NULL ) ) ; ssSetRootSS ( rts , rts ) ; }
ssSetVersion ( rts , SIMSTRUCT_VERSION_LEVEL2 ) ; { static mxArray *
sfcnParams [ 10 ] ; ssSetSFcnParamsCount ( rts , 10 ) ; ssSetSFcnParamsPtr (
rts , & sfcnParams [ 0 ] ) ; ssSetSFcnParam ( rts , 0 , ( mxArray * ) rtP .
StateSpace_P1_Size ) ; ssSetSFcnParam ( rts , 1 , ( mxArray * ) rtP .
StateSpace_P2_Size ) ; ssSetSFcnParam ( rts , 2 , ( mxArray * ) rtP .
StateSpace_P3_Size ) ; ssSetSFcnParam ( rts , 3 , ( mxArray * ) rtP .
StateSpace_P4_Size ) ; ssSetSFcnParam ( rts , 4 , ( mxArray * ) rtP .
StateSpace_P5_Size ) ; ssSetSFcnParam ( rts , 5 , ( mxArray * ) rtP .
StateSpace_P6_Size ) ; ssSetSFcnParam ( rts , 6 , ( mxArray * ) rtP .
StateSpace_P7_Size ) ; ssSetSFcnParam ( rts , 7 , ( mxArray * ) rtP .
StateSpace_P8_Size ) ; ssSetSFcnParam ( rts , 8 , ( mxArray * ) rtP .
StateSpace_P9_Size ) ; ssSetSFcnParam ( rts , 9 , ( mxArray * ) rtP .
StateSpace_P10_Size ) ; } ssSetRWork ( rts , ( real_T * ) & rtDW . cxpfuvgpez
[ 0 ] ) ; ssSetIWork ( rts , ( int_T * ) & rtDW . cix3io0m5t [ 0 ] ) ;
ssSetPWork ( rts , ( void * * ) & rtDW . nswo4x3pxj [ 0 ] ) ; { static struct
_ssDWorkRecord dWorkRecord [ 4 ] ; static struct _ssDWorkAuxRecord
dWorkAuxRecord [ 4 ] ; ssSetSFcnDWork ( rts , dWorkRecord ) ;
ssSetSFcnDWorkAux ( rts , dWorkAuxRecord ) ; ssSetNumDWorkAsInt ( rts , 4 ) ;
ssSetDWorkWidthAsInt ( rts , 0 , 4 ) ; ssSetDWorkDataType ( rts , 0 ,
SS_INTEGER ) ; ssSetDWorkComplexSignal ( rts , 0 , 0 ) ; ssSetDWork ( rts , 0
, & rtDW . ggcfliu0c2 [ 0 ] ) ; ssSetDWorkWidthAsInt ( rts , 1 , 2 ) ;
ssSetDWorkDataType ( rts , 1 , SS_DOUBLE ) ; ssSetDWorkComplexSignal ( rts ,
1 , 0 ) ; ssSetDWork ( rts , 1 , & rtDW . cxpfuvgpez [ 0 ] ) ;
ssSetDWorkWidthAsInt ( rts , 2 , 23 ) ; ssSetDWorkDataType ( rts , 2 ,
SS_INTEGER ) ; ssSetDWorkComplexSignal ( rts , 2 , 0 ) ; ssSetDWork ( rts , 2
, & rtDW . cix3io0m5t [ 0 ] ) ; ssSetDWorkWidthAsInt ( rts , 3 , 22 ) ;
ssSetDWorkDataType ( rts , 3 , SS_POINTER ) ; ssSetDWorkComplexSignal ( rts ,
3 , 0 ) ; ssSetDWork ( rts , 3 , & rtDW . nswo4x3pxj [ 0 ] ) ; }
ssSetModeVector ( rts , ( int_T * ) & rtDW . ggcfliu0c2 [ 0 ] ) ;
sfun_spid_contc ( rts ) ; sfcnInitializeSizes ( rts ) ;
sfcnInitializeSampleTimes ( rts ) ; ssSetSampleTime ( rts , 0 , 0.0 ) ;
ssSetOffsetTime ( rts , 0 , 0.0 ) ; sfcnTsMap [ 0 ] = 0 ;
ssSetNumNonsampledZCsAsInt ( rts , 4 ) ; _ssSetInputPortConnected ( rts , 0 ,
1 ) ; _ssSetInputPortConnected ( rts , 1 , 1 ) ; _ssSetOutputPortConnected (
rts , 0 , 1 ) ; _ssSetOutputPortConnected ( rts , 1 , 1 ) ;
_ssSetOutputPortBeingMerged ( rts , 0 , 0 ) ; _ssSetOutputPortBeingMerged (
rts , 1 , 0 ) ; ssSetInputPortBufferDstPort ( rts , 0 , - 1 ) ;
ssSetInputPortBufferDstPort ( rts , 1 , - 1 ) ; } } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 1 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID1 ( tid ) ; }
