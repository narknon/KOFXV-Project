#pragma once
#include "CoreMinimal.h"
#include "ESYSTEM_SE_ID.generated.h"

UENUM(BlueprintType)
enum class ESYSTEM_SE_ID : uint8 {
    MAIN_MENU_CURSOR,
    MAIN_MENU_DECISION,
    SUB_MENU_CURSOR,
    SUB_MENU_DECISION,
    BATTLE_MENU_CURSOR,
    BATTLE_MENU_DECISION,
    BATTLE_MENU_DECISION_FINAL,
    COUNT_DOWN,
    TIME_UP,
    MOVE,
    START_PAUSE,
    END_PAUSE,
    BACK,
    CANCEL,
    DECISION_ERROR,
    HOLD,
    LOCK,
    POPUP,
    MAX,
};

