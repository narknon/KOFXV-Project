#pragma once
#include "CoreMinimal.h"
#include "EReplayFilteringBattleMode.generated.h"

UENUM(BlueprintType)
enum class EReplayFilteringBattleMode : uint8 {
    None,
    RankMatch,
    CasualMatch,
    RoomMatch,
    OffLine,
    MAX,
};

