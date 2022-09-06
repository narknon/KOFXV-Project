#pragma once
#include "CoreMinimal.h"
#include "EEntryOperationSide.generated.h"

UENUM(BlueprintType)
enum class EEntryOperationSide : uint8 {
    EOS_P1vP2,
    EOS_P1vCP,
    EOS_CPvP1,
    EOS_CPvCP,
    EOS_MAX UMETA(Hidden),
};

