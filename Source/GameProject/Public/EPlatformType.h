#pragma once
#include "CoreMinimal.h"
#include "EPlatformType.generated.h"

UENUM(BlueprintType)
enum class EPlatformType : uint8 {
    Sony,
    Microsoft,
    Windows,
    Stadia,
    Switch,
};

