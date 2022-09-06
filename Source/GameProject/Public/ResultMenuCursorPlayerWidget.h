#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "ResultMenuCursorPlayerWidget.generated.h"

class UWidgetSwitcher;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UResultMenuCursorPlayerWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock_sel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock_seled;
    
public:
    UResultMenuCursorPlayerWidget();
};

