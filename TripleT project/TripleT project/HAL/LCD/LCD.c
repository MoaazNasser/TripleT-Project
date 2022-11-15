/*
 * LCD.c
 *
 * Created: 11/15/2022 10:14:42 PM
 *  Author: Moaaz Nasser
 */ 
#include "LCD.h"

void LCD_INIT(void)
{
	DIO_SetPinDir(LCD_EN_PORT, LCD_EN_PIN, OUTPUT);
	DIO_SetPinDir(LCD_RW_PORT, LCD_RW_PIN, OUTPUT);
	DIO_SetPinDir(LCD_RS_PORT, LCD_RS_PIN, OUTPUT);
	
	_delay_ms(1000);
	
	LCD_WriteComm(0x38);   // 8-bit mode
	LCD_WriteComm(0x0C);   // Display ON, cursor OFF
	LCD_WriteComm(0x01);   // Clear
	LCD_WriteComm(0x02);   // Return Home
	LCD_WriteComm(0x06);   // Write from left to right
}

void LCD_WriteChar(uint8_t character)
{
	DIO_SetPinVal(LCD_RS_PORT, LCD_RS_PIN, HIGH);
	LCD_DATA_REG = character;
	DIO_SetPinVal(LCD_EN_PORT, LCD_EN_PIN, HIGH);
    _delay_ms(1);
	DIO_SetPinVal(LCD_EN_PORT, LCD_EN_PIN, LOW);
	_delay_ms(5);
}

void LCD_WriteNum (uint8_t number);
void LCD_WriteStr (const uint8_t *p);

void LCD_WriteComm(uint8_t comm)
{
	DIO_SetPinVal(LCD_RS_PORT,LCD_RS_PIN,LOW);
	LCD_DATA_REG = comm;
	DIO_SetPinVal(LCD_EN_PORT,LCD_EN_PIN,HIGH);
	_delay_ms(1);
	DIO_SetPinVal(LCD_EN_PORT,LCD_EN_PIN,LOW);
	_delay_ms(5);
}
void LCD_CLR(void);
