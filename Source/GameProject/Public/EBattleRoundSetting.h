#pragma once
#include "CoreMinimal.h"
#include "EBattleRoundSetting.generated.h"

UENUM(BlueprintType)
enum class EBattleRoundSetting : uint8 {
    FirstRound,
    NextRound,
    PrevRound,
    ReRound,
    None,
};

