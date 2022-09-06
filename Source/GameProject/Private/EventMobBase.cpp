#include "EventMobBase.h"

void AEventMobBase::UpdateWatchingLocation() {
}

void AEventMobBase::StageDemoStart_Implementation() {
}

void AEventMobBase::StageDemoEnd_Implementation() {
}

void AEventMobBase::StageDemoChangeCut_Implementation(int32 cutNum) {
}

void AEventMobBase::SetMobEyeTrackType(EMobEyeTrackType Type) {
}

void AEventMobBase::OnSuperMoveAction_Implementation(EPlayerID PlayerID) {
}

void AEventMobBase::OnRoundStart_Implementation(int32 Round) {
}

void AEventMobBase::OnRoundEnd_Implementation(int32 Round) {
}

void AEventMobBase::OnPlayerOperationStart_Implementation(int32 Round) {
}

void AEventMobBase::OnMaxSuperMoveAction_Implementation(EPlayerID PlayerID) {
}

void AEventMobBase::OnClimaxSuperMoveAction_Implementation(EPlayerID PlayerID) {
}

void AEventMobBase::OnBattleWinningAction_Implementation(EPlayerID PlayerID) {
}

void AEventMobBase::OnBattleResultAnnounce_Implementation(EPlayerID PlayerID) {
}

void AEventMobBase::OnBattleDamage_Implementation(EPlayerID PlayerID) {
}

bool AEventMobBase::IsClimaxActionCombo(EPlayerID PlayerID) const {
    return false;
}

FVector AEventMobBase::GetWatchingPlayerLocation() const {
    return FVector{};
}

EMobEyeTrackType AEventMobBase::GetMobEyeTrackType() const {
    return EMobEyeTrackType::None;
}

AEventMobBase::AEventMobBase() {
    this->MobEyeTrackType = EMobEyeTrackType::Player1;
    this->EventAnimationTime = 1.00f;
    this->EventState = EEventMobState::EMS_IDLE;
}

