/* -----------------------------------------------------------------------------
  Filename:    ComM_Lcfg.h
  Description: Toolversion: 18.00.01.01.30.06.49.00.00.00
               
               Serial Number: CBD1300649
               Customer Info: Nxtr Automotive Corporation
                              Package: MSR Fiat SLP4 - MSR Fiat SLP4
                              Micro: 0812BPGEQQ1
                              Compiler: TexasInstruments 4.9.5
               
               
               Generator Fwk   : GENy 
               Generator Module: ComM
               
               Configuration   : C:\SynergyProjects\Fiasa_326_327_EPS_TMS570-nzx5jd\Fiasa_326_327_EPS_TMS570\Tools\AsrProject\Config\ECUC\EPS.ecuc.vdsxml
               
               ECU: 
                       TargetSystem: Hw_Tms470/570Cpu (Dcan)
                       Compiler:     TexasInstruments
                       Derivates:    TMS570LS30316U
               
               Channel "CCAN":
                       Databasefile: 
                       Bussystem:    CAN
                       Manufacturer: Vector
                       Node:         CanStateManagerConfiguration

  Generated by , 2015-05-29  15:06:43
 ----------------------------------------------------------------------------- */
/* -----------------------------------------------------------------------------
  C O P Y R I G H T
 -------------------------------------------------------------------------------
  Copyright (c) 2001-2011 by Vctr Informatik GmbH. All rights reserved.
 
  This software is copyright protected and proprietary to Vctr Informatik 
  GmbH.
  
  Vctr Informatik GmbH grants to you only those rights as set out in the 
  license conditions.
  
  All other rights remain with Vctr Informatik GmbH.
 -------------------------------------------------------------------------------
 ----------------------------------------------------------------------------- */

#if !defined(COMM_LCFG_H)
#define COMM_LCFG_H

/* -----------------------------------------------------------------------------
    &&&~ INCLUDES
 ----------------------------------------------------------------------------- */

#include "ComM_Cfg.h"


/* -----------------------------------------------------------------------------
    &&&~ TYPES
 ----------------------------------------------------------------------------- */

typedef VAR(uint16, TYPEDEF) ComM_UserMaskType;
typedef struct ComM_InhibitionTypeTag
{
  ComM_InhibitionStatusType ComM_ECUGroupClassification;
  uint16 ComM_InhibitCnt;
  ComM_InhibitionStatusType ComM_InhibitionStatus[1];
} ComM_InhibitionType;


/* -----------------------------------------------------------------------------
    &&&~ USER HANDELS
 ----------------------------------------------------------------------------- */

#define ComMUser_CCAN    0u


/* -----------------------------------------------------------------------------
    &&&~ DEFINES
 ----------------------------------------------------------------------------- */

/* ComM channel handles */
#define COMM_CCAN      0u

/* ComM partial network handles */


/* -----------------------------------------------------------------------------
    &&&~ GLOBAL DATA
 ----------------------------------------------------------------------------- */

#define COMM_START_SEC_CONST_8BIT
 /* PRQA S 5087 1 */ /* MD_MSR_19.1 */ 
#include "MemMap.h"
 /* PRQA S 3684 1 */ /* MD_ComM_3684 */ 
extern CONST(NetworkHandleType, COMM_CONST)          ComM_ChannelStopIndex[];
extern CONST(NetworkHandleType, COMM_CONST)          ComM_Active_Channel;
extern CONST(uint8, COMM_CONST)                      ComM_User_ByteCount;
 /* PRQA S 3684 1 */ /* MD_ComM_3684 */ 
extern CONST(uint8, COMM_CONST)                      ComM_Nm_Type[];
 /* PRQA S 3684 1 */ /* MD_ComM_3684 */ 
extern CONST(uint8, COMM_CONST)                      ComM_InhibitionStatusInitValue[];
extern CONST(ComM_UserHandleType, COMM_CONST)        ComM_MaxNumberOfUsers;
extern CONST(boolean, COMM_CONST)                    ComM_SyncWakeUp;
 /* PRQA S 3684 1 */ /* MD_ComM_3684 */ 
extern CONST(uint8, COMM_CONST)                      ComM_UserByteMaskIndex[];
#define COMM_STOP_SEC_CONST_8BIT
 /* PRQA S 5087 1 */ /* MD_MSR_19.1 */ 
#include "MemMap.h"

#define COMM_START_SEC_CONST_UNSPECIFIED
 /* PRQA S 5087 1 */ /* MD_MSR_19.1 */ 
#include "MemMap.h"
 /* PRQA S 3684 1 */ /* MD_ComM_3684 */ 
extern CONST(ComM_BusType, COMM_CONST)               ComM_ChannelBusType[];
 /* PRQA S 3684 1 */ /* MD_ComM_3684 */ 
extern CONST(ComM_UserByteMaskType, COMM_CONST)      ComM_UserByteMask[];
extern CONST(ComM_InhibitionStatusType, COMM_CONST)  ComM_ECUGroupClassInit;
#define COMM_STOP_SEC_CONST_UNSPECIFIED
 /* PRQA S 5087 1 */ /* MD_MSR_19.1 */ 
#include "MemMap.h"

#define COMM_START_SEC_VAR_NOINIT_8BIT
 /* PRQA S 5087 1 */ /* MD_MSR_19.1 */ 
#include "MemMap.h"
 /* PRQA S 3684 1 */ /* MD_ComM_3684 */ 
extern VAR(uint8, COMM_VAR_NOINIT_8BIT)                            ComM_UserReqFullComArray[];
 /* PRQA S 3684 1 */ /* MD_ComM_3684 */ 
extern VAR(uint8, COMM_VAR_NOINIT_8BIT)                            ComM_BusSmState[];
 /* PRQA S 3684 1 */ /* MD_ComM_3684 */ 
extern VAR(uint8, COMM_VAR_NOINIT_8BIT)                            ComM_LastBusSmState[];
 /* PRQA S 3684 1 */ /* MD_ComM_3684 */ 
extern VAR(uint8, COMM_VAR_NOINIT_8BIT)                            ComM_FrShutdown[];
 /* PRQA S 3684 1 */ /* MD_ComM_3684 */ 
extern VAR(uint8, COMM_VAR_NOINIT_8BIT)                            ComM_StateChange[];
 /* PRQA S 3684 1 */ /* MD_ComM_3684 */ 
extern VAR(uint8, COMM_VAR_NOINIT_8BIT)                            ComM_LastStateChange[];
extern VAR(uint8, COMM_VAR_NOINIT_8BIT)                            ComM_LastModeIndicatedToDcm;
#define COMM_STOP_SEC_VAR_NOINIT_8BIT
 /* PRQA S 5087 1 */ /* MD_MSR_19.1 */ 
#include "MemMap.h"

#define COMM_START_SEC_VAR_NOINIT_16BIT
 /* PRQA S 5087 1 */ /* MD_MSR_19.1 */ 
#include "MemMap.h"
 /* PRQA S 3684 1 */ /* MD_ComM_3684 */ 
extern VAR(uint16, COMM_VAR_NOINIT_16BIT)                           ComM_MinFullComModeTime[];
 /* PRQA S 3684 1 */ /* MD_ComM_3684 */ 
extern VAR(uint16, COMM_VAR_NOINIT_16BIT)                           ComM_NmLightTimeout[];
#define COMM_STOP_SEC_VAR_NOINIT_16BIT
 /* PRQA S 5087 1 */ /* MD_MSR_19.1 */ 
#include "MemMap.h"

#define COMM_START_SEC_VAR_NOINIT_UNSPECIFIED
 /* PRQA S 5087 1 */ /* MD_MSR_19.1 */ 
#include "MemMap.h"
 /* PRQA S 3684 1 */ /* MD_ComM_3684 */ 
extern VAR(ComM_SubModeType, COMM_VAR_NOINIT_UNSPECIFIED)           ComM_ActiveComMode[];
 /* PRQA S 3684 1 */ /* MD_ComM_3684 */ 
extern VAR(ComM_PncModeType, COMM_VAR_NOINIT_UNSPECIFIED)           ComM_ActivePncComMode[];
 /* PRQA S 3684 1 */ /* MD_ComM_3684 */ 
extern VAR(ComM_SubModeType, COMM_VAR_NOINIT_UNSPECIFIED)           ComM_BusComModeReq[];
 /* PRQA S 3684 1 */ /* MD_ComM_3684 */ 
extern VAR(ComM_SubModeType, COMM_VAR_NOINIT_UNSPECIFIED)           ComM_BusComModeReqTmp[];
#define COMM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
 /* PRQA S 5087 1 */ /* MD_MSR_19.1 */ 
#include "MemMap.h"

#define COMM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
 /* PRQA S 5087 1 */ /* MD_MSR_19.1 */ 
#include "MemMap.h"
extern VAR(ComM_InhibitionType, COMM_APPL_VAR_NVRAM)                        ComM_Inhibition;
#define COMM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
 /* PRQA S 5087 1 */ /* MD_MSR_19.1 */ 
#include "MemMap.h"


#define COMM_START_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* -----------------------------------------------------------------------------
    &&&~ GLOBAL FUNCTION PROTOTYPES
 ----------------------------------------------------------------------------- */

extern FUNC(void, COMM_CODE) ComM_MainFunction_0(void); /* ComM Main function */
extern FUNC(Std_ReturnType, COMM_CODE) ComM_ServiceLimitChannelToNoComMode(ComM_NetworkHandleType Channel, boolean Status);
extern FUNC(Std_ReturnType, COMM_CODE) ComM_ServicePreventWakeUp(ComM_NetworkHandleType Channel, boolean Status);


/* -----------------------------------------------------------------------------
    &&&~ INTERNAL GENERATED FUNCTION PROTOTYPES
 ----------------------------------------------------------------------------- */

extern FUNC(void, COMM_CODE) ComM_NOCOM_NETREQ(NetworkHandleType Channel);
extern FUNC(void, COMM_CODE) ComM_NOCOM_READYS(NetworkHandleType Channel);
extern FUNC(void, COMM_CODE) ComM_SICOM(NetworkHandleType Channel);
extern FUNC(void, COMM_CODE) ComM_READYS_NETREQ(NetworkHandleType  Channel);/* transition ready to sleep to network requested */
extern FUNC(void, COMM_CODE) ComM_SICOM_NOCOM(NetworkHandleType  Channel);/* transition silent communication to no cummunication*/
extern FUNC(void, COMM_CODE) ComM_SICOM_NETREQ(NetworkHandleType  Channel);/* transition silent communiction to network requested */
extern FUNC(void, COMM_CODE) ComM_SICOM_READYS(NetworkHandleType Channel);
extern FUNC(void, COMM_CODE) ComM_NETREQ_READYS(NetworkHandleType  Channel);/* transition network requested to ready to sleep */
extern FUNC(void, COMM_CODE) ComM_NO_TRANS(NetworkHandleType  Channel);
extern FUNC(void, COMM_CODE) ComM_EnterModeNoCommunication(NetworkHandleType  Channel);
extern FUNC(void, COMM_CODE) ComM_StateChangeNotification(NetworkHandleType Channel);
extern FUNC(void, COMM_CODE) ComM_DcmIndication(void);
extern FUNC(void, COMM_CODE) ComM_DemReportError(NetworkHandleType  Channel);
extern FUNC(Std_ReturnType, COMM_CODE) ComM_LoadNonVolatileValues(void);
extern FUNC(void, COMM_CODE) ComM_StoreNonVolatileValues(void);
extern FUNC(void, COMM_CODE) ComM_GetCurrentBusSMMode(NetworkHandleType Channel, P2VAR(ComM_ModeType, AUTOMATIC, COMM_APPL_VAR) ComMode);


#define COMM_STOP_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


#endif /* COMM_LCFG_H */