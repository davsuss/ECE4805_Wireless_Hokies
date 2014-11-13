/* 
 * File:   ZigBee.h
 * Author: david
 *
 * Created on October 28, 2014, 9:31 AM
 */

#ifndef ZIGBEE_H
#define	ZIGBEE_H
struct ZigbeeMessage {
    UINT16 address;
    char * message;
};

void sendMessage(ZigbeeMessage x);

#endif	/* ZIGBEE_H */

