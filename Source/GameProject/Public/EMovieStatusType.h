#pragma once
#include "CoreMinimal.h"
#include "EMovieStatusType.generated.h"

UENUM(BlueprintType)
enum class EMovieStatusType : uint8 {
    Normal,
    Unsel,
    Hide,
};

