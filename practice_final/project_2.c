#include <mega32.h>
#include <delay.h>

void main(void)
{
    // loop index
    int i;
    int j;
    // all A ports are outputs
    DDRA = 0xFF;
    // all A port led will be off
    PORTA = 0x00;

    while (1)
    {
        for (i = 0; i < 8; i++)
        {
            PORTA = (1 << i);
            delay_ms(100);
        }

        for (j = 7; j > 0; j--)
        {
            PORTA = (1 << j);
            delay_ms(100);
        }
    }
}