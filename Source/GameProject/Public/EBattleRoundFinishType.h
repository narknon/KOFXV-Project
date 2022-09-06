#pragma once
#include "CoreMinimal.h"
#include "EBattleRoundFinishType.generated.h"

UENUM(BlueprintType)
enum class EBattleRoundFinishType : uint8 {
    KO,
    DoubleKO,
    SuperKO,
    MaxSuperKO,
    ClimaxKO,
    KezuriKO,
    TimeUP,
    Draw,
    None,
    Disconnect = 0x6,
    EBattleRoundFinishType_MAX = 0x9,
};

