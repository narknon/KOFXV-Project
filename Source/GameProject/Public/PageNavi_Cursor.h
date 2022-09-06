#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "PageNavi_Cursor.generated.h"

class UWidgetSwitcher;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UPageNavi_Cursor : public UBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_cursor_nml;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_cursor_sel;
    
    UPageNavi_Cursor();
};

