#pragma once
#include "CoreMinimal.h"
#include "EGuidePosition.generated.h"

UENUM(BlueprintType)
enum class EGuidePosition : uint8 {
    Left,
    Center,
    Right,
    MAX,
    NONE,
};

