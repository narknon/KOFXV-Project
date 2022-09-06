#include "EffekseerEmitterComponent.h"

class USkeletalMeshComponent;

void UEffekseerEmitterComponent::StopRoot() {
}

void UEffekseerEmitterComponent::Stop() {
}

void UEffekseerEmitterComponent::SetSkeletalMeshForBoneBindFunction(USkeletalMeshComponent* SkeletalMesh) {
}

void UEffekseerEmitterComponent::SetSearchableBoneNamesForBoneBindFunction(TArray<FName> BoneNames) {
}

void UEffekseerEmitterComponent::SetProgrammableTranlationFunc(EProgrammableTranslationFuncType transFuncType, EProgrammableTranslationLocationSpaceType locationSpace) {
}

void UEffekseerEmitterComponent::SetPlaySpeed(float newSpeed) {
}

void UEffekseerEmitterComponent::SetPlayFromBeginningFlag(bool fromBeginningFlag) {
}

void UEffekseerEmitterComponent::SetPlayerID(int32 _playerID) {
}

void UEffekseerEmitterComponent::SetParticleVisibility(bool Visibility) {
}

void UEffekseerEmitterComponent::SetParticleTargetLocation(FVector _targetLocation) {
}

void UEffekseerEmitterComponent::SetParticleSpawnFlag(bool spawnFlag) {
}

FEffekseerHandle UEffekseerEmitterComponent::Play(bool bImmediate) {
    return FEffekseerHandle{};
}

bool UEffekseerEmitterComponent::Exists() const {
    return false;
}

UEffekseerEmitterComponent::UEffekseerEmitterComponent() {
    this->bAutoDestroy = false;
    this->Effect = NULL;
    this->System = NULL;
    this->IsLooping = false;
    this->Speed = 1.00f;
    this->DynamicInput.AddDefaulted(4);
    this->system_ = NULL;
    this->RenderType = ERenderType::None_Opaque;
    this->EnableHighContrast = false;
    this->MultiplyInContrast = 0.00f;
}

