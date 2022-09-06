#pragma once
#include "CoreMinimal.h"
#include "EDebugRestartType.generated.h"

UENUM(BlueprintType)
enum class EDebugRestartType : uint8 {
    NONE,
    RESTART,
    RESTART_TO_PRODUCTION,
    RESTART_ASSET_RELOAD,
};

