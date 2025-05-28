#include <mega32.h>
#include <delay.h>

void main(void)
{

    // setting the 0th pin of the port A to be an output
    DDRA.0 = 1;

    while (1)
    {
        /* code */
        // turn on the LED
        PORTA.0 = 1;
        delay_ms(500);
        PORTA.0 = 0;
        delay_ms(500);
    }
}