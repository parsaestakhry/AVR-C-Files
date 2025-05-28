

#include <mega32.h>
#include <delay.h>

void main(void)
{                                                                           
  int i;
  DDRA=0XFF;

while (1)
      {
       
       for(i=0;i<8;i++)
       {   
        PORTA= 1<<i;
        delay_ms(100);
       }
       for(i=7;i>=0;i--)
       {
        PORTA= 1<<i;
        delay_ms(100);
       }
      }
}
