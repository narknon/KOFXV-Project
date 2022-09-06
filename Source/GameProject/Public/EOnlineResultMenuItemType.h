#pragma once
#include "CoreMinimal.h"
#include "EOnlineResultMenuItemType.generated.h"

UENUM(BlueprintType)
enum class EOnlineResultMenuItemType : uint8 {
    Rematch,
    MemberSelect,
    OrderSelect,
    WantToRoomMatch,
    BattleEnd,
    Max,
    Default = 0x0,
};

