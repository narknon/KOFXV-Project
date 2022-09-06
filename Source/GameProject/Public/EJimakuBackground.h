#pragma once
#include "CoreMinimal.h"
#include "EJimakuBackground.generated.h"

UENUM(BlueprintType)
enum class EJimakuBackground : uint8 {
    DoNotChange,
    Invisible,
    Visible,
    All,
};

