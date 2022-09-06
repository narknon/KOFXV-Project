#pragma once
#include "CoreMinimal.h"
#include "EBlackoutAttr.generated.h"

UENUM(BlueprintType)
enum class EBlackoutAttr : uint8 {
    Reset,
    Normal,
    Restart,
};

