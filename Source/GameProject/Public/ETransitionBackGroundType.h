#pragma once
#include "CoreMinimal.h"
#include "ETransitionBackGroundType.generated.h"

UENUM(BlueprintType)
enum class ETransitionBackGroundType : uint8 {
    None,
    Title,
    MainMenu,
    Story,
    CloneBattle,
    RankedMatch,
    CasualMatch,
    RoomMatch,
    Versus,
    MemberSelect,
    DjStation,
    MAX,
};

