#pragma once
#include "CoreMinimal.h"
#include "ECheckOnlineResult.generated.h"

UENUM(BlueprintType)
enum class ECheckOnlineResult : uint8 {
    Successful,
    NotDisplayFailed,
    NetworkFailed,
};

