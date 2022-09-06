#pragma once
#include "CoreMinimal.h"
#include "EContinueServiceType.generated.h"

UENUM(BlueprintType)
enum class EContinueServiceType : uint8 {
    NoService,
    PowerGaugeOne,
    EnemyHPCut,
    PowerGaugeOneEnemyHPCut,
    PowerGaugeMaxEnemyHPHalf,
};

