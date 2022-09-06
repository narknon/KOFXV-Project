#pragma once
#include "CoreMinimal.h"
#include "ETrainingGuardSetting.generated.h"

UENUM(BlueprintType)
enum class ETrainingGuardSetting : uint8 {
    Off,
    Guard_Stand,
    AllGuard,
    OneHit_Guard,
    OnlyFirst_Hit,
    OneGuard_Jump,
    GC_FrontEvade,
    GC_BackEvade,
    GC_BlowBack,
    Random,
};

