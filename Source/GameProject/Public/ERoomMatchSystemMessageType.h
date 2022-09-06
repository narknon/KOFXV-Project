#pragma once
#include "CoreMinimal.h"
#include "ERoomMatchSystemMessageType.generated.h"

UENUM(BlueprintType)
enum class ERoomMatchSystemMessageType : uint8 {
    MostMigrated,
    Joined,
    Leaved,
};

