#pragma once
#include "CoreMinimal.h"
#include "EOrangeMobState.generated.h"

UENUM(BlueprintType)
enum class EOrangeMobState : uint8 {
    OBS_Idle,
    OBS_Move,
    OBS_Performance,
    OBS_Event,
    OBS_MAX UMETA(Hidden),
};

