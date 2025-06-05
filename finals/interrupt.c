#include <mega16.h> // Corrected: No space after #include
#include <delay.h>  // Corrected: No space after #include

// Interrupt Service Routine for External Interrupt 0 (INT0)
interrupt [EXT_INT0] void isr_int0(void)
{
    PORTA.0=1;
    delay_ms(1000); // WARNING: Using delay_ms inside an ISR is generally not recommended.
                    //          It can cause issues with real-time performance and other interrupts.
                    //          For longer delays, consider using a timer in normal application code,
                    //          or state machines/flags in the ISR.
    PORTA.0=0;
    delay_ms(1000);
}

void main(void)
{
    // Configure PA0 as output
    DDRA.0=1;
    // Configure PB0 as output
    DDRB.0=1;

    // Configure PD2 (INT0 pin) as input with pull-up enabled
    // Note: Setting PORTD.2 to 1 with DDRA.2=0 (default input) enables the pull-up.
    // If you explicitly set DDRD.2=0 before, it ensures it's an input.
    DDRD.2=0; // Ensure PD2 is an input
    PORTD.2=1; // Enable pull-up resistor for PD2

    // Enable Global Interrupts
    #asm ("SEI") // This is equivalent to `sei();` or `SREG |= 0x80;` in C.
                 // The CodeVisionAVR specific macro `sei();` is cleaner.

    // GICR: General Interrupt Control Register
    // Bit 6: INT0 (External Interrupt Request 0 Enable)
    GICR = 0b01000000; // Enable External Interrupt Request 0 (INT0)

    // MCUCR: MCU Control Register - used to set trigger type for INT0
    // ISC01 (bit 1) and ISC00 (bit 0) control INT0 trigger.
    // 0b00000010: ISC01=1, ISC00=0 --> Falling Edge Trigger for INT0
    MCUCR = 0b00000010;

    while(1)
    {
        // Main loop: Blinks LED on PORTB.0
        PORTB.0=1;
        delay_ms(500);
        PORTB.0=0;
        delay_ms(500);
    }
}