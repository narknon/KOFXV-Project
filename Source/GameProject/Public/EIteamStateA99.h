#pragma once
#include "CoreMinimal.h"
#include "EIteamStateA99.generated.h"

UENUM(BlueprintType)
enum class EIteamStateA99 : uint8 {
    ISA99_NML,
    ISA99_SED,
    ISA99_USE,
    ISA99_SEL,
    ISA99_MAX UMETA(Hidden),
};

