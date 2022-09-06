#pragma once
#include "CoreMinimal.h"
#include "ERoomCountDownStatus.generated.h"

UENUM(BlueprintType)
enum class ERoomCountDownStatus : uint8 {
    None,
    CountDown,
    CountEnd,
    CountBattle,
};

