/*
 * main.c
 *
 *  Created on: Aug 23, 2019
 *      Author: Mariam
 */
#include"../std_types.h"
#include"../Bit_calc.h"
//#include<util/delay.h>
#include"DIO_interface.h"
#include"KPD_interface.h"

void main (void)
{
	/*while(1)
	{/*Buzzer on-off*/
		/*DIO_vidSetPinDirection(PORTA,PIN0,OUTPUT);
		DIO_vidSetPinValue(PORTA,PIN0,HIGH);
		_delay_ms(500);
		DIO_vidSetPinValue(PORTA,PIN0,LOW);
		_delay_ms(500);
	}*/
	/******************************************************/
	/*DC motor rotating
	 * if switch is not pressed
	 * if pressed then stop rotating*/
	/*DIO_vidSetPortDirection(PORTA,OUTPUT);
		DIO_vidSetPortDirection(PORTB,INPUT);
		DIO_vidSetPortValue(PORTA,0xFF);
		DIO_vidSetPortValue(PORTB,0xFF);
	while(1)
	{

		if(KPD_u8GetPressedKey()==1)
			{
				DIO_vidSetPinValue(PORTA,PIN3,LOW);
				_delay_ms(200);
				DIO_vidSetPinValue(PORTA,PIN3,HIGH);
				_delay_ms(50);

			}

	}*/

/*********************************************************************/

	/*DIO_vidSetPinDirection(PORTA,PIN0,INPUT);
	DIO_vidSetPinValue(PORTA,PIN0,HIGH);
	DIO_vidSetPinDirection(PORTA,PIN1,OUTPUT);
	while(1)
	{
		if(DIO_u8GetPinValue(PORTA,PIN0)==1)
		{
			DIO_vidSetPinValue(PORTA,PIN1,LOW);
		}
		else
		{
			DIO_vidSetPinValue(PORTA,PIN1,HIGH);
		}
	}*/


 /*****************************************************************/
DIO_vidSetPinDirection(PORTA,PIN0,OUTPUT);
DIO_vidSetPinDirection(PORTA,PIN1,OUTPUT);
	while(1)
	{
		DIO_vidSetPinValue(PORTA,PIN0,HIGH);
		DIO_vidSetPinValue(PORTA,PIN1,LOW);
		//_delay_ms(2000);
        for(int i=0; i<20000; i++);
		DIO_vidSetPinValue(PORTA,PIN0,LOW);
		DIO_vidSetPinValue(PORTA,PIN1,HIGH);
		//_delay_ms(2000);
        for(int i=0; i<20000; i++);
	}
/**************************************************************/
//dc motor stop rotating when pressing a switch
	/*	DIO_vidSetPortDirection(PORTA,OUTPUT);
	DIO_vidSetPortDirection(PORTB,INPUT);
	DIO_vidSetPortValue(PORTA,0xFF);
	DIO_vidSetPortValue(PORTB,0xFF);
while(1)
{

	if(KPD_u8GetPressedKey()==5)
		{
			DIO_vidSetPinValue(PORTA,PIN3,LOW);}
			else

			{DIO_vidSetPinValue(PORTA,PIN3,HIGH);


		}

}*/
}
