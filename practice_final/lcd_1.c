#include <mega16.h>
// Alphanumeric LCD Module functions
// begining of the assembly code
#asm
// now the lcd module is connected to the port B
.equ __lcd_port = 0x18;
#endasm
// including the header files
#include <lcd.h>
#include <delay.h>
// main function
void main(void)
{

    // loop variable init
    int i;
    // amount of characters inside the lcd
    lcd_init(16);
    while (1)
    {
        lcd_clear();
        lcd_gotoxy(5, 0);
        lcd_putsf("CodeVision");
        delay_ms(100);
    };
}