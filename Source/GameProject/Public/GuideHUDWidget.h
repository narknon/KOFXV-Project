#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "GuideHUDWidget.generated.h"

class UWidgetSwitcher;
class URichTextBlock;
class UGuideItemArrayWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UGuideHUDWidget : public UBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_replay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URichTextBlock* BP_TextBlock_guide_top;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URichTextBlock* BP_TextBlock_guide_bottom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UGuideItemArrayWidget* WBP_GuideItemArray;
    
    UGuideHUDWidget();
};

