#include "GameModeBattle.h"
#include "TimeSlowGameModeComponent.h"

class ACameraActor;
class APlayerCharacter;

void AGameModeBattle::UpdateWorldLights() {
}

void AGameModeBattle::UpdateFog() {
}

void AGameModeBattle::UpdateCharacterLights() {
}

void AGameModeBattle::SwitchAnnouncePPMaterial(bool bUseAbsoluteMaterial) {
}

void AGameModeBattle::StoreXVCharacterLights() {
}

void AGameModeBattle::StoreWorldLights() {
}

void AGameModeBattle::StoreBG_UE4FXData() {
}

void AGameModeBattle::StoreBG_EffekseerFXData() {
}

void AGameModeBattle::StoreBackgroundMeshData() {
}

void AGameModeBattle::StartResultFadeIn() {
}

void AGameModeBattle::StartBattleScene() {
}

void AGameModeBattle::SetLBSIkariFade(EPlayerID PlayerID, bool bFlag) {
}

void AGameModeBattle::SetFootprintRotation(float fAng) {
}

void AGameModeBattle::SetFootprintLocation(FVector vLoc) {
}





void AGameModeBattle::RestartBattleScene() {
}

void AGameModeBattle::RestartBattleRound() {
}

void AGameModeBattle::ResetWorldLights() {
}

void AGameModeBattle::ResetQualitySettings() {
}

void AGameModeBattle::ResetCharacterLights() {
}





void AGameModeBattle::LoadHighEndMob() {
}

bool AGameModeBattle::IsStageIsVisiable() const {
    return false;
}

bool AGameModeBattle::IsRoundFinished() {
    return false;
}

bool AGameModeBattle::IsHighEndConsole() {
    return false;
}

bool AGameModeBattle::IsEndResultFadeIn() {
    return false;
}

bool AGameModeBattle::IsBegan() {
    return false;
}

bool AGameModeBattle::IsBattleResultPlaying() {
    return false;
}

bool AGameModeBattle::IsBattleFinished() {
    return false;
}


FPlayerCharacterStatus AGameModeBattle::GetPlayerCharacterStatus(EPlayerID PlayerID) {
    return FPlayerCharacterStatus{};
}

APlayerCharacter* AGameModeBattle::GetPlayerCharacter(EPlayerID PlayerID) {
    return NULL;
}

FVector AGameModeBattle::GetPlayerActorLocation(EPlayerID PlayerID) {
    return FVector{};
}

int32 AGameModeBattle::GetPlayerActorHealth(EPlayerID PlayerID) {
    return 0;
}

APlayerCharacter* AGameModeBattle::GetOptionCharacter(EPlayerID PlayerID) {
    return NULL;
}

bool AGameModeBattle::GetIssenActive() {
    return false;
}

FRotator AGameModeBattle::GetCameraRotation() {
    return FRotator{};
}

FVector AGameModeBattle::GetCameraLocation() {
    return FVector{};
}

bool AGameModeBattle::GetBukitobashiActive() {
    return false;
}

ACameraActor* AGameModeBattle::GetBattleCamera() {
    return NULL;
}

void AGameModeBattle::ExitBattleScene() {
}

void AGameModeBattle::EndResultFadeIn() {
}


void AGameModeBattle::DeactivateFootprint() {
}

void AGameModeBattle::ClearWorldLights() {
}

void AGameModeBattle::ClearCharacterLights() {
}

void AGameModeBattle::ClearBG_EffekseerFXData() {
}

void AGameModeBattle::ClearBackgroundMeshData() {
}












void AGameModeBattle::ActivateFogFade(bool bFadeOut, bool bReset) {
}

AGameModeBattle::AGameModeBattle() {
    this->m_pUsingBattleCamera = NULL;
    this->MaterialCollection = NULL;
    this->RainMaterialCollection = NULL;
    this->PPVolMaterialCollection = NULL;
    this->bIsEffectInit = false;
    this->bHasEffect = false;
    this->TimeSlowGameModeComponent = CreateDefaultSubobject<UTimeSlowGameModeComponent>(TEXT("TimeSlowGameModeComponent"));
}

