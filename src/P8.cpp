#include <Arduino.h>
#include "stm32f103xb.h"

void setup() {
  RCC->APB2ENR|=RCC_APB2ENR_IOPAEN_Msk;
  GPIOB->CRH =0x44444444;
  GPIOB->CRL =0x44444444;
  GPIOA->CRH =0x11111111;
  GPIOA->CRL =0x11111111;
}

void loop() {
  uint16_t B =GPIOB->IDR;
  GPIOA->BSRR =B |~ 0x23;
}