#pragma once
#include "CoreMinimal.h"
#include "ERoomMemberListState.generated.h"

UENUM(BlueprintType)
enum class ERoomMemberListState : uint8 {
    None,
    WatchingGamesOnly,
    Sitting,
    DuringTheBattle,
    DuringBreak,
    Max,
};

