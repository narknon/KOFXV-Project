#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget_SinglerActionScene.h"
#include "EActiveWindowOnlineProfile.h"
#include "ECheckOnlineResult.h"
#include "EUiOperation.h"
#include "OnlineProfile_Layout.generated.h"

class UOnlineProfile_List;
class UOnlineProfile_Profile;
class UBaseWidget;
class UOnlineProfile_PlayerSetting;
class USettingTitleListWidget;
class UOnlineProfile_FairPlayScore;
class UGameData;
class USceneMgtGameInstance;
class UInputManager;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UOnlineProfile_Layout : public UOperationalWidget_SinglerActionScene {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOnlineProfile_Profile* WBP_03_04_Profile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOnlineProfile_List* WBP_03_04_List;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOnlineProfile_Profile* WBP_03_04_Profile_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOnlineProfile_PlayerSetting* WBP_03_04_PlayerSettingMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOnlineProfile_FairPlayScore* WBP_03_FairPlayScore_window;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBaseWidget* WBP_99_wdw_report;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USettingTitleListWidget* WBP_95_01_TitlesList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActiveWindowOnlineProfile ActiveWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActiveWindowOnlineProfile BackActiveWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FollowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameData* GameData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USceneMgtGameInstance* SceneMgtGameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputManager* InputManager;
    
public:
    UOnlineProfile_Layout();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetReportText(EActiveWindowOnlineProfile Type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenPlayerSettingWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenOnlineProfileWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenFairPlayWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenConfirmBoxWindow(EActiveWindowOnlineProfile Type);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFollowErrorCheckOnline(ECheckOnlineResult Result);
    
    UFUNCTION(BlueprintCallable)
    void OnCheckNetworkComplete(ECheckOnlineResult Result);
    
    UFUNCTION(BlueprintCallable)
    void OnCheckNetwork_OpenInitFriendList(ECheckOnlineResult Result);
    
    UFUNCTION(BlueprintCallable)
    void OnCheckNetwork_OpenInitFollowList(ECheckOnlineResult Result);
    
    UFUNCTION(BlueprintCallable)
    void OnCheckNetwork_OnDownloadFriendProfileComplete(ECheckOnlineResult Result);
    
    UFUNCTION(BlueprintCallable)
    void OnCheckNetwork_OnDownloadFollowProfileComplete(ECheckOnlineResult Result);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CursorUpdateConfirmBoxWindow(int32 UpDown);
    
    UFUNCTION(BlueprintCallable)
    void CloseTitleList();
    
    UFUNCTION(BlueprintCallable)
    void CloseRankMatchHistory(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClosePlayerSettingWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseOnlineProfileWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseFairPlayWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseConfirmBoxWindow();
    
private:
    UFUNCTION(BlueprintCallable)
    void CloseBattleSetting(int32 PlayerID, EUiOperation Operation);
    
};

