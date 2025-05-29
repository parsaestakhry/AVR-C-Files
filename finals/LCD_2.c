#include <mega32.h>
#asm
.equ__lcd_port = 0x1B;
#endasm

#include <lcd.h>
#include <delay.h>

void main(void)
{
    int i;
    lcd_init(16);

    while (1)
    {
        /* code */
        lcd_clear();
        lcd_gotoxy(5, 0);
        lcd_putchar('a');
        lcd_gotoxy(0, 1);
        lcd_putsf("CODEVISION AVR");
        delay_ms(200);
    }
}