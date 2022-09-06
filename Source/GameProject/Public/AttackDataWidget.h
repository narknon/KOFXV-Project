#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "AttackDataWidget.generated.h"

class UImage;
class UWidgetSwitcher;
class UAttackDataNumberWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UAttackDataWidget : public UBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_situation_Attack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_situation_Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAttackDataNumberWidget* WBP_WBP_90_actionData_list_num_0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAttackDataNumberWidget* WBP_WBP_90_actionData_list_num_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAttackDataNumberWidget* WBP_WBP_90_actionData_list_num_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAttackDataNumberWidget* WBP_WBP_90_actionData_list_num_3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Advantage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Advantage_S_Max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Advantage_S_Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Even;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DisAdvantage_S_Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DisAdvantage_S_Max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DisAdvantage;
    
    UAttackDataWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateAttackDataText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAttackDataNumTexture(UImage* Image, int32 image_index);
    
};

