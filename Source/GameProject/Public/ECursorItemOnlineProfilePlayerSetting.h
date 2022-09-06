#pragma once
#include "CoreMinimal.h"
#include "ECursorItemOnlineProfilePlayerSetting.generated.h"

UENUM(BlueprintType)
enum class ECursorItemOnlineProfilePlayerSetting : uint8 {
    RankMatchRecord,
    PersonalReplay,
    ReplayWinLoss,
    ReturnDefault,
    Max,
};

