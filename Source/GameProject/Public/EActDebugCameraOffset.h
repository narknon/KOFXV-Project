#pragma once
#include "CoreMinimal.h"
#include "EActDebugCameraOffset.generated.h"

UENUM(BlueprintType)
enum class EActDebugCameraOffset : uint8 {
    BASE_POS,
    CENTER,
    STAGE,
    NORMAL_CAM,
    LND_POSITION,
    END_POSITION,
    C_HEAD,
    C_NECK,
    C_CHEST,
    C_HIPS,
    L_ARM1,
    L_ARM2,
    L_HAND,
    R_ARM1,
    R_ARM2,
    R_HAND,
    L_LEG2,
    L_FOOT,
    L_TOE,
    R_LEG2,
    R_FOOT,
    R_TOE,
    C_HIPS_ATTACH,
    L_HAND_ATTACH,
    R_HAND_ATTACH,
    L_FOOT_ATTACH,
    R_FOOT_ATTACH,
    C_HEAD_ATTACH,
};

