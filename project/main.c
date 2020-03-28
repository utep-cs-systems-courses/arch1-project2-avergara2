#include <msp430.h>
#include "led.h"
#include "buzzer.h"

int  main(void){
  
  led_start(); //calls the method that turns on the leds
  buzzer_init();  
}
