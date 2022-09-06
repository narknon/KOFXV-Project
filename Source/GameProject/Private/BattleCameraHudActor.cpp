#include "BattleCameraHudActor.h"
#include "Components/SceneComponent.h"

class ACameraDirector;

void ABattleCameraHudActor::UpdateParentCameraSeveralTimes() {
}

void ABattleCameraHudActor::UpdateParentCamera() {
}

void ABattleCameraHudActor::TryCalcDistanceFromOwnerCamera() {
}

void ABattleCameraHudActor::SetHudHidden(bool SetHidden) {
}

void ABattleCameraHudActor::SetCameraDirector(ACameraDirector* ref) {
}

void ABattleCameraHudActor::SetBattleHudDrawSize(FVector2D Size) {
}

void ABattleCameraHudActor::OnCameraSwitch(bool bCineCamera) {
}

void ABattleCameraHudActor::BattleCameraHudTick() {
}

void ABattleCameraHudActor::BattleCameraHudEndPlay() {
}

void ABattleCameraHudActor::BattleCameraHudBeginPlay() {
}

ABattleCameraHudActor::ABattleCameraHudActor() {
    this->Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->FlipRoot = CreateDefaultSubobject<USceneComponent>(TEXT("FlipRoot"));
    this->Distance = 0.00f;
    this->FOV = 0.00f;
    this->Width = 384.00f;
    this->CameraDirector = NULL;
    this->UpdateParentCameraCount = 0;
    this->frame = 0;
}

