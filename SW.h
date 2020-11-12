/******************************************************************************/
#ifndef SW_H
#define SW_H
#endif
/******************************************************************************/
#ifndef GPIO_H
#include "GPIO.h"
#endif
/******************************************************************************/
typedef enum{
        SW_STATE_OFF = 0,
        SW_STATE_ON
}SW_STATE_t;
typedef enum{
        SW_FALLING = 0,
        SW_RISING
}SW_TIME_t;
typedef struct{
        GPIO_Port_ID_t Port  :  3;
        GPIO_Pin_ID_t  Pin   :  3;
        SW_TIME_t      Time  :  1;
        SW_STATE_t     State :  1;
}SW_t;
/******************************************************************************/
void SW_Init(SW_t* const SW);
void SW_Read(SW_t* const SW);
/******************************************************************************/
