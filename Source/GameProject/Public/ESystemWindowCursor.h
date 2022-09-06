#pragma once
#include "CoreMinimal.h"
#include "ESystemWindowCursor.generated.h"

UENUM(BlueprintType)
enum class ESystemWindowCursor : uint8 {
    YES,
    NO,
    Cancel,
    MAX,
};

