#pragma once
#include "CoreMinimal.h"
#include "ECenterMarkType.generated.h"

UENUM(BlueprintType)
enum class ECenterMarkType : uint8 {
    Rect,
    FillRect,
    Cross,
    CrossTilt,
};

