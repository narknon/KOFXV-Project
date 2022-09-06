#pragma once
#include "CoreMinimal.h"
#include "ESensekiLogEntry.generated.h"

UENUM(BlueprintType)
enum class ESensekiLogEntry : uint8 {
    Empty,
    Win,
    Lose,
    Tie,
    MAX,
};

