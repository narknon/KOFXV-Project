#include "GroupMobBase.h"
#include "SkeletalMeshComponent_HC.h"
#include "SceneComponent_HC.h"
#include "Components/CapsuleComponent.h"
#include "ArrowComponent_HC.h"

bool AGroupMobBase::isMobMoving() {
    return false;
}

AGroupMobBase::AGroupMobBase() {
    this->Root = CreateDefaultSubobject<USceneComponent_HC>(TEXT("Root"));
    this->CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComponent"));
    this->MoveableRoot = CreateDefaultSubobject<UArrowComponent_HC>(TEXT("MoveableRoot"));
    this->SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent_HC>(TEXT("SkeletalMesh"));
}

