#pragma once
#include "CoreMinimal.h"
#include "EGameOptionBattleTime.generated.h"

UENUM(BlueprintType)
enum class EGameOptionBattleTime : uint8 {
    Count60,
    Count99,
    Infinity,
    Count5,
    Count1,
    Max,
};

