#pragma once
#include "CoreMinimal.h"
#include "EReplayPlayBackMode.generated.h"

UENUM(BlueprintType)
enum class EReplayPlayBackMode : uint8 {
    None,
    List,
    Info,
    Max,
};

