#include <mega32.h>
#include <delay.h>
#include <math.h>

void main(void)
{

    char i;

    DDRA = 0xFF;

    while (1)
    {
        /* code */
        for (i = 0; i < 8; i++)
        {
            PORTA = (pow(2, i) - 1);
            delay_ms(50);
        }

        for (i = 7; i >= 0; i--)
        {
            PORTA = (pow(2, i) - 1);
            delay_ms(50);
        }
    }
}