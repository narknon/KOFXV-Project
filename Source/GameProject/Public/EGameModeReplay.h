#pragma once
#include "CoreMinimal.h"
#include "EGameModeReplay.generated.h"

UENUM(BlueprintType)
enum class EGameModeReplay : uint8 {
    NONE,
    GAME_MODE_RANKEDMATCH,
    GAME_MODE_CASUALMATCH,
    GAME_MODE_ROOMMATCH,
    GAME_MODE_OFFLINE,
};

