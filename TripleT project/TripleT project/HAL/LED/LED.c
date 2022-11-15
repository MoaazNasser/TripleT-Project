/*
* LED.c
*
* Created: 11/1/2022 10:13:31 PM
*  Author: Moaaz Nasser
*/

#include "LED.h"

void LED_INIT(void)
{
	DIO_SetPinDir(LED_PORT, LED_PIN, OUTPUT);
}

void LED_DISP(uint8_t LED_MODE)
{
	DIO_SetPinVal(LED_PORT, LED_PIN, LED_MODE);
}