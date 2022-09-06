#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "ButtonPreviewWidget.generated.h"

class UWidgetSwitcher;
class UImage;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UButtonPreviewWidget : public UBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fStateOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fStateOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UImage*> DirImageArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UWidgetSwitcher*> InputSwitcherArray;
    
public:
    UButtonPreviewWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateButtonPreviewKeyEvent();
    
};

