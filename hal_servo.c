#include "general.h"
#include "hal_servo.h"
#include "mcal_gpio.h"
#include "general_types.h"
#include "mcal_pwm.h"


void vSetAngle(T_U8 u8_Angle)
{
	T_F16 f16Duty=90;
	
	if(u8_Angle<=60)
	{
		u8_Angle=60;
	}
	else if(u8_Angle>=120)
	{
		u8_Angle=120;
	}
	f16Duty=OFFSET+REZ*(u8_Angle-MIN_ANGLE);
	PWM1_vSetDuty(f16Duty,1);

}