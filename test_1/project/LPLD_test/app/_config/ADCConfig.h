#include "common.h"

#ifndef _ADCCONFIG_H_
#define _ADCCONFIG_H_

typedef struct
{
	ADC_Type *ADC_Adcx;
	void (*isr)();
	AdcChnEnum_Type chn;
	uint8 PDB_TriggerInputSourceSel;
	PITx PIT_Pitx;
} myadc;
void adc_init(myadc *adc, uint32 PIT_PeriodUs);

#endif
