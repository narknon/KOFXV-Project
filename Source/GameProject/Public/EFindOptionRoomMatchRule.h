#pragma once
#include "CoreMinimal.h"
#include "EFindOptionRoomMatchRule.generated.h"

UENUM(BlueprintType)
enum class EFindOptionRoomMatchRule : uint8 {
    RemainingBattle,
    VSHost,
    Any,
};

