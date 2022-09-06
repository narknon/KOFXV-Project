#pragma once
#include "CoreMinimal.h"
#include "StageUnlock.generated.h"

USTRUCT(BlueprintType)
struct FStageUnlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> Lock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> newmark;
    
    GAMEPROJECT_API FStageUnlock();
};

