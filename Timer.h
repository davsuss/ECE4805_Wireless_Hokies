/* 
 * File:   Timer.h
 * Author: david
 *
 * Created on October 28, 2014, 12:37 PM
 */
#include <plib.h>
#include "Constants.h"
#ifndef TIMER_H
#define	TIMER_H

#define TIMER0_Prescale 16
UINT16 TIMER0_PRELOAD = 0;
void initializeTimer0(UINT16 miliseconds);
void SetTimer0Preload(UINT16 preload);
void handleTIMER0Interrupt();

#endif	/* TIMER_H */

