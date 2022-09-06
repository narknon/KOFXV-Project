#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget_SinglerActionScene.h"
#include "EUiOperation.h"
#include "ELeaderboardWindowState.h"
#include "LeaderBoard_Layout.generated.h"

class UBaseWidget;
class ULeaderBoard_LeaderBoard;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API ULeaderBoard_Layout : public UOperationalWidget_SinglerActionScene {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsOpenedLeaderboardWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBaseWidget* WBP_99_wdw_report;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsOpenedLoadingWindow;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULeaderBoard_LeaderBoard* WBP_03_06_Leaderboard;
    
public:
    ULeaderBoard_Layout();
    UFUNCTION(BlueprintCallable)
    void SetState(ELeaderboardWindowState State);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenLoadingWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenLeaderBoardWindow();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CloseProfile(int32 PlayerID, EUiOperation Operation);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseLoadingWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseLeaderBoardWindow();
    
};

