#pragma once
#include "CoreMinimal.h"
#include "ENetworkDisconnectLevel.generated.h"

UENUM(BlueprintType)
enum class ENetworkDisconnectLevel : uint8 {
    NONE,
    LEVEL1,
    LEVEL2,
    LEVEL3,
    LEVEL4,
    LEVEL5,
};

