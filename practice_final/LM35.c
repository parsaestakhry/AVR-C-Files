#include <mega32.h>
#include <lcd.h>
#include <delay.h>
#include <stdio.h>

#asm
.equ __lcd_port = 0x18;
#endasm

void ADC_Init()
{
    ADMUX = (1 << KEFS0);
    ADCSKA = (1 << ADEN) | (1 << ADPS2) | (1 << ADPS1) | (1 << ADPS0);
}

unsigned int ADC_Read()
{
    ADCSRA = (1 << ADSC);
    while (ADCSKA & (1 << ADSC))
    {
        /* code */
        return ADCW;
    }
}

void main(void)
{
    unsigned int adc_value;
    adc_value = ADC_Read(0);

    temp = adc_value * 4.8 * / 1024 * 100;

    lcd_init(16);
    lcd_clear();
    lcd_gotoxy(0, 0);
    lcd_putsf(temp);
    delay_ms(100);
}