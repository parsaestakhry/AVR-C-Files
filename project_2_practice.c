#include <mega32.h>
#include <delay.h>

void main(void)
{

    // index
    char i;

    // all A ports are outputs
    DDRA = 0xFF;

    // turn off all the LEDs
    PORTA = 0x00;

    while (1)
    {
        for (i = 0; i < 8; i++)
        {

            PORTA = (1 << i);
            delay_ms(80);
        }

        for (i = 7; i > 0; i--)
        {
            PORTA = (1 << i);
            delay_ms(80);
        }
    }
}