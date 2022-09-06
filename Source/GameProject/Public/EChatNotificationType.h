#pragma once
#include "CoreMinimal.h"
#include "EChatNotificationType.generated.h"

UENUM(BlueprintType)
enum class EChatNotificationType : uint8 {
    Mine,
    Other,
    System,
    Max,
};

