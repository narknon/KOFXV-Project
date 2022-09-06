#pragma once
#include "CoreMinimal.h"
#include "ESaveDataType.generated.h"

UENUM(BlueprintType)
enum class ESaveDataType : uint8 {
    SYSTEM,
    GAME,
    REPLAY,
    ALL,
    NONE,
};

