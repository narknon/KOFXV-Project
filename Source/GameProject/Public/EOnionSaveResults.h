#pragma once
#include "CoreMinimal.h"
#include "EOnionSaveResults.generated.h"

UENUM()
enum class EOnionSaveResults : int32 {
    Idle,
    Saving,
    SaveSuccessful,
    SaveFailed,
};

