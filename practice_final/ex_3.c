#include <mega32.h>
#include <delay.h>

void main(void)
{
    unsigned char x;
    DDRA = 0x00;
    DDRB = 0xff;

    while (1)
    {
        x = PINA;
        PORTB = x;
    }
}