#pragma once
#include "CoreMinimal.h"
#include "BATTLE_WAIT_STATE.generated.h"

UENUM(BlueprintType)
enum BATTLE_WAIT_STATE {
    BATTLE_WAIT_STATE_NONE,
    BATTLE_WAIT_STATE_PARTICIPANT,
    BATTLE_WAIT_STATE_SPECTATOR,
};

