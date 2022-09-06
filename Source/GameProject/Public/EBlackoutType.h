#pragma once
#include "CoreMinimal.h"
#include "EBlackoutType.generated.h"

UENUM(BlueprintType)
enum class EBlackoutType : uint8 {
    None,
    StageOff,
    PlayerStageOff,
    SetStageColor,
    Restart,
    Akebono_Super,
    Akebono_Max,
    Akebono_Climax,
};

