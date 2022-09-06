#pragma once
#include "CoreMinimal.h"
#include "EProgressMenu.generated.h"

UENUM(BlueprintType)
enum class EProgressMenu : uint8 {
    BattleStart,
    BackToMainMenu,
    Max,
};

