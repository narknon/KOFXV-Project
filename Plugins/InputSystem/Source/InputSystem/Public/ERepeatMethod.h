#pragma once
#include "CoreMinimal.h"
#include "ERepeatMethod.generated.h"

UENUM(BlueprintType)
enum class ERepeatMethod : uint8 {
    SingleReset,
    AllReset,
};

