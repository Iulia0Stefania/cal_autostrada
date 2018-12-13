#include "asw.h"
#include "rte.h"

T_U8 t_u8LF=0;
static T_U8 u8_Angle=0;
void ASW_LineFolower()
{
	T_U8 t_u8LF=0;
	t_u8LF=RTE_LF_u8ReadPins();
	if((t_u8LF & 0x0c) == 0x0c)
	{
		RTE_vSetMotorDir(90);//inainte
	}
	else if((t_u8LF & 0x30)==0x30)
	{
 		RTE_vSetMotorDir(60);//stanga
	}
	else if((t_u8LF & 0x03)==0x03)
	{
		RTE_vSetMotorDir(120);
	}	
}
void ASW_SetAngle()
{
	if(u8_Angle<=90 && u8_Angle>60)
	{
		RTE_vServoSetAngle(u8_Angle);
		u8_Angle--;
	}
	else if(u8_Angle==60)
	{
		RTE_vServoSetAngle(u8_Angle);
		u8_Angle++; 
	}
	else if(u8_Angle>=60 && u8_Angle<=90 )
	{
		RTE_vServoSetAngle(u8_Angle);
		u8_Angle++;
	} 
	else if(u8_Angle>90)
	{
		RTE_vServoSetAngle(u8_Angle);
		u8_Angle++;	
	}
}