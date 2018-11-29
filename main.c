#include "general.h"
#include "hal_motor.h"
#include "hal_servo.h"
#include "sys_schedule.h"
int main()
{
	TASK_Inits();
	OSC_vInit();
	TASK_vSchedule();
    vMotorInit();

    while(1)
    { 

		/*vSetMotorSpeed(50);
		__delay_ms(1000);
		vSetMotorDir(INAPOI);
		vSetMotorSpeed(50);
		__delay_ms(1000);*/
	}
    return 0;
}