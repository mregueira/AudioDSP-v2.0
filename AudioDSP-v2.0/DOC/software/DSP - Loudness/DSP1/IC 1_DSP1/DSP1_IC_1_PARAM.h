/*
 * File:           C:\Users\marce\OneDrive\Desktop\GitHub Repos\AudioDSP-v2.0\AudioDSP-v2.0\DOC\software\DSP-Loudness\DSP1\IC 1_DSP1\DSP1_IC_1_PARAM.h
 *
 * Created:        Thursday, August 24, 2023 8:05:03 PM
 * Description:    DSP1:IC 1 parameter RAM definitions.
 *
 * This software is distributed in the hope that it will be useful,
 * but is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
 * CONDITIONS OF ANY KIND, without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * This software may only be used to program products purchased from
 * Analog Devices for incorporation by you into audio products that
 * are intended for resale to audio product end users. This software
 * may not be distributed whole or in any part to third parties.
 *
 * Copyright ©2023 Analog Devices, Inc. All rights reserved.
 */
#ifndef __DSP1_IC_1_PARAM_H__
#define __DSP1_IC_1_PARAM_H__


/* Module DC-LED - DC Input Entry*/
#define MOD_DC_LED_COUNT                               1
#define MOD_DC_LED_DEVICE                              "IC1"
#define MOD_DC_LED_DCINPALG7_ADDR                      0
#define MOD_DC_LED_DCINPALG7_FIXPT                     0x00800000
#define MOD_DC_LED_DCINPALG7_VALUE                     SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1)
#define MOD_DC_LED_DCINPALG7_TYPE                      SIGMASTUDIOTYPE_FIXPOINT

#endif
