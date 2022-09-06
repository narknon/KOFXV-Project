#pragma once
#include "CoreMinimal.h"
#include "EOperationalIteamState.generated.h"

UENUM(BlueprintType)
enum class EOperationalIteamState : uint8 {
    OIS_NML,
    OIS_SEL,
    OIS_SED,
    OIS_COM,
    OIS_MAX UMETA(Hidden),
};

