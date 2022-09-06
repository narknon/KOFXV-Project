#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "L10NFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class UITOOL_API UL10NFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UL10NFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void SetCulture(const FString& cultureName);
    
    UFUNCTION(BlueprintCallable)
    static FString GetCurrentCulture();
    
    UFUNCTION(BlueprintCallable)
    static void GetCultureNames(TArray<FString>& OutCultureNames);
    
};

