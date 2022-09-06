#pragma once
#include "CoreMinimal.h"
#include "Costume.generated.h"

USTRUCT(BlueprintType)
struct FCostume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> bCanUseCostume;
    
    GAMEPROJECT_API FCostume();
};

