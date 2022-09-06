#pragma once
#include "CoreMinimal.h"
#include "ECursorIndexRoomMatch.generated.h"

UENUM(BlueprintType)
enum class ECursorIndexRoomMatch : uint8 {
    Comment,
    BattleMode,
    RoomMemberMax,
    BattleRule,
    ConsecutiveWinsMax,
    MemberSelect,
    Time,
    RoundMax,
    SubtitleSetting,
    PartyType,
    ReleaseSetting,
    Max,
};

