#pragma once
#include "CoreMinimal.h"
#include "ETrainingVital.generated.h"

UENUM(BlueprintType)
enum class ETrainingVital : uint8 {
    Normal,
    AutoRecovery,
    AlwaysMax,
};

