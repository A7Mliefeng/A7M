#include "common.h"
#include "GPIOConfig.h"
#include "interrupt.h"
#include "time.h"
#include "UART.h"
#include "ADCConfig.h"
mypwm Pwm0_C1={FTM0, FTM_Ch0, PTC1};
mypwm Pwm1_B1={FTM1, FTM_Ch1, PTB1};
mypwm Pwm2_B19={FTM2, FTM_Ch1, PTB19};
mypwm Pwm3_D0={FTM3, FTM_Ch0, PTD0};

myadc Adc0_0P1={ADC0, &adc0_isr, DAD1, TRIGGER_PIT0, PIT0};
myadc Adc1_1P1={ADC1, &adc1_isr, DAD1, TRIGGER_PIT1, PIT1};