#pragma once
#include "CoreMinimal.h"
#include "ERoomEntryType.generated.h"

UENUM(BlueprintType)
enum class ERoomEntryType : uint8 {
    Create,
    Search,
    IDSearch,
};

