#include "BattleSkeletalMeshComponent.h"

void UBattleSkeletalMeshComponent::StopCloth(bool Value) {
}

void UBattleSkeletalMeshComponent::SkipClothSimulation(bool Value) {
}

void UBattleSkeletalMeshComponent::ResetSecondary() {
}

void UBattleSkeletalMeshComponent::ResetCloth() {
}

void UBattleSkeletalMeshComponent::ResetChain() {
}

void UBattleSkeletalMeshComponent::DisableCloth(bool Value) {
}

UBattleSkeletalMeshComponent::UBattleSkeletalMeshComponent() {
    this->m_ModelType = EModelType::Chara;
    this->m_pAssetOtraCommon = NULL;
    this->m_pAssetOtraBase = NULL;
    this->m_pAssetOtraFaceUpper = NULL;
    this->m_pAssetOtraFaceLower = NULL;
    this->m_pAssetOtraPart = NULL;
    this->m_pAssetOmir = NULL;
    this->m_pAssetOcam = NULL;
    this->m_pAssetOsec = NULL;
    this->secondaryType = ESecondaryType::Normal;
    this->bWindEnabled = false;
    this->calcCharaBone = false;
}

