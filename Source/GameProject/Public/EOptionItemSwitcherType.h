#pragma once
#include "CoreMinimal.h"
#include "EOptionItemSwitcherType.generated.h"

UENUM(BlueprintType)
enum class EOptionItemSwitcherType : uint8 {
    Button,
    Switch,
    Volume,
    Brightness,
    SwitchImage,
};

