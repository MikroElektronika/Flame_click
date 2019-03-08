![MikroE](http://www.mikroe.com/img/designs/beta/logo_small.png)

---

# Flame Click

---

- **CIC Prefix**  : FLAME
- **Author**      : Nenad Filipovic
- **Verison**     : 1.0.0
- **Date**        : Oct 2018.

---

### Software Support

We provide a library for the Flame Click on our [LibStock](https://libstock.mikroe.com/projects/view/1228/flame-click-example) 
page, as well as a demo application (example), developed using MikroElektronika 
[compilers](http://shop.mikroe.com/compilers). The demo can run on all the main 
MikroElektronika [development boards](http://shop.mikroe.com/development-boards).

**Library Description**

The library covers all the necessary functions to control Flame Click board.
Flame click communicates with the sensor target board through the AN line
and turn on flame LED on board when detect the flame( fire ) near  phototransistor sensor. 


Key functions :

- ``` uint8_t flame_checkStatus() ``` - Check the flame status function
- ``` uint8_t flame_getInterrupt() ``` - Get interrupt status


**Examples Description**

The application is composed of three sections :

- System Initialization - Initializes GPIO, set INT pin as input,
     set AN pin as input.
- Application Initialization - Initialization driver enable's - GPIO and start write log.
- Application Task - (code snippet) This is a example which demonstrates the use of Flame Click board.
     Detect the flame( fire ) near the PT334-6B silicon phototransistor sensor,
     turn on flame led on Click board and write log.
     Results are being sent to the Usart Terminal where you can track their changes.
     All data logs on usb uart when flame is detected.


```.c

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

```



The full application code, and ready to use projects can be found on our 
[LibStock](https://libstock.mikroe.com/projects/view/1228/flame-click-example) page.

Other mikroE Libraries used in the example:

- UART

**Additional notes and informations**

Depending on the development board you are using, you may need 
[USB UART click](http://shop.mikroe.com/usb-uart-click), 
[USB UART 2 Click](http://shop.mikroe.com/usb-uart-2-click) or 
[RS232 Click](http://shop.mikroe.com/rs232-click) to connect to your PC, for 
development systems with no UART to USB interface available on the board. The 
terminal available in all Mikroelektronika 
[compilers](http://shop.mikroe.com/compilers), or any other terminal application 
of your choice, can be used to read the message.

---
---
