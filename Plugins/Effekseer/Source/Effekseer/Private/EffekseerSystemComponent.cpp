#include "EffekseerSystemComponent.h"

class UEffekseerEffect;

void UEffekseerSystemComponent::StopRoot(FEffekseerHandle Handle) {
}

void UEffekseerSystemComponent::StopNetwork() {
}

void UEffekseerSystemComponent::Stop(FEffekseerHandle Handle) {
}

void UEffekseerSystemComponent::StartNetwork() {
}

void UEffekseerSystemComponent::SetTargetLocation(FEffekseerHandle Handle, const FVector& _targetLocation) {
}

void UEffekseerSystemComponent::SetParticleVisibility(FEffekseerHandle Handle, bool Visibility) {
}

void UEffekseerSystemComponent::SetParticleSpawnFlag(FEffekseerHandle Handle, bool spawnFlag) {
}

void UEffekseerSystemComponent::SetEffectSpeed(FEffekseerHandle Handle, float Speed) {
}

void UEffekseerSystemComponent::SetEffectScaling(FEffekseerHandle Handle, FVector Scaling) {
}

void UEffekseerSystemComponent::SetEffectRotation(FEffekseerHandle Handle, FQuat Rotation) {
}

void UEffekseerSystemComponent::SetEffectPosition(FEffekseerHandle Handle, FVector Position) {
}

void UEffekseerSystemComponent::SetEffectDynamicInput(FEffekseerHandle Handle, int32 Index, float Value) {
}

void UEffekseerSystemComponent::SetEffectAllColor(FEffekseerHandle Handle, FColor Color) {
}

void UEffekseerSystemComponent::SetAllParticleVisibility(bool Visibility) {
}

FEffekseerHandle UEffekseerSystemComponent::Play(UEffekseerEffect* Effect, FEfkEmitterSpawnParameterHolder emitterSpawnParamHolder, bool bImmediate) {
    return FEffekseerHandle{};
}

bool UEffekseerSystemComponent::Exists(FEffekseerHandle Handle) const {
    return false;
}

UEffekseerSystemComponent::UEffekseerSystemComponent() {
    this->MaxSprite = 10000;
    this->OpaqueMaterial = NULL;
    this->TranslucentMaterial = NULL;
    this->AdditiveMaterial = NULL;
    this->SubtractiveMaterial = NULL;
    this->ModulateMaterial = NULL;
    this->Lighting_Opaque_Material = NULL;
    this->Lighting_Translucent_Material = NULL;
    this->Lighting_Additive_Material = NULL;
    this->DistortionTranslucentMaterial = NULL;
    this->DistortionAdditiveMaterial = NULL;
    this->Opaque_DD_Material = NULL;
    this->Translucent_DD_Material = NULL;
    this->Additive_DD_Material = NULL;
    this->Subtractive_DD_Material = NULL;
    this->Modulate_DD_Material = NULL;
    this->DistortionTranslucent_DD_Material = NULL;
    this->DistortionAdditive_DD_Material = NULL;
    this->NetworkPort = 60000;
    this->DoStartNetworkAutomatically = false;
}

