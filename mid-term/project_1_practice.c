#include <mega32.h>
#include <delay.h>

void main(void)
{

    // pin 0 of the port A is the output
    DDRA.0 = 1;

    while (1)
    {
        /* code */
        // turn on the LED
        PORTA.0 = 1;
        delay_ms(50);
        // turn off the LED
        PORTA.0 = 0;
        delay_ms(50);
    }
}