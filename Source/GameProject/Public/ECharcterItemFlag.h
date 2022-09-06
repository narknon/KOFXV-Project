#pragma once
#include "CoreMinimal.h"
#include "ECharcterItemFlag.generated.h"

UENUM(BlueprintType)
enum class ECharcterItemFlag : uint8 {
    None,
    Ban,
    Hide,
    Lock,
    Shop,
    UnReleased,
};

