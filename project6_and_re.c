
#include <mega32.h>
#include <delay.h>

void main(void)
{
      int i, j;
      unsigned char x[] = {0X3F, 0X06, 0X5B, 0X4F, 0X66, 0X6D, 0X7D, 0X07, 0X7F, 0X6F};
      DDRA = 0XFF;
      DDRB = 0XFF;
      while (1)
      {
            for (i = 0; i < 10; i++)
            {
                  PORTA = x[i];
                  for (j = 0; j < 10; j++)
                  {
                        PORTB = x[j];
                        delay_ms(40);
                  }
            }
            for (i = 9; i >= 0; i--)
            {
                  PORTA = x[i];
                  for (j = 9; j >= 0; j--)
                  {
                        PORTB = x[j];
                  }
            }
      }
}
