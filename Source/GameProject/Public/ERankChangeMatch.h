#pragma once
#include "CoreMinimal.h"
#include "ERankChangeMatch.generated.h"

UENUM(BlueprintType)
enum class ERankChangeMatch : uint8 {
    Normal,
    Promotion,
    Demotion,
};

