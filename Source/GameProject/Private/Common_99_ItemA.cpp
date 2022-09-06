#include "Common_99_ItemA.h"

void UCommon_99_ItemA::UpdateSwitcherIndex_Implementation(EIteamStateA99 Value) {
}

void UCommon_99_ItemA::SetLastState(EIteamStateA99 NewState) {
}

float UCommon_99_ItemA::GetUnselOpacity() const {
    return 0.0f;
}

EIteamStateA99 UCommon_99_ItemA::GetLastState() const {
    return EIteamStateA99::ISA99_NML;
}

UCommon_99_ItemA::UCommon_99_ItemA() {
    this->LastState = EIteamStateA99::ISA99_NML;
    this->InfoWaitTime = 0.50f;
    this->bInfoText = false;
    this->bInfoText_Active = false;
    this->UnselOpacity = 0.50f;
}

