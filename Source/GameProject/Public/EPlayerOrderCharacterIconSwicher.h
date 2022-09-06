#pragma once
#include "CoreMinimal.h"
#include "EPlayerOrderCharacterIconSwicher.generated.h"

UENUM(BlueprintType)
enum class EPlayerOrderCharacterIconSwicher : uint8 {
    POCI_normal,
    POCI_select,
    POCI_selected,
    POCI_other_select,
    POCI_other_selected,
    Num,
};

