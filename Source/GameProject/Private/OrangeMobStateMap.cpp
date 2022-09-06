#include "OrangeMobStateMap.h"

FOrangeMobStateMap::FOrangeMobStateMap() {
    this->WaitTimeAtPoint = 0.00f;
    this->StateAtPoint = EOrangeMobState::OBS_Idle;
    this->AnimRate = 0.00f;
    this->Speed = 0.00f;
}

