#pragma once
#include "CoreMinimal.h"
#include "EGameOptionBattleWinRule.generated.h"

UENUM(BlueprintType)
enum class EGameOptionBattleWinRule : uint8 {
    SetCount1,
    SetCount2,
    SetCount3,
    SingleMax,
    SetCount5,
    SetTeam,
    PartyVS,
};

