

#include <mega32.h>
#include <delay.h>
#define d=30
void main(void)
{                                                                           
  int i;
  DDRA=0XFF;

while (1)
      {
       
       for(i=0;i<8;i++)
       {   
        PORTA= 1<<i;
        delay_ms= d;
       }
       for(i=7;i>=0;i--)
       {
        PORTA= 1<<i;
        delay_ms =d;
       }
      }
}
