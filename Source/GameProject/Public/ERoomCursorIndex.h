#pragma once
#include "CoreMinimal.h"
#include "ERoomCursorIndex.generated.h"

UENUM(BlueprintType)
enum class ERoomCursorIndex : uint8 {
    BattleSeat1,
    BattleSeat2,
    BattleSeat3,
    BattleSeat4,
    BattleSeat5,
    BattleSeat6,
    Invitation,
    WaitingSeat1,
    WaitingSeat2,
    WaitingSeat3,
    WaitingSeat4,
    WaitingSeat5,
    WaitingSeat6,
    ChatOrMemberList,
    None,
    Max,
};

