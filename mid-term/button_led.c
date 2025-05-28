#include <mega32.h>
#include <delay_h>

void main(void)
{
    DDRA.0 = 0;
    DDRC.0 = 1;
    PORTA.0 = 1;
    while (1)
    {
        if (PINA.0 == 0)
        {
            /* code */
            PORTC.0 = 1;
        }
        else
        {
            PORTC.0 = 0;
        }
    }
}