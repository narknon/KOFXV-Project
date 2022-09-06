#include "ActionDebugCameraParam.h"

FActionDebugCameraParam::FActionDebugCameraParam() {
    this->Type = EActDebugCameraType::RESET;
    this->offsetBase = EActDebugCameraOffset::BASE_POS;
    this->frame = 0;
    this->X = 0.00f;
    this->Y = 0.00f;
    this->Z = 0.00f;
    this->iOptionFlag = 0;
}

