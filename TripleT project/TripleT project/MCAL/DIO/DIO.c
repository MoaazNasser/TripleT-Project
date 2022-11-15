/*
* DIO.c
*
* Created: 11/1/2022 10:29:16 PM
*  Author: Moaaz Nasser
*/

#include "DIO.h"

void    DIO_SetPinDir  (uint8_t port, uint8_t pin, uint8_t dir)
{
	switch(port)
	{
		case DIO_PORTA:
		(dir == OUTPUT)? (SET_BIT(DDRA, pin)):(CLR_BIT(DDRA, pin));
		break;
		
		case DIO_PORTB:
		(dir == OUTPUT)? (SET_BIT(DDRB, pin)):(CLR_BIT(DDRB, pin));
        break;
		
		case DIO_PORTC:
		(dir == OUTPUT)? (SET_BIT(DDRC, pin)):(CLR_BIT(DDRC, pin));
        break;
		
		case DIO_PORTD:
		(dir == OUTPUT)? (SET_BIT(DDRD, pin)):(CLR_BIT(DDRD, pin));
        break;
	}
}


void    DIO_SetPinVal  (uint8_t port, uint8_t pin, uint8_t val)
{
	switch(port)
	{
		case DIO_PORTA:
		(val == HIGH)? (SET_BIT(PORTA, pin)):(CLR_BIT(PORTA, pin));
		break;
		
		case DIO_PORTB:
		(val == HIGH)? (SET_BIT(PORTB, pin)):(CLR_BIT(PORTB, pin));
		break;
		
		case DIO_PORTC:
		(val == HIGH)? (SET_BIT(PORTC, pin)):(CLR_BIT(PORTC, pin));
		break;
		
		case DIO_PORTD:
		(val == HIGH)? (SET_BIT(PORTD, pin)):(CLR_BIT(PORTD, pin));
		break;
	}
}

uint8_t DIO_GetPinVal  (uint8_t port, uint8_t pin)
{
	switch(port)
	{
		case DIO_PORTA: return GET_BIT(PINA, pin);
		case DIO_PORTB: return GET_BIT(PINB, pin);
		case DIO_PORTC: return GET_BIT(PINC, pin);
		case DIO_PORTD: return GET_BIT(PIND, pin);
	}
}

void    DIO_TogPinVal  (uint8_t port, uint8_t pin)
{
	switch(port)
	{
		case DIO_PORTA: TOG_BIT(PORTA, pin);
		case DIO_PORTB: TOG_BIT(PORTB, pin);
		case DIO_PORTC: TOG_BIT(PORTC, pin);
		case DIO_PORTD: TOG_BIT(PORTD, pin);
	}
}