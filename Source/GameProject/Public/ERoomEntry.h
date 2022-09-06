#pragma once
#include "CoreMinimal.h"
#include "ERoomEntry.generated.h"

UENUM(BlueprintType)
enum class ERoomEntry : uint8 {
    Search,
    Create,
};

