#include <mega32.h>
#include <delay.h>

void main(void)
{
    int i, j;
    unsigned char x[] = {0X3F, 0X06, 0X5B, 0X4F, 0X66, 0X6D, 0X7D, 0X07, 0X7F, 0X6F};
    DDRA = 0XFF;
    DDRB = 0XFF;
    DDRC.0 = 0; // Set PC0 as input (for the button)

    while (1)
    {
        if (PINC.0 == 0) // Check if the button is pressed (assuming low active)
        {
            // Up counting sequence
            for (i = 0; i < 10; i++)
            {
                PORTA = x[i];
                for (j = 0; j < 10; j++)
                {
                    PORTB = x[j];
                    delay_ms(40);
                }
            }
            // Down counting sequence
            for (i = 9; i >= 0; i--)
            {
                PORTA = x[i];
                for (j = 9; j >= 0; j--)
                {
                    PORTB = x[j];
                    delay_ms(40); // You might want a delay here too for visibility
                }
            }

            // Optional: Add a small delay to avoid rapid triggering if the button bounces
            delay_ms(100);
        }
        // If the button is not pressed, the loop continues to check
    }
}