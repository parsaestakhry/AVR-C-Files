#include <mega32.h>
#include <delay.h>

void main(void)
{
    // seven segment codes for common anode (0-9)
    unsigned char x[] = {0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8, 0x80, 0x90};
    int i, j;

    DDRA = 0xFF; // PORTA as output
    DDRB = 0xFF; // PORTB as output

    while (1)
    {
        // Count up from 00 to 99
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 10; j++)
            {
                PORTA = x[i]; // Tens digit
                PORTB = x[j]; // Units digit
                delay_ms(40);
            }
        }

        // Count down from 99 to 00
        for (i = 9; i >= 0; i--)
        {
            for (j = 9; j >= 0; j--)
            {
                PORTA = x[i]; // Tens digit
                PORTB = x[j]; // Units digit
                delay_ms(40);
            }
        }
    }
}