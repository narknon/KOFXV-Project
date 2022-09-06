#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "SettingMenuItemRadio.generated.h"

class UWidgetSwitcher;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API USettingMenuItemRadio : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_radio;
    
public:
    USettingMenuItemRadio();
};

