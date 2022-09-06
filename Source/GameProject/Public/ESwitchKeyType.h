#pragma once
#include "CoreMinimal.h"
#include "ESwitchKeyType.generated.h"

UENUM(BlueprintType)
enum class ESwitchKeyType : uint8 {
    None,
    StringTableKey,
    Value,
    FileName,
    VolumeValue,
    BrightnessValue,
};

