#pragma once
#include "CoreMinimal.h"
#include "Actor_HC.h"
#include "GimmickActorBase.generated.h"

class USceneComponent_HC;

UCLASS(Abstract, Blueprintable)
class GAMEPROJECT_API AGimmickActorBase : public AActor_HC {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, NonTransactional, meta=(AllowPrivateAccess=true))
    USceneComponent_HC* Root;
    
    AGimmickActorBase();
    UFUNCTION(BlueprintCallable)
    void SetFrameRate(uint8 newFrameRate);
    
    UFUNCTION(BlueprintCallable)
    void SetActorAndComponentTickEnabled(bool bEnable);
    
};

