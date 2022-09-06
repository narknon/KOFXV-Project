#pragma once
#include "CoreMinimal.h"
#include "ECreatePanelType.generated.h"

UENUM(BlueprintType)
enum class ECreatePanelType : uint8 {
    NORMAL,
    RANDOM,
    FILTERING,
    RANDOM_FILTERING,
    GALLERY,
    TRIAL,
};

