#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget.h"
#include "Selector_PanelWidget.generated.h"

class UTextBlock;
class UImage;
class UWidgetSwitcher;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API USelector_PanelWidget : public UOperationalWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_item_chara;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_item_edge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* chara_nml;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* chara_sel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* BP_TextBlock_new;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* TextureIcon;
    
public:
    USelector_PanelWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AnimSelect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AnimNormal();
    
};

