#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "request_HRA_2_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 17
#endif
#ifndef SS_INT64
#define SS_INT64 18
#endif
#else
#include "builtin_typeid_types.h"
#include "request_HRA_2.h"
#include "request_HRA_2_capi.h"
#include "request_HRA_2_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"request_HRA_2/Min" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 1 , 0
, TARGET_STRING ( "request_HRA_2/Saturation" ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 0 , 0 } , { 2 , 0 , TARGET_STRING ( "request_HRA_2/Saturation1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 3 , 0 , TARGET_STRING (
"request_HRA_2/Add1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 4 , 0
, TARGET_STRING ( "request_HRA_2/Add2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 ,
0 , 0 } , { 5 , 0 , TARGET_STRING ( "request_HRA_2/Add3" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 0 } , { 6 , 0 , TARGET_STRING (
"request_HRA_2/Current Measurement/do not delete this gain" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 0 } , { 7 , 0 , TARGET_STRING (
"request_HRA_2/Repeating Sequence/Sum" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 ,
0 , 0 } , { 8 , 0 , TARGET_STRING (
"request_HRA_2/Voltage Measurement/do not delete this gain" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 0 } , { 9 , 0 , TARGET_STRING (
"request_HRA_2/Voltage Measurement1/do not delete this gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 10 , 0 , TARGET_STRING (
"request_HRA_2/DC Voltage Source/Model/DC" ) , TARGET_STRING ( "" ) , 0 , 0 ,
0 , 0 , 1 } , { 11 , 0 , TARGET_STRING ( "request_HRA_2/Diode/Model/(gate)" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 12 , 0 , TARGET_STRING (
"request_HRA_2/Diode/Model/eee" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1
} , { 13 , 0 , TARGET_STRING (
"request_HRA_2/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING ( ""
) , 0 , 0 , 1 , 0 , 0 } , { 14 , 0 , TARGET_STRING (
"request_HRA_2/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING ( ""
) , 1 , 0 , 2 , 0 , 0 } , { 15 , 0 , TARGET_STRING (
"request_HRA_2/Mosfet/Diode/Model/(gate)" ) , TARGET_STRING ( "" ) , 0 , 0 ,
0 , 0 , 1 } , { 16 , 0 , TARGET_STRING (
"request_HRA_2/PID Controller1/D Gain/Internal Parameters/Derivative Gain" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 17 , 0 , TARGET_STRING (
"request_HRA_2/PID Controller1/Filter/Cont. Filter/Filter" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 0 } , { 18 , 0 , TARGET_STRING (
"request_HRA_2/PID Controller1/Filter/Cont. Filter/SumD" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 0 } , { 19 , 0 , TARGET_STRING (
"request_HRA_2/PID Controller1/I Gain/Internal Parameters/Integral Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 20 , 0 , TARGET_STRING (
"request_HRA_2/PID Controller1/Integrator/Continuous/Integrator" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 21 , 0 , TARGET_STRING (
"request_HRA_2/PID Controller1/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 22 , 0 , TARGET_STRING (
 "request_HRA_2/PID Controller1/Parallel P Gain/Internal Parameters/Proportional Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 23 , 0 , TARGET_STRING (
"request_HRA_2/PID Controller1/Sum/Sum_PID/Sum" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 0 } , { 24 , 0 , TARGET_STRING (
"request_HRA_2/PID Controller2/D Gain/Internal Parameters/Derivative Gain" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 25 , 0 , TARGET_STRING (
"request_HRA_2/PID Controller2/Filter/Cont. Filter/Filter" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 0 } , { 26 , 0 , TARGET_STRING (
"request_HRA_2/PID Controller2/Filter/Cont. Filter/SumD" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 0 } , { 27 , 0 , TARGET_STRING (
"request_HRA_2/PID Controller2/I Gain/Internal Parameters/Integral Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 28 , 0 , TARGET_STRING (
"request_HRA_2/PID Controller2/Integrator/Continuous/Integrator" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 29 , 0 , TARGET_STRING (
"request_HRA_2/PID Controller2/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 30 , 0 , TARGET_STRING (
 "request_HRA_2/PID Controller2/Parallel P Gain/Internal Parameters/Proportional Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 31 , 0 , TARGET_STRING (
"request_HRA_2/PID Controller2/Sum/Sum_PID/Sum" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ;
static const rtwCAPI_BlockParameters rtBlockParameters [ ] = { { 32 ,
TARGET_STRING ( "request_HRA_2/DC Voltage Source" ) , TARGET_STRING (
"Amplitude" ) , 0 , 0 , 0 } , { 33 , TARGET_STRING (
"request_HRA_2/PID Controller1" ) , TARGET_STRING ( "P" ) , 0 , 0 , 0 } , {
34 , TARGET_STRING ( "request_HRA_2/PID Controller1" ) , TARGET_STRING ( "I"
) , 0 , 0 , 0 } , { 35 , TARGET_STRING ( "request_HRA_2/PID Controller1" ) ,
TARGET_STRING ( "D" ) , 0 , 0 , 0 } , { 36 , TARGET_STRING (
"request_HRA_2/PID Controller1" ) , TARGET_STRING ( "N" ) , 0 , 0 , 0 } , {
37 , TARGET_STRING ( "request_HRA_2/PID Controller1" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 38 , TARGET_STRING (
"request_HRA_2/PID Controller1" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 39 , TARGET_STRING (
"request_HRA_2/PID Controller2" ) , TARGET_STRING ( "P" ) , 0 , 0 , 0 } , {
40 , TARGET_STRING ( "request_HRA_2/PID Controller2" ) , TARGET_STRING ( "I"
) , 0 , 0 , 0 } , { 41 , TARGET_STRING ( "request_HRA_2/PID Controller2" ) ,
TARGET_STRING ( "D" ) , 0 , 0 , 0 } , { 42 , TARGET_STRING (
"request_HRA_2/PID Controller2" ) , TARGET_STRING ( "N" ) , 0 , 0 , 0 } , {
43 , TARGET_STRING ( "request_HRA_2/PID Controller2" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 44 , TARGET_STRING (
"request_HRA_2/PID Controller2" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 45 , TARGET_STRING (
"request_HRA_2/Repeating Sequence" ) , TARGET_STRING ( "rep_seq_y" ) , 0 , 3
, 0 } , { 46 , TARGET_STRING ( "request_HRA_2/Iref" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 47 , TARGET_STRING ( "request_HRA_2/Vref" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 48 , TARGET_STRING (
"request_HRA_2/Saturation" ) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } ,
{ 49 , TARGET_STRING ( "request_HRA_2/Saturation" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 0 , 0 } , { 50 , TARGET_STRING (
"request_HRA_2/Saturation1" ) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 }
, { 51 , TARGET_STRING ( "request_HRA_2/Saturation1" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 0 , 0 } , { 52 , TARGET_STRING (
"request_HRA_2/Current Measurement/do not delete this gain" ) , TARGET_STRING
( "Gain" ) , 0 , 0 , 0 } , { 53 , TARGET_STRING (
"request_HRA_2/Repeating Sequence/Constant" ) , TARGET_STRING ( "Value" ) , 0
, 0 , 0 } , { 54 , TARGET_STRING (
"request_HRA_2/Repeating Sequence/Look-Up Table1" ) , TARGET_STRING (
"BreakpointsForDimension1" ) , 0 , 3 , 0 } , { 55 , TARGET_STRING (
"request_HRA_2/Voltage Measurement/do not delete this gain" ) , TARGET_STRING
( "Gain" ) , 0 , 0 , 0 } , { 56 , TARGET_STRING (
"request_HRA_2/Voltage Measurement1/do not delete this gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 57 , TARGET_STRING (
"request_HRA_2/Diode/Model/(gate)" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0
} , { 58 , TARGET_STRING ( "request_HRA_2/Diode/Model/eee" ) , TARGET_STRING
( "Value" ) , 0 , 0 , 0 } , { 59 , TARGET_STRING (
"request_HRA_2/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING (
"P1" ) , 0 , 4 , 0 } , { 60 , TARGET_STRING (
"request_HRA_2/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING (
"P2" ) , 0 , 5 , 0 } , { 61 , TARGET_STRING (
"request_HRA_2/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING (
"P3" ) , 0 , 6 , 0 } , { 62 , TARGET_STRING (
"request_HRA_2/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING (
"P4" ) , 0 , 7 , 0 } , { 63 , TARGET_STRING (
"request_HRA_2/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING (
"P5" ) , 0 , 8 , 0 } , { 64 , TARGET_STRING (
"request_HRA_2/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING (
"P6" ) , 0 , 9 , 0 } , { 65 , TARGET_STRING (
"request_HRA_2/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING (
"P7" ) , 0 , 1 , 0 } , { 66 , TARGET_STRING (
"request_HRA_2/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING (
"P8" ) , 0 , 9 , 0 } , { 67 , TARGET_STRING (
"request_HRA_2/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING (
"P9" ) , 0 , 0 , 0 } , { 68 , TARGET_STRING (
"request_HRA_2/powergui/EquivalentModel1/State-Space" ) , TARGET_STRING (
"P10" ) , 0 , 0 , 0 } , { 69 , TARGET_STRING (
"request_HRA_2/Mosfet/Diode/Model/(gate)" ) , TARGET_STRING ( "Value" ) , 0 ,
0 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 } } ; static int_T
rt_LoggedStateIdxList [ ] = { - 1 } ; static const rtwCAPI_Signals
rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ;
static const rtwCAPI_Signals rtRootOutputs [ ] = { { 0 , 0 , ( NULL ) , (
NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_ModelParameters
rtModelParameters [ ] = { { 0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . bfek3s2pqq , & rtB . cd0le2fmoz ,
& rtB . i4xkh0crvp , & rtB . gwmbzbwk2y , & rtB . leb2el2gtw , & rtB .
l0niisejas , & rtB . deubnzhi3h , & rtB . jkvhtq433b , & rtB . hwjl5eruit , &
rtB . mygfhnueqq , & rtB . d5rtwafbe0 , & rtB . ch2i202eqg , & rtB .
k0h3i5nv5a , & rtB . owzdk0illb [ 0 ] , & rtB . gamjmndv1b [ 0 ] , & rtB .
hd3y3zrd2a , & rtB . ksjtrywmna , & rtB . elk3ilbmav , & rtB . eqv1d3ta40 , &
rtB . p522ezegmf , & rtB . f10vyfjkrm , & rtB . oy4djh0koh , & rtB .
dfkp4apu00 , & rtB . cmfb3ygnuq , & rtB . cho0oeabrc , & rtB . dcdltlmiwd , &
rtB . h23hfdtqqg , & rtB . jo0kmcxnjz , & rtB . evppity5rx , & rtB .
d4jyoenzfl , & rtB . ixlfbkob4o , & rtB . ntaftztpcu , & rtP .
DCVoltageSource_Amplitude , & rtP . PIDController1_P , & rtP .
PIDController1_I , & rtP . PIDController1_D , & rtP . PIDController1_N , &
rtP . PIDController1_InitialConditionForIntegrator , & rtP .
PIDController1_InitialConditionForFilter , & rtP . PIDController2_P , & rtP .
PIDController2_I , & rtP . PIDController2_D , & rtP . PIDController2_N , &
rtP . PIDController2_InitialConditionForIntegrator , & rtP .
PIDController2_InitialConditionForFilter , & rtP .
RepeatingSequence_rep_seq_y [ 0 ] , & rtP . Iref_Value , & rtP . Vref_Value ,
& rtP . Saturation_UpperSat , & rtP . Saturation_LowerSat , & rtP .
Saturation1_UpperSat , & rtP . Saturation1_LowerSat , & rtP .
donotdeletethisgain_Gain , & rtP . Constant_Value , & rtP .
LookUpTable1_bp01Data [ 0 ] , & rtP . donotdeletethisgain_Gain_jsdwtssimh , &
rtP . donotdeletethisgain_Gain_k14ykx3pkj , & rtP . gate_Value_graafvp4kv , &
rtP . eee_Value , & rtP . StateSpace_P1 [ 0 ] , & rtP . StateSpace_P2 [ 0 ] ,
& rtP . StateSpace_P3 [ 0 ] , & rtP . StateSpace_P4 [ 0 ] , & rtP .
StateSpace_P5 [ 0 ] , & rtP . StateSpace_P6 [ 0 ] , & rtP . StateSpace_P7 [ 0
] , & rtP . StateSpace_P8 [ 0 ] , & rtP . StateSpace_P9 , & rtP .
StateSpace_P10 , & rtP . gate_Value , } ; static int32_T * rtVarDimsAddrMap [
] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } }
;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } , { rtwCAPI_VECTOR , 6 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 8 , 2 , 0 } , { rtwCAPI_VECTOR , 10 , 2 , 0 } , {
rtwCAPI_VECTOR , 12 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 14 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 16 , 2 , 0 } , { rtwCAPI_VECTOR , 18 , 2 , 0 } } ;
static const uint_T rtDimensionArray [ ] = { 1 , 1 , 3 , 1 , 6 , 1 , 1 , 2 ,
26 , 11 , 1 , 4 , 5 , 1 , 26 , 28 , 2 , 3 , 1 , 3 } ; static const real_T
rtcapiStoredFloats [ ] = { 0.0 } ; static const rtwCAPI_FixPtMap rtFixPtMap [
] = { { ( NULL ) , ( NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0
} , } ; static const rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const
void * ) & rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [
0 ] , ( int8_T ) 0 , ( uint8_T ) 0 } , { ( NULL ) , ( NULL ) , 1 , 0 } } ;
static rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 32 ,
rtRootInputs , 0 , rtRootOutputs , 0 } , { rtBlockParameters , 38 ,
rtModelParameters , 0 } , { ( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap
, rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float"
, { 3100114344U , 1106828568U , 2429298084U , 904046933U } , ( NULL ) , 0 , (
boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * request_HRA_2_GetCAPIStaticMap ( void ) {
return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void request_HRA_2_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( ( *
rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
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
void request_HRA_2_host_InitializeDataMapInfo (
request_HRA_2_host_DataMapInfo_T * dataMap , const char * path ) {
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
