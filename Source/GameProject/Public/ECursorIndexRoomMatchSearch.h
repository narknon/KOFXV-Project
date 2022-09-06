#pragma once
#include "CoreMinimal.h"
#include "ECursorIndexRoomMatchSearch.generated.h"

UENUM(BlueprintType)
enum class ECursorIndexRoomMatchSearch : uint8 {
    Area,
    BattleMode,
    BattleRule,
    ConsecutiveWinsMax,
    MemberSelect,
    Time,
    RoundMax,
    SubtitleSetting,
    PartyType,
    Max,
};

