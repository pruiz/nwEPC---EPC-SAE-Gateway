/*----------------------------------------------------------------------------*
 *                                                                            *
 *            M I N I M A L I S T I C     U L P     E N T I T Y               *
 *                                                                            *
 *                    Copyright (C) 2010 Amit Chawre.                         *
 *                                                                            *
 *----------------------------------------------------------------------------*/

/** 
 * @file NwMiniUlpEntity.h
 * @brief This file contains example of a minimalistic ULP entity.
*/

#include <stdio.h>
#include <assert.h>
#include "NwEvt.h"
#include "NwLog.h"

#ifndef __NW_MINI_ULP_H__ 
#define __NW_MINI_ULP_H__ 

typedef struct
{
  NwU8T                       peerIpStr[16];
  NwU32T                      restartCounter;
  NwGtpv2cStackHandleT        hGtpv2cStack;
} NwGtpv2cNodeUlpT;

#ifdef __cplusplus
extern "C" {
#endif

NwRcT
nwGtpv2cUlpInit(NwGtpv2cNodeUlpT* thiz, NwGtpv2cStackHandleT hGtpv2cStack, char* peerIpStr );

NwRcT
nwGtpv2cUlpDestroy(NwGtpv2cNodeUlpT* thiz);

NwRcT
nwGtpv2cUlpCreateSessionRequestToPeer(NwGtpv2cNodeUlpT* thiz);

NwRcT 
nwGtpv2cUlpProcessStackReqCallback (NwGtpv2cUlpHandleT hUlp, 
                       NwGtpv2cUlpApiT *pUlpApi);

#ifdef __cplusplus
}
#endif

#endif
