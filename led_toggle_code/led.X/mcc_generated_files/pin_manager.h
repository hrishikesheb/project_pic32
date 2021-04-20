/**
  System Interrupts Generated Driver File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the generated manager file for the MPLAB(c) Code Configurator device.  This manager
    configures the pins direction, initial state, analog setting.
    The peripheral pin select, PPS, configuration is also handled by this manager.

  @Description:
    This source file provides implementations for MPLAB(c) Code Configurator interrupts.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.85.0
        Device            :  PIC32MX470F512L
        Version           :  1.02
    The generated drivers are tested against the following:
        Compiler          :  XC32 1.42
        MPLAB             :  MPLAB X 3.55

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/

#ifndef _PIN_MANAGER_H
#define _PIN_MANAGER_H
/**
    Section: Includes
*/
#include <xc.h>
/**
    Section: Device Pin Macros
*/
/**
  @Summary
    Sets the GPIO pin, RF2, high using LATFbits.LATF2.

  @Description
    Sets the GPIO pin, RF2, high using LATFbits.LATF2.

  @Preconditions
    The RF2 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RF2 high (1)
    led_1_SetHigh();
    </code>

*/
#define led_1_SetHigh()          LATFbits.LATF2 = 1
/**
  @Summary
    Sets the GPIO pin, RF2, low using LATFbits.LATF2.

  @Description
    Sets the GPIO pin, RF2, low using LATFbits.LATF2.

  @Preconditions
    The RF2 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RF2 low (0)
    led_1_SetLow();
    </code>

*/
#define led_1_SetLow()           LATFbits.LATF2 = 0
/**
  @Summary
    Toggles the GPIO pin, RF2, using LATFbits.LATF2.

  @Description
    Toggles the GPIO pin, RF2, using LATFbits.LATF2.

  @Preconditions
    The RF2 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RF2
    led_1_Toggle();
    </code>

*/
#define led_1_Toggle()           LATFbits.LATF2 ^= 1
/**
  @Summary
    Reads the value of the GPIO pin, RF2.

  @Description
    Reads the value of the GPIO pin, RF2.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RF2
    postValue = led_1_GetValue();
    </code>

*/
#define led_1_GetValue()         PORTFbits.RF2
/**
  @Summary
    Configures the GPIO pin, RF2, as an input.

  @Description
    Configures the GPIO pin, RF2, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RF2 as an input
    led_1_SetDigitalInput();
    </code>

*/
#define led_1_SetDigitalInput()  TRISFbits.TRISF2 = 1
/**
  @Summary
    Configures the GPIO pin, RF2, as an output.

  @Description
    Configures the GPIO pin, RF2, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RF2 as an output
    led_1_SetDigitalOutput();
    </code>

*/
#define led_1_SetDigitalOutput() TRISFbits.TRISF2 = 0
/**
  @Summary
    Sets the GPIO pin, RF8, high using LATFbits.LATF8.

  @Description
    Sets the GPIO pin, RF8, high using LATFbits.LATF8.

  @Preconditions
    The RF8 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RF8 high (1)
    led_2_SetHigh();
    </code>

*/
#define led_2_SetHigh()          LATFbits.LATF8 = 1
/**
  @Summary
    Sets the GPIO pin, RF8, low using LATFbits.LATF8.

  @Description
    Sets the GPIO pin, RF8, low using LATFbits.LATF8.

  @Preconditions
    The RF8 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RF8 low (0)
    led_2_SetLow();
    </code>

*/
#define led_2_SetLow()           LATFbits.LATF8 = 0
/**
  @Summary
    Toggles the GPIO pin, RF8, using LATFbits.LATF8.

  @Description
    Toggles the GPIO pin, RF8, using LATFbits.LATF8.

  @Preconditions
    The RF8 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RF8
    led_2_Toggle();
    </code>

*/
#define led_2_Toggle()           LATFbits.LATF8 ^= 1
/**
  @Summary
    Reads the value of the GPIO pin, RF8.

  @Description
    Reads the value of the GPIO pin, RF8.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RF8
    postValue = led_2_GetValue();
    </code>

*/
#define led_2_GetValue()         PORTFbits.RF8
/**
  @Summary
    Configures the GPIO pin, RF8, as an input.

  @Description
    Configures the GPIO pin, RF8, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RF8 as an input
    led_2_SetDigitalInput();
    </code>

*/
#define led_2_SetDigitalInput()  TRISFbits.TRISF8 = 1
/**
  @Summary
    Configures the GPIO pin, RF8, as an output.

  @Description
    Configures the GPIO pin, RF8, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RF8 as an output
    led_2_SetDigitalOutput();
    </code>

*/
#define led_2_SetDigitalOutput() TRISFbits.TRISF8 = 0

/**
    Section: Function Prototypes
*/
/**
  @Summary
    Configures the pin settings of the PIC32MX470F512L
    The peripheral pin select, PPS, configuration is also handled by this manager.

  @Description
    This is the generated manager file for the MPLAB(c) Code Configurator device.  This manager
    configures the pins direction, initial state, analog setting.
    The peripheral pin select, PPS, configuration is also handled by this manager.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    void SYSTEM_Initialize(void)
    {
        // Other initializers are called from this function
        PIN_MANAGER_Initialize();
    }
    </code>

*/
void PIN_MANAGER_Initialize(void);

#endif
