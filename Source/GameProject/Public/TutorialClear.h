#pragma once
#include "CoreMinimal.h"
#include "TutorialClear.generated.h"

USTRUCT(BlueprintType)
struct FTutorialClear {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> Clear;
    
    GAMEPROJECT_API FTutorialClear();
};

