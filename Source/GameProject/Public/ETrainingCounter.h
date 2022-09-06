#pragma once
#include "CoreMinimal.h"
#include "ETrainingCounter.generated.h"

UENUM(BlueprintType)
enum class ETrainingCounter : uint8 {
    Off,
    FirstAttack,
    Random,
};

