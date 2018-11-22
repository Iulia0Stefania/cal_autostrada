#ifndef HAL_MOTOR_H_
#define	HAL_MOTOR_H_

#include "general_types.h"

#define INAINTE 0
#define INAPOI 1

void vMotorInit(void);
void vSetMotorDir(T_U8 u8Dir);
void vSetMotorSpeed(T_U8 u8Speed);

#endif