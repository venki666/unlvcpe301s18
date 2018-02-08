/*
 * log_example.c
 *
 * Created: 1/29/2018 4:50:39 PM
 * Author : venkim
 */ 

#include <avr/io.h>


int main(void)
{
	DDRB = 0x00;
	DDRD = 0xFF;
	PORTD = 0x00;
	OCR0A = 0x20;
	TCCR0A = (1<<COM0A0 | 1<<WGM01 | 1<<WGM00);
	TCCR0B |= (1<<CS00);
	while(1)
	{
		if(PINB & 0x01)
		TCCR0B |= (1<<WGM02);
		else
		TCCR0B &= ~(1<<WGM02);
	}
}

