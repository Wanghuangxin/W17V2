#pragma once

#include_next <mcuconf.h>


#undef STM32_PWM_USE_TIM1
#define STM32_PWM_USE_TIM1 TRUE

#undef STM32_ST_USE_TIMER
#define STM32_ST_USE_TIMER 14

