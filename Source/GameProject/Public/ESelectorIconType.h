#pragma once
#include "CoreMinimal.h"
#include "ESelectorIconType.generated.h"

UENUM(BlueprintType)
enum class ESelectorIconType : uint8 {
    NONE,
    HIDE,
    LOCK,
    SHOP,
    UNSEL,
    NEW,
};

