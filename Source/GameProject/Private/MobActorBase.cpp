#include "MobActorBase.h"
#include "SkeletalMeshComponent_HC.h"
#include "SceneComponent_HC.h"
#include "ArrowComponent_HC.h"
#include "StaticMeshComponent_HC.h"

void AMobActorBase::SetFrameRate(uint8 newFrameRate) {
}

void AMobActorBase::SetActorAndChildTickInterval(float TickInterval) {
}

void AMobActorBase::SetActorAndChildEnableTick(bool bEnable) {
}

void AMobActorBase::InitStartTimeByRandom() {
}

float AMobActorBase::GetMobTickInterval() const {
    return 0.0f;
}

EOrangeMobState AMobActorBase::GetMobState() const {
    return EOrangeMobState::OBS_Idle;
}

float AMobActorBase::GetMobSpeed() const {
    return 0.0f;
}

float AMobActorBase::GetMobAnimRate() const {
    return 0.0f;
}

AMobActorBase::AMobActorBase() {
    this->Root = CreateDefaultSubobject<USceneComponent_HC>(TEXT("Root"));
    this->MoveableRoot = CreateDefaultSubobject<UArrowComponent_HC>(TEXT("MoveableRoot"));
    this->SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent_HC>(TEXT("SkeletalMesh"));
    this->ShadowMesh = CreateDefaultSubobject<UStaticMeshComponent_HC>(TEXT("ShadowMesh"));
    this->bFakeShadow = false;
    this->bLoop = true;
    this->MinInitDelayTime = 0.00f;
    this->MaxInitDelayTime = 0.00f;
    this->StartTimeByRandom = 0.00f;
}

