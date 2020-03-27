#include <msp430.h>
#include "led.h"

void led_start(){
  WDTCTL = WDTPW + WDTHOLD;

  unsigned char ledFlags = 0 | 0;

  if(CALBC1_1MHZ == 0xFF || CALDCO_1MHZ == 0xFF){ //Here we set the msp430 to work at 1MHZ
    while(1);
  }

  BCSCTL1 = CALBC1_1MHZ;
  DCOCTL = CALDCO_1MHZ;
  
  P1DIR = LEDS; //bits for leds are output
  P1OUT = ledFlags; //turns on leds

  while(1){
    P1OUT = 1 | 1; 
    __delay_cycles(100000); //delay for making the blinking slower
    P1OUT = ledFlags;
    __delay_cycles(100000); //delay again
  }
  
}
