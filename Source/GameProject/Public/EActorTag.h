#pragma once
#include "CoreMinimal.h"
#include "EActorTag.generated.h"

UENUM(BlueprintType)
enum class EActorTag : uint8 {
    Character,
    SubCharacter,
    Effect,
    Data,
    Bunshin,
    Other,
};

