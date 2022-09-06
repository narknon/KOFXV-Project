#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget_SinglerActionScene.h"
#include "RoomInfoWindow.generated.h"

class UTextBlock;
class URoomListItemInfo;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API URoomInfoWindow : public UOperationalWidget_SinglerActionScene {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* WindowTitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URoomListItemInfo* RoomInfoWindow;
    
    URoomInfoWindow();
};

