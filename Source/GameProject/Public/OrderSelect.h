#pragma once
#include "CoreMinimal.h"
#include "OperationalWidget.h"
#include "OnUserOrderConfirmDelegate.h"
#include "EPlayerID.h"
#include "OrderSelect.generated.h"

class USystemWindowBackTitle;
class UGuideItemArrayWidget;
class USelectTimer;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GAMEPROJECT_API UOrderSelect : public UOperationalWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UGuideItemArrayWidget* GuideItemArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USelectTimer* SelectTimer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUserOrderConfirm UserOrderConfirm;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USystemWindowBackTitle* SystemWindowBackTitle;
    
public:
    UOrderSelect();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateSideProgressInfo(int32 PlayerID, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool SetOrderIndex(int32 PlayerID, int32 OrderIndex);
    
    UFUNCTION(BlueprintCallable)
    void SelectInOrder(int32 PlayerID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RandomOrder(int32 PlayerID);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnlineSelectedOrder(EPlayerID PlayerID, int32 CharacterIndex, int32 OrderCountID);
    
    UFUNCTION(BlueprintCallable)
    void OnlineCancelOrder(EPlayerID PlayerID);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOrderIndexCount(int32 PlayerID);
    
    UFUNCTION(BlueprintCallable)
    void ConnectOnlineGameSubsystem();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ConfirmAnimation_SelectOrder(int32 PlayerID, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ConfirmAnimation_Button(int32 PlayerID, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CancelAnimation_SelectOrder(int32 PlayerID, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CancelAnimation_Button(int32 PlayerID, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void AllConfirmCheck(int32 PlayerID);
    
};

