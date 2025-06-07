#include <mega32.h>
#include <delay.h>

void main(void)
{
    DDRA = 0xFF;

    while (1)
    {
        PORTA.0 = 1;
        PORTA.1 = 0;
        PORTA.2 = 0;
        delay_ms(gdelay);
        PORTA.0 = 0;
        PORTA.1 = 1;
        PORTA.2 = 0;
        delay_ms(ydelay);
        PORTA.0 = 0;
        PORTA.1 = 0;
        PORTA.2 = 1;
        delay_ms(rdelay);
    }
}