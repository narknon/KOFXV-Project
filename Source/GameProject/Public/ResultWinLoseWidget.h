#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "ResultWinLoseWidget.generated.h"

class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UResultWinLoseWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_results;
    
public:
    UResultWinLoseWidget();
};

