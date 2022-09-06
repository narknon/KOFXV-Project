#pragma once
#include "CoreMinimal.h"
#include "EBattleSeatIndex.generated.h"

UENUM(BlueprintType)
enum class EBattleSeatIndex : uint8 {
    BattleSeat_A,
    BattleSeat_B,
    BattleSeat_C,
    BattleSeat_D,
    BattleSeat_E,
    BattleSeat_F,
    Max,
};

