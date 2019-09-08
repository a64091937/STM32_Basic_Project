# STM32_Basic_Project
使用的是野火F429开发板
先建立一个项目的结构,然后再从中拉分支进行开发

时钟

A.晶振：
-外部高速晶振：25MHz
-RTC晶振：32.768KHz

B.各总线运行时钟：
-系统时钟 = SYCCLK = AHB1 = 180MHz
-APB2 = 90MHz 
-APB1 = 45MHz

C.浮点运算单元：
  使能

