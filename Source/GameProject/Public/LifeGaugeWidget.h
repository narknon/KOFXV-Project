#pragma once
#include "CoreMinimal.h"
#include "BattleHudBase.h"
#include "LifeGaugeWidget.generated.h"

class UWidgetSwitcher;
class UProgressBar;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API ULifeGaugeWidget : public UBattleHudBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UProgressBar* gauge_life_01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UProgressBar* gauge_life_02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UProgressBar* gauge_life_03;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UProgressBar* gauge_damage;
    
public:
    ULifeGaugeWidget();
};

