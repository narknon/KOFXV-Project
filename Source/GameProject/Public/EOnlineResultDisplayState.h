#pragma once
#include "CoreMinimal.h"
#include "EOnlineResultDisplayState.generated.h"

UENUM(BlueprintType)
enum class EOnlineResultDisplayState : uint8 {
    None,
    CharacterVoicePlaying,
    OpenedResultUIOnly,
    OpenedResultMenu,
    Max,
};

