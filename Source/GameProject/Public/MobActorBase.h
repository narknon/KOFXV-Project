#pragma once
#include "CoreMinimal.h"
#include "Pawn_HC.h"
#include "OrangeMobStateMap.h"
#include "EOrangeMobState.h"
#include "MobActorBase.generated.h"

class UStaticMeshComponent_HC;
class USkeletalMeshComponent_HC;
class USceneComponent_HC;
class UArrowComponent_HC;

UCLASS(Abstract, Blueprintable)
class GAMEPROJECT_API AMobActorBase : public APawn_HC {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, NonTransactional, meta=(AllowPrivateAccess=true))
    USceneComponent_HC* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, NonTransactional, meta=(AllowPrivateAccess=true))
    UArrowComponent_HC* MoveableRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, NonTransactional, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent_HC* SkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, NonTransactional, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent_HC* ShadowMesh;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFakeShadow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOrangeMobStateMap> OrangeMobStateMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinInitDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxInitDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTimeByRandom;
    
public:
    AMobActorBase();
    UFUNCTION(BlueprintCallable)
    void SetFrameRate(uint8 newFrameRate);
    
    UFUNCTION(BlueprintCallable)
    void SetActorAndChildTickInterval(float TickInterval);
    
    UFUNCTION(BlueprintCallable)
    void SetActorAndChildEnableTick(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void InitStartTimeByRandom();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMobTickInterval() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EOrangeMobState GetMobState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMobSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMobAnimRate() const;
    
};

