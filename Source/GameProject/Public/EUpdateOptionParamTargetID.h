#pragma once
#include "CoreMinimal.h"
#include "EUpdateOptionParamTargetID.generated.h"

UENUM(BlueprintType)
enum class EUpdateOptionParamTargetID : uint8 {
    MASTER_VOLUME,
    BGM_VOLUME,
    ENV_VOLUME,
    SE_VOLUME,
    CHARACTER_VOICE_VOLUME,
    SYSTEM_VOICE_VOLUME,
    VOLUME_NUM_MAX UMETA(Hidden),
};

