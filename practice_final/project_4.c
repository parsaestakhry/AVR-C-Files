#include <mega32.h>
#include <delay.h>

void main(void)

{
    int i;
    unsigned char x[] = {0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8, 0x80, 0x90};
    DDRA = 0xFF;

    while (1)
    {
        /* code */
        for (i = 0; i < 10; i++)
        {
            PORTA = x[i];

            delay_ms(50);
        }

        for (i = 9; i >= 0; i--)
        {
            PORTA = x[i];
            delay_ms(50);
        }
    }
}