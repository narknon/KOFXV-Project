#pragma once
#include "CoreMinimal.h"
#include "EReplaySwitcherPlaybackMode.generated.h"

UENUM(BlueprintType)
enum class EReplaySwitcherPlaybackMode : uint8 {
    Stop,
    Play,
    Double,
    Fourfold,
    Max,
};

