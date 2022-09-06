#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "QualityObjectsSwitcher.generated.h"

UCLASS(Blueprintable)
class GAMEPROJECT_API AQualityObjectsSwitcher : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> StandardObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> HighendObject;
    
public:
    AQualityObjectsSwitcher();
protected:
    UFUNCTION(BlueprintCallable)
    void ShowStandardObjects();
    
    UFUNCTION(BlueprintCallable)
    void ShowHighendObjects();
    
    UFUNCTION(BlueprintCallable)
    void Initiliaze();
    
    UFUNCTION(BlueprintCallable)
    void HideStandardObjects();
    
    UFUNCTION(BlueprintCallable)
    void HideHighendObjects();
    
};

