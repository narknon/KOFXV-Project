#pragma once
#include "CoreMinimal.h"
#include "EGayaSEID.generated.h"

UENUM(BlueprintType)
enum class EGayaSEID : uint8 {
    UP_GAYA1,
    UP_GAYA2,
    UP_GAYA3,
    UP_GAYA4,
    DOWN_GAYA1,
    DOWN_GAYA2,
    DOWN_GAYA3,
    DOWN_GAYA4,
    LEFT_GAYA1,
    LEFT_GAYA2,
    LEFT_GAYA3,
    LEFT_GAYA4,
    RIGHT_GAYA1,
    RIGHT_GAYA2,
    RIGHT_GAYA3,
    RIGHT_GAYA4,
    MAX,
};

