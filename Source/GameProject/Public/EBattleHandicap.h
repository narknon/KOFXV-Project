#pragma once
#include "CoreMinimal.h"
#include "EBattleHandicap.generated.h"

UENUM(BlueprintType)
enum class EBattleHandicap : uint8 {
    Level1,
    Level2,
    Level3,
    Level4,
    Level5,
    Default = 0x2,
    EBattleHandicap_MAX = 0x5,
};

