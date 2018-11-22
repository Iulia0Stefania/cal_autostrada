#include "general.h"
#include "hal_motor.h"
#include "mcal_gpio.h"
#include "general_types.h"
#include "mcal_pwm.h"

void vMotorInit()
{
	GPIO_u8SetPortPin(PORT_A,9,DIGITAL,OUTPUT);
	PWM1_vInit();
}
void vSetMotorDir(T_U8 u8Dir)
{	
	GPIO_u8WritePortPin(PORT_A,9,u8Dir);
}
void vSetMotorSpeed(T_U8 u8Speed)
{
	if(u8Speed>100)
	{
		PWM1_vSetDuty(100, 2);
	}
	else
	{
		PWM1_vSetDuty(u8Speed, 2);
	}

}