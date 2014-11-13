/* 
 * File:   Main.c
 * Author: david
 *
 * Created on October 27, 2014, 1:55 PM
 */


#include <xc.h>
#include <plib.h>
#include "Debug.h"
#include "Constants.h"
#include "Timer.h"
#include "Interrupts.h"
// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

// CONFIG1L
#pragma config WDTEN = ON       // Watchdog Timer Enable bit (WDT enabled)
#pragma config STVREN = ON      // Stack Overflow/Underflow Reset Enable bit (Reset on stack overflow/underflow enabled)
#pragma config XINST = OFF       // Extended Instruction Set Enable bit (Instruction set extension and Indexed Addressing mode enabled)

// CONFIG1H
#pragma config CP0 = OFF        // Code Protection bit (Program memory is not code-protected)

// CONFIG2L
#pragma config FOSC = ECPLL     // Oscillator Selection bits (EC oscillator, PLL enabled and under software control, CLKO function on OSC2)
#pragma config FOSC2 = ON       // Default/Reset System Clock Select bit (Clock selected by FOSC as system clock is enabled when OSCCON<1:0> = 00)
#pragma config FCMEN = ON       // Fail-Safe Clock Monitor Enable bit (Fail-Safe Clock Monitor enabled)
#pragma config IESO = ON        // Two-Speed Start-up (Internal/External Oscillator Switchover) Control bit (Two-Speed Start-up enabled)

// CONFIG2H
#pragma config WDTPS = 32768    // Watchdog Timer Postscale Select bits (1:32768)

// CONFIG3H
#pragma config CCP2MX = DEFAULT // CCP2 MUX bit (CCP2 is multiplexed with RC1)


void interrupt  InterruptHandlerHigh() {
 
    if(INTCONbits.TMR0IF == 1)
    {
     setPort(DEBUG_PIN_RB0,!LATBbits.LATB0);
     WriteTimer0(0);
     INTCONbits.TMR0IF = 0;
    }


}
int main() {

    
    initalizeDebugPorts();
    initalizeInterrupts();
    initializeTimer0(500);
    while(1)
    {}



}

