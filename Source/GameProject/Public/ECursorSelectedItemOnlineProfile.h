#pragma once
#include "CoreMinimal.h"
#include "ECursorSelectedItemOnlineProfile.generated.h"

UENUM(BlueprintType)
enum class ECursorSelectedItemOnlineProfile : uint8 {
    Titles,
    FollowList,
    FriendList,
    BattleSetting,
    RankMatchHistory,
    Max,
};

