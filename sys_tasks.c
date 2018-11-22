/* 
 * File:   sys_tasks.h
 * Author: Cristian T. A.
 *
 * Created on August 17, 2018, 1:26 PM
 */

#include "general.h"
#include "sys_tasks.h"

#include "mcal_init.h"
T_U8 u8Speed;
void TASK_Inits()
{
    MCAL_vInit();
    GPIO_u8SetPortPin(PORT_A, 10, DIGITAL, OUTPUT);	
}

void TASK_1ms()
{

}

void TASK_5ms()
{

}

void TASK_10ms()
{   
	u8Speed++;
	vSetMotorSpeed(u8Speed);
	if(u8Speed==60)
	{	
		vSetMotorDir(INAINTE);
		u8Speed=0;
	}
	if(u8Speed==0)
	{
		vSetMotorDir(INAPOI);
	}
	
}

void TASK_100ms()
{ 
    
}

void TASK_500ms()
{ 

}

void TASK_1000ms()
{

}