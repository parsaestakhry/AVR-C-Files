#include <mega32.h>
#include <delay.h>

void main(void)
{
    // PINS OF 0,1,2 OF PORTA IS OUTPUT
    DDRA = 0x07;

    while (1)
    {
        /* code */
        trafficsignal();
    }
}

void trafficsignal(void)
{
    PORTA.0 = 1;
    PORTA.1 = 0;
    PORTA.2 = 0;
    delay_ms(15000)
        PORTA.0 = 0;
    PORTA.1 = 1;
    PORTA.2 = 0;
    delay_ms(15000)
        PORTA.0 = 0;
    PORTA.1 = 0;
    PORTA.2 = 1;
}