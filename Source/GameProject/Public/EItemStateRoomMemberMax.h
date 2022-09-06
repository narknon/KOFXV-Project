#pragma once
#include "CoreMinimal.h"
#include "EItemStateRoomMemberMax.generated.h"

UENUM(BlueprintType)
enum class EItemStateRoomMemberMax : uint8 {
    Any,
    Two,
    Three,
    Four,
    Five,
    Six,
    Seven,
    Eight,
    Max,
};

