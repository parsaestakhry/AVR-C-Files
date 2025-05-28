#include <mega32.h>
#include <delay.h>

void main(void)
{

    // index counter
    int i;

    // seven segment unsigned char array
    unsigned char x[] = {0X3F, 0X06, 0X5B, 0X4F, 0X66, 0X6D, 0X7D, 0X07, 0X7F, 0X6F};

    // all the D pins are
    DDRC = 0xFF;

    while (1)
    {
        /* code */

        for (i = 0; i < 10; i++)
        {
            PORTC = x[i];
            delay_ms(50);
        }

        for (i = 9; i >= 0; i--)
        {
            PORTC = x[i];
            delay_ms(40);
        }

        
    }
}