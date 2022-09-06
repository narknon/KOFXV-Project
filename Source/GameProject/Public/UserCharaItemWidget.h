#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "UserCharaItemWidget.generated.h"

class UWidgetSwitcher;
class UImage;
class UTextBlock;
class UUserCharaItemPartsWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UUserCharaItemWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* Chara;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock_name_nml;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock_name_sel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUserCharaItemPartsWidget* WBP_95_01_customize_costume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUserCharaItemPartsWidget* WBP_95_01_customize_color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_chara;
    
public:
    UUserCharaItemWidget();
};

