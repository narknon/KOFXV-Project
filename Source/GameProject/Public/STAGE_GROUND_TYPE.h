#pragma once
#include "CoreMinimal.h"
#include "STAGE_GROUND_TYPE.generated.h"

UENUM(BlueprintType)
enum class STAGE_GROUND_TYPE : uint8 {
    SAND,
    GRASS,
    MUD,
    LAND,
    WOOD,
    STONE,
    CARPET,
    SUSUKI,
    DECK,
    SNOW,
    STAGE_GROUND_MAX UMETA(Hidden),
};

