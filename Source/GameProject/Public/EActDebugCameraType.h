#pragma once
#include "CoreMinimal.h"
#include "EActDebugCameraType.generated.h"

UENUM(BlueprintType)
enum class EActDebugCameraType : uint8 {
    RESET,
    MOTION_CAM_SYNC,
    MOTION_CAM_FRAME,
    MOTION_CAM_END,
    QUAKE_CAM,
    MOVE_CAM,
    MOVE_CAM_END,
    MOVE_CAM_QUAD,
    MOVE_CAM_END_QUAD,
    BATTLE_CAM_FIX_Y,
    MOVE_CAM_CUBIC_OUT,
    MOVE_CAM_END_CUBIC_OUT,
};

