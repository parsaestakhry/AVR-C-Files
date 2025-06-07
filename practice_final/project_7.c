#include <mega32.h>
#include <delay.h>

void main(void)
{
    int i;
    // a is output
    DDRA = 0xFF;
    PORTA = 0x00;

    while (1)
    {

        for (i = 0; i < 8; i += 2)
        {
            delay_ms(10);
            PORTA = (1 << i) | (1 << (i + 1));
            delay_ms(10);
        }
    }
}