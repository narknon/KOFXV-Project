#pragma once
#include "CoreMinimal.h"
#include "EItemStatePartyType.generated.h"

UENUM(BlueprintType)
enum class EItemStatePartyType : uint8 {
    Any,
    Fixed,
    Shuffle,
    Max,
};

