#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget_SinglerActionScene.h"
#include "RoomListItem.generated.h"

class URoomListItemInfo;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API URoomListItem : public UOperationalWidget_SinglerActionScene {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URoomListItemInfo* WBP_03_07_RoomList_info;
    
    URoomListItem();
};

