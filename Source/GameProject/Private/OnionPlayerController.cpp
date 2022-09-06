#include "OnionPlayerController.h"

bool AOnionPlayerController::IsDisconnectStatusTripped() {
    return false;
}

AOnionPlayerController::AOnionPlayerController() {
    this->CachedProfileCountry = -1;
    this->Avatar = NULL;
}

