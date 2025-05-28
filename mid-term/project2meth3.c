

#include <mega32.h>
#include <delay.h>
#include <math.h>

void main(void)
{
 int i;
 DDRA=0XFF;

while (1)
      {
      for(i=0;i<8;i++)
      {
        PORTA= pow(2,i) ;
        delay_ms (40);
      }

      }
}
