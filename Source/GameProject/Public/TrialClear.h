#pragma once
#include "CoreMinimal.h"
#include "TrialClear.generated.h"

USTRUCT(BlueprintType)
struct FTrialClear {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> Clear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> clearlevel;
    
    GAMEPROJECT_API FTrialClear();
};

