/* -----------------------------------------------------------------------------
  Filename:    PduR_PBcfg.c
  Description: Toolversion: 18.00.01.01.30.06.49.00.00.00
               
               Serial Number: CBD1300649
               Customer Info: Nxtr Automotive Corporation
                              Package: MSR Fiat SLP4 - MSR Fiat SLP4
                              Micro: 0812BPGEQQ1
                              Compiler: TexasInstruments 4.9.5
               
               
               Generator Fwk   : GENy 
               Generator Module: PduR
               
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
    &&&~ MISRA / PCLINT JUSTIFICATION
 ----------------------------------------------------------------------------- */

/* PRQA S 0488 EOF */ /* MD_PduR_0488 */
/* PRQA S 0489 EOF */ /* MD_PduR_0489 */
/* PRQA  S 2006 EOF */ /* MD_MSR_14.7 */
/* PRQA S 3109 EOF */ /* MD_MSR_14.3 */
/* PRQA S 3453 EOF */ /* MD_MSR_19.7 */
/*lint -esym(750, PDUR_PBCFG_SOURCE) */ /* Identification macro of source file. Required due to Vector coding rules. */


#define PDUR_PBCFG_SOURCE
/* -----------------------------------------------------------------------------
    &&&~ Include Section
 ----------------------------------------------------------------------------- */

#include "PduR.h"


#define PDUR_START_SEC_PBCFG_ROOT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* -----------------------------------------------------------------------------
    &&&~ Post-Build PduR Configuration Structure
 ----------------------------------------------------------------------------- */

CONST(PduR_PBConfigType, PDUR_PBCFG) PduRGlobalConfig = 
{
  (PduIdType) 7 /* Current Number of Rx CanIf Lo RX PDUs 2 Upper Layers. */, 
  PduR_CfgTblRxCanIf2UpPduRGlobalConfig /* Pointer to the RX routing table of Rx CanIf Lo */, 
  (PduIdType) 7, 
  PduR_CfgTblTxCanIf2UpPduRGlobalConfig /* Pointer to the TX routing table of Tx CanIf Lo */, 
  (PduIdType) 2 /* Current Number of Rx CanTp Lo RX PDUs 2 Upper Layers. */, 
  PduR_CfgTblRxCanTp2UpPduRGlobalConfig /* Pointer to the RX routing table of Rx CanTp Lo */, 
  (PduIdType) 1, 
  PduR_CfgTblTxCanTp2UpPduRGlobalConfig /* Pointer to the TX routing table of Tx CanTp Lo */, 
  (PduIdType) 3, 
  PduR_CfgTblTxCom2LoPduRGlobalConfig /* Pointer to the RX routing table of Tx Com Up */, 
  (PduIdType) 1, 
  PduR_CfgTblTxDcm2LoPduRGlobalConfig /* Pointer to the RX routing table of Tx Dcm Up */
};



#define PDUR_STOP_SEC_PBCFG_ROOT
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


#define PDUR_START_SEC_PBCFG
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* -----------------------------------------------------------------------------
    &&&~ Routing Tables
 ----------------------------------------------------------------------------- */

CONST(PduR_Core_DestInfoType, PDUR_PBCFG) PduR_CfgTblRxCanIf2UpPduRGlobalConfig[7] = 
{
  { (PduR_Core_PortIdType) 0x05, (PduIdType) 2 } /* Source Id: 0 - I-PDU: CFG_DATA_CODE_REQUEST__CCAN - Target Port: Rx Com Up - Dest Pdu: Pdu_CFG_DATA_CODE_REQUEST__CCAN */, 
  { (PduR_Core_PortIdType) 0x05, (PduIdType) 5 } /* Source Id: 1 - I-PDU: STATUS_C_BCM2__CCAN - Target Port: Rx Com Up - Dest Pdu: Pdu_STATUS_C_BCM2__CCAN */, 
  { (PduR_Core_PortIdType) 0x05, (PduIdType) 6 } /* Source Id: 2 - I-PDU: STATUS_C_IPC__CCAN - Target Port: Rx Com Up - Dest Pdu: Pdu_STATUS_C_IPC__CCAN */, 
  { (PduR_Core_PortIdType) 0x05, (PduIdType) 4 } /* Source Id: 3 - I-PDU: MOT3__CCAN - Target Port: Rx Com Up - Dest Pdu: Pdu_MOT3__CCAN */, 
  { (PduR_Core_PortIdType) 0x05, (PduIdType) 0 } /* Source Id: 4 - I-PDU: BCM_COMMAND__CCAN - Target Port: Rx Com Up - Dest Pdu: Pdu_BCM_COMMAND__CCAN */, 
  { (PduR_Core_PortIdType) 0x05, (PduIdType) 1 } /* Source Id: 5 - I-PDU: BSM1__CCAN - Target Port: Rx Com Up - Dest Pdu: Pdu_BSM1__CCAN */, 
  { (PduR_Core_PortIdType) 0x05, (PduIdType) 3 } /* Source Id: 6 - I-PDU: MOT1__CCAN - Target Port: Rx Com Up - Dest Pdu: Pdu_MOT1__CCAN */
};
CONST(PduR_Core_DestInfoType, PDUR_PBCFG) PduR_CfgTblRxCanTp2UpPduRGlobalConfig[2] = 
{
  { (PduR_Core_PortIdType) 0x06, (PduIdType) 1 } /* Source Id: 0 - I-PDU: DIAGNOSTIC_REQUEST_FUNCTIONAL__CCAN - Target Port: Rx Dcm Up - Dest Pdu: DIAGNOSTIC_REQUEST_FUNCTIONAL__CCAN */, 
  { (PduR_Core_PortIdType) 0x06, (PduIdType) 0 } /* Source Id: 1 - I-PDU: DIAGNOSTIC_REQUEST_EPS__CCAN_EPS - Target Port: Rx Dcm Up - Dest Pdu: DIAGNOSTIC_REQUEST_EPS__CCAN_EPS */
};
CONST(PduR_Core_DestInfoType, PDUR_PBCFG) PduR_CfgTblTxCanIf2UpPduRGlobalConfig[7] = 
{
  { (PduR_Core_PortIdType) 0x0B, (PduIdType) 0 } /* Source Id: 0 - I-PDU: GliwaSlave__CCAN - Target Port: Invalid */, 
  { (PduR_Core_PortIdType) 0x05, (PduIdType) 0 } /* Source Id: 0 - I-PDU: PDC_INFO_EPS__CCAN - Target Port: Tx Com Up - Dest Pdu: Pdu_PDC_INFO_EPS__CCAN */, 
  { (PduR_Core_PortIdType) 0x0B, (PduIdType) 0 } /* Source Id: 1 - I-PDU: NM_EPS__CCAN - Target Port: Invalid */, 
  { (PduR_Core_PortIdType) 0x05, (PduIdType) 1 } /* Source Id: 1 - I-PDU: CFG_DATA_CODE_RSP_EPS__CCAN - Target Port: Tx Com Up - Dest Pdu: Pdu_CFG_DATA_CODE_RSP_EPS__CCAN */, 
  { (PduR_Core_PortIdType) 0x0B, (PduIdType) 0 } /* Source Id: 2 - I-PDU: XcpSlave__CCAN - Target Port: Invalid */, 
  { (PduR_Core_PortIdType) 0x0B, (PduIdType) 0 } /* Source Id: 2 - I-PDU: DIAGNOSTIC_RESPONSE_EPS_Tp__CCAN - Target Port: Invalid */, 
  { (PduR_Core_PortIdType) 0x05, (PduIdType) 2 } /* Source Id: 2 - I-PDU: GE__CCAN - Target Port: Tx Com Up - Dest Pdu: Pdu_GE__CCAN */
};
CONST(PduR_Core_DestInfoType, PDUR_PBCFG) PduR_CfgTblTxCanTp2UpPduRGlobalConfig[1] = 
{
  { (PduR_Core_PortIdType) 0x06, (PduIdType) 0 } /* Source Id: 0 - I-PDU: DIAGNOSTIC_RESPONSE_EPS__CCAN - Target Port: Tx Dcm Up - Dest Pdu: DIAGNOSTIC_RESPONSE_EPS__CCAN */
};
CONST(PduR_Core_DestInfoType, PDUR_PBCFG) PduR_CfgTblTxCom2LoPduRGlobalConfig[3] = 
{
  { (PduR_Core_PortIdType) 0x02, (PduIdType) 1 } /* Source Id: 0 - I-PDU: Pdu_PDC_INFO_EPS__CCAN - Target Port: Tx CanIf Lo - Dest Pdu: PDC_INFO_EPS__CCAN */, 
  { (PduR_Core_PortIdType) 0x02, (PduIdType) 3 } /* Source Id: 1 - I-PDU: Pdu_CFG_DATA_CODE_RSP_EPS__CCAN - Target Port: Tx CanIf Lo - Dest Pdu: CFG_DATA_CODE_RSP_EPS__CCAN */, 
  { (PduR_Core_PortIdType) 0x02, (PduIdType) 6 } /* Source Id: 2 - I-PDU: Pdu_GE__CCAN - Target Port: Tx CanIf Lo - Dest Pdu: GE__CCAN */
};
CONST(PduR_Core_DestInfoType, PDUR_PBCFG) PduR_CfgTblTxDcm2LoPduRGlobalConfig[1] = 
{
  { (PduR_Core_PortIdType) 0x04, (PduIdType) 0 } /* Source Id: 0 - I-PDU: DIAGNOSTIC_RESPONSE_EPS__CCAN - Target Port: Tx CanTp Lo - Dest Pdu: DIAGNOSTIC_RESPONSE_EPS__CCAN */
};




#define PDUR_STOP_SEC_PBCFG
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"



