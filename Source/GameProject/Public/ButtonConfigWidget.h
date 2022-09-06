#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "EPlayerID.h"
#include "ButtonConfigWidget.generated.h"

class UScrollBox;
class UTitleWindowWidget;
class USaveButtonItemWidget;
class UButtonConfigTypeWidget;
class UButtonConfigItemWidget;
class UButtonPreviewWidget;
class UWidgetSwitcher;
class URichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UButtonConfigWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerID PlayerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTitleWindowWidget* WBP_99_wdwA_title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UButtonConfigTypeWidget* WBP_99_ButtonConfig_item_switch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USaveButtonItemWidget* WBP_item_preview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UButtonConfigItemWidget*> ConfigItemArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UButtonConfigItemWidget*> FunctionItemArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UScrollBox* BP_ScrollBox_A_C_77;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UButtonPreviewWidget* WBP_99_ButtonConfig_preview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_contents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URichTextBlock* BP_RichTextBlock_guide;
    
public:
    UButtonConfigWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WindowUnselOn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WindowUnselOff();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetConfigItemArray();
    
};

