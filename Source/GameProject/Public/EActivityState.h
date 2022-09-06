#pragma once
#include "CoreMinimal.h"
#include "EActivityState.generated.h"

UENUM(BlueprintType)
enum class EActivityState : uint8 {
    Start,
    End_Completed,
    End_Failed,
    End_Cancelled,
    Resume,
    SetAvailability_Available,
    SetAvailability_Unavailable,
    ResetAll,
    SetAllAvailability_Available,
    SetAllAvailability_Unavailable,
    MAX,
};

