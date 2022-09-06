#include "SequenceMobActorBase.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"

void ASequenceMobActorBase::SetMobState(EOrangeMobState MobState) {
}

void ASequenceMobActorBase::InitializeSequnence() {
}

void ASequenceMobActorBase::GetMobState(EOrangeMobState& MobState) const {
}


ASequenceMobActorBase::ASequenceMobActorBase() {
    this->Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Body = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Body"));
    this->LevelSequenceLoop = NULL;
    this->LevelSequenceActorLoop = NULL;
    this->LevelSequencePlayerLoop = NULL;
    this->LevelSequenceTrigger = NULL;
    this->LevelSequenceActorTrigger = NULL;
    this->LevelSequencePlayerTrigger = NULL;
    this->MinDelay = 0.00f;
    this->MaxDelay = 1.00f;
    this->bLoop = true;
}

