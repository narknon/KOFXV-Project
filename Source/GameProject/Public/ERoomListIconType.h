#pragma once
#include "CoreMinimal.h"
#include "ERoomListIconType.generated.h"

UENUM(BlueprintType)
enum class ERoomListIconType : uint8 {
    MemSel,
    Rule,
    Consecutive,
    Time,
    RoundCount,
    Substitute,
    Format,
    Max,
};

