#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "NumberWidget.generated.h"

class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UNumberWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_num;
    
public:
    UNumberWidget();
    UFUNCTION(BlueprintCallable)
    void SetNum(int32 Num);
    
};

