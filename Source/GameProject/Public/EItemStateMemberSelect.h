#pragma once
#include "CoreMinimal.h"
#include "EItemStateMemberSelect.generated.h"

UENUM(BlueprintType)
enum class EItemStateMemberSelect : uint8 {
    Any,
    Yes,
    No,
    Max,
};

