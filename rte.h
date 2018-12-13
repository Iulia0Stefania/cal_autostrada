#ifndef RTE_H_
#define RTE_H_

#include "hal_motor.h"
#include "hal_servo.h"
#include "sys_schedule.h"
#include "hal_lineFollower.h"
#include "mcal_gpio.h"

#define RTE_vMotorInit() vMotorInit()
#define RTE_vSetMotorDir(x) vSetMotorDir(x)
#define RTE_vSetMotorSpeed(x) vSetMotorSpeed(x)

#define RTE_vServoSetAngle(x) vSetAngle(x)

#define RTE_LF_vSetPinsDir(x) LF_vSetPinsDir(x)
#define RTE_LF_vWritePins() LF_vWritePins()
#define RTE_LF_u8ReadPins() LF_u8ReadPins()

#endif