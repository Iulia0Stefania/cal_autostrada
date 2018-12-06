#include "general.h"
#include "hal_motor.h"
#include "hal_servo.h"
#include "sys_schedule.h"
#include "hal_lineFollower.h"
#include "mcal_gpio.h"
#include "sys_tasks.h"

int main()
{	
	T_U8 t_u8LF;
	TASK_Inits();
//	OSC_vInit();
//	TASK_vSchedule();
    vMotorInit();


    while(1)
    { 
		t_u8LF=LF_u8ReadPins();
		vSetMotorSpeed(20);
		if(t_u8LF==0)
		{
			vSetMotorDir(INAINTE);
			
		}
		else
		{
			vSetMotorDir(INAPOI);
			
		}
		/*vSetMotorSpeed(50);
		__delay_ms(1000);
		vSetMotorDir(INAPOI);
		vSetMotorSpeed(50);
		__delay_ms(1000);*/
	}
    return 0;
}