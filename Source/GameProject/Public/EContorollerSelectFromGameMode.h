#pragma once
#include "CoreMinimal.h"
#include "EContorollerSelectFromGameMode.generated.h"

UENUM(BlueprintType)
enum class EContorollerSelectFromGameMode : uint8 {
    Entry,
    MainMenu,
    RankMatch,
    CasualMatch,
};

