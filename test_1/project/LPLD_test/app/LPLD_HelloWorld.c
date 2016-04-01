/**
 * --------------基于"拉普兰德K60底层库V3"的工程（LPLD_HelloWorld）-----------------
 * @file LPLD_HelloWorld.c
 * @version 0.1
 * @date 2013-9-29
 * @brief 让Kinetis运行起来，通过串口输出调试信息。
 *
 * 版权所有:北京拉普兰德电子技术有限公司
 * http://www.lpld.cn
 * mail:support@lpld.cn
 * 硬件平台:  LPLD K60 Card / LPLD K60 Nano
 *
 * 本工程基于"拉普兰德K60底层库V3"开发，
 * 所有开源代码均在"lib"文件夹下，用户不必更改该目录下代码，
 * 所有用户工程需保存在"project"文件夹下，以工程名定义文件夹名，
 * 底层库使用方法见相关文档。 
 *
 */
#include "main.h"


void main (void)
{	
	//init_gpio_led_on();
	//init_gpio_monitorC4();//按键中断
	
	//ftm_pwm_init(&Pwm0_C1, 50, 3000);
	//ftm_pwm_init(&Pwm1_B1, 100, 3000);
	//ftm_pwm_init(&Pwm2_B19, 100, 3000);
	//ftm_pwm_init(&Pwm3_D0, 100, 6000);
	
	//adc_init(&Adc0_0P1, 1000000);
	//adc_init(&Adc1_1P1, 2000000);
	
	
	while(1)
	{
		;
	} 
}


