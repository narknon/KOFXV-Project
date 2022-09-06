#pragma once
#include "CoreMinimal.h"
#include "EBoneCollisionType.generated.h"

UENUM(BlueprintType)
enum class EBoneCollisionType : uint8 {
    Sphere,
    Capsule,
};

