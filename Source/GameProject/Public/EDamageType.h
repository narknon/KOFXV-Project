#pragma once
#include "CoreMinimal.h"
#include "EDamageType.generated.h"

UENUM(BlueprintType)
enum class EDamageType : uint8 {
    NONE,
    LOW,
    HI,
    FUKITOBASI,
    THROW,
    SPECIAL,
    EX_SPECIAL,
    SUPER_SP,
    MAX_SUPER_SP,
    CLIMAX_SP,
    MAX,
};

