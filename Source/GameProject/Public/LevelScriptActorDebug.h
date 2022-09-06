#pragma once
#include "CoreMinimal.h"
#include "InputBaseLevelScriptActor.h"
#include "LevelScriptActorDebug.generated.h"

class UCppDebugMenuWidget;

UCLASS(Blueprintable)
class ALevelScriptActorDebug : public AInputBaseLevelScriptActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugMenuOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCppDebugMenuWidget* DebugMenuWidget;
    
    ALevelScriptActorDebug();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTouchPadAction();
    
};

