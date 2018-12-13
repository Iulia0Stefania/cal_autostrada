/* 
 * File:   sys_tasks.h
 * Author: Cristian T. A.
 *
 * Created on August 17, 2018, 1:26 PM
 */

#include "general.h"
#include "sys_tasks.h"
#include "hal_motor.h"
#include "mcal_init.h"
#include "asw.h"
#include "rte.h"

T_U8 u8Speed;	

int angle=90;
void TASK_Inits()
{
    MCAL_vInit();
    GPIO_u8SetPortPin(PORT_A, 10, DIGITAL, OUTPUT);	
	RTE_vMotorInit();
	RTE_vSetMotorDir(INAINTE);
	RTE_vSetMotorSpeed(30);
}

void TASK_1ms()
{
	ASW_LineFolower();
}

void TASK_5ms()
{

}

void TASK_10ms()
{   

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