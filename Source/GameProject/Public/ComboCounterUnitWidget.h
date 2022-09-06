#pragma once
#include "CoreMinimal.h"
#include "BattleHudBase.h"
#include "ComboCounterUnitWidget.generated.h"

class UComboCounterWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UComboCounterUnitWidget : public UBattleHudBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UComboCounterWidget* WBP_90_combo_num_keta_3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UComboCounterWidget* WBP_90_combo_num_keta_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UComboCounterWidget* WBP_90_combo_num_keta_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UComboCounterWidget* WBP_90_combo_num_keta_Last_3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UComboCounterWidget* WBP_90_combo_num_keta_Last_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UComboCounterWidget* WBP_90_combo_num_keta_Last_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ComboNumAnimLevel;
    
public:
    UComboCounterUnitWidget();
};

