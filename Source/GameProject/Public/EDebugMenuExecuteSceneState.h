#pragma once
#include "CoreMinimal.h"
#include "EDebugMenuExecuteSceneState.generated.h"

UENUM(BlueprintType)
enum class EDebugMenuExecuteSceneState : uint8 {
    NONE,
    BATTLE,
    MAIN_MENU,
};

