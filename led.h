#ifndef __LED_H
#define __LED_H


#include <stdint.h>

void InputOutputConfig ( uint32_t *GPIOx, uint8_t Pin, uint8_t Mode);
void ButtonToggleLed ( uint32_t *GPIOx, uint8_t Pin);






#endif