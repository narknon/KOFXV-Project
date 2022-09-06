#pragma once
#include "CoreMinimal.h"
#include "ERoomMenuCursorIndex.generated.h"

UENUM(BlueprintType)
enum class ERoomMenuCursorIndex : uint8 {
    BattleSetting,
    CommandList,
    ButtonConfig,
    Invitation,
    BreakTime,
    Chat,
    NewNotification,
    SystemNotification,
    BGMCustomize,
    Default,
    None,
    LeaveTheRoom,
    ReturnToRoom,
    Max,
};

