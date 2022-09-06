#pragma once
#include "CoreMinimal.h"
#include "EReplayListItemWinLoss.generated.h"

UENUM(BlueprintType)
enum class EReplayListItemWinLoss : uint8 {
    Win,
    Lose,
    Draw,
    Off,
};

