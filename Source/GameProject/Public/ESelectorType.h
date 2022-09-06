#pragma once
#include "CoreMinimal.h"
#include "ESelectorType.generated.h"

UENUM(BlueprintType)
enum class ESelectorType : uint8 {
    NONE,
    COMMANDLIST_PAUSEMENU,
    COMMANDLIST_BATTLESETTING,
    EDIT_CHARALIST,
    EDIT_TEAMLIST,
    GALLERY,
    TRIALMODE,
    REPLAY,
};

