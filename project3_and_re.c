
#include <mega32.h>
#include <delay.h>
#include <math.h>

void main(void)
{
      int i;
      // unsigned char x[]={0X01,0X03,0X07,0X0F,0X1F,0X3F,0X7F,0XFF};

      DDRA = 0XFF;

      while (1)
      {
            for (i = 0; i < 8; i++)
            {
                  PORTA = (pow(2, i)) - 1;
                  // PORTA= (1<<i)-1
                  // PORTA= x[i];
                  delay_ms(40);
            }
            for (i = 7; i >= 0; i--)
            {
                  PORTA = (pow(2, i)) - 1;
                  // PORTA= (1<<i)-1
                  // PORTA= x[i];
                  delay_ms(40);
            }
      }
}
