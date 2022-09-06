#pragma once
#include "CoreMinimal.h"
#include "EAgreeWindowType.generated.h"

UENUM(BlueprintType)
enum class EAgreeWindowType : uint8 {
    Policy,
    Terms,
    Health,
};

