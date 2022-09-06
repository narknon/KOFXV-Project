#pragma once
#include "CoreMinimal.h"
#include "EFindOptionBattleTime.generated.h"

UENUM(BlueprintType)
enum class EFindOptionBattleTime : uint8 {
    Count60,
    Count99,
    Any,
};

