#pragma once
#include "CoreMinimal.h"
#include "EAntennaSelect.generated.h"

UENUM(BlueprintType)
enum class EAntennaSelect : uint8 {
    ALL,
    LV2_UPPER,
    LV3_UPPER,
    LV4_UPPER,
    LV5_ONLY,
    MAX,
};

