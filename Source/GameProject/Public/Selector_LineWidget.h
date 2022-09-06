#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget.h"
#include "Selector_LineWidget.generated.h"

class USelector_PanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API USelector_LineWidget : public UOperationalWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USelector_PanelWidget* WBP_95_01_charaSelector_panel_0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USelector_PanelWidget* WBP_95_01_charaSelector_panel_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USelector_PanelWidget* WBP_95_01_charaSelector_panel_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USelector_PanelWidget* WBP_95_01_charaSelector_panel_3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USelector_PanelWidget* WBP_95_01_charaSelector_panel_4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USelector_PanelWidget* WBP_95_01_charaSelector_panel_5;
    
public:
    USelector_LineWidget();
};

