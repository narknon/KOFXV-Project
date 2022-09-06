#pragma once
#include "CoreMinimal.h"
#include "EReplayFilteringItems.h"
#include "OperationalWidget_SinglerActionScene.h"
#include "EReplayFilteringBattleMode.h"
#include "EReplayFilteringBattleRules.h"
#include "EReplayFilteringChara.h"
#include "ReplayFilteringMenuWidget.generated.h"

class UHaveGuideWindow;
class USettingMenuItemSwitchWidget;
class UReplay_Layout;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UReplayFilteringMenuWidget : public UOperationalWidget_SinglerActionScene {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHaveGuideWindow* WBP_99_wdwA_92_03;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USettingMenuItemSwitchWidget* WBP_99_itemA_switch_0;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UReplay_Layout* ParentWidget;
    
public:
    UReplayFilteringMenuWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCharaText(EReplayFilteringChara Chara, EReplayFilteringItems NowChara, const FText& CharaName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateBattleRulesText(EReplayFilteringBattleRules Rules);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateBattleModeText(EReplayFilteringBattleMode Mode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CursorInactive(EReplayFilteringItems Items);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CursorActive(EReplayFilteringItems Items);
    
};

