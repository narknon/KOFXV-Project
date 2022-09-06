#pragma once
#include "CoreMinimal.h"
#include "EBossChallengeRewardType.generated.h"

UENUM(BlueprintType)
enum class EBossChallengeRewardType : uint8 {
    None,
    Stage,
    BGM,
    Costume,
    NetworkTitle,
    MAX,
};

