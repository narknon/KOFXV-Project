#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "MainMenuItemIconWidget.generated.h"

class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UMainMenuItemIconWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_icon;
    
public:
    UMainMenuItemIconWidget();
};

