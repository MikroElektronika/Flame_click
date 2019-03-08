/*
Example for Flame Click

    Date          : Oct 2018.
    Author        : Nenad Filipovic

Test configuration FT90x :
    
    MCU                : FT900
    Dev. Board         : EasyFT90x v7 
    FT90x Compiler ver : v2.3.0.0

---

Description :

The application is composed of three sections :

- System Initialization - Initializes GPIO, set INT pin as input,
     set AN pin as input.
- Application Initialization - Initialization driver enable's - GPIO and start write log.
- Application Task - (code snippet) This is a example which demonstrates the use of Flame Click board.
     Detect the flame( fire ) near the PT334-6B silicon phototransistor sensor,
     turn on flame led on Click board and write log.
     Results are being sent to the Usart Terminal where you can track their changes.
     All data logs on usb uart when flame is detected.

Additional Functions :

- UART

*/

#include "Click_Flame_types.h"
#include "Click_Flame_config.h"


uint8_t flameState = 0;
uint8_t flameStateOld = 1;

void systemInit()
{
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_INT_PIN, _GPIO_INPUT );
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_AN_PIN, _GPIO_INPUT );

    mikrobus_logInit( _MIKROBUS2, 9600 );

    Delay_100ms();
}

void applicationInit()
{
    flame_gpioDriverInit( (T_FLAME_P)&_MIKROBUS1_GPIO );

    mikrobus_logWrite( "---------------", _LOG_LINE );
    mikrobus_logWrite( "  Flame Click  ", _LOG_LINE );
    mikrobus_logWrite( "---------------", _LOG_LINE );

    Delay_100ms();
}

void applicationTask()
{
    flameState = flame_checkStatus();

    if ( flameState == 1 && flameStateOld == 0 )
    {
        mikrobus_logWrite( "  ~  FLAME   ~", _LOG_LINE );
        mikrobus_logWrite( "", _LOG_LINE );
        flameStateOld = 1;
    }

    if ( flameState == 0 && flameStateOld == 1 )
    {
        mikrobus_logWrite( "   NO FLAME", _LOG_LINE );
        mikrobus_logWrite( "", _LOG_LINE );
        flameStateOld = 0;
    }
}

void main()
{
    systemInit();
    applicationInit();

    while (1)
    {
            applicationTask();
    }
}