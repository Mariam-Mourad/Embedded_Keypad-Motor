/*
 * KPD_prog.c
 *
 *  Created on: Aug 30, 2019
 *      Author: Mariam
 */
#include"std_types.h"
#include"Bit_calc.h"
//#include<util/delay.h>
#include"DIO_interface.h"
#include"KPD_interface.h"



u8 Arr [3][3]={{1,2,3},{4,5,6},{7,8,9}};

u8 KPD_u8GetPressedKey(void)
{
	u8 Local_u8NB=0;
	u8 Local_u8IteratorCol;
	u8 Local_u8IteratorRow;

	for(Local_u8IteratorCol=0;Local_u8IteratorCol<3;Local_u8IteratorCol++)
	{//3'alta hena eny kont 3amla PIN0<<Local_u8IteratorCol
		DIO_vidSetPinValue(PORTA,Local_u8IteratorCol,LOW);
		for(Local_u8IteratorRow=0;Local_u8IteratorRow<3;Local_u8IteratorRow++)

		{
			if(DIO_u8GetPinValue(PORTB,Local_u8IteratorRow)==0)//pressed

			{
				Local_u8NB=Arr[Local_u8IteratorCol][Local_u8IteratorRow];
				//_delay_ms(10);
			}
			else
			{

			}

		}
		DIO_vidSetPortValue(PORTA,0xFF);
	}
	return Local_u8NB;
}
