#pragma once
#include "CoreMinimal.h"
#include "EUpdateAdvInfo.generated.h"

UENUM(BlueprintType)
enum class EUpdateAdvInfo : uint8 {
    ADVANTAGE_ATTACK,
    ADVANTAGE_DAMAGE,
    ADVANTAGE_MAX UMETA(Hidden),
};

