#pragma once
#include "CoreMinimal.h"
#include "BattleCameraHudActor.h"
#include "ResultAnnouncePanelActor.generated.h"

class UWidgetComponent;

UCLASS(Blueprintable)
class GAMEPROJECT_API AResultAnnouncePanelActor : public ABattleCameraHudActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, NonTransactional, meta=(AllowPrivateAccess=true))
    UWidgetComponent* ResultAnnounceHUDBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, NonTransactional, meta=(AllowPrivateAccess=true))
    UWidgetComponent* ResultAnnounceHUDOutline;
    
    AResultAnnouncePanelActor();
};

