#pragma once
#include "CoreMinimal.h"
#include "EConfirmWindowType.generated.h"

UENUM(BlueprintType)
enum class EConfirmWindowType : uint8 {
    TutorialSelect,
    TutorialOK,
    SkipCheck,
    SkipComplete,
    None,
    Max,
};

