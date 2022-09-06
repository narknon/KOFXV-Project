#pragma once
#include "CoreMinimal.h"
#include "EFlagDataType.generated.h"

UENUM(BlueprintType)
enum class EFlagDataType : uint8 {
    BOOL,
    INT,
    FLOAT,
    STRING,
};

