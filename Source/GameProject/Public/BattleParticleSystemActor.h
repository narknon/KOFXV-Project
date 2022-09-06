#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ECharaColorID.h"
#include "BattleParticleSystemActor.generated.h"

UCLASS(Blueprintable)
class GAMEPROJECT_API ABattleParticleSystemActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNaturalDeathFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLifeUnlimited;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharaColorID ColorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerID;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMirror;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEmitterEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEmitterEnabledRemoveOverride;
    
public:
    ABattleParticleSystemActor();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Update();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibilityEvent(bool Visibility);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibility(bool bVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayFromBeginningFlag(bool fromBeginning);
    
    UFUNCTION(BlueprintCallable)
    void SetPlaybackSpeed(float _Speed);
    
    UFUNCTION(BlueprintCallable)
    void SetMirror(bool bMirror);
    
    UFUNCTION(BlueprintCallable)
    void SetEmitFlagOverride(bool bFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetEmitFlag(bool bCanSpawnParticle);
    
    UFUNCTION(BlueprintCallable)
    void ReregisterComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsParticlesSurvive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Initialize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOwnerCharacterVitality() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEmitFlag() const;
    
};

