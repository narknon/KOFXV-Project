#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CppDebugMenuItemWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCppDebugMenuItemWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UCppDebugMenuItemWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCppDebugMenuFocus(bool bFocus);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DecideEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeValueEvent(float plus);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeNumberEvent(float plus);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeComboValueEvent(int32 plus);
    
};

