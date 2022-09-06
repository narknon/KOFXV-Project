#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "MainMenuMainItemWidget.generated.h"

class UTextBlock;
class UMainMenuItemIconWidget;
class UMainMenuSubItemWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UMainMenuMainItemWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock_itemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_guideMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMainMenuItemIconWidget* item_icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UMainMenuSubItemWidget*> SubItemArray;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBaseWidget* WBP_01_item_arrow;
    
    UMainMenuMainItemWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitItemVisual();
    
};

