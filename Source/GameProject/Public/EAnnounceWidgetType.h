#pragma once
#include "CoreMinimal.h"
#include "EAnnounceWidgetType.generated.h"

UENUM(BlueprintType)
enum class EAnnounceWidgetType : uint8 {
    Round,
    ReadyGo,
    Challenger,
    Complete,
    KO,
    TimeUp,
    Draw,
    PlayerWins,
    YouWin,
    Perfect,
    GameOver,
    Continue,
};

