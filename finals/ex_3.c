#include <mega32.h>
#include <delay.h>
void in_out_port(void);
void main(void)
{
    // input ports
    DDRA = 0x00;
    // output ports
    DDRB = 0xFF;

    while (1)
    {
        /* code */
        in_out_port();
    };

    void in_out_port(void)
    {
        unsigned char x;
        x = PINA;
        PORTB = x;
    }
}