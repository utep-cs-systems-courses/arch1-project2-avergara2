#include <msp430.h>
#include "buzzer.h"

void buzzer_init(){

  WDTCTL = WDTPW + WDTHOLD;
  P1DIR |= BIT2;
  P1SEL |= BIT2;
  
  TA0CCR0 = 1000;
  TA0CCTL1 = OUTMOD_7;
  TA0CCR1 = 500;
  TA0CTL = TASSEL_2 + MC_1;
  __bis_SR_register(LPM0_bits);
  
}
