#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "ResultMenuTimerWidget.generated.h"

class UResultMenuTimerNumWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UResultMenuTimerWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UResultMenuTimerNumWidget*> NumWidgetArray;
    
public:
    UResultMenuTimerWidget();
};

