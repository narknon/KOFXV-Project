#pragma once
#include "CoreMinimal.h"
#include "OnlineGameInstance.h"
#include "ECheckOnlineResult.h"
#include "USettingLayoutWidgetInitBattleSettingType.h"
#include "ESceneName.h"
#include "RoomInfo.h"
#include "EOutPauseMenuWindowType.h"
#include "EPauseMenu.h"
#include "SceneMgtGameInstance.generated.h"

class UOnlineWaitingLayoutWidget;
class UEndMenuWidget;
class UIndicatorWidget;
class UFadeWidget;
class UButtonConfigLayoutWidget;
class USettingLayoutWidget;
class UCommandList_Layout;
class UPauseMenuWidget;
class USystemWindowWidget;
class UBattleDataLayoutWidget;
class UGuideHUDWidget;
class UKeyRecordingWidget;
class UComboMissionWidget;
class URoomWindow;
class UReplay_Layout;
class UOnlineProfile_Layout;
class UResultWidget;
class UTutorialMessageLayout;
class URoomMatchSpectatorLayout;
class UMainViewportWidget;

UCLASS(Blueprintable, NonTransient)
class GAMEPROJECT_API USceneMgtGameInstance : public UOnlineGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWhiteFading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFadeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UIndicatorWidget* Indicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UFadeWidget* FadeWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOnlineWaitingLayoutWidget* OnlineWaitingWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USettingLayoutWidget* BattleSettingWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPauseMenuWidget* PauseMenuWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UButtonConfigLayoutWidget* ButtonConfigWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCommandList_Layout* CommandList_Layout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USystemWindowWidget* SystemWindowWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBattleDataLayoutWidget* BattleDataLayoutWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UGuideHUDWidget* GuideHUDWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UKeyRecordingWidget* KeyRecordingWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEndMenuWidget* EndMenuWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UComboMissionWidget* ComboMissionWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UReplay_Layout* Replay_Layout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOnlineProfile_Layout* ProfileWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTutorialMessageLayout* MessageLayout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URoomMatchSpectatorLayout* RoomMatchSpectatorLayout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URoomWindow* RoomWindow;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMainViewportWidget* m_MainViewportWidget;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UResultWidget* ResultWidget;
    
    USceneMgtGameInstance();
    UFUNCTION(BlueprintCallable)
    void SetUiTransitionForce(ESceneName Destination, bool f_nowait);
    
    UFUNCTION(BlueprintCallable)
    void SetTravelSceneIsIndicatorOnly(bool bIndicator);
    
    UFUNCTION(BlueprintCallable)
    void SetTravelSceneIsFade(bool bFade);
    
    UFUNCTION(BlueprintCallable)
    void SetTransition(ESceneName Destination, const FString& TravelURL);
    
    UFUNCTION(BlueprintCallable)
    void SetReturnToRoomFlag(const bool& InFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetRestartLevel(bool bNeedRestart);
    
    UFUNCTION(BlueprintCallable)
    void SetMainViewportWidget(UMainViewportWidget* MainViewportWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetJoinInvitedRoomMatchFlag(const bool& InFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetInvitedRoomInfo(const FRoomInfo& InRoomInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetDuringSceneTransition(bool bDuring);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RequestCloseWindowInvite();
    
public:
    UFUNCTION(BlueprintCallable)
    void OutPauseMenu(EOutPauseMenuWindowType Type);
    
    UFUNCTION(BlueprintCallable)
    void OpenPauseMenu(EPauseMenu _id, int32 useid);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDisconnectedFromServerDispatcher(bool IsDisconnected);
    
public:
    UFUNCTION(BlueprintCallable)
    void LoadTitleSaveData();
    
    UFUNCTION(BlueprintCallable)
    void KillFade();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVersusScene() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTravelSceneIsIndicatorOnly() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTravelSceneIsFade() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTravelBeginClean();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTransition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToBeCleanScene(ESceneName Scene);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSceneTravelEffectIn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSceneTravelEffect() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsReturnToRoom();
    
    UFUNCTION(BlueprintCallable)
    bool IsOpenPauseMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadingScene() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsJoinInvitedRoomMatch();
    
    UFUNCTION(BlueprintCallable)
    bool IsInviteInitalized();
    
    UFUNCTION(BlueprintCallable)
    bool IsFade();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDuringSceneTransition() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsBattleScene();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattleLoading() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void InviteInitalize();
    
    UFUNCTION(BlueprintCallable)
    void InviteDeinitalize();
    
public:
    UFUNCTION(BlueprintCallable)
    void InviteAccepted(const FRoomInfo& RoomInfo);
    
    UFUNCTION(BlueprintCallable)
    void InitPauseMenu(USettingLayoutWidgetInitBattleSettingType Type);
    
    UFUNCTION(BlueprintCallable)
    void InitFadeOut(float FadeFrame, bool White);
    
    UFUNCTION(BlueprintCallable)
    void InitFadeIn(float FadeFrame, bool White);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESceneName GetPreScene() const;
    
    UFUNCTION(BlueprintCallable)
    UMainViewportWidget* GetMainViewportWidget();
    
    UFUNCTION(BlueprintCallable)
    FRoomInfo GetInvitedRoomInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESceneName GetCurrentScene() const;
    
    UFUNCTION(BlueprintCallable)
    void GetBookingScene(ESceneName& Scene);
    
    UFUNCTION(BlueprintCallable)
    void DoFade();
    
    UFUNCTION(BlueprintCallable)
    void CreatePauseMenu();
    
    UFUNCTION(BlueprintCallable)
    void ClosePauseMenu();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CheckOnlineCompletedInInvitingDispatcher(ECheckOnlineResult InCheckOnlineResult, const FRoomInfo& InRoomInfo);
    
public:
    UFUNCTION(BlueprintCallable)
    void BeforeCleanLevel();
    
    UFUNCTION(BlueprintCallable)
    void AfterCleanLevel();
    
};

