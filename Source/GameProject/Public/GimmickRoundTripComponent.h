#pragma once
#include "CoreMinimal.h"
#include "ArrowComponent_HC.h"
#include "UObject/NoExportTypes.h"
#include "GimmickRoundTripComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEPROJECT_API UGimmickRoundTripComponent : public UArrowComponent_HC {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform StartTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform EndTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RoundSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseTriangleWave;
    
public:
    UGimmickRoundTripComponent();
    UFUNCTION(BlueprintCallable)
    void SetRoundTripSpeed(float Speed);
    
    UFUNCTION(BlueprintCallable)
    void SetRoundRange(FTransform A, FTransform B);
    
};

