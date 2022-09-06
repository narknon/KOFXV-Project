#pragma once
#include "CoreMinimal.h"
#include "EWaitingSeatSwitcherType.generated.h"

UENUM(BlueprintType)
enum class EWaitingSeatSwitcherType : uint8 {
    None,
    Seated,
    Max,
};

