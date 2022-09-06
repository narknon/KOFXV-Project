#pragma once
#include "CoreMinimal.h"
#include "ETeamID.generated.h"

UENUM(BlueprintType)
enum class ETeamID : uint8 {
    NONE,
    Hero,
    Rival,
    S_Treasures,
    Ash,
    Krohnen,
    Orochi,
    K_Dash,
    GAW,
    Ikari,
    FatalFury,
    AOF,
    S_Heroine,
    Agent,
    DLCTEAM1,
    DLCTEAM2,
    DLCTEAM3,
    DLCTEAM4,
    DLC015,
    MAX,
};

