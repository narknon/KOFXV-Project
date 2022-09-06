#pragma once
#include "CoreMinimal.h"
#include "EDamageAttribute.generated.h"

UENUM(BlueprintType)
enum class EDamageAttribute : uint8 {
    NORMAL,
    RED_FIRE,
    BLUE_FIRE,
    GREEN_FIRE,
    PURPLE_FIRE,
    BLUE_ELECTRO,
    PURPLE_ELECTRO,
    COLD,
    RED_AURA,
    BLUE_AURA,
    RED_BLUE_AURA,
};

