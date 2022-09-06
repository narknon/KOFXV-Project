#pragma once
#include "CoreMinimal.h"
#include "EReplayInfoItem.generated.h"

UENUM(BlueprintType)
enum class EReplayInfoItem : uint8 {
    SaveAndPlayReplay,
    Upload,
    CheckThePlayer1,
    CheckThePlayer2,
    Max,
};

