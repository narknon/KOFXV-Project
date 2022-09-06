#pragma once
#include "CoreMinimal.h"
#include "EAddContentsType.generated.h"

UENUM(BlueprintType)
enum class EAddContentsType : uint8 {
    CHARACTER,
    SOUND,
    ARTWORK,
    MOVIE,
    COSTUME,
    COLOR,
    STAGE,
    MAX,
};

