#pragma once
#include "CoreMinimal.h"
#include "ERankDanni.generated.h"

UENUM(BlueprintType)
enum class ERankDanni : uint8 {
    Nyumonsha,
    Kakutouka,
    Shihandai,
    Tatsujin,
    Hasha,
    Kenkou,
    Champion,
    Max,
    Unknown,
    Dummy,
};

