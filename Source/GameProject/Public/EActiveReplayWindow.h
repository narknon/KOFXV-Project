#pragma once
#include "CoreMinimal.h"
#include "EActiveReplayWindow.generated.h"

UENUM(BlueprintType)
enum class EActiveReplayWindow : uint8 {
    None,
    List,
    Filtering,
    Info,
    Selector,
    Profile,
    Max,
};

