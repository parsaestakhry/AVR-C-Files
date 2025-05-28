
#include <mega32.h>
#include <delay.h>



void main(void)
{
 DDRA=1;

while (1)
      {
        PORTA.0=1;
        delay_ms(80);
        PORTA.0=0;
        delay_ms(80);
      }
}
