#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CIBlueprintFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class GAMEPROJECT_API UCIBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCIBlueprintFunctionLibrary();
private:
    UFUNCTION(BlueprintCallable)
    static bool isAutoSelectMode();
    
};

