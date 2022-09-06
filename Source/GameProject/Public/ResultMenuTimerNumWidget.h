#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "ResultMenuTimerNumWidget.generated.h"

class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UResultMenuTimerNumWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_num;
    
public:
    UResultMenuTimerNumWidget();
    UFUNCTION(BlueprintCallable)
    void SetNum(int32 Num);
    
};

