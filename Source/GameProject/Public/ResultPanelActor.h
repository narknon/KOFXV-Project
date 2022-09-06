#pragma once
#include "CoreMinimal.h"
#include "BattleCameraHudActor.h"
#include "ResultPanelActor.generated.h"

class UWidgetComponent;

UCLASS(Blueprintable)
class GAMEPROJECT_API AResultPanelActor : public ABattleCameraHudActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, NonTransactional, meta=(AllowPrivateAccess=true))
    UWidgetComponent* ResultBackHUD;
    
    AResultPanelActor();
};

