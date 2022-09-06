#pragma once
#include "CoreMinimal.h"
#include "EStageBgmType.generated.h"

UENUM(BlueprintType)
enum class EStageBgmType : uint8 {
    NONE,
    Default,
    DjStation,
    Customize,
    Max,
};

