#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SnkAnimationArgument.generated.h"

USTRUCT(BlueprintType)
struct FSnkAnimationArgument {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> TransformArray;
    
    SNKANIMATION_API FSnkAnimationArgument();
};

