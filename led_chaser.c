#include <delay.h>
#include <mega32.h>

void main(void)
{

    char i;
    // set all the bits in port A to 1, make all the ports in A to be an output
    DDRA = 0xFF;
    // turn off all the LEDs
    PORTA = 0x00;
    while (1)
    {
        /* code */
        // loop from bit 0 to bit 7
        for (i = 0; i < 8; i++)
        {
            // shifts 8 times, basically turning all the LEDs one by one from right to left
            PORTA = (1 << i);
            delay_ms(200);
        }

        for (i = 6; i > 0; i--)
        {
            // skipping 0 and 7, we don't want blinking twice
            PORTA = (1 << i);
            delay_ms(200);
        }
    }
}