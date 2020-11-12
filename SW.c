/******************************************************************************/
#ifndef SW_H
#include "SW.h"
#endif
/******************************************************************************/
void SW_Init(SW_t* const SW){
     GPIO_SetPinDirection(SW->Port, SW->Pin, GPIO_INPUT);
}
/******************************************************************************/
void SW_Read(SW_t* const SW){
     switch(SW->Time){
            case SW_FALLING:
                 SW->State = SW_STATE_OFF;
                 if(GPIO_LOW == GPIO_ReadPinValue(SW->Port, SW->Pin)){
                    SW->Time = SW_RISING;
                 }
                 break;
            case SW_RISING:
                 if(GPIO_HIGH == GPIO_ReadPinValue(SW->Port, SW->Pin)){
                    SW->State = SW_STATE_ON;
                    SW->Time = SW_FALLING;
                 }
                 break;
            default:
                 /* Error: Undefined SW Time */
                 break;
                 
     }
}
/******************************************************************************/
