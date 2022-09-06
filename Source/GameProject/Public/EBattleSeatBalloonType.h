#pragma once
#include "CoreMinimal.h"
#include "EBattleSeatBalloonType.generated.h"

UENUM(BlueprintType)
enum class EBattleSeatBalloonType : uint8 {
    Hidden,
    Sub,
    OK,
    Max,
};

