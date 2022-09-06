#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BattleCameraHudActor.h"
#include "BattleHUDActor.generated.h"

class UUserWidget;
class UWidgetComponent;

UCLASS(Abstract, Blueprintable)
class GAMEPROJECT_API ABattleHUDActor : public ABattleCameraHudActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, NonTransactional, meta=(AllowPrivateAccess=true))
    UWidgetComponent* BackHUD;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUserWidget* FrontHUDWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> FrontHUDWidgetClass;
    
public:
    ABattleHUDActor();
private:
    UFUNCTION(BlueprintCallable)
    void CreateFrontHUDToViewport();
    
};

