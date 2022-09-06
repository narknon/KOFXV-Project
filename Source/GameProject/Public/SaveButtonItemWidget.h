#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "SaveButtonItemWidget.generated.h"

class UWidgetSwitcher;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API USaveButtonItemWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_save;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_item;
    
public:
    USaveButtonItemWidget();
};

