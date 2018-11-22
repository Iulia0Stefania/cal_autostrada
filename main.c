#include "general.h"
#include "hal_motor.h"
int main()
{
	OSC_vInit();
    vMotorInit();
	vSetMotorDir(INAINTE);
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