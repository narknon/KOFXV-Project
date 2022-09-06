#pragma once
#include "CoreMinimal.h"
#include "EItemStateTime.generated.h"

UENUM(BlueprintType)
enum class EItemStateTime : uint8 {
    Any,
    Count60,
    Count99,
    Max,
};

