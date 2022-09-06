#pragma once
#include "CoreMinimal.h"
#include "ESystemWindowPriority.generated.h"

UENUM(BlueprintType)
enum class ESystemWindowPriority : uint8 {
    Other,
    UI_Low,
    UI_Normal,
    UI_High,
    Online_Low,
    Online_Normal,
    Online_High,
    Online_Higher,
    UNKNOWN,
};

