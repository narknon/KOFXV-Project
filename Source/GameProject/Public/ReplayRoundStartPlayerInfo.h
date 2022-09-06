#pragma once
#include "CoreMinimal.h"
#include "ReplayRoundStartPlayerInfo.generated.h"

USTRUCT(BlueprintType)
struct FReplayRoundStartPlayerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Vital;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PowerGauge;
    
    GAMEPROJECT_API FReplayRoundStartPlayerInfo();
};

