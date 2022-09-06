#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "PauseMenuItemWidget.generated.h"

class UWidgetSwitcher;
class UPauseMenuItemConfirmButtonWidget;
class UPauseMenuItemConfirmSwitchWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UPauseMenuItemWidget : public UBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> MenuItemTextArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPauseMenuItemConfirmButtonWidget* WBP_99_itemA_Confirm_PauseMenu_button;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPauseMenuItemConfirmSwitchWidget* WBP_99_itemA_Confirm_PauseMenu;
    
    UPauseMenuItemWidget();
};

