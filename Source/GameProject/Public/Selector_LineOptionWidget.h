#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget.h"
#include "Selector_LineOptionWidget.generated.h"

class USelector_PanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API USelector_LineOptionWidget : public UOperationalWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USelector_PanelWidget* WBP_95_01_charaSelector_panel_random;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USelector_PanelWidget* WBP_95_01_charaSelector_panel_filter;
    
public:
    USelector_LineOptionWidget();
};

