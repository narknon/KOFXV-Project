#pragma once
#include "CoreMinimal.h"
#include "EStoryCpuLevelOption.generated.h"

UENUM(BlueprintType)
enum class EStoryCpuLevelOption : uint8 {
    CpuLevel,
    SettingComplete,
    Default,
    MAX,
};

