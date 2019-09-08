/**
  ******************************************************************************
  * @file    main.c
  * @author  Zhang Hongda, a64091937
  * @version V1.0
  * @date    2019-9-8
  * @brief   A Standard STM32 Project
  ******************************************************************************
  * @attention
  * 程序来到main函数之前，启动文件：statup_stm32f429xx.s已经调用
  * SystemInit()函数把系统时钟初始化成180MHZ
  *  SystemInit()在system_stm32f4xx.c中定义
  * 如果用户想修改系统时钟，可自行编写程序修改
  *
  ******************************************************************************
  */
  
#include "stm32f4xx.h"
#include "./led/bsp_led.h" 

void Delay(__IO u32 nCount); 

/**
  * @brief  主函数
  * @param  无
  * @retval 无
  */
int main(void)
{
    for (;;) {
        LED1( ON ); 		 // 亮 
        Delay(0xFFFFFF);
    	LED1( OFF );		  // 灭
    	
    	LED2( ON ); 		// 亮 
    	Delay(0xFFFFFF);
    	LED2( OFF );		  // 灭
    	
    	LED3( ON ); 		 // 亮 
    	Delay(0xFFFFFF);
    	LED3( OFF );		  // 灭	
    	
    	/*轮流显示 红绿蓝黄紫青白 颜色*/
    	LED_RED;
    	Delay(0xFFFFFF);
    	
    	LED_GREEN;
    	Delay(0xFFFFFF);
    	
    	LED_BLUE;
    	Delay(0xFFFFFF);
    	
    	LED_YELLOW;
    	Delay(0xFFFFFF);
    	
    	LED_PURPLE;
    	Delay(0xFFFFFF);
    			
    	LED_CYAN;
    	Delay(0xFFFFFF);
    	
    	LED_WHITE;
    	Delay(0xFFFFFF);
    	
    	LED_RGBOFF;
    	Delay(0xFFFFFF);

        
    }    

}

void Delay(__IO uint32_t nCount)	 //简单的延时函数
{
	for(; nCount != 0; nCount--);
}


