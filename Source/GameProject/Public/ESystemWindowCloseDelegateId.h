#pragma once
#include "CoreMinimal.h"
#include "ESystemWindowCloseDelegateId.generated.h"

UENUM(BlueprintType)
enum class ESystemWindowCloseDelegateId : uint8 {
    None,
    MainMenu,
    OnlineMenu,
    CasualMenu,
    Room,
    RankMatch,
    RankmatchWaiting,
    CasualSelectRoomUpdate,
    DownloadGhostComplete,
    MainMenuForInvitationError,
    Backup,
    PenaltyNotice,
    Title,
};

