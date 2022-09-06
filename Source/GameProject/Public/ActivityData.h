#pragma once
#include "CoreMinimal.h"
#include "ActivityData.generated.h"

USTRUCT(BlueprintType)
struct FActivityData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 sStoryWinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 sTotalScore;
    
public:
    GAMEPROJECT_API FActivityData();
};

