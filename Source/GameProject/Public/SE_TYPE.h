#pragma once
#include "CoreMinimal.h"
#include "SE_TYPE.generated.h"

UENUM(BlueprintType)
enum class SE_TYPE : uint8 {
    ACTION,
    ATTACK,
    SHOT,
    SE_MAX UMETA(Hidden),
};

