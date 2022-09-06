#pragma once
#include "CoreMinimal.h"
#include "LevelScriptActorBattleTest.h"
#include "LevelScriptActor016LBS.generated.h"

UCLASS(Blueprintable)
class ALevelScriptActor016LBS : public ALevelScriptActorBattleTest {
    GENERATED_BODY()
public:
    ALevelScriptActor016LBS();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnStageEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartClimaxBlackout();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndClimaxBlackout();
    
};

