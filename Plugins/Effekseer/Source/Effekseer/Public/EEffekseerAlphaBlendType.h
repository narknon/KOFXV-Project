#pragma once
#include "CoreMinimal.h"
#include "EEffekseerAlphaBlendType.generated.h"

UENUM(BlueprintType)
enum class EEffekseerAlphaBlendType : uint8 {
    Opacity,
    Blend,
    Add,
    Sub,
    Mul,
};

