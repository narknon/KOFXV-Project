#pragma once
#include "CoreMinimal.h"
#include "EActionDebugFlagId.generated.h"

UENUM(BlueprintType)
enum class EActionDebugFlagId : uint8 {
    FRAME_BY_FRAME_KEY,
    INVISIBLE_HUD,
    ACTOR_INFO,
    ATTACK_DATA,
    COMMAND_INFO,
    MOTION_INFO,
    ONLINE_INFO_ROOM,
    ONLINE_INFO_LOG,
    SUBACTOR_INFO,
    CONTROLLER_INFO,
    ACTION_NAME_INFO,
    FACIAL_NAME_INFO,
    VSBATTLE_BGM_SELECT_MODE,
};

