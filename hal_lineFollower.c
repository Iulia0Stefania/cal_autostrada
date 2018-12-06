#include "hal_lineFollower.h"
#include "general_types.h"
#include "mcal_gpio.h"

void LF_vSetPinsDir(BOOL bDir)
{
	GPIO_u8SetPortPin(PORT_C, 0, DIGITAL, bDir);
	GPIO_u8SetPortPin(PORT_C, 1, DIGITAL, bDir);
	GPIO_u8SetPortPin(PORT_C, 2, DIGITAL, bDir);
	GPIO_u8SetPortPin(PORT_C, 3, DIGITAL, bDir);
	GPIO_u8SetPortPin(PORT_C, 4, DIGITAL, bDir);
	GPIO_u8SetPortPin(PORT_C, 5, DIGITAL, bDir);
}
void LF_vWritePins(void)
{
	GPIO_u8WritePortPin(PORT_C, 0, 1);
	GPIO_u8WritePortPin(PORT_C, 1, 1);
	GPIO_u8WritePortPin(PORT_C, 2, 1);
	GPIO_u8WritePortPin(PORT_C, 3, 1);
	GPIO_u8WritePortPin(PORT_C, 4, 1);
	GPIO_u8WritePortPin(PORT_C, 5, 1);

}
T_U8 LF_u8ReadPins(void)
{	
	T_U8 portC;
	LF_vWritePins();
	
	LF_vSetPinsDir(OUTPUT);
	__delay_us(10);
	LF_vSetPinsDir(INPUT);
	__delay_us(250);

	portC=GPIO_u16ReadPort(PORT_C);	
	T_U8 mask=0x3f;
	return portC&mask;
	
}