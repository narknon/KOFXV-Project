#pragma once
#include "CoreMinimal.h"
#include "EFightingConfigKey.generated.h"

UENUM(BlueprintType)
enum class EFightingConfigKey : uint8 {
    Dir_U,
    Dir_D,
    Dir_L,
    Dir_R,
    LP,
    HP,
    LK,
    HK,
    LP_HP,
    LP_LK,
    LP_HK,
    HP_LK,
    HP_HK,
    LK_HK,
    LP_HP_LK,
    LP_HP_HK,
    LP_LK_HK,
    HP_LK_HK,
    LP_HP_LK_HK,
    REC,
    PLAY,
    REPEAT,
    PROVOCATION,
    RESTART,
    MAX,
};

