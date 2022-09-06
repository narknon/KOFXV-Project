#pragma once
#include "CoreMinimal.h"
#include "EGameOptionBattleWinRule.h"
#include "BaseWidget.h"
#include "EGameMode.h"
#include "UObject/NoExportTypes.h"
#include "ReplayList_ItemWidget.generated.h"

class UReplayList_ItemUseBoxWidget;
class UDataTable;
class UReplayList_ItemDataGuide;
class UReplayData;
class UReplay_Layout;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UReplayList_ItemWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UReplayList_ItemUseBoxWidget* WBP_03_03_userBox_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UReplayList_ItemUseBoxWidget* WBP_03_03_userBox_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UReplayList_ItemDataGuide* WBP_03_03_dataGuide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PanelItemDataTable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReplayData* SaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UReplay_Layout* ParentLayoutWidget;
    
public:
    UReplayList_ItemWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetWinRule(EGameOptionBattleWinRule WinRule);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGameMode(EGameMode GameMode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDate(FDateTime Date);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AnimSel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AnimNml();
    
};

