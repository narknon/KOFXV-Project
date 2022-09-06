#pragma once
#include "CoreMinimal.h"
#include "EGameExpansionState.generated.h"

UENUM(BlueprintType)
enum class EGameExpansionState : uint8 {
    BATTLE,
    IKARI,
    DECISION,
    DEATH,
    KILL,
};

