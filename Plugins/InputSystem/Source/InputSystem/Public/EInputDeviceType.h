#pragma once
#include "CoreMinimal.h"
#include "EInputDeviceType.generated.h"

UENUM(BlueprintType)
enum class EInputDeviceType : uint8 {
    PS4,
    PS5,
    Xbox,
    Stadia,
    Switch,
    Keyboard,
    Max,
    Invalid,
};

