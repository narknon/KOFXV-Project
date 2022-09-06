#pragma once
#include "CoreMinimal.h"
#include "BattleHudValueGetter.h"
#include "MiddleHUDWidget.generated.h"

class UMessageHUDManagerWidget;
class UComboCounterUnitWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UMiddleHUDWidget : public UBattleHudValueGetter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMessageHUDManagerWidget* P1Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMessageHUDManagerWidget* P2Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UComboCounterUnitWidget* WBP_90_combo_num_set_L_edge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UComboCounterUnitWidget* WBP_90_combo_num_set_R_edge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UComboCounterUnitWidget* WBP_90_combo_num_set_L_base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UComboCounterUnitWidget* WBP_90_combo_num_set_R_base;
    
public:
    UMiddleHUDWidget();
};

