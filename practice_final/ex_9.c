#include <mega32.h>
void main(void)
{
    bit x;
    DDRA.5 = 0;
    PORTA.5 = 1;
    DDRA.0 = 1;
    PORTA.0 = 0;
    SFIOR = 0x00;

    while (1)
    {
        /* code */
        x = PINA.5;
        if (x == 0)
        {
            /* code */
            PORTA.0 = 1;
        }
        else
        {
            PORTA.0 = 0;
        }
    }
}