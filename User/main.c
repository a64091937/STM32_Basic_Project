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
#include "./key/bsp_key.h" 


void Delay(__IO u32 nCount); 
void LED_test11(void);
void KEY_test12(void);


/**
  * @brief  ������
  * @param  ��
  * @retval ��
  */
int main(void)
{
    /* LED �˿ڳ�ʼ�� */
    LED_GPIO_Config();
    /*��ʼ������*/
    Key_GPIO_Config();
    // LED_test11(); // ��11�µĴ��� 
    KEY_test12(); // ��12�µĴ��� 

}

void LED_test11(void)	 // LED��˸�Ĵ���
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
void KEY_test12(void)	 // KEY��תLED�Ĵ���
{
    /* ��ѯ����״̬��������������תLED */ 
    for (;;) {	   
        if( Key_Scan(KEY1_GPIO_PORT,KEY1_PIN) == KEY_ON  ) {
			/*LED1��ת*/
			LED1_TOGGLE;
		}   
    
        if( Key_Scan(KEY2_GPIO_PORT,KEY2_PIN) == KEY_ON  ) {
			/*LED2��ת*/
			LED2_TOGGLE;
		}   
	}
}

void Delay(__IO uint32_t nCount)	 //�򵥵���ʱ����
{
	for(; nCount != 0; nCount--);
}


