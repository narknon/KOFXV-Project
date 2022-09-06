#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LevelScriptActorBattleTest.h"
#include "LevelScriptActor004WTF.generated.h"

UCLASS(Blueprintable)
class ALevelScriptActor004WTF : public ALevelScriptActorBattleTest {
    GENERATED_BODY()
public:
    ALevelScriptActor004WTF();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnStageEffect(FVector Offset);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartClimaxBlackout();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndClimaxBlackout();
    
};

