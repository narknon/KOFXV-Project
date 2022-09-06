#pragma once
#include "CoreMinimal.h"
#include "Actor_HC.h"
#include "EOrangeMobState.h"
#include "SequenceMobActorBase.generated.h"

class USceneComponent;
class USkeletalMeshComponent;
class ULevelSequence;
class ALevelSequenceActor;
class ULevelSequencePlayer;

UCLASS(Abstract, Blueprintable)
class GAMEPROJECT_API ASequenceMobActorBase : public AActor_HC {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, NonTransactional, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, NonTransactional, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* LevelSequenceLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* LevelSequenceActorLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequencePlayer* LevelSequencePlayerLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* LevelSequenceTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* LevelSequenceActorTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequencePlayer* LevelSequencePlayerTrigger;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoop;
    
public:
    ASequenceMobActorBase();
    UFUNCTION(BlueprintCallable)
    void SetMobState(EOrangeMobState MobState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitializeSequnence();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMobState(EOrangeMobState& MobState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventTrigger();
    
};

