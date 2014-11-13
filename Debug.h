/* 
 * File:   Debug.h
 * Author: david
 *
 * Created on October 27, 2014, 2:00 PM
 */
#include <plib.h>
#ifndef DEBUG_H
#define	DEBUG_H

typedef enum{ DEBUG_PIN_RB0,DEBUG_PIN_RB1 }PORTS;
void initalizeDebugPorts();
void setPort(PORTS port, BOOL test);
void togglePort(PORTS port);

#endif	/* DEBUG_H */

