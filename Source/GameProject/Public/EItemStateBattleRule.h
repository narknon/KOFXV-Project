#pragma once
#include "CoreMinimal.h"
#include "EItemStateBattleRule.generated.h"

UENUM(BlueprintType)
enum class EItemStateBattleRule : uint8 {
    Any,
    RemainingWin,
    BattleToHost,
    Max,
};

