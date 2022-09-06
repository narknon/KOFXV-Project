#pragma once
#include "CoreMinimal.h"
#include "EOutPauseMenuWindowType.generated.h"

UENUM(BlueprintType)
enum class EOutPauseMenuWindowType : uint8 {
    Normal,
    Ending,
    Restart,
    ResultOnlineBattle,
};

