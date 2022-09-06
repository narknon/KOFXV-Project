#pragma once
#include "CoreMinimal.h"
#include "EItemStateRoundMax.generated.h"

UENUM(BlueprintType)
enum class EItemStateRoundMax : uint8 {
    Any,
    Count1,
    Count3,
    Count5,
    Max,
};

