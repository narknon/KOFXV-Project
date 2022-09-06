#pragma once
#include "CoreMinimal.h"
#include "ESelectorOption.generated.h"

UENUM(BlueprintType)
enum class ESelectorOption : uint8 {
    NONE,
    RANDOM,
    FILTERING,
};

