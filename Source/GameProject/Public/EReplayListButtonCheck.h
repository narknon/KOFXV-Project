#pragma once
#include "CoreMinimal.h"
#include "EReplayListButtonCheck.generated.h"

UENUM(BlueprintType)
enum class EReplayListButtonCheck : uint8 {
    None,
    AllCheck,
    AllCheckHoldL2Button,
    AllCheckHoldSqButton,
    Delete,
    Check,
};

