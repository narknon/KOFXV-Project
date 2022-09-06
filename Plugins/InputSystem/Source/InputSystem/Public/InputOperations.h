#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EKeyOperation.h"
#include "InputCoreTypes.h"
#include "InputOperations.generated.h"

UCLASS(Blueprintable)
class INPUTSYSTEM_API UInputOperations : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKeyOperation, FKey> KeyOperationMap;
    
    UInputOperations();
};

