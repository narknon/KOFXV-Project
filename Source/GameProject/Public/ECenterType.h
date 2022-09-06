#pragma once
#include "CoreMinimal.h"
#include "ECenterType.generated.h"

UENUM(BlueprintType)
enum class ECenterType : uint8 {
    CHARACTER_CENTER,
    SHOT_CENTER,
    OTHER_CENTER,
    BIND_NODE,
};

