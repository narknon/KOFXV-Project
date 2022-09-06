#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ObjectCallback.generated.h"

UCLASS(Blueprintable)
class UObjectCallback : public UObject {
    GENERATED_BODY()
public:
    UObjectCallback();
    UFUNCTION(BlueprintCallable)
    void OnFinished();
    
};

