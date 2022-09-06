#pragma once
#include "CoreMinimal.h"
#include "ETrainingReversalPlayTaiming.generated.h"

UENUM(BlueprintType)
enum class ETrainingReversalPlayTaiming : uint8 {
    All,
    Down,
    Damage,
    Guard,
};

