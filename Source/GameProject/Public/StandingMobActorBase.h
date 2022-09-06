#pragma once
#include "CoreMinimal.h"
#include "MobActorBase.h"
#include "StandingMobActorBase.generated.h"

UCLASS(Abstract, Blueprintable)
class GAMEPROJECT_API AStandingMobActorBase : public AMobActorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRandom;
    
public:
    AStandingMobActorBase();
};

