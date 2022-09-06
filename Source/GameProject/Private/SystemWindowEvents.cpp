#include "SystemWindowEvents.h"

FSystemWindowEvents::FSystemWindowEvents() {
    this->SystemWindowID = ESystemWindowID::NONE;
    this->SystemWindowPriority = ESystemWindowPriority::Other;
    this->OpenPlayerID = EPlayerID::Player1;
}

