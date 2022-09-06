#pragma once
#include "CoreMinimal.h"
#include "EOptionItemState.generated.h"

UENUM(BlueprintType)
enum class EOptionItemState : uint8 {
    Nml,
    Sel,
    Seled,
    Unsel,
};

