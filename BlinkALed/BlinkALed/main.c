/*
 * BlinkALed.c
 *
 * Created: 04.12.2018 13:35:13
 * Author : itarch-user

 *Input Port PIND 0x29 Value 43/47
 */ 

#define F_CPU 16000000L
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    DDRB = 0x02;

	DDRD = 0x00;
	PORTD = 0x0C;
    while (1) 
    {
		if ((PIND & 0x04)==0)
		{
			PORTB = 0x02;
			_delay_ms(1000);
			PORTB = 0x00;
			_delay_ms(1000);
		}
		else
		{
			PORTB = 0x02;
			_delay_ms(1000);
			PORTB = 0x00;
			_delay_ms(1000);
		}
    }
}

