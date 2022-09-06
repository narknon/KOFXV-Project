#pragma once
#include "CoreMinimal.h"
#include "EAvatarWidgetType.generated.h"

UENUM(BlueprintType)
enum class EAvatarWidgetType : uint8 {
    Indicator,
    Platform,
    None,
    BattleSeatVacancy,
    WaitingSeatVacancy,
    Max,
};

