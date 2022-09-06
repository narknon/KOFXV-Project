#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "MainMenuSubItemWidget.generated.h"

class UTextBlock;
class UMainMenuItemIconWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UMainMenuSubItemWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock_itemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBaseWidget* WBP_01_item_arrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMainMenuItemIconWidget* item_icon;
    
public:
    UMainMenuSubItemWidget();
};

