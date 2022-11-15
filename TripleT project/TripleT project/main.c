/*
 * main.c
 *
 * Created: 11/1/2022 9:49:31 PM
 *  Author: Moaaz Nasser
 */ 

#define F_CPU 16000000UL
#include "util/delay.h"

#include "LCD.h"
#include "DIO.h"

int main(void)
{
    LCD_INIT();
	
	while(1)
	{
	  LCD_WriteChar('a');
	}
	
}