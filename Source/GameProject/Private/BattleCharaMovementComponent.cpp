#include "BattleCharaMovementComponent.h"

UBattleCharaMovementComponent::UBattleCharaMovementComponent() {
    this->Teleport = ETeleportType::None;
    this->airHeight = 100.00f;
    this->HipsTeleportLength = 20.00f;
    this->HipsTeleportRotate = 60.00f;
    this->isPrevTeleport = false;
}

