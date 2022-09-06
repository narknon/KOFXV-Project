#pragma once
#include "CoreMinimal.h"
#include "ERoomBattleMethod.generated.h"

UENUM(BlueprintType)
enum class ERoomBattleMethod : uint8 {
    Single,
    Team,
    Training,
};

