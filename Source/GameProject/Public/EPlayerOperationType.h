#pragma once
#include "CoreMinimal.h"
#include "EPlayerOperationType.generated.h"

UENUM(BlueprintType)
enum class EPlayerOperationType : uint8 {
    Human,
    RemoteHuman,
    CPU,
    RecordPlay,
    Replay,
    TUTORIAL,
    TrialDemo,
    Boss,
    NONE,
};

