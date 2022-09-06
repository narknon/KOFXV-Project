#pragma once
#include "CoreMinimal.h"
#include "PrimaryActor.h"
#include "UObject/NoExportTypes.h"
#include "BattleCameraHudActor.generated.h"

class USceneComponent;
class ACameraDirector;

UCLASS(Abstract, Blueprintable)
class GAMEPROJECT_API ABattleCameraHudActor : public APrimaryActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, NonTransactional, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, NonTransactional, meta=(AllowPrivateAccess=true))
    USceneComponent* FlipRoot;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Width;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D HudDrawSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACameraDirector* CameraDirector;
    
private:
    UPROPERTY(EditAnywhere)
    uint8 UpdateParentCameraCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 frame;
    
public:
    ABattleCameraHudActor();
private:
    UFUNCTION(BlueprintCallable)
    void UpdateParentCameraSeveralTimes();
    
    UFUNCTION(BlueprintCallable)
    void UpdateParentCamera();
    
    UFUNCTION(BlueprintCallable)
    void TryCalcDistanceFromOwnerCamera();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetHudHidden(bool SetHidden);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraDirector(ACameraDirector* ref);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleHudDrawSize(FVector2D Size);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCameraSwitch(bool bCineCamera);
    
    UFUNCTION(BlueprintCallable)
    void BattleCameraHudTick();
    
    UFUNCTION(BlueprintCallable)
    void BattleCameraHudEndPlay();
    
    UFUNCTION(BlueprintCallable)
    void BattleCameraHudBeginPlay();
    
};

