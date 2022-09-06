#pragma once
#include "CoreMinimal.h"
#include "PlayerStoryInfo.generated.h"

USTRUCT(BlueprintType)
struct FPlayerStoryInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 iLife;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 iPowerGauge;
    
    GAMEPROJECT_API FPlayerStoryInfo();
};

