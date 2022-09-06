#pragma once
#include "CoreMinimal.h"
#include "EPlaySoundType.generated.h"

UENUM(BlueprintType)
enum class EPlaySoundType : uint8 {
    NONE,
    COMMON,
    SE,
    VOICE,
    MAX,
};

