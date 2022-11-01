/*
 * DIO.h
 *
 * Created: 11/1/2022 10:29:05 PM
 *  Author: Moaaz Nasser
 */ 


#ifndef DIO_H_
#define DIO_H_

void    DIO_SetPinDir  (uint8_t port, uint8_t pin, uint8_t mode);  //reaction -> DDR
void    DIO_SetPinVal  (uint8_t port, uint8_t pin, uint8_t Val);   //reaction -> PORT
uint8_t DIO_GetPinVal  (uint8_t port, uint8_t pin);                //reaction -> PIN
void    DIO_TogPinVal  (uint8_t port, uint8_t pin);                //reaction -> PORT

#endif /* DIO_H_ */