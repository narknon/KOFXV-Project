#include "BattleHudBase.h"

void UBattleHudBase::setUserWidgetPaused(bool paused) {
}

bool UBattleHudBase::getUserWidgetPaused() const {
    return false;
}

float UBattleHudBase::GetGameUiSpeed() const {
    return 0.0f;
}

void UBattleHudBase::GamePlaySpeedChange(int32 Speed) {
}

UBattleHudBase::UBattleHudBase() {
    this->bPaused = false;
    this->GameUiSpeed = 1.00f;
}

