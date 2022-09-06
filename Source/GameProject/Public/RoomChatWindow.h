#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget_SinglerActionScene.h"
#include "ChatCommentInfo.h"
#include "RoomChatWindow.generated.h"

class UHaveGuideWindow;
class UScrollBox;
class URoomFixedPhraseWindow;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API URoomChatWindow : public UOperationalWidget_SinglerActionScene {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHaveGuideWindow* GuideWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UScrollBox* MainScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URoomFixedPhraseWindow* WBP_03_07_fixedPhrase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChatCommentInfo ChatCommentInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChatCommentInfo SystemNotificationInfo;
    
    URoomChatWindow();
    UFUNCTION(BlueprintCallable)
    void JoinedNewMemberDispatcher(int32 InNewMemberPlayerNumber);
    
};

