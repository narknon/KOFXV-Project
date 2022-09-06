#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "ResultCharaPanelWidget.generated.h"

class UWidgetSwitcher;
class UResultCharaWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UResultCharaPanelWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UResultCharaWidget*> CharaWidgetArray;
    
public:
    UResultCharaPanelWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddCharaWidget(bool single);
    
};

