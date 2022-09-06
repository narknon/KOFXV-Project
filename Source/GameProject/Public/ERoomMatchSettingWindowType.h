#pragma once
#include "CoreMinimal.h"
#include "ERoomMatchSettingWindowType.generated.h"

UENUM(BlueprintType)
enum class ERoomMatchSettingWindowType : uint8 {
    Search,
    Create,
    IDSearch,
    Max,
};

