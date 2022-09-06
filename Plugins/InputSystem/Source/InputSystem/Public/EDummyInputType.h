#pragma once
#include "CoreMinimal.h"
#include "EDummyInputType.generated.h"

UENUM(BlueprintType)
enum class EDummyInputType : uint8 {
    None,
    OnlyBattle,
    All,
    NoCancel,
    NoOptions,
    NoBack,
    OnlyOk,
    NoDirNoCancel,
};

