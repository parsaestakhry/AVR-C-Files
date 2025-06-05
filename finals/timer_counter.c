#include <mega16.h>

// Function prototype for delay using Timer0
void delay();

void main()
{
    DDRA = 0xFF;      // Set PORTA as output (all pins)
    PORTA = 0x00;     // Initialize PORTA to 0 (all LEDs off)
    TCCR0 = 0x00;     // Stop Timer0 (ensure timer is off)
    TCNT0 = 0x9C;     // Preload Timer0 counter for desired delay

    while (1)
    {
        PORTA.0 = 1;  // Turn ON LED connected to PA0
        delay();      // Wait for the delay period

        PORTA.0 = 0;  // Turn OFF LED connected to PA0
        delay();      // Wait for the delay period
    }
}

// Delay function using Timer0 overflow
void delay()
{
    TCNT0 = 0x9C;           // Preload Timer0 counter for ~2ms delay (assuming 1MHz clock)
    TCCR0 = 0B00000010;     // Start Timer0 with prescaler CLK/8
    while (!(TIFR & 0x02))  // Wait until Timer0 overflow flag (TOV0) is set
        ;                   // (do nothing, just wait)
    TIFR |= 0x02;           // Clear Timer0 overflow flag by writing 1
    TCCR0 = 0x00;           // Stop Timer0
}