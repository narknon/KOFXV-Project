#pragma once
#include "CoreMinimal.h"
#include "EBattleResult.generated.h"

UENUM(BlueprintType)
enum class EBattleResult : uint8 {
    NONE,
    PLAYER_1,
    PLAYER_2,
    DRAW,
    MAX,
};

