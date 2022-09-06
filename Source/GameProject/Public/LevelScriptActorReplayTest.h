#pragma once
#include "CoreMinimal.h"
#include "InputBaseLevelScriptActor.h"
#include "LevelScriptActorReplayTest.generated.h"

class UDebugBaseWidget;

UCLASS(Blueprintable)
class ALevelScriptActorReplayTest : public AInputBaseLevelScriptActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UDebugBaseWidget* TestWidget;
    
    ALevelScriptActorReplayTest();
};

