#include <mega32.h>
#include <delay.h>

void main(void) {
    DDRA.7 = 0;
    DDRA.0 = 1;

    while (1)
    {
        if(PINA.7 == 0) {
            PORTA.0 = 1;
        } else {
            PORTA.0 = 0;
        }
    }
    
}
