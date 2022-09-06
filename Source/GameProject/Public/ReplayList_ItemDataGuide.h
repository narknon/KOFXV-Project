#pragma once
#include "CoreMinimal.h"
#include "BaseWidget.h"
#include "ReplayList_ItemDataGuide.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UReplayList_ItemDataGuide : public UBaseWidget {
    GENERATED_BODY()
public:
    UReplayList_ItemDataGuide();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AnimSel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AnimNoDataOn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AnimNoDataOff();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AnimNml();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AnimDataGuideLockOn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AnimDataGuideLockOff();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AnimDataGuideDLed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AnimDataGuideDL();
    
};

