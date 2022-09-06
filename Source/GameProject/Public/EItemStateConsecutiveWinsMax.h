#pragma once
#include "CoreMinimal.h"
#include "EItemStateConsecutiveWinsMax.generated.h"

UENUM(BlueprintType)
enum class EItemStateConsecutiveWinsMax : uint8 {
    Any,
    One,
    Two,
    Three,
    Four,
    Five,
    Six,
    Seven,
    Eight,
    Nine,
    Ten,
    Max,
};

