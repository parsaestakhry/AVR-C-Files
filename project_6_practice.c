#include <mega32.h>
#include <delay.h>

void main(void)
{

    // seven segment counts
    unsigned char x[] = {0X3F, 0X06, 0X5B, 0X4F, 0X66, 0X6D, 0X7D, 0X07, 0X7F, 0X6F};

    // for loop index counter
    int i;
    int j;

    // data direction is all output in port A and B
    DDRA = 0xFF;
    DDRB = 0xFF;

    // keep the code running baby
    while (1)
    {
        for (i = 0; i < 10; i++)
        {
            PORTA = x[i];

            delay_ms(40);

            for (j = 0; j < 10; j++)
            {
                PORTB = x[j];
                delay_ms(40);
            }
        }

        for (i = 9; i >= 0; i--)
        {
            PORTA = x[j];

            for (j = 9; j >= 0; j--)
            {
                PORTB = x[j];
                delay_ms(40);
            }
        }
    }
}