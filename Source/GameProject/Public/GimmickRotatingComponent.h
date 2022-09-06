#pragma once
#include "CoreMinimal.h"
#include "ArrowComponent_HC.h"
#include "UObject/NoExportTypes.h"
#include "GimmickRotatingComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEPROJECT_API UGimmickRotatingComponent : public UArrowComponent_HC {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator RotateDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationSpeed;
    
public:
    UGimmickRotatingComponent();
    UFUNCTION(BlueprintCallable)
    void SetRotationSpeed(float Speed);
    
    UFUNCTION(BlueprintCallable)
    void SetRotateDirection(FRotator Direction);
    
};

