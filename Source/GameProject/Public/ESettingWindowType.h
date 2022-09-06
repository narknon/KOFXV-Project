#pragma once
#include "CoreMinimal.h"
#include "ESettingWindowType.generated.h"

UENUM(BlueprintType)
enum class ESettingWindowType : uint8 {
    Chara,
    Team,
    BattleSetting,
    Pause,
    OnlineProfile,
    DJStation,
    CharaSelectTeam,
    CharaSelectSingle,
    SoundSetting,
    None,
    Max,
};

