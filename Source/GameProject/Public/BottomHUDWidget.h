#pragma once
#include "CoreMinimal.h"
#include "BattleHudValueGetter.h"
#include "BottomHUDWidget.generated.h"

class UMaxModeWidget;
class UPowerGaugeWidget;
class UPowerGaugeNumSideWidget;
class UWidgetSwitcher;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UBottomHUDWidget : public UBattleHudValueGetter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPowerGaugeWidget* WBP_90_gauge_power_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPowerGaugeNumSideWidget* WBP_90_gauge_power_count_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMaxModeWidget* WBP_90_gauge_maxmode_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPowerGaugeWidget* WBP_90_gauge_power_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPowerGaugeNumSideWidget* WBP_90_gauge_power_count_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMaxModeWidget* WBP_90_gauge_maxmode_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* PlatformSwitcher;
    
public:
    UBottomHUDWidget();
};

