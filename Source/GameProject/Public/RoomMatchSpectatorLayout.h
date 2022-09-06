#pragma once
#include "CoreMinimal.h"
#include "InputBaseUserWidget.h"
#include "EPlayerID.h"
#include "ECharacterID.h"
#include "ECharaColorID.h"
#include "RoomMatchSpectatorLayout.generated.h"

class URoomMemberListWindow;
class UGuideItemArrayWidget;
class URoomChatWindow;
class URoomChatNotificationCount;
class URoomMenuWindow;
class UGameInstanceGameParameters;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API URoomMatchSpectatorLayout : public UInputBaseUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UGuideItemArrayWidget* WBP_GuideItemArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URoomMemberListWindow* WBP_03_07_MemberList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URoomChatWindow* WBP_03_07_Chat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URoomMenuWindow* WBP_03_07_RoomMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URoomChatNotificationCount* WBP_03_07_latestComments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameInstanceGameParameters* GameInstanceGameParameters;
    
    URoomMatchSpectatorLayout();
    UFUNCTION(BlueprintCallable)
    void UpdateMemberListInfo();
    
    UFUNCTION(BlueprintCallable)
    void UpdateChatNotification(int32 InNotificationCount);
    
    UFUNCTION(BlueprintCallable)
    void OnSelectedCharacterDispatcher(EPlayerID InPlayerID, int32 InCharacterIndex, ECharacterID InCharacterID, ECharaColorID InCharaColorID, int32 InCharaCostumeID);
    
    UFUNCTION(BlueprintCallable)
    void OnJoinedNewMember(int32 JoinedMember);
    
    UFUNCTION(BlueprintCallable)
    void OnChangedRoomStatus();
    
};

