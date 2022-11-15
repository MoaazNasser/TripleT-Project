/*
 * LCD.h
 *
 * Created: 11/15/2022 10:14:31 PM
 *  Author: Moaaz Nasser
 */ 


#ifndef LCD_H_
#define LCD_H_

#define F_CPU 16000000UL
#include "util/delay.h"

#include "LCD_Cfg.h"
#include "STD_TYPES.h"
#include "DIO.h"

void LCD_INIT(void);
void LCD_WriteChar(uint8_t character);
void LCD_WriteNum (uint8_t number);
void LCD_WriteStr (const uint8_t *p);
void LCD_WriteComm(uint8_t command);
void LCD_CLR(void);

#endif /* LCD_H_ */