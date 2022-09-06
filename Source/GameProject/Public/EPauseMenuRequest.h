#pragma once
#include "CoreMinimal.h"
#include "EPauseMenuRequest.generated.h"

UENUM(BlueprintType)
enum class EPauseMenuRequest : uint8 {
    None,
    SceneRestartStageNoChange,
    SceneRestartStageChange,
    BattleRestart,
    SampleKeyRecording,
    SampleKeyPlay,
    ChangeBGM,
    FirstRound,
    RoundRestart,
    Retry,
    Next,
    Prev,
    RoomBack,
    BossChallengeRestart,
};

