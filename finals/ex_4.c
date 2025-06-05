#include <mega32.h>
#include <delay.h>

// Define the seven_seg_code function
unsigned char seven_seg_code(unsigned char num)
{
    // Common cathode 7-segment codes for 0-9
    unsigned char codes[10] = {0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F};
    if (num < 10)
        return codes[num];
    else
        return 0x00;
}

void main(void)
{
    unsigned char i;
    DDRA = 0xff;
    while (1)
    {
        for (i = 0; i < 10; i++)
        {
            PORTA = seven_seg_code(i);
            delay_ms(1000);
        }
    };
}