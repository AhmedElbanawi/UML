/******************************************************************************/
#ifndef LED_H
#include "LED.h"
#endif
/******************************************************************************/
void LED_Init(LED_t* const LED){
     GPIO_SetPinDirection(LED->Port, LED->Pin, GPIO_OUTPUT);
     LED_Off(LED);
}
/******************************************************************************/
void LED_On(LED_t* const LED){
     GPIO_SetPinValue(LED->Port, LED->Pin, GPIO_HIGH);
     LED->State = LED_STATE_ON;
}
/******************************************************************************/
void LED_Off(LED_t* const LED){
     GPIO_SetPinValue(LED->Port, LED->Pin, GPIO_LOW);
     LED->State = LED_STATE_OFF;
}
/******************************************************************************/
void LED_Blink(LED_t* const LED){
     if(LED_STATE_OFF == LED->State){
        LED_On(LED);
     }else{
        LED_Off(LED);
     }
}
/******************************************************************************/
