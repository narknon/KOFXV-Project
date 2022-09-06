#pragma once
#include "CoreMinimal.h"
#include "ECheckOnlineResult.h"
#include "EUiOperation.h"
#include "MainViewportWidget.h"
#include "ESceneName.h"
#include "MainViewportWidgetScene.generated.h"

class UOperationalWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UMainViewportWidgetScene : public UMainViewportWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UOperationalWidget> Section_Entry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UOperationalWidget> Class_Entry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UOperationalWidget> Section_MemberSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UOperationalWidget> Class_MemberSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UOperationalWidget> Section_OrderSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UOperationalWidget> Class_OrderSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UOperationalWidget> Section_StageSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UOperationalWidget> Class_StageSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UOperationalWidget> Section_VersusScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UOperationalWidget> Class_VersusScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UOperationalWidget> Section_TitleScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UOperationalWidget> Class_TitleScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UOperationalWidget> Section_MainMenuScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UOperationalWidget> Class_MainMenuScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UOperationalWidget> Section_RankMatchScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UOperationalWidget> Class_RankMatchScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UOperationalWidget> Section_CasualMatchScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UOperationalWidget> Class_CasualMatchScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UOperationalWidget> Section_RoomMatchScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UOperationalWidget> Class_RoomMatchScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UOperationalWidget> Section_OnlineTrainingScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UOperationalWidget> Class_OnlineTrainingScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UOperationalWidget> Section_DJStationScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UOperationalWidget> Class_DJStationScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UOperationalWidget> Section_OnlineProfileScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UOperationalWidget> Class_OnlineProfileScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UOperationalWidget> Section_LeaderBoardScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UOperationalWidget> Class_LeaderBoardScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UOperationalWidget> Section_MovieScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UOperationalWidget> Class_MovieScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UOperationalWidget> Section_EndingScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UOperationalWidget> Class_EndingScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UOperationalWidget> Section_CreditScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UOperationalWidget> Class_CreditScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UOperationalWidget> Section_EndScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UOperationalWidget> Class_EndScene;
    
public:
    UMainViewportWidgetScene();
    UFUNCTION(BlueprintCallable)
    void VersusScene_PostScene();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TravelToScene_VersusOnline();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TravelToScene_Versus();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TravelToScene_Title();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TravelToScene_Stage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TravelToScene_RoomMatch();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TravelToScene_RankMatch();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TravelToScene_PreLangChange();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TravelToScene_OrderOnline();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TravelToScene_Order();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TravelToScene_OnlineTraining();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TravelToScene_OnlineProfile();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TravelToScene_Movie();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TravelToScene_Member();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TravelToScene_MainMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TravelToScene_LeaderBoard();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TravelToScene_LangChangeClean();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TravelToScene_LangChange();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TravelToScene_InvitedRoomMatch();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TravelToScene_FadeToOrder();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TravelToScene_FadeToMember();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TravelToScene_Entry();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TravelToScene_EndScene();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TravelToScene_Ending();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TravelToScene_DJStation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TravelToScene_Credit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TravelToScene_ControllerSelect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TravelToScene_CasualMatch();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TravelToScene_BattleTravel();
    
    UFUNCTION(BlueprintCallable)
    void StartSceneTravelEffectIn();
    
    UFUNCTION(BlueprintCallable)
    void StageSelect_PostScene();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Section_VersusScene_Next(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable)
    bool Section_VersusScene_Bind();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Section_VersusScene_Back(int32 PlayerID, EUiOperation Operation);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Section_StoryScene_Next();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Section_StageSelect_Next(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable)
    bool Section_StageSelect_Bind();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Section_StageSelect_Back(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Section_OrderSelect_Next(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable)
    bool Section_OrderSelect_Bind();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Section_OrderSelect_Back(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Section_MemberSelect_Next(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable)
    bool Section_MemberSelect_Bind();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Section_MemberSelect_Back(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Section_Entry_Next(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable)
    bool Section_Entry_Bind();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Section_Entry_Back(int32 PlayerID, EUiOperation Operation);
    
public:
    UFUNCTION(BlueprintCallable)
    void OrderSelect_PostScene();
    
    UFUNCTION(BlueprintCallable)
    void OpenConnectionErrorSystemWindow();
    
    UFUNCTION(BlueprintCallable)
    void MemeberSelectPostScene();
    
    UFUNCTION(BlueprintCallable)
    bool IsCheckEnableOnlineMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GoToRoomMatchMainMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GoToRankMatchMainMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GoToOnlineTrainingMainMenu();
    
    UFUNCTION(BlueprintCallable)
    void GoToOnlineMainMenu(const ESceneName& InScene);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GoToCasualMatchMainMenu();
    
    UFUNCTION(BlueprintCallable)
    void FinishSceneTravelEffectOut();
    
    UFUNCTION(BlueprintCallable)
    void FinishSceneTravelEffectIn();
    
    UFUNCTION(BlueprintCallable)
    void CheckOnlineCompletedDispatcher(ECheckOnlineResult InResult);
    
    UFUNCTION(BlueprintCallable)
    void CheckEnableOnlineMode(ESceneName InScene);
    
    UFUNCTION(BlueprintCallable)
    void BattleTravel_PostScene();
    
};

