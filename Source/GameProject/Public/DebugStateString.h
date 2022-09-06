#pragma once
#include "CoreMinimal.h"
#include "DebugStateString.generated.h"

USTRUCT(BlueprintType)
struct FDebugStateString {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 debugNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> stateNames;
    
    GAMEPROJECT_API FDebugStateString();
};

