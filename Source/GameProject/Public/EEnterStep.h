#pragma once
#include "CoreMinimal.h"
#include "EEnterStep.generated.h"

UENUM(BlueprintType)
enum class EEnterStep : uint8 {
    None,
    Mode,
    Versus,
    Tournament,
    PlayerList,
    Controller,
    Num,
};

