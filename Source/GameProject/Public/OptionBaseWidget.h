#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget_SinglerActionScene.h"
#include "OptionBaseWidget.generated.h"

class UOptionWidgetItem;
class USceneMgtGameInstance;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UOptionBaseWidget : public UOperationalWidget_SinglerActionScene {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UOptionWidgetItem*> ItemWidgetArray;
    
public:
    UOptionBaseWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void GotoHUDFadeSwitchProc();
    
    UFUNCTION(BlueprintCallable)
    void GotoHUDFadeEndProc();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GotoHUDFade(USceneMgtGameInstance* Instance);
    
};

