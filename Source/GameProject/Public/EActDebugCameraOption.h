#pragma once
#include "CoreMinimal.h"
#include "EActDebugCameraOption.generated.h"

UENUM(BlueprintType)
enum class EActDebugCameraOption : uint8 {
    SHOW_ME,
    NOT_REV_BASE,
    NOT_REV_X,
    TARGET_BASE,
    NOT_FOLLOW_BASE,
    KEEP_CAMERA_ANGLE,
    SET_SUB_CAMERA,
    INVISIBLE_TARGET_EFFECT,
    INVISIBLE_COMMON_EFFECT,
    ONLY_THIS_ACTION_EFFECT,
    NORMAL_CAMERA_X,
    NORMAL_CAMERA_Y,
    NORMAL_CAMERA_Z,
    ONLY_THIS_ACTION_EFFECT_EX,
    INVISIBLE_SUBCHARA_EFFECT,
    INVISIBLE_AFTER_MOVE_END,
};

