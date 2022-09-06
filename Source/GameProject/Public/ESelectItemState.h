#pragma once
#include "CoreMinimal.h"
#include "ESelectItemState.generated.h"

UENUM(BlueprintType)
enum class ESelectItemState : uint8 {
    NML,
    SEL,
    SED,
    USE,
};

