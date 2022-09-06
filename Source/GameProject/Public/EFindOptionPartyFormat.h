#pragma once
#include "CoreMinimal.h"
#include "EFindOptionPartyFormat.generated.h"

UENUM(BlueprintType)
enum class EFindOptionPartyFormat : uint8 {
    Fixed,
    Shuffle,
    Any,
};

