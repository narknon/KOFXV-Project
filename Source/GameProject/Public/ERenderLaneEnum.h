#pragma once
#include "CoreMinimal.h"
#include "ERenderLaneEnum.generated.h"

UENUM(BlueprintType)
enum class ERenderLaneEnum : uint8 {
    ERL_KUROKO_BACK,
    ERL_KUROKO_FRONT,
    ERL_PLAYER_BACK,
    ERL_PLAYER_FRONT,
    ERL_ANIMAL_BACK,
    ERL_ANIMAL_FRONT,
    ERL_ITEM_BACK,
    ERL_ITEM_FRONT,
    ERL_MAX UMETA(Hidden),
};

