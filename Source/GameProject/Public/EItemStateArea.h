#pragma once
#include "CoreMinimal.h"
#include "EItemStateArea.generated.h"

UENUM(BlueprintType)
enum class EItemStateArea : uint8 {
    Same,
    All,
    Max,
};

