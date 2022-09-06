#pragma once
#include "CoreMinimal.h"
#include "ETrainingRecordingType.generated.h"

UENUM(BlueprintType)
enum class ETrainingRecordingType : uint8 {
    Normal,
    Reversal,
    Max,
};

