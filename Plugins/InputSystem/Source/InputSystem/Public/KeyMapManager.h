#pragma once
#include "CoreMinimal.h"
#include "UserInputState.h"
#include "UObject/Object.h"
#include "EDummyInputType.h"
#include "KeyMapManager.generated.h"

UCLASS(Blueprintable)
class INPUTSYSTEM_API UKeyMapManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FUserInputState KeyMapDataArray[4];
    
    UPROPERTY(EditAnywhere)
    EDummyInputType DummyInputTypeArray[4];
    
    UKeyMapManager();
};

