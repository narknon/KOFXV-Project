#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ESceneName.h"
#include "PrimaryActor.h"
#include "MainViewportWidgetSpawner.generated.h"

class UMainViewportWidget;

UCLASS(Abstract, Blueprintable)
class GAMEPROJECT_API AMainViewportWidgetSpawner : public APrimaryActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMainViewportWidget> MainViewportWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMainViewportWidget* MainViewportWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESceneName TravelScene;
    
public:
    AMainViewportWidgetSpawner();
    UFUNCTION(BlueprintCallable)
    void CreatedMainWidget();
    
};

