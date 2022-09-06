#pragma once
#include "CoreMinimal.h"
#include "EMobEyeTrackType.generated.h"

UENUM(BlueprintType)
enum class EMobEyeTrackType : uint8 {
    None,
    Player1,
    Player2,
    Center,
};

