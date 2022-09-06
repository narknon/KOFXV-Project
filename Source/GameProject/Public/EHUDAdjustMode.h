#pragma once
#include "CoreMinimal.h"
#include "EHUDAdjustMode.generated.h"

UENUM(BlueprintType)
enum class EHUDAdjustMode : uint8 {
    None,
    Top,
    Middle,
    Bottom,
    Max,
};

