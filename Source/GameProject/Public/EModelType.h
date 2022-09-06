#pragma once
#include "CoreMinimal.h"
#include "EModelType.generated.h"

UENUM()
enum class EModelType : int8 {
    Default = -0x1,
    Chara,
    Weapon,
    KO_Chara,
    Extra,
    Cable,
};

