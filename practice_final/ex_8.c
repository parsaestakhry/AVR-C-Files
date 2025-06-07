#include <mega16.h>
#asm
.equ __lcd_port = 0x18;
#endasm

#include <lcd.h>
#include <delay.h>

void main(void)
{
    int i;
    int j;
    lcd_init(16);

    while (1)
    {
        /* code */
        for (i = 0; i < 7; i++)
        {
            lcd_clear();
            lcd_gotoxy(i, 0);
            lcd_putsf("CODEVISION");
            delay_ms(10);
        }

        for (j = 7; j >= 0; j--)
        {
            lcd_clear();
            lcd_gotoxy(j, 0);
            lcd_putsf("CODEVISION");
            delay_ms(10);
        }
    }
}