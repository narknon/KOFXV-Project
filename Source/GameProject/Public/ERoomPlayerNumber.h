#pragma once
#include "CoreMinimal.h"
#include "ERoomPlayerNumber.generated.h"

UENUM(BlueprintType)
enum class ERoomPlayerNumber : uint8 {
    None,
    Number1,
    Number2,
    Number3,
    Number4,
    Number5,
    Number6,
    Number7,
    Number8,
    Max,
};

