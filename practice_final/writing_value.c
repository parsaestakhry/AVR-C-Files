#include <mega32.h>

void main(void)
{
    DDRB = 0xFF;

    while (1)
    {
        /* code */
        PORTA.0 = 0x28;
    }
}