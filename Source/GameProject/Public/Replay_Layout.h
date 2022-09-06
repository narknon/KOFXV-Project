#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget_SinglerActionScene.h"
#include "EActiveReplayWindow.h"
#include "ECheckOnlineResult.h"
#include "EUiOperation.h"
#include "Replay_Layout.generated.h"

class UReplayInfoWidget;
class UReplayListWidget;
class UReportWidget;
class UReplayFilteringMenuWidget;
class UReplayList_ItemWidget;
class USelectorWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UReplay_Layout : public UOperationalWidget_SinglerActionScene {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UReplayListWidget* WBP_03_03_ReplayList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UReplayInfoWidget* WBP_03_03_ReplayInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UReplayFilteringMenuWidget* WBP_03_03_FilteringMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USelectorWidget* WBP_95_01_selector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UReportWidget* WBP_99_wdw_report;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActiveReplayWindow NowWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UReplayList_ItemWidget* CurrentReplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DownloadText;
    
public:
    UReplay_Layout();
    UFUNCTION(BlueprintCallable)
    void StartReplayBattle();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCheckNetwork_Upload(ECheckOnlineResult Result);
    
public:
    UFUNCTION(BlueprintCallable)
    void CloseProfile(int32 PlayerID, EUiOperation Operation);
    
private:
    UFUNCTION(BlueprintCallable)
    void CheckNetwork_Upload();
    
public:
    UFUNCTION(BlueprintCallable)
    void CanselStartReplay();
    
};

