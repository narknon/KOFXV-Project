#pragma once
#include "CoreMinimal.h"
#include "BattleHudBase.h"
#include "UObject/NoExportTypes.h"
#include "PowerGaugeWidget.generated.h"

class UWidgetSwitcher;
class USizeBox;
class UProgressBar;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UPowerGaugeWidget : public UBattleHudBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* GaugeSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UProgressBar* gauge_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UProgressBar* gauge_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USizeBox* SizeBox_gauge_width;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor gauge_color_A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor gauge_color_B;
    
public:
    UPowerGaugeWidget();
};

