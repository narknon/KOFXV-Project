#pragma once
#include "CoreMinimal.h"
#include "EDefaultMapType.generated.h"

UENUM(BlueprintType)
enum class EDefaultMapType : uint8 {
    TypeA,
    TypeB,
    TypeC,
    Max,
    Invalid,
};

