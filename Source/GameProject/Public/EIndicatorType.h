#pragma once
#include "CoreMinimal.h"
#include "EIndicatorType.generated.h"

UENUM(BlueprintType)
enum class EIndicatorType : uint8 {
    LOAD,
    SAVE,
    SEARCH,
};

