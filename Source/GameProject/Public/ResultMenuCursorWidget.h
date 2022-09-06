#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "ResultMenuCursorWidget.generated.h"

class UResultMenuCursorPlayerWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UResultMenuCursorWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UResultMenuCursorPlayerWidget* WBP_menu_cursor_p1_0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UResultMenuCursorPlayerWidget* WBP_menu_cursor_p2_0;
    
public:
    UResultMenuCursorWidget();
};

