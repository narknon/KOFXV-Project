#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget_SinglerActionScene.h"
#include "RoomBattleSeatYouIcon.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API URoomBattleSeatYouIcon : public UOperationalWidget_SinglerActionScene {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* YouIcon;
    
    URoomBattleSeatYouIcon();
};

