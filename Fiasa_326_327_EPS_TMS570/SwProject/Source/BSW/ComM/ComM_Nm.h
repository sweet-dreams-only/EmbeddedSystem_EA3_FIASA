/* STARTSINGLE_OF_MULTIPLE */


/**********************************************************************************************************************
  COPYRIGHT
-----------------------------------------------------------------------------------------------------------------------
  Copyright (c) 2007-2014 by Vctr Informatik GmbH.                                                  All rights reserved.
 
                This software is copyright protected and proprietary to Vctr Informatik GmbH.
                Vctr Informatik GmbH grants to you only those rights as set out in the license conditions.
                All other rights remain with Vctr Informatik GmbH.
-----------------------------------------------------------------------------------------------------------------------
  FILE DESCRIPTION
-----------------------------------------------------------------------------------------------------------------------
         File:  ComM_Nm.H
    Component:  Communication Manager
       Module:  -
    Generator:  -

  Description:  Callback API of the communication manager
**********************************************************************************************************************/

/**********************************************************************************************************************
  AUTHOR IDENTITY
-----------------------------------------------------------------------------------------------------------------------
  Name                          Initials      Company
-----------------------------------------------------------------------------------------------------------------------
  Thomas Kuhl                   Pet          Vctr Informatik GmbH
  Daniel Hof                    Dhf          Vctr Informatik GmbH
  Michael Schligerski           Mih          Vctr Informatik GmbH
-----------------------------------------------------------------------------------------------------------------------
  REVISION HISTORY
-----------------------------------------------------------------------------------------------------------------------
  Version   Date        Author  Change Id     Description
-----------------------------------------------------------------------------------------------------------------------
  01.00.ffa  2005-10-12  Pet                   first implementation
  01.00.ffc 2005-12-22  Alb                   prepare ComM.c to built libary
  01.FF.01 2006-06-20   Pet                   update to autosar spec. V2
                                              add BusOff handling
                                              add DCM communication request handling
  01.FF.02 2006-07-26   Pet                   change Dcm Cbk API and add prototypes
  01.FF.03 2006-08-15   Pet                   add support for FlexRay 
  01.00.00 2006-12-04   Pet                   add EcuM run mode request/release
  01.01.00 2007-01-19   Pet                   adapt API for NM Asr R2.1
                                              add support for LIN
                                              change include files
  01.02.00 2007-03-14   Pet                   change EcuM Run Mode request mechanism
                                              correct defines of code double sections
  01.03.00 2007-03-29   Pet                   advance ComM to support NM variant called light
  01.04.00 2007-07-05   Pet                   support NM Asr Release 1.0
  01.05.00 2007-07-24   Pet                   ESCAN00021574: ECU transmits only NULL frames
  02.00.FF 2007-07-25   Pet                   Update for ASR 2.1
           2007-09-12   Pet                   replace ComM_ReturnType by Std_ReturnType
                                              change ComM configuration struct
  02.00.00 2007-09-18   Pet                   Change handling of NM variants NONE and LIGHT
  03.00.00 2007-09-13   Pet                   support FlexRay State Manager
  03.FF.00 2007-10-03   Pet                   support CAN State Manager
  04.00.00 2008-01-20   Pet                   change handling to support CanSM and LinSM
  04.01.00 2008-02-09   Pet     ESCAN00024821 Add Support for Bus wake up inhibition
                                ESCAN00024822 Add support for ComM Mode limitation
                                ESCAN00024823 Wrong ComM via function ComM_GetCurrentComMode
                                ESCAN00024824 network shutdown delay due to excecution on task level
                                ESCAN00024825 Ready sleep timer expires to early
  04.01.01 2008-02-29   Pet     ESCAN00024998: Missing prototype
  04.02.00 2008-02-29   Pet     ESCAN00025443: Add Compiler Apstraction and Memory mapping
                                ESCAN00025444: wrong Bus state manager mode indication function
  04.03.00 2008-03-25   Pet     ESCAN00025697: Add DEM error notification
  04.04.00 2008-04-03   Pet     ESCAN00025783: Add support for EcuM ASR3.0
  04.05.00 2008-04-11   Pet     ESCAN00026040: Compiler warning "Undefined macro 'ON'" occurs
                                ESCAN00026579: synchronous wake up via of CAN channles
                                ESCAN00026174: Link Time Checks
                                ESCAN00026706: Wrong communication mode via the API ComM_GetCurrentComMode
                                ESCAN00026858: Remove generated ComM Types
                                ESCAN00026865: Add additional critical sections
  04.06.00 2008-05-30   Dhf     ESCAN00027199: removed defines and added variable declaration
  04.07.00 2008-07-09   Pet     ESCAN00028339: ComM shall suport the shutdown out of every ComM state for FlexRay
  04.08.00 2008-08-04   Pet     ESCAN00029035: ComM_BusSM_ModeIndication wrong ComM mode Prameter 
                                ESCAN00028416: compiler waring in case of an defined but not used variable
                                ESCAN00027090: Support multiple user channel handling for ComM (one user N channels).
                                ESCAN00028423: Compile time optimization of DEM, DET Error Checks and Range Checks
                                ESCAN00029563: Compiler warning becaus of use C++ comments
                                ESCAN00029573: Variable ComM_InhibitCnt double defined
  04.09.00 2008-09-01   Pet     ESCAN00029998: PreCompile and Linktime Crc Check
                                ESCAN00030710: ComM does not wait for restart on FlexRay channels
                                ESCAN00030718: Move ComM_MainFunction from static code to generated source files
                                ESCAN00030719: Wrong DET error reported
                                ESCAN00030721: Add Ecu Passive Mode
                                ESCAN00030722: Optimization of source code size
  04.09.01 2008-11-05   Pet     ESCAN00031078: Compiler error: undeclared identifier
  04.10.00 2008-11-06   Pet     ESCAN00031338: ECU does not join after unsuccessful startup
                                ESCAN00031078: Compiler error: undeclared identifier
                                ESCAN00031953: Add ECU mode management support/User state change notification
                                ESCAN00030043: Ccl_AsrComM user state notification support
                                ESCAN00031333: Mode limitation to NO COMMUNICATION and Prevent Wakeup behavior does not work as expected
                                ESCAN00031902: LIN channel does not start communication
                                ESCAN00031906: Processing in function ComM_ResetInhibitCounter not aborted in case of un-initialized ComM
                                ESCAN00031943: added generator version check
                                ESCAN00031945: Compiler warning/error 'CanSM_SetEcuPassive' undefined
                                ESCAN00031946: Missing compiler abstraction
                                ESCAN00031920: Advance Misra compliance
  04.11.00 2009-02-16   Pet     ESCAN00033179: ECU switches to sleep in FULL_COMMUNICATION mode
                                ESCAN00032952: ComM does not start start up directly but waits on the BusSM during network start up
                                ESCAN00033554: Missing DCM Mode notification
                                ESCAN00033555: Missing ComM Mode notification
                                ESCAN00033471: Compiler Warning: variable "transitionStatus" is possibly uninitialized
                                ESCAN00033470: Compiler Warning: variable "calculatedComModeReq" is possibly uninitialized
                                ESCAN00033469: Compiler Warning: condition is always true
                                ESCAN00033566: Inhibition counter not incremented
  04.12.00 2009-03-16   Pet     ESCAN00034045: Compiler Warning
                                ESCAN00032473: Compiler warning
                                ESCAN00033353: Add support for ComMTMinFullComModeDuration in single channel OSEK NM configurations
                                ESCAN00034127: Remove ECU Passive Handling
                                ESCAN00031981: Resolve Misra violations
                                ESCAN00034182: Version number shall be bcd coded
  04.13.00 2009-07-07   Pet     ESCAN00036094: pre-processor checks for building the library
                                ESCAN00034726: Wrong ComM API return value if the ComM is not initialized
                                ESCAN00036368: Wrong parameter check
                                ESCAN00036399: change parameter list of internal ComM_DcmIndication
                                ESCAN00036409: Change ComM_BusType definition
  04.13.01 2009-11-27   Pet     ESCAN00039476: Storage of non volatile values not possible as required by NvRam-Manager
  04.14.00 2010-02-03   Pet     ESCAN00040730: ComM ASR 3.x extension for BAC2.1
  04.15.00 2010-04-06   Pet     ESCAN00040729: BETA version - no series production allowed
                                ESCAN00042605: undo changes for ESCAN00040730
  04.16.00 2010-08-04   Pet     ESCAN00040131: Support Bus Type Ethernet (Eth)
                                ESCAN00044524: ECU performs shutdown although communication stack is not in NO COMMUNICATION
                                ESCAN00044576: limited ECU communication capability because of wrong ComM prevent wake up state
                                ESCAN00044578: ComM initialization state not initialized within start up code
                                ESCAN00044579: Remove unnecessary pre-initialization inside ComM_InitMemory
  04.16.01 2010-08-04   Pet     ESCAN00047254: Channel is kept awake although no internal or external communication need
                                ESCAN00047570: Channel is kept awake although no internal or external communication need
  04.17.00 2010-12-10   Pet     ESCAN00047254: Channel is kept awake although no internal or external communication need
                                ESCAN00047570: Channel is kept awake although no internal or external communication need
                                ESCAN00046227: Adapt AUTOSAR version check
                                ESCAN00045648: Compiler warning: dead assignment to "calculatedComModeReq" eliminated
  04.17.01 2011-02.28   Pet     ESCAN00048960: Compiler/Linker warning/error 
  04.17.02 2011-05-11   Pet     ESCAN00049808: no changes here
  04.18.00 2011-05-23   Pet     ESCAN00051662: Remove the AUTOSAR Release Version Check
                                ESCAN00049808: Communication is always kept awake even if no internal or external communication needed
                                ESCAN00052478: Compiler Error:  "EcuM_ChannelHandleType" undeclared identifier
                                ESCAN00050281: Add Support for partial networking
  04.19.00 2011-08-19   Pet     ESCAN00050281: Add Support for partial networking
  04.20.00 2011-11-25   Pet     ESCAN00053619: Compiler error for ComMActiveIdentityMask (only Multiple Configuration)
                                ESCAN00053581: AR3-1698: Add MISRA justifications in source code for automatic generation of MISRA reports
                                ESCAN00055410: Communication is always kept awake even if no internal or external communication needed
                                ESCAN00055413: Multiple user mode notification for the same ComM mode
  04.20.01 2012-02-23   Mih     ESCAN00055412: no changes here
                                ESCAN00055542: no changes here
  04.21.00 2012-04-05   Mih     ESCAN00057826: no changes here
                                ESCAN00055590: no changes here
                                ESCAN00054786: no changes here
                                ESCAN00058158: no changes here
  04.21.01 2012-06-21   Mih     ESCAN00059391: no changes here
                                ESCAN00056974: no changes here
  04.22.00 2012-09-21   Mih     ESCAN00059454: no changes here
                                ESCAN00061402: no changes here
                                ESCAN00060976: no changes here
                                ESCAN00060977: no changes here
  04.23.00 2013-04-12   Mih     ESCAN00061242: no changes here
                                ESCAN00061901: no changes here
                                ESCAN00062631: no changes here
                                ESCAN00065332: no changes here
                                ESCAN00066116: no changes here
                                ESCAN00066498: no changes here
                                ESCAN00066776: no changes here
  04.23.01 2013-09-19   Mih     ESCAN00069051: no changes here
  04.24.00 2014-01-31   Mih     ESCAN00071992: no changes here
                                ESCAN00073286: no changes here
                                ESCAN00073296: no changes here
**********************************************************************************************************************/

#ifndef COMM_NM_H
#define COMM_NM_H

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/
#include "ComM_Types.h"

/**********************************************************************************************************************
  GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
#define COMM_NM_MAJOR_VERSION    4u
#define COMM_NM_MINOR_VERSION    24u
#define COMM_NM_PATCH_VERSION    0u

/**********************************************************************************************************************
  GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/


/**********************************************************************************************************************
  CALLBACK FUNCTIONS PROTOTYPES called by generic Nm
*********************************************************************************************************************/
#define COMM_START_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* Indication that some nodes in the network have entered the Network Mode. */
FUNC(void, COMM_CODE) ComM_Nm_NetworkStartIndication( CONST(NetworkHandleType, AUTOMATIC)  Channel );

/* Notification that the network management has entered Network Mode. */
FUNC(void, COMM_CODE) ComM_Nm_NetworkMode( CONST(NetworkHandleType, AUTOMATIC)  Channel );

/* Notification that the network management has entered Prepare Bus-Sleep Mode. */
FUNC(void, COMM_CODE) ComM_Nm_PrepareBusSleepMode( CONST(NetworkHandleType, AUTOMATIC)  Channel );

/* Notification that the network management has entered Bus-Sleep Mode. */
FUNC(void, COMM_CODE) ComM_Nm_BusSleepMode( CONST(NetworkHandleType, AUTOMATIC)  Channel );

/* otification that the CAN Generic NM state has changed. */
FUNC(void, COMM_CODE) ComM_Nm_RestartIndication( CONST(NetworkHandleType, AUTOMATIC)  Channel );

#define COMM_STOP_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

#endif  /* COMM_NM_H */

/**********************************************************************************************************************
  END OF FILE: ComM_Nm.h
**********************************************************************************************************************/
/* STOPSINGLE_OF_MULTIPLE */
