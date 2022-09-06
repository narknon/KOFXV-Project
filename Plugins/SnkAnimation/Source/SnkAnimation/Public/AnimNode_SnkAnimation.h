#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "SnkAnimationArgument.h"
#include "AnimNode_SnkAnimation.generated.h"

USTRUCT(BlueprintType)
struct SNKANIMATION_API FAnimNode_SnkAnimation : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnkAnimationArgument SnkAnimationArgument;
    
    FAnimNode_SnkAnimation();
};

