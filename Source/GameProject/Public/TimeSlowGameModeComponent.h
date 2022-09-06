#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TimeSlowGameModeComponent.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEPROJECT_API UTimeSlowGameModeComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWithFTGSystem;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* TimeCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentCurveTIme;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* PreviewCurve;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fTimeDilation;
    
public:
    UTimeSlowGameModeComponent();
    UFUNCTION(BlueprintCallable)
    void StepQueue(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void StartTimeSlowQueue(UCurveFloat* Curve, bool WithFTGSystem);
    
    UFUNCTION(BlueprintCallable)
    void StartTimeDilation(float TimeDilation, bool WithFTGSystem);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetTimeDilation(float TimeDilation);
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetTimeDilation();
    
};

