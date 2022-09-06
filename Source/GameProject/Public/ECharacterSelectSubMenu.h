#pragma once
#include "CoreMinimal.h"
#include "ECharacterSelectSubMenu.generated.h"

UENUM(BlueprintType)
enum class ECharacterSelectSubMenu : uint8 {
    ButtonConfig,
    BackMainMenu,
    RoundSetting,
    TimeSetting,
    CpuLevel,
    SettingComplete,
    Default,
    MAX,
};

