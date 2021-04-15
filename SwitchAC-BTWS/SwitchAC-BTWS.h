/*
 * SwitchAC-BTW.h
 *
 *  Created on: 5 kwi 2021
 *      Author: jant
 */

#ifndef SWITCHAC_BTWS_SWITCHAC_BTWS_H__
#define SWITCHAC_BTWS_SWITCHAC_BTWS_H__
#define VERSION "0.3"

#define POLISH
//#define LOCATION "Saloon"
// debug program
//#define DEBUG

#ifdef DEBUG
#define DEBUG_OUT Serial.print
#define DEBUG_OUTLN Serial.println
#else
#define DEBUG_OUT
#define DEBUG_OUTLN
#endif

//add WebPage button set switch
#define WEBPAGESWITCH
//set static IP ( no DHCP)
// set IP in file SwitcherAC-BTWS.ino (lines 43 - 45)
//#define IP_STATIC

//add manual button
#define BUTTON
//title you web page
#define HOSTNAME "SwitchAC"
//Thermometer
//#define THERMOMETER
//add WebPage WiFi scan
#define WEBPAGEWIFISCAN


#endif //SWITCHAC_BTWS_SWITCHAC_BTWS_H__
