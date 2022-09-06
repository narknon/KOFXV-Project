#pragma once
#include "CoreMinimal.h"
#include "EMobEventMontageType.generated.h"

UENUM(BlueprintType)
enum class EMobEventMontageType : uint8 {
    Idle,
    EventBlock,
    Event,
    Win_Host,
    Lose_Host,
    Hit_Host,
    Hit_Guest,
    MAX,
};

