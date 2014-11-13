#include "Interrupts.h"
#include "Debug.h"
void initalizeInterrupts() {

    //Enable Priority Interrupts
    RCONbits.IPEN = 1;
    
    //Enable High
    INTCONbits.GIEH = 1;
    //Enable Low
    INTCONbits.GIEL = 1;
    

}

//void interrupt  InterruptHandlerHigh() {

//    if(INTCONbits.INT0IF)
//    {
//        setPort(DEBUG_PIN_RB0,1);
//    }


//}
 
void interrupt low_priority InterruptHandlerLow() {
    if(INTCONbits.INT0IF)
    {
        setPort(DEBUG_PIN_RB0,1);
    }
}