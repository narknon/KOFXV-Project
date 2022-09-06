#pragma once
#include "CoreMinimal.h"
#include "ELeaderboardWindowState.generated.h"

UENUM(BlueprintType)
enum class ELeaderboardWindowState : uint8 {
    NotInited,
    FirstLoadingMyData,
    FirstLoadingRankingData,
    Ready,
    LoadingMyData,
    LoadingRankingData,
    OpenProfile,
    OpenError,
};

