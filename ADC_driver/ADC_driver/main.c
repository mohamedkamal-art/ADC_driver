/*
 * ADC_driver.c
 *
 * Created: 7/14/2020 1:21:44 AM
 * Author : mohammed
 */ 

//#include <avr/io.h>
#include "LCD.h"
#include "Temp_Sensor.h"
#define F_CPU  16000000
#include <util/delay.h>


int main(void)
{
    uint16 Temp = 0;
	
	LCD_Init();
	Temp_Sensor_Init();
    while (1) 
    {
		Temp_Sensor_GetValue(&Temp);
		
		LCD_Clear();
		
		LCD_WriteInterger(Temp);
		
		_delay_ms(500);
    }
}

