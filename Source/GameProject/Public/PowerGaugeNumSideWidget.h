#pragma once
#include "CoreMinimal.h"
#include "EPlayerID.h"
#include "BattleHudBase.h"
#include "PowerGaugeNumSideWidget.generated.h"

class UWidgetSwitcher;
class UPowerGaugeNumSetWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UPowerGaugeNumSideWidget : public UBattleHudBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_counter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPowerGaugeNumSetWidget* WBP_90_gauge_power_count_normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPowerGaugeNumSetWidget* WBP_90_gauge_power_count_max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerID Player;
    
public:
    UPowerGaugeNumSideWidget();
};

