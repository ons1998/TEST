/**
  ******************************************************************************
  * @file    main.c
  * @author  Mouadh Dahech
  * @brief   Memory management 
  * @version V1.0.0
  * @date    16-10-2022
  *****************************************************************************/

/* Includes ------------------------------------------------------------------*/

#include "gpio.h"
#include "led.h"
/* Private functions ---------------------------------------------------------*/
/**
  * @brief  Main program
  * @param  None
  * @retval None
  */
int main(void)
{

  InputOutputConfig(GPIOD, PIN12, OUTPUT); // Green LED output
  InputOutputConfig(GPIOD, PIN15, OUTPUT); // Blue LED output
  InputOutputConfig(GPIOA, PIN0, INPUT); // Button input 
  
 GPIO_Write_Pin(GPIOD, PIN15, SET); // turn on the blue LED
 GPIO_Read_Pin( GPIOA,PIN0); // See if button is on or off 
 ButtonToggleLed ( GPIOD, PIN15 );

 
  while (1)
  {}
  
  

 
}

/**************************************END OF FILE**************************************/
