#pragma once
#include "CoreMinimal.h"
#include "ERequestScene.generated.h"

UENUM(BlueprintType)
enum class ERequestScene : uint8 {
    None,
    MainMenu,
    MemberSelect,
    Tutorial,
    Ghost,
    Room,
    RankMatch,
    CasualMatch,
    Matching,
    Ironman,
};

