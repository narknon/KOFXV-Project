#pragma once
#include "CoreMinimal.h"
#include "USettingLayoutWidgetInitBattleSettingType.generated.h"

UENUM(BlueprintType)
enum class USettingLayoutWidgetInitBattleSettingType : uint8 {
    SE_OFF,
    SE_ON,
    SE_MAX UMETA(Hidden),
};

