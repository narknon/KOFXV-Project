#pragma once
#include "CoreMinimal.h"
#include "BattleCameraHudActor.h"
#include "UObject/NoExportTypes.h"
#include "AnnouncePanelActor.generated.h"

class UWidgetComponent;

UCLASS(Blueprintable)
class GAMEPROJECT_API AAnnouncePanelActor : public ABattleCameraHudActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, NonTransactional, meta=(AllowPrivateAccess=true))
    UWidgetComponent* AnnounceHUDInside;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, NonTransactional, meta=(AllowPrivateAccess=true))
    UWidgetComponent* AnnounceHUDOutline;
    
    AAnnouncePanelActor();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestSetBattleHudDrawSize(const FVector2D& InDrawSize);
    
};

