#pragma once
#include "CoreMinimal.h"
#include "EOnlineTrainingSentType.generated.h"

UENUM(BlueprintType)
enum class EOnlineTrainingSentType : uint8 {
    BattleRestart,
    SceneRestartStageChange,
    SceneRestartStageNoChange,
    NotRestartParamChange,
    End,
    None,
};

