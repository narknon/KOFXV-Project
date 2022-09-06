#pragma once
#include "CoreMinimal.h"
#include "EEventMobState.generated.h"

UENUM(BlueprintType)
enum class EEventMobState : uint8 {
    EMS_IDLE,
    EMS_SMVA,
    EMS_MSMA,
    EMS_CSMA,
    EMS_MAX UMETA(Hidden),
};

