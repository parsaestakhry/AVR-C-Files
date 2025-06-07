#include <mega32.h>
#include <delay.h>
interrupt[EXT_INT0] void isr_int0(void)
{
    delay_ms(1000);
    PORTA.0 = 1;
    delay_ms(1000);
    PORTA.0 = 0;
}

void main(void)
{

    DDRA.0 = 1;
    DDRB.0 = 1;

    DDRD.2 = 0;
    PORTD.2 = 1;

#asm("SEI")
    GICR = 0b01000000;
    MCUCR = 0b00000010;

    while (1)
    {
        /* code */
        PORTB.0 = 1;
        delay_ms(50);
        PORTB.0 = 0;
        delay_ms(50);
    }
}