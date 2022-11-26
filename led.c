#include "led.h"
#include "gpio.h"
#include <unistd.h> 


void AssertValid(void)
{
  __asm("NOP");
}

void AssertFailed(void)
{
  while(1){}
}

#define EMB_ASSERT(Exp) ((Exp) ? AssertValid() : AssertFailed())


void InputOutputConfig ( uint32_t *GPIOx, uint8_t Pin, uint8_t Mode) 
{
  EMB_ASSERT(GPIOx == GPIOA || GPIOx == GPIOB || GPIOx == GPIOC  || GPIOx == GPIOD );
  EMB_ASSERT(Pin >= PIN0 && Pin <= PIN15);
  EMB_ASSERT(Mode >= INPUT && Mode <= ANALOG_INPUT);
  
}

  
extern void ButtonToggleLed ( uint32_t *GPIOx, uint8_t Pin)
{
  EMB_ASSERT(GPIOx == GPIOA || GPIOx == GPIOB || GPIOx == GPIOC || GPIOx == GPIOD );
  EMB_ASSERT(Pin >= PIN0 && Pin <= PIN15);

 
  if (GPIO_Read_Pin( GPIOx, Pin ==1 ))
    {
    GPIO_Write_Pin( GPIOx, Pin, SET);
    sleep(1000);
    }
    
   else
   {
   GPIO_Write_Pin (GPIOx, Pin, RESET);
   }
}

  
 