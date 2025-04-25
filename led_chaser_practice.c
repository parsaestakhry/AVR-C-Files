#include <mega32.h>
#include <delay.h>

void main(void)
{

    // defining the index for the loop
    char i;

    // all the A ports are now outputs
    DDRA = 0xFF;

    // all the LEDs should be off
    PORTA = 0x00;

    while (1)
    {
        for (i = 0; i < 7; i++)
        {
            PORTA = (1 << i);
            delay_ms(100);
        }

        for (i = 6; i > 0; i--)
        {
            PORTA = (1 << i);
            delay_ms(100);
        }
    }
}