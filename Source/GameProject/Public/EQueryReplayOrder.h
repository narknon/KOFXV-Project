#pragma once
#include "CoreMinimal.h"
#include "EQueryReplayOrder.generated.h"

UENUM(BlueprintType)
enum class EQueryReplayOrder : uint8 {
    RANK_HIGH,
    RANK_LOW,
    DATE_NEW,
    DATE_OLD,
};

