/*
    __flame_driver.h

-----------------------------------------------------------------------------

  This file is part of mikroSDK.
  
  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

/**
@file   __flame_driver.h
@brief    Flame Driver
@mainpage Flame Click
@{

@image html libstock_fb_view.jpg

@}

@defgroup   FLAME
@brief      Flame Click Driver
@{

| Global Library Prefix | **FLAME** |
|:---------------------:|:-----------------:|
| Version               | **1.0.0**    |
| Date                  | **Oct 2018.**      |
| Developer             | **Nenad Filipovic**     |

*/
/* -------------------------------------------------------------------------- */

#include "stdint.h"

#ifndef _FLAME_H_
#define _FLAME_H_

/** 
 * @macro T_FLAME_P
 * @brief Driver Abstract type 
 */
#define T_FLAME_P    const uint8_t*

/** @defgroup FLAME_COMPILE Compilation Config */              /** @{ */

//  #define   __FLAME_DRV_SPI__                            /**<     @macro __FLAME_DRV_SPI__  @brief SPI driver selector */
//  #define   __FLAME_DRV_I2C__                            /**<     @macro __FLAME_DRV_I2C__  @brief I2C driver selector */                                          
// #define   __FLAME_DRV_UART__                           /**<     @macro __FLAME_DRV_UART__ @brief UART driver selector */ 

                                                                       /** @} */
/** @defgroup FLAME_VAR Variables */                           /** @{ */



                                                                       /** @} */
/** @defgroup FLAME_TYPES Types */                             /** @{ */



                                                                       /** @} */
#ifdef __cplusplus
extern "C"{
#endif

/** @defgroup FLAME_INIT Driver Initialization */              /** @{ */

#ifdef   __FLAME_DRV_SPI__
void flame_spiDriverInit(T_FLAME_P gpioObj, T_FLAME_P spiObj);
#endif
#ifdef   __FLAME_DRV_I2C__
void flame_i2cDriverInit(T_FLAME_P gpioObj, T_FLAME_P i2cObj, uint8_t slave);
#endif
#ifdef   __FLAME_DRV_UART__
void flame_uartDriverInit(T_FLAME_P gpioObj, T_FLAME_P uartObj);
#endif

// GPIO Only Drivers - remove in other cases
void flame_gpioDriverInit(T_FLAME_P gpioObj);
                                                                       /** @} */
/** @defgroup FLAME_FUNC Driver Functions */                   /** @{ */



/**
 * @brief Check the flame status function
 *
 * @return
 * - 0 if no flame detected
 * - 1 if flame detected
 *
 * Function will return 1 if a flame is detected
 * and 0 if flame is not detected.
 */
uint8_t flame_checkStatus();

/**
 * @brief Get interrupt status
 *
 * @return
 * status reading from INT pin:
 * - 0 if not active
 * - 1 if active
 *
 * Functions for reads interrupt pin.
 */
uint8_t flame_getInterrupt();



                                                                       /** @} */
#ifdef __cplusplus
} // extern "C"
#endif
#endif

/**
    @example Click_Flame_STM.c
    @example Click_Flame_TIVA.c
    @example Click_Flame_CEC.c
    @example Click_Flame_KINETIS.c
    @example Click_Flame_MSP.c
    @example Click_Flame_PIC.c
    @example Click_Flame_PIC32.c
    @example Click_Flame_DSPIC.c
    @example Click_Flame_AVR.c
    @example Click_Flame_FT90x.c
    @example Click_Flame_STM.mbas
    @example Click_Flame_TIVA.mbas
    @example Click_Flame_CEC.mbas
    @example Click_Flame_KINETIS.mbas
    @example Click_Flame_MSP.mbas
    @example Click_Flame_PIC.mbas
    @example Click_Flame_PIC32.mbas
    @example Click_Flame_DSPIC.mbas
    @example Click_Flame_AVR.mbas
    @example Click_Flame_FT90x.mbas
    @example Click_Flame_STM.mpas
    @example Click_Flame_TIVA.mpas
    @example Click_Flame_CEC.mpas
    @example Click_Flame_KINETIS.mpas
    @example Click_Flame_MSP.mpas
    @example Click_Flame_PIC.mpas
    @example Click_Flame_PIC32.mpas
    @example Click_Flame_DSPIC.mpas
    @example Click_Flame_AVR.mpas
    @example Click_Flame_FT90x.mpas
*/                                                                     /** @} */
/* -------------------------------------------------------------------------- */
/*
  __flame_driver.h

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.

3. All advertising materials mentioning features or use of this software
   must display the following acknowledgement:
   This product includes software developed by the MikroElektonika.

4. Neither the name of the MikroElektonika nor the
   names of its contributors may be used to endorse or promote products
   derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY MIKROELEKTRONIKA ''AS IS'' AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL MIKROELEKTRONIKA BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

----------------------------------------------------------------------------- */