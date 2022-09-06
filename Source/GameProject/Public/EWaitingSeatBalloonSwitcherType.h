#pragma once
#include "CoreMinimal.h"
#include "EWaitingSeatBalloonSwitcherType.generated.h"

UENUM(BlueprintType)
enum class EWaitingSeatBalloonSwitcherType : uint8 {
    None,
    You,
    Max,
};

