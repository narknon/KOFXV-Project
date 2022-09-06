#pragma once
#include "CoreMinimal.h"
#include "ReplayRoundEndPlayerInfo.generated.h"

USTRUCT(BlueprintType)
struct FReplayRoundEndPlayerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Vital;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PowerGauge;
    
    GAMEPROJECT_API FReplayRoundEndPlayerInfo();
};

