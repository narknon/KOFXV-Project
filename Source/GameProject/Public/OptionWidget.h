#pragma once
#include "CoreMinimal.h"
#include "OptionBaseWidget.h"
#include "EUiOperation.h"
#include "OptionWidget.generated.h"

class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPROJECT_API UOptionWidget : public UOptionBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUserWidget* WBP_10_Menu_Slot;
    
public:
    UOptionWidget();
    UFUNCTION(BlueprintCallable)
    void PlayerListWindowUnselOn();
    
    UFUNCTION(BlueprintCallable)
    void PlayerListWindowUnselOff();
    
protected:
    UFUNCTION(BlueprintCallable)
    UUserWidget* GetMenuSlot();
    
public:
    UFUNCTION(BlueprintCallable)
    void ExitGame();
    
    UFUNCTION(BlueprintCallable)
    void CloseSystemWindow(int32 PlayerID, EUiOperation Operation, bool isSave);
    
    UFUNCTION(BlueprintCallable)
    void CancelPlayerListWindow(int32 PlayerID, EUiOperation Operation);
    
};

