#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UiParticleEffectManager.generated.h"

UCLASS(Blueprintable)
class GAMEPROJECT_API AUiParticleEffectManager : public AActor {
    GENERATED_BODY()
public:
    AUiParticleEffectManager();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnSceneChangeParticleEvent();
    
};

