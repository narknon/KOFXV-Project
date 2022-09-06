#pragma once
#include "CoreMinimal.h"
#include "MobActorBase.h"
#include "SplineMobBase.generated.h"

class USplineComponent_HC;

UCLASS(Abstract, Blueprintable)
class GAMEPROJECT_API ASplineMobBase : public AMobActorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, NonTransactional, meta=(AllowPrivateAccess=true))
    USplineComponent_HC* SplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTowardSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReverse;
    
public:
    ASplineMobBase();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateMobStateMapRange();
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetMovedDistance();
    
};

