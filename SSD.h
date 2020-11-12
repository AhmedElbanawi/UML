/******************************************************************************/
#ifndef SSD_H
#define SSD_H
#endif
/******************************************************************************/
#ifndef GPIO_H
#include "GPIO.h"
#endif
/******************************************************************************/
typedef enum{
        SSD_DATA_A_PORT_ID = GPIO_PORTB,
        SSD_DATA_B_PORT_ID = GPIO_PORTB,
        SSD_DATA_C_PORT_ID = GPIO_PORTB,
        SSD_DATA_D_PORT_ID = GPIO_PORTB
}SSD_DATA_PORT_ID_t;
typedef enum{
        SSD_DATA_A_PIN_ID = GPIO_PIN0,
        SSD_DATA_B_PIN_ID = GPIO_PIN1,
        SSD_DATA_C_PIN_ID = GPIO_PIN2,
        SSD_DATA_D_PIN_ID = GPIO_PIN3
}SSD_DATA_PIN_ID_t;
typedef enum{
        SSD_STATE_ON = 0,
        SSD_STATE_OFF
}SSD_STATE_t;
typedef struct{
        GPIO_Port_ID_t Port  : 4;
        GPIO_Pin_ID_t  Pin   : 3;
        SSD_STATE_t    State : 1;
        u8_t Symbol;
}SSD_t;
/******************************************************************************/
