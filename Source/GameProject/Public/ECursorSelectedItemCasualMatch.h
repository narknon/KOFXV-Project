#pragma once
#include "CoreMinimal.h"
#include "ECursorSelectedItemCasualMatch.generated.h"

UENUM(BlueprintType)
enum class ECursorSelectedItemCasualMatch : uint8 {
    OpponentRank,
    LineSpeed,
    Area,
    Default,
    StartSearch,
    StandByInTraining,
    Max,
};

