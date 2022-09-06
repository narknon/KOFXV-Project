#pragma once
#include "CoreMinimal.h"
#include "BattleHudBase.h"
#include "ComboCounterWidget.generated.h"

class UWidgetSwitcher;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UComboCounterWidget : public UBattleHudBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_num;
    
public:
    UComboCounterWidget();
};

