#pragma once
#include "CoreMinimal.h"
#include "EFindOptionBattleWinRule.generated.h"

UENUM(BlueprintType)
enum class EFindOptionBattleWinRule : uint8 {
    SetCount1,
    SetCount2,
    SetCount3,
    Any,
};

