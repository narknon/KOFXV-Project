#pragma once
#include "CoreMinimal.h"
#include "ERankWidgetType.generated.h"

UENUM(BlueprintType)
enum class ERankWidgetType : uint8 {
    NormalRank,
    ChampRank,
    Promotion,
};

