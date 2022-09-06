#pragma once
#include "CoreMinimal.h"
#include "ECursorSelectedItemRankMatch.generated.h"

UENUM(BlueprintType)
enum class ECursorSelectedItemRankMatch : uint8 {
    OpponentRank,
    LineSpeed,
    Area,
    Default,
    StartSearch,
    ModeDescription,
    StandByInTraining,
    Max,
};

