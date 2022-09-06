#pragma once
#include "CoreMinimal.h"
#include "EDrawKeyHistory.generated.h"

UENUM(BlueprintType)
enum class EDrawKeyHistory : uint8 {
    NONE,
    LEFT_ONLY,
    RIGHT_ONLY,
    MODE_RIGHT_ONLY,
    ALL,
    ALL_WITH_PLAYER2,
};

