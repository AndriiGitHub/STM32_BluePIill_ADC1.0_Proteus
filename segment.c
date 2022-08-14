/*
 * segment.c
 *
 *  Created on: Aug 11, 2022
 *      Author: neo-a
 */
#include "segment.h"

uint16_t N1;
uint16_t N2;
uint16_t N3;
uint16_t N4;
uint16_t n, um;
uint8_t T[10] = {
		0b00111111,  //0
		0b00000110,  //1
		0b01011011,  //2
		0b01001111,  //3
		0b01100110,  //4
		0b01101101,  //5
		0b01111101,  //6
		0b00000111,  //7
		0b01111111,  //8
		0b01101111,  //9
};
void SetNumber (double NUM)
{
	double N, UM;

		N= modf(NUM, &UM);

		um=(int)UM;
	if(um<=9&&um>=0)
	{
		N=N*1000+1;
		n=(int)N;
		N1=um;
		N2=n/100;
		N3=n%100/10;
		N4=n%10;
	}
	else if(um>9&&um<=99)
	{
		N=N*100+1;
		n=(int)N;
		N1=um/10;
		N2=um%10;
		N3=n/10;
		N4=n%10;
	}
	else if(um>99&&um<=999)
	{
		N=N*10+1;
		n=(int)N;
		N1=um/100;
		N2=um%100/10;
		N3=um%10;
		N4=n%10;
	}
	else if(um>999)
	{
		N1=um/1000;
		N2=um%1000/100;
		N3=um%100/10;
		N4=um%10;
	}

}

void InitDisplay()
{
	while (1)
	  {

		  GPIOA->ODR = T[N1];
		  	HAL_GPIO_WritePin(GPIOB, N1_Pin, GPIO_PIN_SET);
		  	if(um<=9&&um>=0)
		  	{
		  		HAL_GPIO_WritePin(GPIOB, LED_DP_Pin, GPIO_PIN_SET);
		  	}
		  	HAL_Delay(10);
		  	HAL_GPIO_WritePin(GPIOB, N1_Pin, GPIO_PIN_RESET);
		  	if(um<=9&&um>=0)
		  	{
		  		HAL_GPIO_WritePin(GPIOB, LED_DP_Pin, GPIO_PIN_RESET);
		  	}
		  	GPIOA->ODR = T[N2];
		  	HAL_GPIO_WritePin(GPIOB, N2_Pin, GPIO_PIN_SET);
		  	if(um>9&&um<=99)
		  		  	{
		  		  		HAL_GPIO_WritePin(GPIOB, LED_DP_Pin, GPIO_PIN_SET);
		  		  	}
		  HAL_Delay(10);
		  	HAL_GPIO_WritePin(GPIOB, N2_Pin, GPIO_PIN_RESET);
		  	if(um>9&&um<=99)
		  		  	{
		  		  		HAL_GPIO_WritePin(GPIOB, LED_DP_Pin, GPIO_PIN_RESET);
		  		  	}
		  GPIOA->ODR = T[N3];
		  	HAL_GPIO_WritePin(GPIOB, N3_Pin, GPIO_PIN_SET);
		  	if(um>99&&um<=999)
		  		  	{
		  		  		HAL_GPIO_WritePin(GPIOB, LED_DP_Pin, GPIO_PIN_SET);
		  		  	}
		  HAL_Delay(10);
		  	HAL_GPIO_WritePin(GPIOB, N3_Pin, GPIO_PIN_RESET);
		  	if(um>99&&um<=999)
		  		  	{
		  		  		HAL_GPIO_WritePin(GPIOB, LED_DP_Pin, GPIO_PIN_RESET);
		  		  	}
		  GPIOA->ODR = T[N4];
		  	HAL_GPIO_WritePin(GPIOB, N4_Pin, GPIO_PIN_SET);

		  HAL_Delay(10);
		  	HAL_GPIO_WritePin(GPIOB, N4_Pin, GPIO_PIN_RESET);

	  }

}


