#include "PlayerCharacter.h"

class USkeletalMeshComponent;

void APlayerCharacter::SwitchToTrans() {
}

void APlayerCharacter::SwitchToOpaque() {
}

void APlayerCharacter::SwitchToMudMats() {
}

void APlayerCharacter::SwitchToFXMats() {
}

void APlayerCharacter::SwitchOffMudMats() {
}

void APlayerCharacter::SwitchOffFXMats() {
}

void APlayerCharacter::SetDamageFXFadeValue(const float fVal) {
}

void APlayerCharacter::SetBlackoutOn(const bool bVal) {
}

float APlayerCharacter::GetDamageFXFadeValue() const {
    return 0.0f;
}

ECharacterID APlayerCharacter::GetCharID() {
    return ECharacterID::NONE;
}

ECostumeType APlayerCharacter::GetCharCostumeType() {
    return ECostumeType::Standard;
}

USkeletalMeshComponent* APlayerCharacter::GetCharacterMesh() {
    return NULL;
}

bool APlayerCharacter::GetBlackoutOn() const {
    return false;
}


APlayerCharacter::APlayerCharacter() {
    this->MudMaterial = NULL;
    this->DynMudMaterial = NULL;
    this->StartSweatTime = 0.00f;
    this->RenderLane = ERenderLaneEnum::ERL_PLAYER_BACK;
    this->bUseDepthStencil = true;
    this->LeftEyeBoneIndex = -1;
    this->RightEyeBoneIndex = -1;
    this->LeftEyeLightPitchMayaX = -15.00f;
    this->LeftEyeLightYawMayaY = -15.00f;
    this->RightEyeLightPitchMayaX = -15.00f;
    this->RightEyeLightYawMayaY = -15.00f;
    this->blackoutOn = false;
    this->FadeSpeed = 0.50f;
    this->DamageFXFadeTime = 1.00f;
    this->LBSHornEffectSpeed = 1.00f;
    this->LBSHornNormalBoneCount = 9;
    this->LBSHornLongBoneCount = 25;
    this->LBSHandEffectSpeed = 2.40f;
    this->LBSIkariFadeInSpeed = 1.00f;
    this->LBSIkariFadeOutSpeed = 1.00f;
    this->VFXReferencedTexture = NULL;
    this->SpecialModePulseSpeed = 3.00f;
    this->EffectRimEdgeMin = 0.00f;
    this->EffectRimEdgeMax = 0.90f;
    this->EffectClampMin = 0.10f;
    this->EffectStepMin = 0.00f;
    this->EffectStepMax = 0.70f;
    this->EffectBrightness = 1.00f;
    this->EffectContrast = 0.70f;
    this->EffectBaseColBlendVal = 0.70f;
    this->SubCharacterID = ECharacterID::NONE;
}

