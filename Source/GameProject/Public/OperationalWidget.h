#pragma once
#include "CoreMinimal.h"
#include "EUiOperation.h"
#include "BaseWidget.h"
#include "UserWidgetInput_Interface.h"
#include "OperationalWidgetStepDelegate.h"
#include "UnaryCursor.h"
#include "OperationalWidget.generated.h"

class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UOperationalWidget : public UBaseWidget, public IUserWidgetInput_Interface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UWidget*> OptionArray;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOperationalWidgetStep SectionNext;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOperationalWidgetStep SectionBack;
    
    UOperationalWidget();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateUnaryCursor(uint8 CursorIndex);
    
    UFUNCTION(BlueprintCallable)
    void PushCursorIndex(UPARAM(Ref) FUnaryCursor& In, uint8 bit, bool bLoop);
    
    UFUNCTION(BlueprintCallable)
    void PullCursorIndex(UPARAM(Ref) FUnaryCursor& In, uint8 bit, bool bLoop);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnKeyRepeating(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnKeyReleased(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnKeyPressing(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnKeyPressed(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MoveCursor_Grid(int32 PlayerID, EUiOperation Operation, bool bLoop);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MoveCursor(int32 PlayerID, EUiOperation Operation, uint8 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Confirm(int32 PlayerID, EUiOperation Operation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cancel(int32 PlayerID, EUiOperation Operation);
    
    
    // Fix for true pure virtual functions not being implemented
};

