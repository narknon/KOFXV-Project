#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget_SinglerActionScene.h"
#include "ECheckOnlineResult.h"
#include "EUiOperation.h"
#include "MainMenuWidget.generated.h"

class UModeMenuWidget;
class UTutorialLayoutWidget;
class UTextBlock;
class UOptionLayoutWidget;
class UMainMenuMainItemWidget;
class UGuideLayoutWidget;
class ULeaderBoard_Layout;
class UGalleryLayoutWidget;
class UTrialLayoutWidget;
class UBossChallengeLayoutWidget;
class UPlayGoWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UMainMenuWidget : public UOperationalWidget_SinglerActionScene {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_mainmenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_online;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UMainMenuMainItemWidget*> MainItemArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UModeMenuWidget* WBP_01_ModeMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UGuideLayoutWidget* WBP_99_guide_Layout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULeaderBoard_Layout* WBP_03_06_Leaderboard_Layout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UGalleryLayoutWidget* WBP_09_Gallery_Layout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOptionLayoutWidget* WBP_10_Option_Layout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTrialLayoutWidget* WBP_07_Mission_Trial_Layout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBossChallengeLayoutWidget* WBP_07_Mission_BossChallenge_Layout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTutorialLayoutWidget* WBP_06_Tutorial_Layout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPlayGoWidget* WBP_99_PlayGo_install;
    
public:
    UMainMenuWidget();
private:
    UFUNCTION(BlueprintCallable)
    void OnCompCheckOnlineReplay(ECheckOnlineResult Result);
    
    UFUNCTION(BlueprintCallable)
    void OnCompCheckOnlineLeaderBoard(ECheckOnlineResult IsOnlineModeStart);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitItemVisual(UMainMenuMainItemWidget* SelectVisualItem);
    
    UFUNCTION(BlueprintCallable)
    void InitChinaVer();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DecideBossChallengeLayout(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable)
    void CloseTutorialLayout(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable)
    void CloseTrialLayout(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable)
    void CloseSystemWindow();
    
    UFUNCTION(BlueprintCallable)
    void CloseReplayDescription();
    
    UFUNCTION(BlueprintCallable)
    void CloseReplay(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable)
    void CloseProfile(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable)
    void CloseOption(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable)
    void CloseLeaderBoard(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable)
    void CloseGallery(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable)
    void CloseButtonConfig(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable)
    void CloseBossChallengeLayout(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable)
    void CloseBattleSetting(int32 PlayerID, EUiOperation Operation);
    
};

