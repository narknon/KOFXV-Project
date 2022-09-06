#pragma once
#include "CoreMinimal.h"
#include "EItemStateSubtitleSetting.generated.h"

UENUM(BlueprintType)
enum class EItemStateSubtitleSetting : uint8 {
    Any,
    OK,
    NO,
    Max,
};

