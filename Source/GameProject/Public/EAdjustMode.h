#pragma once
#include "CoreMinimal.h"
#include "EAdjustMode.generated.h"

UENUM(BlueprintType)
enum class EAdjustMode : uint8 {
    HUD,
    Contrast,
    HDR,
    Max,
};

