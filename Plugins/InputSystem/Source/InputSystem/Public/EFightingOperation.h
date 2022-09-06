#pragma once
#include "CoreMinimal.h"
#include "EFightingOperation.generated.h"

UENUM(BlueprintType)
enum class EFightingOperation : uint8 {
    Dir_U,
    Dir_D,
    Dir_L,
    Dir_R,
    LP,
    HP,
    LK,
    HK,
    REC,
    PLAY,
    REPEAT,
    RESTART,
    PROVOCATION,
    MAX,
};

