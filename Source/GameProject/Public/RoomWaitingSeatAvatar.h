#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget_SinglerActionScene.h"
#include "RoomWaitingSeatAvatar.generated.h"

class URoomPlayerNumberIcon;
class UWidgetSwitcher;
class UAvatarWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API URoomWaitingSeatAvatar : public UOperationalWidget_SinglerActionScene {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URoomPlayerNumberIcon* WBP_03_07_player_num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAvatarWidget* AvatarWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_seat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_you;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_late;
    
    URoomWaitingSeatAvatar();
};

