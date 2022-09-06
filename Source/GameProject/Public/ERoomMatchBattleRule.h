#pragma once
#include "CoreMinimal.h"
#include "ERoomMatchBattleRule.generated.h"

UENUM(BlueprintType)
enum class ERoomMatchBattleRule : uint8 {
    RemainingBattle,
    VSHost,
};

