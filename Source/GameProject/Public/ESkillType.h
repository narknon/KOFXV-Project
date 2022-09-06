#pragma once
#include "CoreMinimal.h"
#include "ESkillType.generated.h"

UENUM(BlueprintType)
enum class ESkillType : uint8 {
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
    SHUTTER_STRIKE,
    _MAX UMETA(Hidden),
};

