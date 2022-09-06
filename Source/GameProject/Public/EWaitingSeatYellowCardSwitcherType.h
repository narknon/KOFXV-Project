#pragma once
#include "CoreMinimal.h"
#include "EWaitingSeatYellowCardSwitcherType.generated.h"

UENUM(BlueprintType)
enum class EWaitingSeatYellowCardSwitcherType : uint8 {
    None,
    YellowCard,
    Max,
};

