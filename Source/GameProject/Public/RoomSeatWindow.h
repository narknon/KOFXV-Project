#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget_SinglerActionScene.h"
#include "RoomSeatWindow.generated.h"

class UHaveGuideWindow;
class URoomInvitationButton;
class UTextBlock;
class URoomBattleSeatWindow;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API URoomSeatWindow : public UOperationalWidget_SinglerActionScene {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* RoomIDText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* RoomCommentText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URoomInvitationButton* InvitationButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHaveGuideWindow* GuideWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URoomBattleSeatWindow* BattleSeatWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UVerticalBox* VerticalBoxWaitingSeatAvatar;
    
    URoomSeatWindow();
};

