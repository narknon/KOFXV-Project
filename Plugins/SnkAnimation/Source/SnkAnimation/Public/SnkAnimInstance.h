#pragma once
#include "CoreMinimal.h"
#include "CablePhysicsArgument.h"
#include "KawaiiPhysicsArgument.h"
#include "Animation/AnimInstance.h"
#include "SnkAnimationArgument.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=KawaiiPhysics -ObjectName=KawaiiPhysicsArgument -FallbackName=KawaiiPhysicsArgument
#include "SnkAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class SNKANIMATION_API USnkAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSnkAnimationArgument SnkAnimationArgument;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKawaiiPhysicsArgument KawaiiPhysicsArgument;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCablePhysicsArgument CablePhysicsArgument;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isCommonAnimation;
    
    USnkAnimInstance();
};

