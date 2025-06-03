#include <mega32.h>

void main(void)
{
    // all ports are outouts
    DDRB = 0xFF;

    while (1)
    {
        /* code */
        PORTB = 0x28;
    }
}