#include <mega32.h>
#include <delay.h>

void main(void)
{
    unsigned char seg[] = {0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F};
    int units = 0, tens = 0;
    DDRA = 0xFF; // Tens digit
    DDRB = 0xFF; // Units digit
    DDRC.0 = 0;  // Button input

    PORTA = seg[tens];
    PORTB = seg[units];

    while (1)
    {
        if (PINC.0 == 0) // Button pressed (active low)
        {
            // Debounce: wait for button release
            delay_ms(20);
            if (PINC.0 == 0)
            {
                units++;
                if (units > 9)
                {
                    units = 0;
                    tens++;
                    if (tens > 9)
                        tens = 0;
                }
                PORTA = seg[tens];
                PORTB = seg[units];

                // Wait until button released
                while (PINC.0 == 0)
                    ;
                delay_ms(20); // Debounce
            }
        }
    }
}