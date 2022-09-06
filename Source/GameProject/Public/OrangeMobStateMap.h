#pragma once
#include "CoreMinimal.h"
#include "EOrangeMobState.h"
#include "OrangeMobStateMap.generated.h"

USTRUCT(BlueprintType)
struct FOrangeMobStateMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitTimeAtPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOrangeMobState StateAtPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    GAMEPROJECT_API FOrangeMobStateMap();
};

