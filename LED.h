/******************************************************************************/
#ifndef LED_H
#define LED_H
#endif
/******************************************************************************/
#ifndef GPIO_H
#include "GPIO.h"
#endif
/******************************************************************************/
typedef enum{
        LED_STATE_OFF = 0,
        LED_STATE_ON
}LED_STATE_t;
typedef struct{
        GPIO_Port_ID_t Port  :  4;
        GPIO_Pin_ID_t  Pin   :  3;
        LED_STATE_t    State :  1;
}LED_t;
/******************************************************************************/
void LED_Init(LED_t* const LED);
void LED_On(LED_t* const LED);
void LED_Off(LED_t* const LED);
void LED_Blink(LED_t* const LED);
/******************************************************************************/
