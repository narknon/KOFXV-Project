#pragma once
#include "CoreMinimal.h"
#include "EViewportZOrder.generated.h"

UENUM(BlueprintType)
enum class EViewportZOrder : uint8 {
    BackGround,
    Scene,
    OnlineWaiting,
    Pause,
    PauseSubItem,
    PauseSubItem2nd,
    Effect,
    Fade,
    Telop,
    Popup,
    MAX,
};

