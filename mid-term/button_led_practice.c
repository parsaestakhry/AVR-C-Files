#include <mega32.h>
#include <delay.h>

void main(void)
{

    // the 0th pin is the output
    DDRA.0 = 1;
    // the 1st pin is the input
    DDRA.1 = 0;

    while (1)
    {
        if (PINA.1 == 0)
        {
            /* code */
            // turn on the LED
            PORTA.0 = 1;
        }
        else
        {
            // turn off the LED
            PORTA.0 = 0;
        }
    }
}