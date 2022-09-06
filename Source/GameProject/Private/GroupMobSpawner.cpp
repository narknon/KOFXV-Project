#include "GroupMobSpawner.h"
#include "StaticMeshComponent_HC.h"

void AGroupMobSpawner::WorkOrder() {
}



AGroupMobSpawner::AGroupMobSpawner() {
    this->AreaComponent = CreateDefaultSubobject<UStaticMeshComponent_HC>(TEXT("Area"));
    this->SpawnClass = NULL;
    this->SpawnNum = 3;
    this->MinRandomTime = 1.00f;
    this->MaxRandomTime = 3.00f;
    this->ExecuteCommandProbability = 0.50f;
    this->IdleAnimRate = 1.00f;
    this->BaseSpeed = 200.00f;
    this->MinSpeed = 100.00f;
    this->MaxSpeed = 300.00f;
}

