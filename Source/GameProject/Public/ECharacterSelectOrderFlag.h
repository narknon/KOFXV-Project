#pragma once
#include "CoreMinimal.h"
#include "ECharacterSelectOrderFlag.generated.h"

UENUM(BlueprintType)
enum class ECharacterSelectOrderFlag : uint8 {
    MSOF_Unselected,
    MSOF_Selecting,
    MSOF_Seled,
    MSOF_Indicator,
    MSOF_Completed,
    MSOF_MAX UMETA(Hidden),
};

