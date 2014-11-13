#include "Debug.h"



//TRISB - Sets Direction
//PORTB - In Value
//LATB - Out value

/***
 *setPort(BOOL logicalValue,debugPort port)
 *
 *
 ***/
void initalizeDebugPorts() {
    PORTB = 0x00;
    TRISB = 0x00;
    LATB = 0x00;
    TRISBbits.RB0 = 0x00;
    TRISBbits.RB1 = 0x00;

}
/***
 *setPort(BOOL logicalValue,debugPort port)
 *
 *
 ***/
void setPort(PORTS port,BOOL test) {
    switch(port)
    {
        case DEBUG_PIN_RB0:
        {
            LATBbits.LATB0 = test;
        }
        case DEBUG_PIN_RB1:
        {
            LATBbits.LATB1 = test;
        }

    }
}
/***
 *togglePort(debugPort port)
 *
 *
 ***/
void togglePort(PORTS port)  {

    switch(port)
    {
        case DEBUG_PIN_RB0:
        {
            LATBbits.LATB0 = PORTBbits.RB0 ^ 0x01;
        }
        case DEBUG_PIN_RB1:
        {
            LATBbits.LATB1 = 0;
        }

    }


}

/***
 *void initalizeDebugPorts()
 *
 ***/


