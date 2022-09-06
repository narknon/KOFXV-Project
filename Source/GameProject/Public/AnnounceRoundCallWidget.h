#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "AnnounceRoundCallWidget.generated.h"

class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UAnnounceRoundCallWidget : public UBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_round;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_num;
    
    UAnnounceRoundCallWidget();
    UFUNCTION(BlueprintCallable)
    void FinishRoundCall();
    
};

