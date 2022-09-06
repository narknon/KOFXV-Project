#pragma once
#include "CoreMinimal.h"
#include "EReplayFilteringBattleRules.generated.h"

UENUM(BlueprintType)
enum class EReplayFilteringBattleRules : uint8 {
    None,
    TeamVS,
    SingleVS,
    DraftVS,
    MAX,
};

