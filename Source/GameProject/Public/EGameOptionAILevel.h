#pragma once
#include "CoreMinimal.h"
#include "EGameOptionAILevel.generated.h"

UENUM(BlueprintType)
enum class EGameOptionAILevel : uint8 {
    VeryEasy,
    Easy,
    Normal,
    Hard,
    VeryHard,
    Max,
};

