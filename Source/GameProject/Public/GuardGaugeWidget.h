#pragma once
#include "CoreMinimal.h"
#include "BattleHudBase.h"
#include "GuardGaugeWidget.generated.h"

class UWidgetSwitcher;
class UProgressBar;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UGuardGaugeWidget : public UBattleHudBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UProgressBar* gauge_guard_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UProgressBar* gauge_guard_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PinchValue;
    
public:
    UGuardGaugeWidget();
};

