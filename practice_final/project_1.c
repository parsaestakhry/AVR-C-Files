#include <mega32.h>
#include <delay.h>

void main(void)
{
    // output
    DDRA.0 = 1;
    // turning off the led
    PORTA.0 = 0;

    while (1)
    {
        /* code */
        // turning on the led
        PORTA.0 = 1;
        delay_ms(100);
        // turning off the led
        PORTA.0 = 0;
        delay_ms(100);
    }
}