#pragma once
#include "CoreMinimal.h"
#include "ERoomMatchSeatType.generated.h"

UENUM(BlueprintType)
enum class ERoomMatchSeatType : uint8 {
    SpectateOnly,
    DuringBreak,
    SittingBattleSeat,
    SittingWaitingSeat,
    Default = 0x0,
    ERoomMatchSeatType_MAX = 0x4,
};

