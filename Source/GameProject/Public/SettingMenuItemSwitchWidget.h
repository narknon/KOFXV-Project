#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "EIteamStateA99.h"
#include "SettingMenuItemSwitchWidget.generated.h"

class UWidgetSwitcher;
class UCommon_99_ItemA;
class USettingMenuItemRadio;
class URichTextBlock;
class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API USettingMenuItemSwitchWidget : public UBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCommon_99_ItemA* WBP_99_itemA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<USettingMenuItemRadio*> Radios;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock_258;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* ItemText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URichTextBlock* Rich_Btn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USettingMenuItemRadio* WBP_99_radio_0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USettingMenuItemRadio* WBP_99_radio_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USettingMenuItemRadio* WBP_99_radio_2;
    
    USettingMenuItemSwitchWidget();
    UFUNCTION(BlueprintCallable)
    void SetSettingMenuItemText(FText txt);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetItemState(EIteamStateA99 State);
    
};

