#pragma once
#include "CoreMinimal.h"
#include "EGameInstanceTaskRequestType.generated.h"

UENUM(BlueprintType)
enum class EGameInstanceTaskRequestType : uint8 {
    None,
    SaveGameData,
    Max,
};

