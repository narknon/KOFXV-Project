#pragma once
#include "CoreMinimal.h"
#include "EItemStateBattleMode.generated.h"

UENUM(BlueprintType)
enum class EItemStateBattleMode : uint8 {
    Any,
    TeamVS,
    SingleVS,
    PartyVS,
    DraftVS,
    Max,
};

