#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget_SinglerActionScene.h"
#include "EOnlineGameMode.h"
#include "RoomWindow.generated.h"

class UGameInstanceGameParameters;
class URoomSeatWindow;
class UWidgetSwitcher;
class URoomChatWindow;
class URoomMemberListWindow;
class URoomMenuWindow;
class URoomChatNotificationCount;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API URoomWindow : public UOperationalWidget_SinglerActionScene {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URoomSeatWindow* WBP_03_07_Table;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URoomChatWindow* WBP_03_07_Chat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URoomMemberListWindow* WBP_03_07_MemberList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URoomChatNotificationCount* WBP_03_07_latestComments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URoomMenuWindow* WBP_03_07_RoomMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameInstanceGameParameters* GameInstanceGameParameters;
    
    URoomWindow();
    UFUNCTION(BlueprintCallable)
    void UpdateSeatInformation();
    
    UFUNCTION(BlueprintCallable)
    void UpdateRoomInformation();
    
    UFUNCTION(BlueprintCallable)
    void UpdateMyStatus();
    
    UFUNCTION(BlueprintCallable)
    void UpdateMemberListInfo();
    
    UFUNCTION(BlueprintCallable)
    void UpdateCountDownStatus();
    
    UFUNCTION(BlueprintCallable)
    void UpdateChatNotification(int32 InNotificationCount);
    
    UFUNCTION(BlueprintCallable)
    void UpdateChatInfo();
    
    UFUNCTION(BlueprintCallable)
    void UpdateAlreadyBattleGuide();
    
    UFUNCTION(BlueprintCallable)
    void StopCountDown();
    
    UFUNCTION(BlueprintCallable)
    void StartTravelToMemberSelectScene();
    
    UFUNCTION(BlueprintCallable)
    void StartCountDown();
    
    UFUNCTION(BlueprintCallable)
    void SetOpenedWindowFlag(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetOnlineGameMode(const EOnlineGameMode& Mode);
    
    UFUNCTION(BlueprintCallable)
    void ResetCountDown();
    
    UFUNCTION(BlueprintCallable)
    void RequestUpdateRoomInformation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestSwitchChatMode(bool bIsEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestRoomWindowActiveOn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestRoomWindowActiveOff();
    
    UFUNCTION(BlueprintCallable)
    void OnSelectedBattleMemberDispatcher();
    
    UFUNCTION(BlueprintCallable)
    void OnJoinedNewMember(int32 JoinedMember);
    
    UFUNCTION(BlueprintCallable)
    void OnChangedRoomStatus();
    
    UFUNCTION(BlueprintCallable)
    void OnCannotStartBattle();
    
    UFUNCTION(BlueprintCallable)
    bool IsOpenedWindow();
    
    UFUNCTION(BlueprintCallable)
    bool IsCursorOnAnotherPlayer();
    
    UFUNCTION(BlueprintCallable)
    void InitCountDown();
    
    UFUNCTION(BlueprintCallable)
    void GuideUpdate();
    
    UFUNCTION(BlueprintCallable)
    EOnlineGameMode GetOnlineGameMode();
    
    UFUNCTION(BlueprintCallable)
    void EndSeatShuffleAnimation();
    
    UFUNCTION(BlueprintCallable)
    void EndCountDown();
    
    UFUNCTION(BlueprintCallable)
    void CloseProfileDelegate();
    
    UFUNCTION(BlueprintCallable)
    void AdvanceCountDown(float Seconds);
    
};

