#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "PauseMenuItemConfirmSwitchWidget.generated.h"

class UWidgetSwitcher;
class UCommon_99_ItemA;
class URichTextBlock;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UPauseMenuItemConfirmSwitchWidget : public UBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCommon_99_ItemA* WBP_99_itemA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock_list_258;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock_list_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock_list_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URichTextBlock* Rich_Btn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RestartIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MenuSwitchText;
    
    UPauseMenuItemConfirmSwitchWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRestarPosEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPauseMenuSwitchTextEvent();
    
};

