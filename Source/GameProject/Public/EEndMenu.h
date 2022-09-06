#pragma once
#include "CoreMinimal.h"
#include "EEndMenu.generated.h"

UENUM(BlueprintType)
enum class EEndMenu : uint8 {
    Trial,
    Tutorial,
    MAX,
    None,
};

