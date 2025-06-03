#include <mega32.h>
#include <delay.h>
void trafficsignal(int gdelay, int ydelay, int rdelay);
void main(void)
{
    DDRA = 0x07;
    while (1)
    {
        /* code */
        trafficsignal(100, 200, 300);
    }

    void trafficsignal(int gdelay, int ydelay, int rdelay)
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