#pragma once
#include "CoreMinimal.h"
#include "EProgrammableTranslationFuncType.generated.h"

UENUM(BlueprintType)
enum class EProgrammableTranslationFuncType : uint8 {
    ComponentPosition,
    BoneBind_SearchFromBoneName,
    BoneBind_RandomBone,
};

