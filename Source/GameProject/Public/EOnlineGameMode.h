#pragma once
#include "CoreMinimal.h"
#include "EOnlineGameMode.generated.h"

UENUM(BlueprintType)
enum class EOnlineGameMode : uint8 {
    RankMatch,
    CasualMatch,
    RoomMatchSingleVs,
    RoomMatchTeamVs,
    RoomMatchDraftVs,
    RoomMatchPartyVs,
    OnlineTraining,
    TestMode,
    Any,
};

