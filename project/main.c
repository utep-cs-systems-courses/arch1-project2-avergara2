#include <msp430.h>

#define LEDS (BIT0 | BIT6)

unsigned char ledFlags = 0 | 0;

void main(){
  
  P1DIR |= LEDS; //bits of leds are output
  P1OUT |= ledFlags; //set bit for on leds

}
