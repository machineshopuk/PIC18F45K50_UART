#include "mcc_generated_files/mcc.h"
#include "mcc_generated_files/examples/uart_example.h"

void main(void)
{
    SYSTEM_Initialize();

    INTERRUPT_GlobalInterruptHighEnable();
    INTERRUPT_PeripheralInterruptEnable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();

    int counter = 0;
    TRISD = 0;
    ANSELD = 0;
    
    while (1)
    {
        __delay_ms(100);
        LATDbits.LATD6 = !LATDbits.LATD6;
        printf("counter: %d\r\n", counter++);// Add your application code
    }
}
