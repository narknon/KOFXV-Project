#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "SettingItemWindowWidget.generated.h"

class USettingMenuItemSwitchWidget;
class UPauseMenuItemConfirmButtonWidget;
class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API USettingItemWindowWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USettingMenuItemSwitchWidget* Item_0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USettingMenuItemSwitchWidget* Item_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPauseMenuItemConfirmButtonWidget* Item_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USettingMenuItemSwitchWidget* Item_3;
    
public:
    USettingItemWindowWidget();
};

