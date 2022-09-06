#pragma once
#include "CoreMinimal.h"
#include "ERenderType.generated.h"

UENUM(BlueprintType)
enum class ERenderType : uint8 {
    BehindTopHUD,
    Back_Opaque,
    Back_Trans,
    Front_Opaque,
    Front_Trans,
    None_Opaque,
    None_Trans,
    None_Front_Opaque,
    None_Front_Trans,
    Footprint,
};

