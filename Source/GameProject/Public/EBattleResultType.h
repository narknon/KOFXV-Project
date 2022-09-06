#pragma once
#include "CoreMinimal.h"
#include "EBattleResultType.generated.h"

UENUM(BlueprintType)
enum class EBattleResultType : uint8 {
    WIN,
    LOSE,
    DRAW,
};

