/* -----------------------------------------------------------------------------
  Filename:    CanTp_Lcfg.c
  Description: Toolversion: 18.00.01.01.30.06.49.00.00.00
               
               Serial Number: CBD1300649
               Customer Info: Nxtr Automotive Corporation
                              Package: MSR Fiat SLP4 - MSR Fiat SLP4
                              Micro: 0812BPGEQQ1
                              Compiler: TexasInstruments 4.9.5
               
               
               Generator Fwk   : GENy 
               Generator Module: CanTp
               
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

/* -----------------------------------------------------------------------------
    &&&~ Include files
 ----------------------------------------------------------------------------- */

/* START of Checksum exclude for
  - Tp_AsrTpCanLinktimeCRC */
#include "Dem.h"
#include "CanTp_Lcfg.h"
/* END of Checksum exclude for
  - Tp_AsrTpCanLinktimeCRC */


/* -----------------------------------------------------------------------------
    &&&~ Data definitions
 ----------------------------------------------------------------------------- */

#define CANTP_START_SEC_VAR_INIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* START of Checksum include for
  - Tp_AsrTpCanLinktimeCRC */
/* Administration data in RAM */
VAR(vCanTp_AdminDataType, CANTP_VAR_INIT) vCanTp_AdminData = 
{
  0 /* vCanTp_StatusType CanTp_InitState */
};
/* END of Checksum include for
  - Tp_AsrTpCanLinktimeCRC */

#define CANTP_STOP_SEC_VAR_INIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


#define CANTP_START_SEC_VAR_NOINIT_8BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* START of Checksum include for
  - Tp_AsrTpCanLinktimeCRC */
/* Buffer to receive CanTp-frames */
VAR(uint8, CANTP_VAR_NOINIT) vCanTp_rxBuf[CANTP_NUM_RX_CHANNELS][CANTP_MAX_FRAME_LENGTH];
/* Buffer to store fragments when Tx-buffer is provided in slices */
VAR(uint8, CANTP_VAR_NOINIT) vCanTp_txBuf[CANTP_NUM_TX_CHANNELS][CANTP_MAX_FRAME_LENGTH];

/* END of Checksum include for
  - Tp_AsrTpCanLinktimeCRC */

#define CANTP_STOP_SEC_VAR_NOINIT_8BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


#define CANTP_START_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* START of Checksum include for
  - Tp_AsrTpCanLinktimeCRC */
/* Administration data in RAM */
/* Channel-, connection- and CanIfTxPdu-administration data */
VAR(vCanTp_RxStateType, CANTP_VAR_NOINIT) vCanTp_RxState[CANTP_NUM_RX_CHANNELS];
VAR(vCanTp_TxStateType, CANTP_VAR_NOINIT) vCanTp_TxState[CANTP_NUM_TX_CHANNELS];
/* END of Checksum include for
  - Tp_AsrTpCanLinktimeCRC */

#define CANTP_STOP_SEC_VAR_NOINIT_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"




#if (CANTP_CRC_CHECK == STD_ON)
#define CANTP_START_SEC_CONST_32BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* START of Checksum include for
  - Tp_AsrTpCanLinktimeCRC */
CONST(uint32, CANTP_CONST) CanTp_LinktimeCRC = (uint32) 0xA7636EBCu;
/* END of Checksum include for
  - Tp_AsrTpCanLinktimeCRC */

#define CANTP_STOP_SEC_CONST_32BIT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


#endif

#define CANTP_START_SEC_CONST_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* -----------------------------------------------------------------------------
    &&&~ Production Error Detection
 ----------------------------------------------------------------------------- */

/* START of Checksum include for
  - Tp_AsrTpCanLinktimeCRC */
CONST(Dem_EventIdType, CANTP_CONST) CanTp_E_Com = CANTP_E_COMM;
/* END of Checksum include for
  - Tp_AsrTpCanLinktimeCRC */


#define CANTP_STOP_SEC_CONST_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"




