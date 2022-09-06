#pragma once
#include "CoreMinimal.h"
#include "EBGM_Mode.generated.h"

UENUM(BlueprintType)
enum class EBGM_Mode : uint8 {
    NORMAL,
    ACTIVE,
    PASSIVE,
    EBGM_MAX UMETA(Hidden),
};

