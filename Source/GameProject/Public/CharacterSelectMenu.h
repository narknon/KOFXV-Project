#pragma once
#include "CoreMinimal.h"
#include "OptionItemWidgetA.h"
#include "EGameOptionBattleTime.h"
#include "EGameOptionBattleWinRule.h"
#include "EGameOptionAILevel.h"
#include "SystemWindowEvents.h"
#include "UnaryCursor.h"
#include "ECharacterSelectSubMenu.h"
#include "CharacterSelectMenu.generated.h"

class UUserWidget;
class UBaseWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UCharacterSelectMenu : public UOptionItemWidgetA {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBaseWidget* WBP_99_guide_message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUserWidget* WBP_ANIM_wdw_1164;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> MessagesText;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> OptionAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EGameOptionBattleWinRule, FText> RoundText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EGameOptionBattleTime, FText> TimeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EGameOptionAILevel, FText> CpuLevelText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECharacterSelectSubMenu, FUnaryCursor> SubOption;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSystemWindowEvents SaveCloseWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSystemWindowEvents SettingCheckSaveCloseWindow;
    
public:
    UCharacterSelectMenu();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateSubCursorText(ECharacterSelectSubMenu Option);
    
public:
    UFUNCTION(BlueprintCallable)
    void unselOn();
    
    UFUNCTION(BlueprintCallable)
    void unselOff();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UnavailableItemACheck();
    
private:
    UFUNCTION(BlueprintCallable)
    void SaveClose();
    
    UFUNCTION(BlueprintCallable)
    void DoNotSaveClose();
    
    UFUNCTION(BlueprintCallable)
    void DefaultSetting();
    
    UFUNCTION(BlueprintCallable)
    void CloseSystemWindows();
    
protected:
    UFUNCTION(BlueprintCallable)
    void AfterInitItemArray();
    
};

