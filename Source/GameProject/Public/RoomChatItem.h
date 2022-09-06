#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget_SinglerActionScene.h"
#include "EChatNotificationType.h"
#include "ChatCommentInfo.h"
#include "RoomChatItem.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API URoomChatItem : public UOperationalWidget_SinglerActionScene {
    GENERATED_BODY()
public:
    URoomChatItem();
    UFUNCTION(BlueprintCallable)
    void SetChatNotificationType(const EChatNotificationType& InChatNotificationType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestSetChatInfo(const FChatCommentInfo& InChatCommentInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FChatCommentInfo RequestGetChatInfo();
    
    UFUNCTION(BlueprintCallable)
    EChatNotificationType GetChatNotificationType();
    
};

