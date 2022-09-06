#pragma once
#include "CoreMinimal.h"
#include "ERankArea.generated.h"

UENUM(BlueprintType)
enum class ERankArea : uint8 {
    Any,
    Asia,
    CentralAsia,
    Africa,
    Oceania,
    Russia,
    Europe,
    EasternEurope,
    MiddleEast,
    LatinAmerica,
    CentralAmerica,
    NorthAmerica,
    Antarctic,
    Other,
    MAX,
};

