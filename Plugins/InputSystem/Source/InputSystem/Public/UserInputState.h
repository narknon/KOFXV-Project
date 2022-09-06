#pragma once
#include "CoreMinimal.h"
#include "KeyMap.h"
#include "UserInputState.generated.h"

class UInputOperations;

USTRUCT(BlueprintType)
struct FUserInputState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKeyMap KeyMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputOperations* InputOperations;
    
    INPUTSYSTEM_API FUserInputState();
};

