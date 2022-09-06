#pragma once
#include "CoreMinimal.h"
#include "EUiOperation.h"
#include "Blueprint/UserWidget.h"
#include "InputBaseUserWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class INPUTSYSTEM_API UInputBaseUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UInputBaseUserWidget();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnKeyRepeating(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnKeyReleased(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnKeyPressing(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnKeyPressed(int32 PlayerID, EUiOperation Operation);
    
};

