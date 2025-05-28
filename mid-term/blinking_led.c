#include <avr/io.h>
#include <util/delay.h>

#define F_CPU 16000000UL // Make sure to define your clock frequency if you use _delay_ms()

int main(void)
{
	DDRA |= (1 << PA0); // Set PA0 as output

	while (1)
	{
		PORTA |= (1 << PA0); // Turn ON the LED (set PA0 high)
		_delay_ms(500);

		PORTA &= ~(1 << PA0); // Turn OFF the LED (set PA0 low)
		_delay_ms(500);
	}
}
