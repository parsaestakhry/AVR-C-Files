#include <mega32.h>
#include <delay.h>
#include <math.h>

void main(void)
{
    char i;
    char j;
    // output
    DDRA = 0xFF;
    // led offs
    PORTA = 0x00;

    while (1)
    {
        /* code */
        for (i = 0; i < 8; i++)
        {
            PORTA = (pow(2, i) - 1);
            delay_ms(100);
        }

        for (j = 7; j >= 0; j--)
        {
            PORTA = (pow(2, j) - 1);
            delay_ms(100);
        }
    }
}