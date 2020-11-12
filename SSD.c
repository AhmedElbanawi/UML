/******************************************************************************/
#ifndef SSD_H
#include "SSD.h"
#endif
/******************************************************************************/
void SSD_Init(SSD_t* const SSD){
     GPIO_SetPinDirection(SSD->Port, SSD->Pin, GPIO_OUTPUT);
     SSD_Off(SSD);
}
/******************************************************************************/
void SSD_Off(SSD_t* const SSD){
     GPIO_SetPinValue(SSD->Port, SSD->Pin, GPIO_HIGH);
     SSD->State = SSD_STATE_OFF;
}
/******************************************************************************/
void SSD_On(SSD_t* const SSD){
     GPIO_SetPinValue(SSD->Port, SSD->Pin, GPIO_LOW);
     SSD->State = SSD_STATE_ON;
}
/******************************************************************************/
void SSD_Set_Symbol(SSD_t* const SSD){
     GPIO_SetPinValue(SSD_DATA_A_PORT_ID, SSD_DATA_A_PIN_ID, GET_BIT(SSD->Symbol, 0));
     GPIO_SetPinValue(SSD_DATA_B_PORT_ID, SSD_DATA_B_PIN_ID, GET_BIT(SSD->Symbol, 1));
     GPIO_SetPinValue(SSD_DATA_C_PORT_ID, SSD_DATA_C_PIN_ID, GET_BIT(SSD->Symbol, 2));
     GPIO_SetPinValue(SSD_DATA_D_PORT_ID, SSD_DATA_D_PIN_ID, GET_BIT(SSD->Symbol, 3));
}
/******************************************************************************/
void SSD_Init_Data(void){
     GPIO_SetPinDirection(SSD_DATA_A_PORT_ID, SSD_DATA_A_PIN_ID, GPIO_OUTPUT);
     GPIO_SetPinDirection(SSD_DATA_B_PORT_ID, SSD_DATA_B_PIN_ID, GPIO_OUTPUT);
     GPIO_SetPinDirection(SSD_DATA_C_PORT_ID, SSD_DATA_C_PIN_ID, GPIO_OUTPUT);
     GPIO_SetPinDirection(SSD_DATA_D_PORT_ID, SSD_DATA_D_PIN_ID, GPIO_OUTPUT);
}
/******************************************************************************/
