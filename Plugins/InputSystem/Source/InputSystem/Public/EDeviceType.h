#pragma once
#include "CoreMinimal.h"
#include "EDeviceType.generated.h"

UENUM(BlueprintType)
enum class EDeviceType : uint8 {
    AnyType,
    GamePad,
    Keyboard,
    Max,
    Invalid,
};

