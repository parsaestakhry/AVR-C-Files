#include <mega16.h>
// Alphanumeric LCD Module functions
#asm
.equ __lcd_port = 0x18;
#endasm
#include <lcd.h>
#include <delay.h>
void main(void)
{
    int i;
    lcd_init(16);
    while (1)
    {
        for (i = 0; i < 7; i++)
        {
            lcd_clear();
            lcd_gotoxy(i, 0);
            lcd_putsf("CodeVision");
            delay_ms(100);
        }
    };
}