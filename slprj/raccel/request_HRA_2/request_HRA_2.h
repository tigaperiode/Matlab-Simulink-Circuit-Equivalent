#ifndef RTW_HEADER_request_HRA_2_h_
#define RTW_HEADER_request_HRA_2_h_
#ifndef request_HRA_2_COMMON_INCLUDES_
#define request_HRA_2_COMMON_INCLUDES_
#include <stdlib.h>
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
#endif
#include "request_HRA_2_types.h"
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME request_HRA_2
#define NSAMPLE_TIMES (2) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (32) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (9)   
#elif NCSTATES != 9
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
typedef struct { real_T owzdk0illb [ 3 ] ; real_T gamjmndv1b [ 6 ] ; real_T
deubnzhi3h ; real_T hwjl5eruit ; real_T gwmbzbwk2y ; real_T leb2el2gtw ;
real_T dfkp4apu00 ; real_T f10vyfjkrm ; real_T ksjtrywmna ; real_T elk3ilbmav
; real_T eqv1d3ta40 ; real_T oy4djh0koh ; real_T cmfb3ygnuq ; real_T
cd0le2fmoz ; real_T ixlfbkob4o ; real_T evppity5rx ; real_T cho0oeabrc ;
real_T dcdltlmiwd ; real_T h23hfdtqqg ; real_T d4jyoenzfl ; real_T ntaftztpcu
; real_T i4xkh0crvp ; real_T bfek3s2pqq ; real_T jkvhtq433b ; real_T
l0niisejas ; real_T p522ezegmf ; real_T jo0kmcxnjz ; real_T mygfhnueqq ;
real_T hd3y3zrd2a ; real_T k0h3i5nv5a ; real_T ch2i202eqg ; real_T d5rtwafbe0
; } B ; typedef struct { real_T cxpfuvgpez [ 2 ] ; void * nswo4x3pxj [ 22 ] ;
struct { void * LoggedData ; } fuwz2xgzrs ; struct { void * LoggedData ; }
cnglgzar0j ; struct { void * LoggedData ; } h1r4xyp5qa ; int_T cix3io0m5t [
23 ] ; int_T ggcfliu0c2 [ 4 ] ; int_T izb2kmgn0c ; int_T pto100u0i0 ; int_T
gi0ldnstrz ; } DW ; typedef struct { real_T dhld0jvdqi [ 5 ] ; real_T
bzykdqvykq ; real_T mbavrff3lv ; real_T gspeclp1m1 ; real_T gi25nx43p4 ; } X
; typedef struct { real_T dhld0jvdqi [ 5 ] ; real_T bzykdqvykq ; real_T
mbavrff3lv ; real_T gspeclp1m1 ; real_T gi25nx43p4 ; } XDot ; typedef struct
{ boolean_T dhld0jvdqi [ 5 ] ; boolean_T bzykdqvykq ; boolean_T mbavrff3lv ;
boolean_T gspeclp1m1 ; boolean_T gi25nx43p4 ; } XDis ; typedef struct {
real_T dhld0jvdqi [ 5 ] ; real_T bzykdqvykq ; real_T mbavrff3lv ; real_T
gspeclp1m1 ; real_T gi25nx43p4 ; } CStateAbsTol ; typedef struct { real_T
dhld0jvdqi [ 5 ] ; real_T bzykdqvykq ; real_T mbavrff3lv ; real_T gspeclp1m1
; real_T gi25nx43p4 ; } CXPtMin ; typedef struct { real_T dhld0jvdqi [ 5 ] ;
real_T bzykdqvykq ; real_T mbavrff3lv ; real_T gspeclp1m1 ; real_T gi25nx43p4
; } CXPtMax ; typedef struct { real_T atye4nzux1 [ 4 ] ; real_T d1ychsbzvg ;
real_T dbvomwymls ; real_T kmti0drgmf ; real_T hwgkis5b24 ; real_T gbmule2ud1
; } ZCV ; typedef struct { rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ;
struct P_ { real_T DCVoltageSource_Amplitude ; real_T PIDController1_D ;
real_T PIDController2_D ; real_T PIDController1_I ; real_T PIDController2_I ;
real_T PIDController1_InitialConditionForFilter ; real_T
PIDController2_InitialConditionForFilter ; real_T
PIDController1_InitialConditionForIntegrator ; real_T
PIDController2_InitialConditionForIntegrator ; real_T PIDController1_N ;
real_T PIDController2_N ; real_T PIDController1_P ; real_T PIDController2_P ;
real_T RepeatingSequence_rep_seq_y [ 2 ] ; real_T StateSpace_P1_Size [ 2 ] ;
real_T StateSpace_P1 [ 286 ] ; real_T StateSpace_P2_Size [ 2 ] ; real_T
StateSpace_P2 [ 4 ] ; real_T StateSpace_P3_Size [ 2 ] ; real_T StateSpace_P3
[ 5 ] ; real_T StateSpace_P4_Size [ 2 ] ; real_T StateSpace_P4 [ 728 ] ;
real_T StateSpace_P5_Size [ 2 ] ; real_T StateSpace_P5 [ 6 ] ; real_T
StateSpace_P6_Size [ 2 ] ; real_T StateSpace_P6 [ 3 ] ; real_T
StateSpace_P7_Size [ 2 ] ; real_T StateSpace_P7 [ 3 ] ; real_T
StateSpace_P8_Size [ 2 ] ; real_T StateSpace_P8 [ 3 ] ; real_T
StateSpace_P9_Size [ 2 ] ; real_T StateSpace_P9 ; real_T StateSpace_P10_Size
[ 2 ] ; real_T StateSpace_P10 ; real_T donotdeletethisgain_Gain ; real_T
donotdeletethisgain_Gain_jsdwtssimh ; real_T Saturation_UpperSat ; real_T
Saturation_LowerSat ; real_T Saturation1_UpperSat ; real_T
Saturation1_LowerSat ; real_T LookUpTable1_bp01Data [ 2 ] ; real_T
donotdeletethisgain_Gain_k14ykx3pkj ; real_T Iref_Value ; real_T gate_Value ;
real_T Constant_Value ; real_T Vref_Value ; real_T eee_Value ; real_T
gate_Value_graafvp4kv ; } ; extern const char * RT_MEMORY_ALLOCATION_ERROR ;
extern B rtB ; extern X rtX ; extern DW rtDW ; extern P rtP ; extern mxArray
* mr_request_HRA_2_GetDWork ( ) ; extern void mr_request_HRA_2_SetDWork (
const mxArray * ssDW ) ; extern mxArray *
mr_request_HRA_2_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * request_HRA_2_GetCAPIStaticMap ( void ) ;
extern SimStruct * const rtS ; extern const int_T gblNumToFiles ; extern
const int_T gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ; extern
rtInportTUtable * gblInportTUtables ; extern const char * gblInportFileName ;
extern const int_T gblNumRootInportBlks ; extern const int_T
gblNumModelInputs ; extern const int_T gblInportDataTypeIdx [ ] ; extern
const int_T gblInportDims [ ] ; extern const int_T gblInportComplex [ ] ;
extern const int_T gblInportInterpoFlag [ ] ; extern const int_T
gblInportContinuous [ ] ; extern const int_T gblParameterTuningTid ; extern
DataMapInfo * rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo *
rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid ) ; void
MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T tid ) ;
void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model (
ssExecutionInfo * executionInfo ) ;
#endif
