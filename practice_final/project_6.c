#include <mega32.h>
#include <delay.h>

void main(void)
{
    int i, j;
    unsigned char x[] = {0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8, 0x80, 0x90};
    DDRA = 0xFF; // PORTA as output
    DDRB = 0xFF; // PORTB as output
    DDRD.0 = 0;  // PD0 as input

    while (1)
    {
        if (PIND.0 == 0) // If button pressed (active low)
        {
            // Debounce: wait for button release
            delay_ms(20);
            if (PIND.0 == 0)
            {
                // Count up from 00 to 99 while button is held
                for (i = 0; i < 10; i++)
                {
                    for (j = 0; j < 10; j++)
                    {
                        PORTA = x[i];
                        PORTB = x[j];
                        delay_ms(100);   // Add delay so counting is visible
                        if (PIND.0 != 0) // Stop counting if button released
                            break;
                    }
                    if (PIND.0 != 0)
                        break;
                }
                // Wait for button release to avoid repeated counting
                while (PIND.0 == 0)
                    ;
                delay_ms(20);
            }
        }
    }
}