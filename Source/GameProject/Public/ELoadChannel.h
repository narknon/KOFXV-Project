#pragma once
#include "CoreMinimal.h"
#include "ELoadChannel.generated.h"

UENUM(BlueprintType)
enum class ELoadChannel : uint8 {
    ELC_NONE,
    ELC_Character,
    ELC_Stage,
    ELC_BattleHUD,
    ELC_SceneUI,
    ELC_StaticAssets,
    Num,
};

