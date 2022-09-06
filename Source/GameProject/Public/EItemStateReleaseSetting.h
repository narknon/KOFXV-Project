#pragma once
#include "CoreMinimal.h"
#include "EItemStateReleaseSetting.generated.h"

UENUM(BlueprintType)
enum class EItemStateReleaseSetting : uint8 {
    Release,
    IDSearchPossible,
    Private,
    Max,
};

