#pragma once
#include "CoreMinimal.h"
#include "LevelScriptActorBattleTest.h"
#include "LevelScriptActor017HBS.generated.h"

UCLASS(Blueprintable)
class ALevelScriptActor017HBS : public ALevelScriptActorBattleTest {
    GENERATED_BODY()
public:
    ALevelScriptActor017HBS();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnStageEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartClimaxBlackout();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndClimaxBlackout();
    
};

