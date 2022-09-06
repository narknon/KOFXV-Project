#include "GimmickActorBase.h"
#include "SceneComponent_HC.h"

void AGimmickActorBase::SetFrameRate(uint8 newFrameRate) {
}

void AGimmickActorBase::SetActorAndComponentTickEnabled(bool bEnable) {
}

AGimmickActorBase::AGimmickActorBase() {
    this->Root = CreateDefaultSubobject<USceneComponent_HC>(TEXT("Root"));
}

