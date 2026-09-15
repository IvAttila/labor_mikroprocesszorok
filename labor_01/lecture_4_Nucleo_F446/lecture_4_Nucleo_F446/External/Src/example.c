#include "example.h"		//add the example header file
#include "main.h"


int exampleFunction()	//example function definition
{
	HAL_GPIO_TogglePin(LD1_GPIO_Port,LD1_Pin);
	HAL_Delay(300);
	return 0;
}
