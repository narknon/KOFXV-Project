#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EffekseerHandle.h"
#include "Components/PrimitiveComponent.h"
#include "UObject/NoExportTypes.h"
#include "ERenderType.h"
#include "EffekseerEmitterOnEventDispatcherDelegate.h"
#include "EProgrammableTranslationFuncType.h"
#include "EProgrammableTranslationLocationSpaceType.h"
#include "EffekseerEmitterComponent.generated.h"

class UEffekseerSystemComponent;
class USkeletalMeshComponent;
class UEffekseerEffect;
class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class EFFEKSEER_API UEffekseerEmitterComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEffekseerHandle Handle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAutoDestroy: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEffekseerEffect* Effect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* System;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLooping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor AllColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> DynamicInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UEffekseerSystemComponent* system_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERenderType RenderType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableHighContrast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MultiplyInContrast;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEffekseerEmitterOnEventDispatcher OnPlayed;
    
    UEffekseerEmitterComponent();
    UFUNCTION(BlueprintCallable)
    void StopRoot();
    
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void SetSkeletalMeshForBoneBindFunction(USkeletalMeshComponent* SkeletalMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetSearchableBoneNamesForBoneBindFunction(TArray<FName> BoneNames);
    
    UFUNCTION(BlueprintCallable)
    void SetProgrammableTranlationFunc(EProgrammableTranslationFuncType transFuncType, EProgrammableTranslationLocationSpaceType locationSpace);
    
    UFUNCTION(BlueprintCallable)
    void SetPlaySpeed(float newSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayFromBeginningFlag(bool fromBeginningFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerID(int32 _playerID);
    
    UFUNCTION(BlueprintCallable)
    void SetParticleVisibility(bool Visibility);
    
    UFUNCTION(BlueprintCallable)
    void SetParticleTargetLocation(FVector _targetLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetParticleSpawnFlag(bool spawnFlag);
    
    UFUNCTION(BlueprintCallable)
    FEffekseerHandle Play(bool bImmediate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Exists() const;
    
};

