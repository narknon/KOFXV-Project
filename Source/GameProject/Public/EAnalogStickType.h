#pragma once
#include "CoreMinimal.h"
#include "EAnalogStickType.generated.h"

UENUM(BlueprintType)
enum class EAnalogStickType : uint8 {
    Off,
    NeogeoCD,
    NeogeoPocket,
};

