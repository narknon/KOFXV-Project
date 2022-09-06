#pragma once
#include "CoreMinimal.h"
#include "SOUND_BANK_TYPE.generated.h"

UENUM(BlueprintType)
enum class SOUND_BANK_TYPE : uint8 {
    RESIDENT,
    COMMON,
    CHARACTER,
    WINNER,
    SOUND_BANK_MAX UMETA(Hidden),
};

