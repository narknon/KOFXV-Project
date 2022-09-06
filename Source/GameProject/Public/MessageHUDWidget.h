#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "MessageHUDWidget.generated.h"

class UWidgetSwitcher;
class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UMessageHUDWidget : public UBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlockNum;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_message;
    
public:
    UMessageHUDWidget();
};

