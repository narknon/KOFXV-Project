#pragma once
#include "CoreMinimal.h"
#include "BattleHudBase.h"
#include "PowerGaugeNumSetWidget.generated.h"

class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UPowerGaugeNumSetWidget : public UBattleHudBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_num;
    
public:
    UPowerGaugeNumSetWidget();
};

