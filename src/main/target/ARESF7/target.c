/*
￼* This file is part of Cleanflight.
￼*
￼* Cleanflight is free software: you can redistribute it and/or modify
￼* it under the terms of the GNU General Public License as published by
￼* the Free Software Foundation, either version 3 of the License, or
￼* (at your option) any later version.
￼*
￼* Cleanflight is distributed in the hope that it will be useful,
￼* but WITHOUT ANY WARRANTY; without even the implied warranty of
￼* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
￼* GNU General Public License for more details.
￼*
￼* You should have received a copy of the GNU General Public License
￼* along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
￼*/

#include <stdint.h>

#include "platform.h"

#include "drivers/bus.h"
#include "drivers/io.h"
#include "drivers/pwm_mapping.h"
#include "drivers/timer.h"

const timerHardware_t timerHardware[] = {
    DEF_TIM(TIM1, CH2,  PA9, TIM_USE_PPM     , 0, 0), // PPM

    DEF_TIM(TIM3, CH1,  PC6, TIM_USE_MC_MOTOR, 0, 0), // S1
    DEF_TIM(TIM3, CH2,  PC7, TIM_USE_MC_MOTOR, 0, 0), // S2
    DEF_TIM(TIM3, CH3,  PC8, TIM_USE_MC_MOTOR, 0, 0), // S3
    DEF_TIM(TIM3, CH4,  PC9, TIM_USE_MC_MOTOR, 0, 0), // S4

    DEF_TIM(TIM8, CH2N, PB0, TIM_USE_LED     , 0, 1), // LED STRIP

    DEF_TIM(TIM4, CH2,  PB7, TIM_USE_ANY     , 0, 0), // Camera control pin
};

const int timerHardwareCount = sizeof(timerHardware) / sizeof(timerHardware[0]);
