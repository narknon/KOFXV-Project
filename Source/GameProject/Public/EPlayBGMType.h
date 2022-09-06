#pragma once
#include "CoreMinimal.h"
#include "EPlayBGMType.generated.h"

UENUM(BlueprintType)
enum class EPlayBGMType : uint8 {
    NORMAL,
    TRAINING,
    TRAINING_IM_VERSION,
};

