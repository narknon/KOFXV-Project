#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "PauseMenuItemConfirmButtonWidget.generated.h"

class UCommon_99_ItemA;
class UTextBlock;
class UCheckBoxWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UPauseMenuItemConfirmButtonWidget : public UBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCommon_99_ItemA* WBP_99_itemA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock_nml;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock_seled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock_unsel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock_sel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCheckBoxWidget* WBP_99_check_nml;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCheckBoxWidget* WBP_99_check_seled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCheckBoxWidget* WBP_99_check_unsel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCheckBoxWidget* WBP_99_check_sel;
    
    UPauseMenuItemConfirmButtonWidget();
};

