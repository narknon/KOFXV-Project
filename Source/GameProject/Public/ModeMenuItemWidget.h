#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "ModeMenuItemWidget.generated.h"

class UTextBlock;
class UMainMenuItemIconWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UModeMenuItemWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMainMenuItemIconWidget* item_icon;
    
public:
    UModeMenuItemWidget();
};

