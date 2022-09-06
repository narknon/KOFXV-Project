#pragma once
#include "CoreMinimal.h"
#include "EMessageHUDState.generated.h"

UENUM(BlueprintType)
enum class EMessageHUDState : uint8 {
    CounterDamaged,
    GuardCrash,
    Stun,
    SuperCancel,
    AdvancedCancel,
    ClimaxCancel,
    ReversalMove,
    Punish,
    GuardCancel,
    MAX,
    None,
};

