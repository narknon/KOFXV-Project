#pragma once
#include "CoreMinimal.h"
#include "EAttackDataHUDState.generated.h"

UENUM(BlueprintType)
enum class EAttackDataHUDState : uint8 {
    COLLAPSED,
    EXECUTE_COLLAPSED,
    VISIBLE,
    EXECUTE_VISIBLE,
};

