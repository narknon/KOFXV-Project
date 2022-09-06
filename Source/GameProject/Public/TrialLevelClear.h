#pragma once
#include "CoreMinimal.h"
#include "TrialLevelClear.generated.h"

USTRUCT(BlueprintType)
struct FTrialLevelClear {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> clearlevel;
    
    GAMEPROJECT_API FTrialLevelClear();
};

