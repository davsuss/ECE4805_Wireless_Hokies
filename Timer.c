#include "Timer.h"

void initializeTimer0(UINT16 miliseconds) {

    OpenTimer0(TIMER_INT_ON & T0_16BIT & T0_SOURCE_INT & T0_PS_1_1);
    INTCON2bits.TMR0IP = 1;
    //Calculate the Value to load into the timer after roll over
    //TIMER0_PRELOAD = 0xFFFF - ((UINT16) ((sys_clock_speed_Hz / TIMER0_Prescale) / 1000) * miliseconds);
    

    //SetTimer0Preload(TIMER0_PRELOAD);
}

void SetTimer0Preload(UINT16 preload) {

    //Lower byte of value
    TMR0L = preload & 0x00FF;

    //Upper byte of value
    TMR0H = preload & 0xFF00;
}