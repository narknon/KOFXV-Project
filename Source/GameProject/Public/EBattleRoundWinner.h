#pragma once
#include "CoreMinimal.h"
#include "EBattleRoundWinner.generated.h"

UENUM(BlueprintType)
enum class EBattleRoundWinner : uint8 {
    Player1,
    Player2,
    Draw,
    None,
};

