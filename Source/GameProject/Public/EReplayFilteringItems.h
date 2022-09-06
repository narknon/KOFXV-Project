#pragma once
#include "CoreMinimal.h"
#include "EReplayFilteringItems.generated.h"

UENUM(BlueprintType)
enum class EReplayFilteringItems : uint8 {
    SortSettings,
    BattleMode,
    BattleRules,
    Chara1,
    Chara2,
    Chara3,
    Default,
    MAX,
};

