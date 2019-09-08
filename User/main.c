/**
  ******************************************************************************
  * @file    main.c
  * @author  Zhang Hongda, a64091937
  * @version V1.0
  * @date    2019-9-8
  * @brief   A Standard STM32 Project
  ******************************************************************************
  * @attention
  * ��������main����֮ǰ�������ļ���statup_stm32f429xx.s�Ѿ�����
  * SystemInit()������ϵͳʱ�ӳ�ʼ����180MHZ
  *  SystemInit()��system_stm32f4xx.c�ж���
  * ����û����޸�ϵͳʱ�ӣ������б�д�����޸�
  *
  ******************************************************************************
  */
  
#include "stm32f4xx.h"
#include "./led/bsp_led.h" 

void Delay(__IO u32 nCount); 

/**
  * @brief  ������
  * @param  ��
  * @retval ��
  */
int main(void)
{
    for (;;) {
        LED1( ON ); 		 // �� 
        Delay(0xFFFFFF);
    	LED1( OFF );		  // ��
    	
    	LED2( ON ); 		// �� 
    	Delay(0xFFFFFF);
    	LED2( OFF );		  // ��
    	
    	LED3( ON ); 		 // �� 
    	Delay(0xFFFFFF);
    	LED3( OFF );		  // ��	
    	
    	/*������ʾ ������������� ��ɫ*/
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

void Delay(__IO uint32_t nCount)	 //�򵥵���ʱ����
{
	for(; nCount != 0; nCount--);
}


