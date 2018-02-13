/*
 * multi_example.c
 *
 * Created: 1/29/2018 4:06:34 PM
 * Author : venkim
 */ 

/*
 * blinky.c
 *
 * Created: 12/17/2013 11:52:46 PM
 *  Author: venkim
 */ 


#define F_CPU 800000UL

#include <avr/io.h>
#include <util/delay.h>

/*
int main(void){
	DDRC|= (1<<5); // set PC5 as output

	while(1){
		PORTC ^= (1<<5); // toggle the pin

	}
}
*/


// Lesson 2 on 
/*
int main (void)
{
	// set all pins of PORTB for output
	DDRD = 0xFF;

	while (1) {
		// set all pins of PORTB high 
		PORTD = 0xFF;
		_delay_ms(50);

		// set all pins of PORTB low 
		PORTD = 0x00;
		_delay_ms(50);
	}
	return 0;
}

*/
		
		/*Lesson 3 */
		
		int main (void)
		{
			// set PORTB for output
			DDRD = 0xFF;
			// set PORTD for input
			DDRB = 0xFB;
			PORTB |= 0x04;

			while (1) {
				if (PINB & 0x04)
				PORTD &= ~0x20;
				else
				PORTD |= 0x20;
			}
			return 0;
		}



