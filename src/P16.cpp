#include <Arduino.h>
#include "stm32f103xb.h"

void setup() {
  RCC->APB2ENR|=RCC_APB2ENR_IOPAEN_Msk;
  RCC->APB2ENR|=RCC_APB2ENR_IOPBEN_Msk;
  
  
}

void loop() {
  
}