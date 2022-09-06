#pragma once
#include "CoreMinimal.h"
#include "ERoomBattleDaisu.generated.h"

UENUM(BlueprintType)
enum class ERoomBattleDaisu : uint8 {
    Any,
    TEAM2ON2,
    TEAM3ON3,
    TEAM5ON5,
};

