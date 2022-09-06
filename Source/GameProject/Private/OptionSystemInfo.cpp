#include "OptionSystemInfo.h"

FOptionSystemInfo::FOptionSystemInfo() {
    this->vibrationFlag = false;
    this->touchpadFlag = false;
    this->analogStickType = EAnalogStickType::Off;
    this->pauseType = EPauseType::Once;
}

