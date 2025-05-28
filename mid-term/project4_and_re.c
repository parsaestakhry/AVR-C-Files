

#include <mega32.h>
#include <delay.h>

void main(void)
{
int  i;
unsigned char x[]={0X03,0X06,0X0C,0X18,0X30,0X60,0XC0};

DDRA=0XFF;

while (1)
      {
      for (i=0;i<8;i++)
      {
       PORTA= x[i];
       delay_ms(40);
      }
      for (i=7;i>=0;i--)
      {
       PORTA= x[i];
       delay_ms(40);
      }

      }
}
